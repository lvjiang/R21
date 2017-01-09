/*
 * Copyright (c) 2011-2014 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */
/**
 * @file htt_tx.c
 * @brief Implement transmit aspects of HTT.
 * @details
 *  This file contains three categories of HTT tx code:
 *  1.  An abstraction of the tx descriptor, to hide the
 *      differences between the HL vs. LL tx descriptor.
 *  2.  Functions for allocating and freeing HTT tx descriptors.
 *  3.  The function that accepts a tx frame from txrx and sends the
 *      tx frame to HTC.
 */
#include <osdep.h>          /* u_int32_t, offsetof, etc. */
#include <adf_os_types.h>   /* adf_os_dma_addr_t */
#include <adf_os_mem.h>     /* adf_os_mem_alloc_consistent,free_consistent */
#include <adf_nbuf.h>       /* adf_nbuf_t, etc. */

#include <htt.h>            /* htt_tx_msdu_desc_t */
#include <htc.h>            /* HTC_HDR_LENGTH */
#include <ol_cfg.h>         /* ol_cfg_netbuf_frags_max, etc. */
#include <ol_txrx_ctrl_api.h> /* ol_tx_mgmt_cb */
#include <ol_txrx_types.h>    /* OL_TXRX_MGMT_NUM_TYPES */
#include <ol_htt_tx_api.h>

#include <htt_internal.h>

/*--- setup / tear-down functions -------------------------------------------*/

int
htt_tx_attach(struct htt_pdev_t *pdev, int desc_pool_elems)
{
    int i, pool_size;
    u_int32_t **p;
    adf_os_dma_addr_t pool_paddr;

    if (pdev->cfg.is_high_latency) {
        pdev->tx_descs.size = sizeof(struct htt_host_tx_desc_t);
    } else {
        pdev->tx_descs.size = 
            /*
             * Start with the size of the base struct
             * that actually gets downloaded.
             */
            sizeof(struct htt_host_tx_desc_t)
            /*
             * Add the fragmentation descriptor elements.
             * Add the most that the OS may deliver, plus one more in
             * case the txrx code adds a prefix fragment (for TSO or
             * audio interworking SNAP header)
             */
            + (ol_cfg_netbuf_frags_max(pdev->ctrl_pdev)+1) * 8 // 2x u_int32_t
            + 4; /* u_int32_t fragmentation list terminator */
    }
    if (pdev->tx_descs.size < sizeof(u_int32_t *)) {
        pdev->tx_descs.size = sizeof(u_int32_t *);
    }
    /*
     * Make sure tx_descs.size is a multiple of 4-bytes.
     * It should be, but round up just to be sure.
     */
    pdev->tx_descs.size = (pdev->tx_descs.size + 3) & (~0x3);

    pdev->tx_descs.pool_elems = desc_pool_elems;
    pdev->tx_descs.alloc_cnt = 0;

    pool_size = pdev->tx_descs.pool_elems * pdev->tx_descs.size;

    pdev->tx_descs.pool_vaddr = adf_os_mem_alloc_consistent(
        pdev->osdev, pool_size, &pool_paddr,
        adf_os_get_dma_mem_context((&pdev->tx_descs), memctx));
    pdev->tx_descs.pool_paddr = pool_paddr;

    if (!pdev->tx_descs.pool_vaddr) {
        return 1; /* failure */
    }

    /* link tx descriptors into a freelist */
    pdev->tx_descs.freelist = (u_int32_t *) pdev->tx_descs.pool_vaddr;
    p = (u_int32_t **) pdev->tx_descs.freelist;
    for (i = 0; i < desc_pool_elems - 1; i++) {
        *p = (u_int32_t *) (((char *) p) + pdev->tx_descs.size);
        p = (u_int32_t **) *p;
    }
    *p = NULL;

    /* allocate Tx MGMT desc pool */
#ifdef MGMT_HTT_ENABLE
    htt_tx_mgmt_desc_pool_alloc(pdev, HTT_MAX_NUM_MGMT_DESCS);
#endif
    /*
     * Allocate Management Buffer Queue
     */
    adf_nbuf_queue_init(&pdev->mgmtbufQ);
    adf_os_spinlock_init(&pdev->mgmtbufLock);

    return 0; /* success */
}

void
htt_tx_detach(struct htt_pdev_t *pdev)
{
     adf_nbuf_t tx_mgmt_frm;
    adf_os_mem_free_consistent(
        pdev->osdev,
        pdev->tx_descs.pool_elems * pdev->tx_descs.size, /* pool_size */
        pdev->tx_descs.pool_vaddr,
        pdev->tx_descs.pool_paddr,
        adf_os_get_dma_mem_context((&pdev->tx_descs), memctx));

#ifdef MGMT_HTT_ENABLE
        /* Free tx mgmt desc pool */
	htt_tx_mgmt_desc_pool_free(pdev);
#endif
        /*
     * Here we free the management buffer Q for those
     * frames that have not received the completions
     */
    adf_os_spin_lock_bh(&pdev->mgmtbufLock);
    while(!adf_nbuf_is_queue_empty(&pdev->mgmtbufQ)) {
        tx_mgmt_frm = adf_nbuf_queue_remove(&pdev->mgmtbufQ);
        if(tx_mgmt_frm)
            adf_nbuf_free(tx_mgmt_frm);
    }
    adf_os_spin_unlock_bh(&pdev->mgmtbufLock); 
}

/*--- descriptor allocation functions ---------------------------------------*/

#define HTT_MSG_BUF_SIZE(msg_bytes) \
   ((msg_bytes) + HTC_HEADER_LEN + HTC_HDR_ALIGNMENT_PADDING)


void
htt_tx_mgmt_desc_pool_alloc(struct htt_pdev_t *pdev, u_int32_t num_elems)
{
    struct htt_tx_mgmt_desc_buf *msg_pool;
    int i = 0;

    msg_pool = (struct htt_tx_mgmt_desc_buf *)adf_os_mem_alloc(pdev->osdev,
                                    (num_elems *
                                     sizeof(struct htt_tx_mgmt_desc_buf)));
    if (msg_pool == NULL)
    {
        return;
    }
    adf_os_mem_zero(msg_pool, (num_elems *
                                    sizeof(struct htt_tx_mgmt_desc_buf)));
    pdev->tx_mgmt_desc_ctxt.freelist = msg_pool;

    for(i = 0; i < num_elems; i++) {
        msg_pool[i].msg_buf = adf_nbuf_alloc(pdev->osdev,
                                             HTT_MSG_BUF_SIZE(sizeof
                                             (struct htt_mgmt_tx_desc_t)),
                                             /* reserve room for HTC header */
                                             HTC_HEADER_LEN +
                                             HTC_HDR_ALIGNMENT_PADDING,
                                             4,
                                             TRUE);
        adf_nbuf_put_tail(msg_pool[i].msg_buf,
                          sizeof(struct htt_mgmt_tx_desc_t));
        msg_pool[i].desc_id = i;

        if (i < (num_elems - 1)) {
            msg_pool[i].next = &msg_pool[i + 1];
        } else {
            msg_pool[i].next = NULL;
        }
    }

    pdev->tx_mgmt_desc_ctxt.pool = msg_pool;
    pdev->tx_mgmt_desc_ctxt.pending_cnt = 0;
}


A_UINT32
htt_tx_mgmt_pending_frames_cnt(struct htt_pdev_t *pdev)
{
    return pdev->tx_mgmt_desc_ctxt.pending_cnt;
}

adf_nbuf_t
htt_tx_mgmt_desc_alloc(struct htt_pdev_t *pdev, u_int32_t *desc_id,
                       adf_nbuf_t mgmt_frm)
{
    adf_nbuf_t msg_buf;

    /* acquire the lock */
    adf_os_spin_lock_bh(&pdev->htt_tx_mutex);

    if (pdev->tx_mgmt_desc_ctxt.freelist) {

        pdev->tx_mgmt_desc_ctxt.freelist->is_inuse = TRUE;
        pdev->tx_mgmt_desc_ctxt.freelist->mgmt_frm = mgmt_frm;
        pdev->tx_mgmt_desc_ctxt.pending_cnt++;
        msg_buf = pdev->tx_mgmt_desc_ctxt.freelist->msg_buf;
        *desc_id = pdev->tx_mgmt_desc_ctxt.freelist->desc_id;
        pdev->tx_mgmt_desc_ctxt.freelist =
        pdev->tx_mgmt_desc_ctxt.freelist->next;

        adf_os_spin_unlock_bh(&pdev->htt_tx_mutex);
        return msg_buf;
    }

    /* We do not have any buffers available for now */
    adf_os_spin_unlock_bh(&pdev->htt_tx_mutex);
#if 0 /* after implementing dynamic htt queue on host we dont need
         callback for completion of packet in error case */
    if (cb) {
        printk("%s Failed to allocate desc for mgmt frame\n",
	               __FUNCTION__);
        cb(ctxt, mgmt_frm, 1);
    }
#endif
    return NULL;
}

void
htt_tx_mgmt_desc_free(struct htt_pdev_t *pdev, u_int8_t desc_id, u_int32_t status)
{
    ol_txrx_mgmt_tx_cb  cb = NULL;
    adf_nbuf_t    mgmt_frm;
    u_int16_t mgmt_type = (OL_TXRX_MGMT_NUM_TYPES-1);
    void *ctxt = pdev->txrx_pdev->tx_mgmt.callbacks[mgmt_type].ctxt;

    cb = pdev->txrx_pdev->tx_mgmt.callbacks[mgmt_type].cb;

    ASSERT(desc_id < HTT_MAX_NUM_MGMT_DESCS);

    /* acquire lock here */
    adf_os_spin_lock_bh(&pdev->htt_tx_mutex);
    if(pdev->tx_mgmt_desc_ctxt.pool[desc_id].mgmt_frm == NULL){
        adf_os_spin_unlock_bh(&pdev->htt_tx_mutex);
        return;
    }
    pdev->tx_mgmt_desc_ctxt.pool[desc_id].is_inuse = FALSE;
    mgmt_frm = pdev->tx_mgmt_desc_ctxt.pool[desc_id].mgmt_frm;
    if(!mgmt_frm){
        adf_os_spin_unlock_bh(&pdev->htt_tx_mutex);
        return;
    }
    /* free the management frame */
     pdev->tx_mgmt_desc_ctxt.pending_cnt--;
    pdev->tx_mgmt_desc_ctxt.pool[desc_id].mgmt_frm = NULL;
    /* pull adf here by HTT_HTC_HDR_SIZE bytes */
    adf_nbuf_pull_head(pdev->tx_mgmt_desc_ctxt.pool[desc_id].msg_buf,
                       (HTC_HEADER_LEN + HTC_HDR_ALIGNMENT_PADDING));

    adf_nbuf_unmap_single( pdev->osdev, pdev->tx_mgmt_desc_ctxt.pool[desc_id].msg_buf , ADF_OS_DMA_TO_DEVICE);

    pdev->tx_mgmt_desc_ctxt.pool[desc_id].next =
                                 pdev->tx_mgmt_desc_ctxt.freelist;
    pdev->tx_mgmt_desc_ctxt.freelist = &pdev->tx_mgmt_desc_ctxt.pool[desc_id];
    adf_os_spin_unlock_bh(&pdev->htt_tx_mutex);
     /* call back function to freeup management frame */
    if (cb) {
        cb(ctxt, mgmt_frm, status);
    }
}

void
htt_tx_mgmt_desc_pool_free(struct htt_pdev_t *pdev)
{
    u_int16_t i = 0;
    u_int16_t mgmt_type = (OL_TXRX_MGMT_NUM_TYPES-1);
    void *ctxt = pdev->txrx_pdev->tx_mgmt.callbacks[mgmt_type].ctxt;
    struct htt_tx_mgmt_desc_buf *msg_pool;
    ol_txrx_mgmt_tx_cb  cb = NULL;
#define TX_MGMT_DONE_WAIT_TIMEOUT 100
    for (i = 0; i < TX_MGMT_DONE_WAIT_TIMEOUT; i++) {
        if (!pdev->tx_mgmt_desc_ctxt.pending_cnt) {
            break;
        }
        OS_DELAY(10);
    }
    msg_pool = pdev->tx_mgmt_desc_ctxt.pool ;
    cb = pdev->txrx_pdev->tx_mgmt.callbacks[mgmt_type].cb;
    for(i = 0; i < HTT_MAX_NUM_MGMT_DESCS ; i++){ /*free ing the descriptors */
        if (msg_pool[i].is_inuse) {
            if (msg_pool[i].mgmt_frm && cb) {
                cb(ctxt, msg_pool[i].mgmt_frm, IEEE80211_TX_ERROR);/*call back for mgmt frames*/
            }
        adf_nbuf_unmap_single(pdev->osdev, msg_pool[i].msg_buf, ADF_OS_DMA_TO_DEVICE);/*unmapping the mapped message_buffer*/
        }
     adf_nbuf_free(msg_pool[i].msg_buf);/*free ing the message_buffer */
    }
    adf_os_mem_free(pdev->tx_mgmt_desc_ctxt.pool);
    pdev->tx_mgmt_desc_ctxt.freelist = NULL;
}

void *
htt_tx_desc_alloc(htt_pdev_handle pdev)
{
    struct htt_host_tx_desc_t *htt_host_tx_desc; /* includes HTC hdr space */
    struct htt_tx_msdu_desc_t *htt_tx_desc;      /* doesn't include HTC hdr */

    htt_host_tx_desc = (struct htt_host_tx_desc_t *) pdev->tx_descs.freelist;
    if (! htt_host_tx_desc) {
        return NULL; /* pool is exhausted */
    }
    htt_tx_desc = &htt_host_tx_desc->align32.tx_desc;

    if (pdev->tx_descs.freelist) {
        pdev->tx_descs.freelist = *((u_int32_t **) pdev->tx_descs.freelist);
        pdev->tx_descs.alloc_cnt++;
    }
    /*
     * For LL, set up the fragmentation descriptor address.
     * Currently, this HTT tx desc allocation is performed once up front.
     * If this is changed to have the allocation done during tx, then it
     * would be helpful to have separate htt_tx_desc_alloc functions for
     * HL vs. LL, to remove the below conditional branch.
     */
    if (!pdev->cfg.is_high_latency) {
        u_int32_t *fragmentation_descr_field_ptr;

        fragmentation_descr_field_ptr = (u_int32_t *)
            ((u_int32_t *) htt_tx_desc) +
            HTT_TX_DESC_FRAGS_DESC_PADDR_OFFSET_DWORD;
        /*
         * The fragmentation descriptor is allocated from consistent mem.
         * Therefore, we can use the address directly rather than having
         * to map it from a virtual/CPU address to a physical/bus address.
         */
        *fragmentation_descr_field_ptr =
            HTT_TX_DESC_PADDR(pdev, htt_tx_desc) + HTT_TX_DESC_LEN;
    }
    /*
     * The allocated tx descriptor space includes headroom for a
     * HTC frame header.  Hide this headroom, so that we don't have
     * to jump past the headroom each time we program a field within
     * the tx desc, but only once when we download the tx desc (and
     * the headroom) to the target via HTC.
     * Skip past the headroom and return the address of the HTT tx desc.
     */
    return (void *) htt_tx_desc;
}

void
htt_tx_desc_free(htt_pdev_handle pdev, void *tx_desc)
{
    char *htt_host_tx_desc = tx_desc;
    /* rewind over the HTC frame header space */
    htt_host_tx_desc -= offsetof(struct htt_host_tx_desc_t, align32.tx_desc);
    *((u_int32_t **) htt_host_tx_desc) = pdev->tx_descs.freelist;
    pdev->tx_descs.freelist = (u_int32_t *) htt_host_tx_desc;
    pdev->tx_descs.alloc_cnt--;
}

/*--- descriptor field access methods ---------------------------------------*/

/* PUT THESE AS INLINE IN ol_htt_tx_api.h */

void
htt_tx_desc_flag_postponed(htt_pdev_handle pdev, void *desc)
{
}

void
htt_tx_desc_flag_batch_more(htt_pdev_handle pdev, void *desc)
{
}

/*--- tx send function ------------------------------------------------------*/

#if ATH_11AC_TXCOMPACT


/* Scheduling the Queued packets in HTT which could not be sent out because of No CE desc*/
void 
htt_tx_sched(htt_pdev_handle pdev)
{
    adf_nbuf_t msdu;
    int download_len = pdev->download_len;
    int packet_len;

    HTT_TX_NBUF_QUEUE_REMOVE(pdev, msdu);
    while (msdu != NULL){   
        /* packet length includes HTT tx desc frag added above */
        packet_len = adf_nbuf_len(msdu);
        if (packet_len < download_len) {
            /*
            * This case of packet length being less than the nominal download
            * length can happen for a couple reasons:
            * In HL, the nominal download length is a large artificial value.
            * In LL, the frame may not have the optional header fields
            * accounted for in the nominal download size (LLC/SNAP header,
            * IPv4 or IPv6 header).
             */
            download_len = packet_len;
        }
        if(HTCSendDataPkt(pdev->htc_pdev, msdu, pdev->htc_endpoint, download_len)){
            HTT_TX_NBUF_QUEUE_INSERT_HEAD(pdev, msdu);
            return;
        }
        HTT_TX_NBUF_QUEUE_REMOVE(pdev, msdu);
    }
}


int
htt_tx_send_std(
        htt_pdev_handle pdev,
        void *desc,
        adf_nbuf_t msdu,
        u_int16_t msdu_id)
{

    int download_len = pdev->download_len;

    struct htt_host_tx_desc_t *htt_host_tx_desc;
    int packet_len;

    htt_host_tx_desc = (struct htt_host_tx_desc_t *)
        (((char *) desc) -
         offsetof(struct htt_host_tx_desc_t, align32.tx_desc));

    /*
    * Specify that the data provided by the OS is a bytestream,
    * and thus should not be byte-swapped during the HIF download
    * even if the host is big-endian.
    * There could be extra fragments added before the OS's fragments,
    * e.g. for TSO, so it's incorrect to clear the frag 0 wordstream flag.
    * Instead, clear the wordstream flag for the final fragment, which
    * is certain to be (one of the) fragment(s) provided by the OS.
    * Setting the flag for this final fragment suffices for specifying
    * all fragments provided by the OS rather than added by the driver.
     */
    adf_nbuf_set_frag_is_wordstream(msdu, adf_nbuf_get_num_frags(msdu) - 1, 0);
    adf_nbuf_frag_push_head(
            msdu,
            sizeof(struct htt_host_tx_desc_t),
            (char *) htt_host_tx_desc, /* virtual addr */
            (u_int32_t) HTT_TX_DESC_PADDR(pdev, htt_host_tx_desc),/*phy addr LSBs*/
            0 /* phys addr MSBs - n/a */);

    /*
    * Indicate that the HTT header (and HTC header) is a meta-data
    * "wordstream", i.e. series of u_int32_t, rather than a data
    * bytestream.
    * This allows the HIF download to byteswap the HTT + HTC headers if
    * the host is big-endian, to convert to the target's little-endian
    * format.
     */
    adf_nbuf_set_frag_is_wordstream(msdu, 0, 1);

    /* packet length includes HTT tx desc frag added above */
    packet_len = adf_nbuf_len(msdu);
    if (packet_len < download_len) {
        /*
        * This case of packet length being less than the nominal download
        * length can happen for a couple reasons:
        * In HL, the nominal download length is a large artificial value.
        * In LL, the frame may not have the optional header fields
        * accounted for in the nominal download size (LLC/SNAP header,
        * IPv4 or IPv6 header).
         */
        download_len = packet_len;
    }
    if (adf_nbuf_queue_len(&pdev->txnbufq) > 0){
        HTT_TX_NBUF_QUEUE_ADD(pdev, msdu);
        htt_tx_sched(pdev);
        return 0;
    }
    if (HTCSendDataPkt(pdev->htc_pdev, msdu, pdev->htc_endpoint, download_len)){
        HTT_TX_NBUF_QUEUE_ADD(pdev, msdu);
    }

    return 0; /* success */

}
#if QCA_OL_TX_CACHEDHDR

#if  BIG_ENDIAN_HOST
#define htt_h2t_header_swap(_buff, _bytes) \
    do { \
        int i;\
        int *word = (int *) _buff;\
        for (i = 0; i < _bytes/4; i++){\
            word[i] =  adf_os_cpu_to_le32(word[i]);\
        }\
    }while(0);

#else
#define htt_h2t_header_swap(_buff, _bytes)
#endif
void
htt_ff_cache_init(
        htt_pdev_handle pdev,
        enum htt_pkt_type pkt_type)
{

    HTC_FRAME_HDR * pHtcHdr;

    unsigned char * buff = pdev->htt_hdr_cache;

    adf_os_mem_zero(buff, HTC_HTT_TRANSFER_HDRSIZE);

    pHtcHdr = (HTC_FRAME_HDR *) buff;
    HTC_WRITE32(pHtcHdr, SM( pdev->htc_endpoint, HTC_FRAME_HDR_ENDPOINTID));

    htt_tx_desc_init(
            pdev, (buff + HTC_HEADER_LEN),
            0,
            0,
            0,
            pkt_type,
            ADF_NBUF_TX_CKSUM_NONE,
            ADF_NBUF_TX_EXT_TID_INVALID);

    htt_h2t_header_swap(buff, HTC_HTT_TRANSFER_HDRSIZE);
}
void htt_hdrcache_update(
        htt_pdev_handle pdev,
        int *hdrcache)
{
	adf_os_mem_copy(hdrcache, pdev->htt_hdr_cache, ((HTC_HTT_TRANSFER_HDRSIZE + 3)/4)*4);
}

void
htt_hdrcache_update_pkttype(
        int *hdrcache,
        enum htt_pkt_type pkt_type)
{
    htt_ffcache_update_pkttype(hdrcache, pkt_type);
}

void
htt_hdrcache_update_pktsubtype(
        int *hdrcache,
        u_int8_t pkt_subtype)
{
    htt_ffcache_update_pktsubtype(hdrcache, pkt_subtype);
}

#endif

#else  /*ATH_11AC_TXCOMPACT*/

static inline int
htt_tx_send_base(
    htt_pdev_handle pdev,
    void *desc,
    adf_nbuf_t msdu,
    u_int16_t msdu_id,
    int download_len)
{
    struct htt_host_tx_desc_t *htt_host_tx_desc;
    //struct htt_tx_msdu_desc_t *htt_tx_desc = desc;
    struct htt_htc_pkt *pkt;
    int packet_len;

     htt_host_tx_desc = (struct htt_host_tx_desc_t *)
         (((char *) desc) -
         offsetof(struct htt_host_tx_desc_t, align32.tx_desc));

    /*
     * alternative -
     * Have the caller (ol_tx) provide an empty HTC_PACKET struct
     * (allocated as part of the ol_tx_desc).
     */
    pkt = htt_htc_pkt_alloc(pdev);
    if (!pkt) {
        return 1; /* failure */
    }

    pkt->msdu_id = msdu_id;
    pkt->pdev_ctxt = pdev->txrx_pdev;

    /*
     * Specify that the data provided by the OS is a bytestream,
     * and thus should not be byte-swapped during the HIF download
     * even if the host is big-endian.
     * There could be extra fragments added before the OS's fragments,
     * e.g. for TSO, so it's incorrect to clear the frag 0 wordstream flag.
     * Instead, clear the wordstream flag for the final fragment, which
     * is certain to be (one of the) fragment(s) provided by the OS.
     * Setting the flag for this final fragment suffices for specifying
     * all fragments provided by the OS rather than added by the driver.
     */
    adf_nbuf_set_frag_is_wordstream(msdu, adf_nbuf_get_num_frags(msdu) - 1, 0);
    adf_nbuf_frag_push_head(
        msdu,
        sizeof(struct htt_host_tx_desc_t),
        (char *) htt_host_tx_desc, /* virtual addr */
        (u_int32_t) HTT_TX_DESC_PADDR(pdev, htt_host_tx_desc),/*phy addr LSBs*/
        0 /* phys addr MSBs - n/a */);
    /*
     * Indicate that the HTT header (and HTC header) is a meta-data
     * "wordstream", i.e. series of u_int32_t, rather than a data
     * bytestream.
     * This allows the HIF download to byteswap the HTT + HTC headers if
     * the host is big-endian, to convert to the target's little-endian
     * format.
     */
    adf_nbuf_set_frag_is_wordstream(msdu, 0, 1);

    /* packet length includes HTT tx desc frag added above */
    packet_len = adf_nbuf_len(msdu);
    if (packet_len < download_len) {
        /*
         * This case of packet length being less than the nominal download
         * length can happen for a couple reasons:
         * In HL, the nominal download length is a large artificial value.
         * In LL, the frame may not have the optional header fields
         * accounted for in the nominal download size (LLC/SNAP header,
         * IPv4 or IPv6 header).
         */
        download_len = packet_len;
    }

    SET_HTC_PACKET_INFO_TX(
        &pkt->htc_pkt,
        pdev->tx_send_complete_part2,
        (unsigned char *) htt_host_tx_desc,
        download_len - HTC_HDR_LENGTH,
        pdev->htc_endpoint,
        1); /* tag - not relevant here */

    SET_HTC_PACKET_NET_BUF_CONTEXT(&pkt->htc_pkt, msdu);

    HTCSendDataPkt(pdev->htc_pdev, &pkt->htc_pkt);

    return 0; /* success */
}

int
htt_tx_send_std(
    htt_pdev_handle pdev,
    void *desc,
    adf_nbuf_t msdu,
    u_int16_t msdu_id)
{
    return htt_tx_send_base(pdev, desc, msdu, msdu_id, pdev->download_len);
}

int
htt_tx_send_nonstd(
    htt_pdev_handle pdev,
    void *desc, adf_nbuf_t msdu,
    u_int16_t msdu_id,
    enum htt_pkt_type pkt_type)
{
    int download_len;

    download_len =
        sizeof(struct htt_host_tx_desc_t) +
        HTT_TX_HDR_SIZE_OUTER_HDR_MAX + /* worst case */
        HTT_TX_HDR_SIZE_802_1Q +
        HTT_TX_HDR_SIZE_LLC_SNAP +
        ol_cfg_tx_download_size(pdev->ctrl_pdev);
    return htt_tx_send_base(pdev, desc, msdu, msdu_id, download_len);
}

#endif /*ATH_11AC_TXCOMPACT*/
#ifdef HTT_DBG
void
htt_tx_desc_display(void *tx_desc)
{
    struct htt_tx_msdu_desc_t *htt_tx_desc;

    htt_tx_desc = (struct htt_tx_msdu_desc_t *) tx_desc;    

    /* only works for little-endian */
    adf_os_print("HTT tx desc (@ %p):\n", htt_tx_desc);
    adf_os_print("  msg type = %d\n", htt_tx_desc->msg_type);
    adf_os_print("  pkt subtype = %d\n", htt_tx_desc->pkt_subtype);
    adf_os_print("  pkt type = %d\n", htt_tx_desc->pkt_type);
    adf_os_print("  vdev ID = %d\n", htt_tx_desc->vdev_id);
    adf_os_print("  ext TID = %d\n", htt_tx_desc->ext_tid);
    adf_os_print("  postponed = %d\n", htt_tx_desc->postponed);
    adf_os_print("  batch more = %d\n", htt_tx_desc->more_in_batch);
    adf_os_print("  length = %d\n", htt_tx_desc->len);
    adf_os_print("  id = %d\n", htt_tx_desc->id);
    adf_os_print("  frag desc addr = %#x\n", htt_tx_desc->frags_desc_ptr);
    if (htt_tx_desc->frags_desc_ptr) {
        int frag = 0;
        u_int32_t *base;
        u_int32_t addr;
        u_int32_t len;
        do {
            base = ((u_int32_t *) htt_tx_desc->frags_desc_ptr) + (frag * 2);
            addr = *base;
            len = *(base + 1);
            if (addr) {
                adf_os_print(
                    "    frag %d: addr = %#x, len = %d\n", frag, addr, len);
            }
            frag++;
        } while (addr);
    }
}
#endif
