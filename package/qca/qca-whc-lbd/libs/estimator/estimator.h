// vim: set et sw=4 sts=4 cindent:
/*
 * @File: estimator.h
 *
 * @Abstract: Public interface for the rate estimator.
 *
 * @Notes:
 *
 * @@-COPYRIGHT-START-@@
 *
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 *
 * @@-COPYRIGHT-END-@@
 */

#ifndef estimator__h
#define estimator__h

#include "lbd.h"  // for LBD_STATUS and other type defs
#include "stadb.h"

#if defined(__cplusplus)
extern "C" {
#endif

/**
 * @brief Events generated by this module to signal completion of the
 *        estimation logic.
 */
typedef enum estimator_event_e {
    /// All estimates are available for a single STA are complete.
    estimator_event_staDataMetricsComplete,

    /// All estimates for airtime of STAs on a given channel are complete.
    estimator_event_perSTAAirtimeComplete,

    estimator_event_maxnum
} estimator_event_e;

/**
 * @brief The format of the estimator_event_staDataMetricsComplete event.
 */
typedef struct estimator_staDataMetricsCompleteEvent_t {
    /// Address of the STA for which capacity and airtime estimates are
    /// complete.
    struct ether_addr addr;

    /// Whether the measurement of STA data metrics succeeded or not.
    LBD_STATUS result;
} estimator_staDataMetricsCompleteEvent_t;

/**
 * @brief The format of the estimator_event_perSTAAirtimeComplete event.
 */
typedef struct estimator_perSTAAirtimeCompleteEvent_t {
    /// The channel on which the estimate is now complete.
    lbd_channelId_t channelId;

    /// The number of STAs for which an airtime was estimated.
    size_t numSTAsEstimated;
} estimator_perSTAAirtimeCompleteEvent_t;

/**
 * @brief Function callback type that other modules can register to be
 *        informed when data metrics can be measured again for a given entry.
 *
 * The callback occurs after the entry has been updated.
 *
 * @param [in] handle  the entry that was updated
 * @param [in] cookie  the value provided by the caller when the observer
 *                     callback function was registered
 */
typedef void (*estimator_staDataMetricsAllowedObserverCB)(
        stadbEntry_handle_t handle, void *cookie);

/**
 * @brief Initialize the estimator module.
 *
 * @return LBD_OK on success; otherwise LBD_NOK
 */
LBD_STATUS estimator_init(void);

/**
 * @brief Deinitialize the station monitor module
 *
 * @return LBD_OK on success; otherwise LBD_NOK
 */
LBD_STATUS estimator_fini(void);

/**
 * @brief Take the serving channel uplink RSSI and estimate the non-serving
 *        channels if necessary.
 *
 * The serving channel RSSI is assumed to be valid and recent. The uplink
 * RSSI will only be updated if it is not already valid based on probe
 * request measurements.
 *
 * @param [in] handle  the entry to update
 *
 * @return LBD_OK on success; otherwise LBD_NOK
 */
LBD_STATUS estimator_estimateNonServingUplinkRSSI(stadbEntry_handle_t handle);

/**
 * @brief Compute capacity and airtime information for the STA on both the
 *        serving and non-serving channels.
 *
 * This will result in the entry's serving channel full capacity, last data rate
 * and airtime information being updated. On the non-serving channel, an
 * estimated capacity and airtime will be stored. Once both of these are
 * complete, a estimator_event_staDataMetricsComplete will be generated.
 *
 * @param [in] handle  the handle of the STA for which to perform the estimate
 *
 * @return LBD_OK on success; otherwise LBD_NOK
 */
LBD_STATUS estimator_estimateSTADataMetrics(stadbEntry_handle_t handle);

/**
 * @brief Estimate the airtime of each STA active on the given channel that
 *        is a candidate for active steering.
 *
 * This will result in each entry's full capacity, last data rate, and airtime
 * information being updated. Once this is complete, an
 * estimator_event_perSTAAirtimeComplete event will be generated.
 *
 * @param [in] channelId  the channel on which to do the estimates
 *
 * @return LBD_OK on success; otherwise LBD_NOK
 */
LBD_STATUS estimator_estimatePerSTAAirtimeOnChannel(lbd_channelId_t channelId);

/**
 * @brief Register a function to get called back when an entry is now
 *        eligible again for an estimate of its data metrics.
 *
 * In other words, when the callback occurs,
 * estimator_estimateSTADataMetrics() is expected to succeed.
 *
 * @param [in] callback  the callback function to invoke
 * @param [in] cookie  the parameter to pass to the callback function
 *
 * @return LBD_OK on success; otherwise LBD_NOK
 */
LBD_STATUS estimator_registerSTADataMetricsAllowedObserver(
        estimator_staDataMetricsAllowedObserverCB callback, void *cookie);

/**
 * @brief Unregister the observer callback function.
 *
 * @param [in] callback  the callback function to unregister
 * @param [in] cookie  the parameter for the callback provided when
 *                     registering
 *
 * @return LBD_OK on success; otherwise LBD_NOK
 */
LBD_STATUS estimator_unregisterSTADataMetricsAllowedObserver(
        estimator_staDataMetricsAllowedObserverCB callback, void *cookie);

// ====================================================================
// Constants needed by test cases
// ====================================================================

// These need not be exposed but it is useful to do so for unit tests to
// avoid duplicating the strings.

#define ESTIMATOR_AGE_LIMIT_KEY                    "AgeLimit"
#define ESTIMATOR_RSSI_DIFF_EST_W5_FROM_W2_KEY     "RSSIDiff_EstW5FromW2"
#define ESTIMATOR_RSSI_DIFF_EST_W2_FROM_W5_KEY     "RSSIDiff_EstW2FromW5"
#define ESTIMATOR_PROBE_COUNT_THRESHOLD_KEY        "ProbeCountThreshold"
#define ESTIMATOR_STATS_SAMPLE_INTERVAL_KEY        "StatsSampleInterval"
#define ESTIMATOR_MAX_11K_RESPONSE_TIME_KEY        "Max11kResponseTime"
#define ESTIMATOR_11K_PROHIBIT_TIME_KEY            "11kProhibitTime"
#define ESTIMATOR_PHY_RATE_SCALING_FOR_AIRTIME_KEY "PhyRateScalingForAirtime"
#define ESTIMATOR_ENABLE_CONTINUOUS_THROUGHPUT_KEY "EnableContinuousThroughput"

#if defined(LBD_DBG_MENU) && defined(GMOCK_UNIT_TESTS)
struct cmdContext;

/**
 * @brief Request the status to be dumped for all STAs.
 *
 * @param [in] context  the output context
 * @param [in] cmd  the command in the debug CLI
 */
void estimatorMenuStatusHandler(struct cmdContext *context, const char *cmd);

/**
 * @brief Request a rate estimate for a STA.
 *
 * @param [in] context  the output context
 * @param [in] cmd  the command in the debug CLI
 */
void estimatorMenuRateHandler(struct cmdContext *context, const char *cmd);

/**
 * @brief Request an airtime estimate be done on a given channel.
 *
 * @param [in] context  the output context
 * @param [in] cmd  the command in the debug CLI
 */
void estimatorMenuAirtimeHandler(struct cmdContext *context, const char *cmd);

#endif /* LBD_DBG_MENU && GMOCK_UNIT_TESTS */

#if defined(__cplusplus)
}
#endif

#endif // estimator__h

