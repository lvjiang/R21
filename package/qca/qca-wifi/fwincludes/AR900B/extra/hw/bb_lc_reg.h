/*
 * Copyright (c) 2013 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */



#ifndef _BB_LC_REG_REG_H_
#define _BB_LC_REG_REG_H_


/* macros for bb_chn_reg_map.BB_timing_controls_1 */
#define PHY_BB_TIMING_CONTROLS_1_ADDRESS                                                      0x00009800
#define PHY_BB_TIMING_CONTROLS_1_OFFSET                                                       0x00000000
#define PHY_BB_TIMING_CONTROLS_1_STE_THR_MSB                                                           6
#define PHY_BB_TIMING_CONTROLS_1_STE_THR_LSB                                                           0
#define PHY_BB_TIMING_CONTROLS_1_STE_THR_MASK                                                 0x0000007f
#define PHY_BB_TIMING_CONTROLS_1_STE_THR_GET(x)                                (((x) & 0x0000007f) >> 0)
#define PHY_BB_TIMING_CONTROLS_1_STE_THR_SET(x)                                (((x) << 0) & 0x0000007f)
#define PHY_BB_TIMING_CONTROLS_1_STE_TO_LONG1_MSB                                                     12
#define PHY_BB_TIMING_CONTROLS_1_STE_TO_LONG1_LSB                                                      7
#define PHY_BB_TIMING_CONTROLS_1_STE_TO_LONG1_MASK                                            0x00001f80
#define PHY_BB_TIMING_CONTROLS_1_STE_TO_LONG1_GET(x)                           (((x) & 0x00001f80) >> 7)
#define PHY_BB_TIMING_CONTROLS_1_STE_TO_LONG1_SET(x)                           (((x) << 7) & 0x00001f80)
#define PHY_BB_TIMING_CONTROLS_1_TIMING_BACKOFF_MSB                                                   16
#define PHY_BB_TIMING_CONTROLS_1_TIMING_BACKOFF_LSB                                                   13
#define PHY_BB_TIMING_CONTROLS_1_TIMING_BACKOFF_MASK                                          0x0001e000
#define PHY_BB_TIMING_CONTROLS_1_TIMING_BACKOFF_GET(x)                        (((x) & 0x0001e000) >> 13)
#define PHY_BB_TIMING_CONTROLS_1_TIMING_BACKOFF_SET(x)                        (((x) << 13) & 0x0001e000)
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_HT_FINE_PPM_MSB                                               17
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_HT_FINE_PPM_LSB                                               17
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_HT_FINE_PPM_MASK                                      0x00020000
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_HT_FINE_PPM_GET(x)                    (((x) & 0x00020000) >> 17)
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_HT_FINE_PPM_SET(x)                    (((x) << 17) & 0x00020000)
#define PHY_BB_TIMING_CONTROLS_1_HT_FINE_PPM_STREAM_MSB                                               19
#define PHY_BB_TIMING_CONTROLS_1_HT_FINE_PPM_STREAM_LSB                                               18
#define PHY_BB_TIMING_CONTROLS_1_HT_FINE_PPM_STREAM_MASK                                      0x000c0000
#define PHY_BB_TIMING_CONTROLS_1_HT_FINE_PPM_STREAM_GET(x)                    (((x) & 0x000c0000) >> 18)
#define PHY_BB_TIMING_CONTROLS_1_HT_FINE_PPM_STREAM_SET(x)                    (((x) << 18) & 0x000c0000)
#define PHY_BB_TIMING_CONTROLS_1_HT_FINE_PPM_QAM_MSB                                                  21
#define PHY_BB_TIMING_CONTROLS_1_HT_FINE_PPM_QAM_LSB                                                  20
#define PHY_BB_TIMING_CONTROLS_1_HT_FINE_PPM_QAM_MASK                                         0x00300000
#define PHY_BB_TIMING_CONTROLS_1_HT_FINE_PPM_QAM_GET(x)                       (((x) & 0x00300000) >> 20)
#define PHY_BB_TIMING_CONTROLS_1_HT_FINE_PPM_QAM_SET(x)                       (((x) << 20) & 0x00300000)
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_LONG_CHANFIL_MSB                                              22
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_LONG_CHANFIL_LSB                                              22
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_LONG_CHANFIL_MASK                                     0x00400000
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_LONG_CHANFIL_GET(x)                   (((x) & 0x00400000) >> 22)
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_LONG_CHANFIL_SET(x)                   (((x) << 22) & 0x00400000)
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_RX_STBC_MSB                                                   23
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_RX_STBC_LSB                                                   23
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_RX_STBC_MASK                                          0x00800000
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_RX_STBC_GET(x)                        (((x) & 0x00800000) >> 23)
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_RX_STBC_SET(x)                        (((x) << 23) & 0x00800000)
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_CHANNEL_FILTER_MSB                                            24
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_CHANNEL_FILTER_LSB                                            24
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_CHANNEL_FILTER_MASK                                   0x01000000
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_CHANNEL_FILTER_GET(x)                 (((x) & 0x01000000) >> 24)
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_CHANNEL_FILTER_SET(x)                 (((x) << 24) & 0x01000000)
#define PHY_BB_TIMING_CONTROLS_1_FALSE_ALARM_MSB                                                      26
#define PHY_BB_TIMING_CONTROLS_1_FALSE_ALARM_LSB                                                      25
#define PHY_BB_TIMING_CONTROLS_1_FALSE_ALARM_MASK                                             0x06000000
#define PHY_BB_TIMING_CONTROLS_1_FALSE_ALARM_GET(x)                           (((x) & 0x06000000) >> 25)
#define PHY_BB_TIMING_CONTROLS_1_FALSE_ALARM_SET(x)                           (((x) << 25) & 0x06000000)
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_LONG_RESCALE_MSB                                              27
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_LONG_RESCALE_LSB                                              27
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_LONG_RESCALE_MASK                                     0x08000000
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_LONG_RESCALE_GET(x)                   (((x) & 0x08000000) >> 27)
#define PHY_BB_TIMING_CONTROLS_1_ENABLE_LONG_RESCALE_SET(x)                   (((x) << 27) & 0x08000000)
#define PHY_BB_TIMING_CONTROLS_1_TIMING_LEAK_ENABLE_MSB                                               28
#define PHY_BB_TIMING_CONTROLS_1_TIMING_LEAK_ENABLE_LSB                                               28
#define PHY_BB_TIMING_CONTROLS_1_TIMING_LEAK_ENABLE_MASK                                      0x10000000
#define PHY_BB_TIMING_CONTROLS_1_TIMING_LEAK_ENABLE_GET(x)                    (((x) & 0x10000000) >> 28)
#define PHY_BB_TIMING_CONTROLS_1_TIMING_LEAK_ENABLE_SET(x)                    (((x) << 28) & 0x10000000)
#define PHY_BB_TIMING_CONTROLS_1_COARSE_PPM_SELECT_MSB                                                30
#define PHY_BB_TIMING_CONTROLS_1_COARSE_PPM_SELECT_LSB                                                29
#define PHY_BB_TIMING_CONTROLS_1_COARSE_PPM_SELECT_MASK                                       0x60000000
#define PHY_BB_TIMING_CONTROLS_1_COARSE_PPM_SELECT_GET(x)                     (((x) & 0x60000000) >> 29)
#define PHY_BB_TIMING_CONTROLS_1_COARSE_PPM_SELECT_SET(x)                     (((x) << 29) & 0x60000000)
#define PHY_BB_TIMING_CONTROLS_1_FFT_SCALING_MSB                                                      31
#define PHY_BB_TIMING_CONTROLS_1_FFT_SCALING_LSB                                                      31
#define PHY_BB_TIMING_CONTROLS_1_FFT_SCALING_MASK                                             0x80000000
#define PHY_BB_TIMING_CONTROLS_1_FFT_SCALING_GET(x)                           (((x) & 0x80000000) >> 31)
#define PHY_BB_TIMING_CONTROLS_1_FFT_SCALING_SET(x)                           (((x) << 31) & 0x80000000)

/* macros for bb_chn_reg_map.BB_timing_controls_2 */
#define PHY_BB_TIMING_CONTROLS_2_ADDRESS                                                      0x00009804
#define PHY_BB_TIMING_CONTROLS_2_OFFSET                                                       0x00000004
#define PHY_BB_TIMING_CONTROLS_2_FORCED_DELTA_PHI_SYMBOL_MSB                                          11
#define PHY_BB_TIMING_CONTROLS_2_FORCED_DELTA_PHI_SYMBOL_LSB                                           0
#define PHY_BB_TIMING_CONTROLS_2_FORCED_DELTA_PHI_SYMBOL_MASK                                 0x00000fff
#define PHY_BB_TIMING_CONTROLS_2_FORCED_DELTA_PHI_SYMBOL_GET(x)                (((x) & 0x00000fff) >> 0)
#define PHY_BB_TIMING_CONTROLS_2_FORCED_DELTA_PHI_SYMBOL_SET(x)                (((x) << 0) & 0x00000fff)
#define PHY_BB_TIMING_CONTROLS_2_FORCE_DELTA_PHI_SYMBOL_MSB                                           12
#define PHY_BB_TIMING_CONTROLS_2_FORCE_DELTA_PHI_SYMBOL_LSB                                           12
#define PHY_BB_TIMING_CONTROLS_2_FORCE_DELTA_PHI_SYMBOL_MASK                                  0x00001000
#define PHY_BB_TIMING_CONTROLS_2_FORCE_DELTA_PHI_SYMBOL_GET(x)                (((x) & 0x00001000) >> 12)
#define PHY_BB_TIMING_CONTROLS_2_FORCE_DELTA_PHI_SYMBOL_SET(x)                (((x) << 12) & 0x00001000)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_MAGNITUDE_TRACK_MSB                                           13
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_MAGNITUDE_TRACK_LSB                                           13
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_MAGNITUDE_TRACK_MASK                                  0x00002000
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_MAGNITUDE_TRACK_GET(x)                (((x) & 0x00002000) >> 13)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_MAGNITUDE_TRACK_SET(x)                (((x) << 13) & 0x00002000)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_SLOPE_FILTER_MSB                                              14
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_SLOPE_FILTER_LSB                                              14
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_SLOPE_FILTER_MASK                                     0x00004000
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_SLOPE_FILTER_GET(x)                   (((x) & 0x00004000) >> 14)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_SLOPE_FILTER_SET(x)                   (((x) << 14) & 0x00004000)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_OFFSET_FILTER_MSB                                             15
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_OFFSET_FILTER_LSB                                             15
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_OFFSET_FILTER_MASK                                    0x00008000
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_OFFSET_FILTER_GET(x)                  (((x) & 0x00008000) >> 15)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_OFFSET_FILTER_SET(x)                  (((x) << 15) & 0x00008000)
#define PHY_BB_TIMING_CONTROLS_2_DC_OFF_DELTAF_THRES_MSB                                              22
#define PHY_BB_TIMING_CONTROLS_2_DC_OFF_DELTAF_THRES_LSB                                              16
#define PHY_BB_TIMING_CONTROLS_2_DC_OFF_DELTAF_THRES_MASK                                     0x007f0000
#define PHY_BB_TIMING_CONTROLS_2_DC_OFF_DELTAF_THRES_GET(x)                   (((x) & 0x007f0000) >> 16)
#define PHY_BB_TIMING_CONTROLS_2_DC_OFF_DELTAF_THRES_SET(x)                   (((x) << 16) & 0x007f0000)
#define PHY_BB_TIMING_CONTROLS_2_DC_OFF_TIM_CONST_MSB                                                 26
#define PHY_BB_TIMING_CONTROLS_2_DC_OFF_TIM_CONST_LSB                                                 24
#define PHY_BB_TIMING_CONTROLS_2_DC_OFF_TIM_CONST_MASK                                        0x07000000
#define PHY_BB_TIMING_CONTROLS_2_DC_OFF_TIM_CONST_GET(x)                      (((x) & 0x07000000) >> 24)
#define PHY_BB_TIMING_CONTROLS_2_DC_OFF_TIM_CONST_SET(x)                      (((x) << 24) & 0x07000000)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_DC_OFFSET_MSB                                                 27
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_DC_OFFSET_LSB                                                 27
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_DC_OFFSET_MASK                                        0x08000000
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_DC_OFFSET_GET(x)                      (((x) & 0x08000000) >> 27)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_DC_OFFSET_SET(x)                      (((x) << 27) & 0x08000000)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_DC_OFFSET_TRACK_MSB                                           28
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_DC_OFFSET_TRACK_LSB                                           28
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_DC_OFFSET_TRACK_MASK                                  0x10000000
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_DC_OFFSET_TRACK_GET(x)                (((x) & 0x10000000) >> 28)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_DC_OFFSET_TRACK_SET(x)                (((x) << 28) & 0x10000000)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_WEIGHTING_MSB                                                 29
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_WEIGHTING_LSB                                                 29
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_WEIGHTING_MASK                                        0x20000000
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_WEIGHTING_GET(x)                      (((x) & 0x20000000) >> 29)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_WEIGHTING_SET(x)                      (((x) << 29) & 0x20000000)
#define PHY_BB_TIMING_CONTROLS_2_TRACEBACK128_MSB                                                     30
#define PHY_BB_TIMING_CONTROLS_2_TRACEBACK128_LSB                                                     30
#define PHY_BB_TIMING_CONTROLS_2_TRACEBACK128_MASK                                            0x40000000
#define PHY_BB_TIMING_CONTROLS_2_TRACEBACK128_GET(x)                          (((x) & 0x40000000) >> 30)
#define PHY_BB_TIMING_CONTROLS_2_TRACEBACK128_SET(x)                          (((x) << 30) & 0x40000000)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_HT_FINE_TIMING_MSB                                            31
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_HT_FINE_TIMING_LSB                                            31
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_HT_FINE_TIMING_MASK                                   0x80000000
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_HT_FINE_TIMING_GET(x)                 (((x) & 0x80000000) >> 31)
#define PHY_BB_TIMING_CONTROLS_2_ENABLE_HT_FINE_TIMING_SET(x)                 (((x) << 31) & 0x80000000)

/* macros for bb_chn_reg_map.BB_timing_controls_3 */
#define PHY_BB_TIMING_CONTROLS_3_ADDRESS                                                      0x00009808
#define PHY_BB_TIMING_CONTROLS_3_OFFSET                                                       0x00000008
#define PHY_BB_TIMING_CONTROLS_3_PPM_RESCUE_INTERVAL_MSB                                               7
#define PHY_BB_TIMING_CONTROLS_3_PPM_RESCUE_INTERVAL_LSB                                               0
#define PHY_BB_TIMING_CONTROLS_3_PPM_RESCUE_INTERVAL_MASK                                     0x000000ff
#define PHY_BB_TIMING_CONTROLS_3_PPM_RESCUE_INTERVAL_GET(x)                    (((x) & 0x000000ff) >> 0)
#define PHY_BB_TIMING_CONTROLS_3_PPM_RESCUE_INTERVAL_SET(x)                    (((x) << 0) & 0x000000ff)
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_PPM_RESCUE_MSB                                                 8
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_PPM_RESCUE_LSB                                                 8
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_PPM_RESCUE_MASK                                       0x00000100
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_PPM_RESCUE_GET(x)                      (((x) & 0x00000100) >> 8)
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_PPM_RESCUE_SET(x)                      (((x) << 8) & 0x00000100)
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_FINE_PPM_MSB                                                   9
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_FINE_PPM_LSB                                                   9
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_FINE_PPM_MASK                                         0x00000200
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_FINE_PPM_GET(x)                        (((x) & 0x00000200) >> 9)
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_FINE_PPM_SET(x)                        (((x) << 9) & 0x00000200)
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_FINE_INTERP_MSB                                               10
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_FINE_INTERP_LSB                                               10
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_FINE_INTERP_MASK                                      0x00000400
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_FINE_INTERP_GET(x)                    (((x) & 0x00000400) >> 10)
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_FINE_INTERP_SET(x)                    (((x) << 10) & 0x00000400)
#define PHY_BB_TIMING_CONTROLS_3_CONTINUOUS_PPM_RESCUE_MSB                                            11
#define PHY_BB_TIMING_CONTROLS_3_CONTINUOUS_PPM_RESCUE_LSB                                            11
#define PHY_BB_TIMING_CONTROLS_3_CONTINUOUS_PPM_RESCUE_MASK                                   0x00000800
#define PHY_BB_TIMING_CONTROLS_3_CONTINUOUS_PPM_RESCUE_GET(x)                 (((x) & 0x00000800) >> 11)
#define PHY_BB_TIMING_CONTROLS_3_CONTINUOUS_PPM_RESCUE_SET(x)                 (((x) << 11) & 0x00000800)
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_DF_CHANEST_MSB                                                12
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_DF_CHANEST_LSB                                                12
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_DF_CHANEST_MASK                                       0x00001000
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_DF_CHANEST_GET(x)                     (((x) & 0x00001000) >> 12)
#define PHY_BB_TIMING_CONTROLS_3_ENABLE_DF_CHANEST_SET(x)                     (((x) << 12) & 0x00001000)
#define PHY_BB_TIMING_CONTROLS_3_DELTA_SLOPE_COEF_EXP_MSB                                             16
#define PHY_BB_TIMING_CONTROLS_3_DELTA_SLOPE_COEF_EXP_LSB                                             13
#define PHY_BB_TIMING_CONTROLS_3_DELTA_SLOPE_COEF_EXP_MASK                                    0x0001e000
#define PHY_BB_TIMING_CONTROLS_3_DELTA_SLOPE_COEF_EXP_GET(x)                  (((x) & 0x0001e000) >> 13)
#define PHY_BB_TIMING_CONTROLS_3_DELTA_SLOPE_COEF_EXP_SET(x)                  (((x) << 13) & 0x0001e000)
#define PHY_BB_TIMING_CONTROLS_3_DELTA_SLOPE_COEF_MAN_MSB                                             31
#define PHY_BB_TIMING_CONTROLS_3_DELTA_SLOPE_COEF_MAN_LSB                                             17
#define PHY_BB_TIMING_CONTROLS_3_DELTA_SLOPE_COEF_MAN_MASK                                    0xfffe0000
#define PHY_BB_TIMING_CONTROLS_3_DELTA_SLOPE_COEF_MAN_GET(x)                  (((x) & 0xfffe0000) >> 17)
#define PHY_BB_TIMING_CONTROLS_3_DELTA_SLOPE_COEF_MAN_SET(x)                  (((x) << 17) & 0xfffe0000)

/* macros for bb_chn_reg_map.BB_timing_control_4 */
#define PHY_BB_TIMING_CONTROL_4_ADDRESS                                                       0x0000980c
#define PHY_BB_TIMING_CONTROL_4_OFFSET                                                        0x0000000c
#define PHY_BB_TIMING_CONTROL_4_CAL_LG_COUNT_MAX_MSB                                                  15
#define PHY_BB_TIMING_CONTROL_4_CAL_LG_COUNT_MAX_LSB                                                  12
#define PHY_BB_TIMING_CONTROL_4_CAL_LG_COUNT_MAX_MASK                                         0x0000f000
#define PHY_BB_TIMING_CONTROL_4_CAL_LG_COUNT_MAX_GET(x)                       (((x) & 0x0000f000) >> 12)
#define PHY_BB_TIMING_CONTROL_4_CAL_LG_COUNT_MAX_SET(x)                       (((x) << 12) & 0x0000f000)
#define PHY_BB_TIMING_CONTROL_4_DO_GAIN_DC_IQ_CAL_MSB                                                 16
#define PHY_BB_TIMING_CONTROL_4_DO_GAIN_DC_IQ_CAL_LSB                                                 16
#define PHY_BB_TIMING_CONTROL_4_DO_GAIN_DC_IQ_CAL_MASK                                        0x00010000
#define PHY_BB_TIMING_CONTROL_4_DO_GAIN_DC_IQ_CAL_GET(x)                      (((x) & 0x00010000) >> 16)
#define PHY_BB_TIMING_CONTROL_4_DO_GAIN_DC_IQ_CAL_SET(x)                      (((x) << 16) & 0x00010000)
#define PHY_BB_TIMING_CONTROL_4_USE_PILOT_TRACK_DF_MSB                                                20
#define PHY_BB_TIMING_CONTROL_4_USE_PILOT_TRACK_DF_LSB                                                17
#define PHY_BB_TIMING_CONTROL_4_USE_PILOT_TRACK_DF_MASK                                       0x001e0000
#define PHY_BB_TIMING_CONTROL_4_USE_PILOT_TRACK_DF_GET(x)                     (((x) & 0x001e0000) >> 17)
#define PHY_BB_TIMING_CONTROL_4_USE_PILOT_TRACK_DF_SET(x)                     (((x) << 17) & 0x001e0000)
#define PHY_BB_TIMING_CONTROL_4_EARLY_TRIGGER_THR_MSB                                                 27
#define PHY_BB_TIMING_CONTROL_4_EARLY_TRIGGER_THR_LSB                                                 21
#define PHY_BB_TIMING_CONTROL_4_EARLY_TRIGGER_THR_MASK                                        0x0fe00000
#define PHY_BB_TIMING_CONTROL_4_EARLY_TRIGGER_THR_GET(x)                      (((x) & 0x0fe00000) >> 21)
#define PHY_BB_TIMING_CONTROL_4_EARLY_TRIGGER_THR_SET(x)                      (((x) << 21) & 0x0fe00000)
#define PHY_BB_TIMING_CONTROL_4_ENABLE_PILOT_MASK_MSB                                                 28
#define PHY_BB_TIMING_CONTROL_4_ENABLE_PILOT_MASK_LSB                                                 28
#define PHY_BB_TIMING_CONTROL_4_ENABLE_PILOT_MASK_MASK                                        0x10000000
#define PHY_BB_TIMING_CONTROL_4_ENABLE_PILOT_MASK_GET(x)                      (((x) & 0x10000000) >> 28)
#define PHY_BB_TIMING_CONTROL_4_ENABLE_PILOT_MASK_SET(x)                      (((x) << 28) & 0x10000000)
#define PHY_BB_TIMING_CONTROL_4_ENABLE_CHAN_MASK_MSB                                                  29
#define PHY_BB_TIMING_CONTROL_4_ENABLE_CHAN_MASK_LSB                                                  29
#define PHY_BB_TIMING_CONTROL_4_ENABLE_CHAN_MASK_MASK                                         0x20000000
#define PHY_BB_TIMING_CONTROL_4_ENABLE_CHAN_MASK_GET(x)                       (((x) & 0x20000000) >> 29)
#define PHY_BB_TIMING_CONTROL_4_ENABLE_CHAN_MASK_SET(x)                       (((x) << 29) & 0x20000000)
#define PHY_BB_TIMING_CONTROL_4_ENABLE_SPUR_FILTER_MSB                                                30
#define PHY_BB_TIMING_CONTROL_4_ENABLE_SPUR_FILTER_LSB                                                30
#define PHY_BB_TIMING_CONTROL_4_ENABLE_SPUR_FILTER_MASK                                       0x40000000
#define PHY_BB_TIMING_CONTROL_4_ENABLE_SPUR_FILTER_GET(x)                     (((x) & 0x40000000) >> 30)
#define PHY_BB_TIMING_CONTROL_4_ENABLE_SPUR_FILTER_SET(x)                     (((x) << 30) & 0x40000000)
#define PHY_BB_TIMING_CONTROL_4_ENABLE_SPUR_RSSI_MSB                                                  31
#define PHY_BB_TIMING_CONTROL_4_ENABLE_SPUR_RSSI_LSB                                                  31
#define PHY_BB_TIMING_CONTROL_4_ENABLE_SPUR_RSSI_MASK                                         0x80000000
#define PHY_BB_TIMING_CONTROL_4_ENABLE_SPUR_RSSI_GET(x)                       (((x) & 0x80000000) >> 31)
#define PHY_BB_TIMING_CONTROL_4_ENABLE_SPUR_RSSI_SET(x)                       (((x) << 31) & 0x80000000)

/* macros for bb_chn_reg_map.BB_timing_control_5 */
#define PHY_BB_TIMING_CONTROL_5_ADDRESS                                                       0x00009810
#define PHY_BB_TIMING_CONTROL_5_OFFSET                                                        0x00000010
#define PHY_BB_TIMING_CONTROL_5_ENABLE_CYCPWR_THR1_MSB                                                 0
#define PHY_BB_TIMING_CONTROL_5_ENABLE_CYCPWR_THR1_LSB                                                 0
#define PHY_BB_TIMING_CONTROL_5_ENABLE_CYCPWR_THR1_MASK                                       0x00000001
#define PHY_BB_TIMING_CONTROL_5_ENABLE_CYCPWR_THR1_GET(x)                      (((x) & 0x00000001) >> 0)
#define PHY_BB_TIMING_CONTROL_5_ENABLE_CYCPWR_THR1_SET(x)                      (((x) << 0) & 0x00000001)
#define PHY_BB_TIMING_CONTROL_5_CYCPWR_THR1_MSB                                                        7
#define PHY_BB_TIMING_CONTROL_5_CYCPWR_THR1_LSB                                                        1
#define PHY_BB_TIMING_CONTROL_5_CYCPWR_THR1_MASK                                              0x000000fe
#define PHY_BB_TIMING_CONTROL_5_CYCPWR_THR1_GET(x)                             (((x) & 0x000000fe) >> 1)
#define PHY_BB_TIMING_CONTROL_5_CYCPWR_THR1_SET(x)                             (((x) << 1) & 0x000000fe)
#define PHY_BB_TIMING_CONTROL_5_ENABLE_RSSI_THR1A_MSB                                                 15
#define PHY_BB_TIMING_CONTROL_5_ENABLE_RSSI_THR1A_LSB                                                 15
#define PHY_BB_TIMING_CONTROL_5_ENABLE_RSSI_THR1A_MASK                                        0x00008000
#define PHY_BB_TIMING_CONTROL_5_ENABLE_RSSI_THR1A_GET(x)                      (((x) & 0x00008000) >> 15)
#define PHY_BB_TIMING_CONTROL_5_ENABLE_RSSI_THR1A_SET(x)                      (((x) << 15) & 0x00008000)
#define PHY_BB_TIMING_CONTROL_5_RSSI_THR1A_MSB                                                        22
#define PHY_BB_TIMING_CONTROL_5_RSSI_THR1A_LSB                                                        16
#define PHY_BB_TIMING_CONTROL_5_RSSI_THR1A_MASK                                               0x007f0000
#define PHY_BB_TIMING_CONTROL_5_RSSI_THR1A_GET(x)                             (((x) & 0x007f0000) >> 16)
#define PHY_BB_TIMING_CONTROL_5_RSSI_THR1A_SET(x)                             (((x) << 16) & 0x007f0000)
#define PHY_BB_TIMING_CONTROL_5_LONG_SC_THRESH_HI_RSSI_MSB                                            29
#define PHY_BB_TIMING_CONTROL_5_LONG_SC_THRESH_HI_RSSI_LSB                                            23
#define PHY_BB_TIMING_CONTROL_5_LONG_SC_THRESH_HI_RSSI_MASK                                   0x3f800000
#define PHY_BB_TIMING_CONTROL_5_LONG_SC_THRESH_HI_RSSI_GET(x)                 (((x) & 0x3f800000) >> 23)
#define PHY_BB_TIMING_CONTROL_5_LONG_SC_THRESH_HI_RSSI_SET(x)                 (((x) << 23) & 0x3f800000)
#define PHY_BB_TIMING_CONTROL_5_FORCED_AGC_STR_PRI_MSB                                                30
#define PHY_BB_TIMING_CONTROL_5_FORCED_AGC_STR_PRI_LSB                                                30
#define PHY_BB_TIMING_CONTROL_5_FORCED_AGC_STR_PRI_MASK                                       0x40000000
#define PHY_BB_TIMING_CONTROL_5_FORCED_AGC_STR_PRI_GET(x)                     (((x) & 0x40000000) >> 30)
#define PHY_BB_TIMING_CONTROL_5_FORCED_AGC_STR_PRI_SET(x)                     (((x) << 30) & 0x40000000)
#define PHY_BB_TIMING_CONTROL_5_FORCED_AGC_STR_PRI_EN_MSB                                             31
#define PHY_BB_TIMING_CONTROL_5_FORCED_AGC_STR_PRI_EN_LSB                                             31
#define PHY_BB_TIMING_CONTROL_5_FORCED_AGC_STR_PRI_EN_MASK                                    0x80000000
#define PHY_BB_TIMING_CONTROL_5_FORCED_AGC_STR_PRI_EN_GET(x)                  (((x) & 0x80000000) >> 31)
#define PHY_BB_TIMING_CONTROL_5_FORCED_AGC_STR_PRI_EN_SET(x)                  (((x) << 31) & 0x80000000)

/* macros for bb_chn_reg_map.BB_timing_control_6 */
#define PHY_BB_TIMING_CONTROL_6_ADDRESS                                                       0x00009814
#define PHY_BB_TIMING_CONTROL_6_OFFSET                                                        0x00000014
#define PHY_BB_TIMING_CONTROL_6_HI_RSSI_THRESH_MSB                                                     7
#define PHY_BB_TIMING_CONTROL_6_HI_RSSI_THRESH_LSB                                                     0
#define PHY_BB_TIMING_CONTROL_6_HI_RSSI_THRESH_MASK                                           0x000000ff
#define PHY_BB_TIMING_CONTROL_6_HI_RSSI_THRESH_GET(x)                          (((x) & 0x000000ff) >> 0)
#define PHY_BB_TIMING_CONTROL_6_HI_RSSI_THRESH_SET(x)                          (((x) << 0) & 0x000000ff)
#define PHY_BB_TIMING_CONTROL_6_EARLY_TRIGGER_THR_HI_RSSI_MSB                                         14
#define PHY_BB_TIMING_CONTROL_6_EARLY_TRIGGER_THR_HI_RSSI_LSB                                          8
#define PHY_BB_TIMING_CONTROL_6_EARLY_TRIGGER_THR_HI_RSSI_MASK                                0x00007f00
#define PHY_BB_TIMING_CONTROL_6_EARLY_TRIGGER_THR_HI_RSSI_GET(x)               (((x) & 0x00007f00) >> 8)
#define PHY_BB_TIMING_CONTROL_6_EARLY_TRIGGER_THR_HI_RSSI_SET(x)               (((x) << 8) & 0x00007f00)
#define PHY_BB_TIMING_CONTROL_6_OFDM_XCORR_THRESH_MSB                                                 20
#define PHY_BB_TIMING_CONTROL_6_OFDM_XCORR_THRESH_LSB                                                 15
#define PHY_BB_TIMING_CONTROL_6_OFDM_XCORR_THRESH_MASK                                        0x001f8000
#define PHY_BB_TIMING_CONTROL_6_OFDM_XCORR_THRESH_GET(x)                      (((x) & 0x001f8000) >> 15)
#define PHY_BB_TIMING_CONTROL_6_OFDM_XCORR_THRESH_SET(x)                      (((x) << 15) & 0x001f8000)
#define PHY_BB_TIMING_CONTROL_6_OFDM_XCORR_THRESH_HI_RSSI_MSB                                         27
#define PHY_BB_TIMING_CONTROL_6_OFDM_XCORR_THRESH_HI_RSSI_LSB                                         21
#define PHY_BB_TIMING_CONTROL_6_OFDM_XCORR_THRESH_HI_RSSI_MASK                                0x0fe00000
#define PHY_BB_TIMING_CONTROL_6_OFDM_XCORR_THRESH_HI_RSSI_GET(x)              (((x) & 0x0fe00000) >> 21)
#define PHY_BB_TIMING_CONTROL_6_OFDM_XCORR_THRESH_HI_RSSI_SET(x)              (((x) << 21) & 0x0fe00000)
#define PHY_BB_TIMING_CONTROL_6_LONG_MEDIUM_RATIO_THR_MSB                                             31
#define PHY_BB_TIMING_CONTROL_6_LONG_MEDIUM_RATIO_THR_LSB                                             28
#define PHY_BB_TIMING_CONTROL_6_LONG_MEDIUM_RATIO_THR_MASK                                    0xf0000000
#define PHY_BB_TIMING_CONTROL_6_LONG_MEDIUM_RATIO_THR_GET(x)                  (((x) & 0xf0000000) >> 28)
#define PHY_BB_TIMING_CONTROL_6_LONG_MEDIUM_RATIO_THR_SET(x)                  (((x) << 28) & 0xf0000000)

/* macros for bb_chn_reg_map.BB_timing_control_11 */
#define PHY_BB_TIMING_CONTROL_11_ADDRESS                                                      0x00009818
#define PHY_BB_TIMING_CONTROL_11_OFFSET                                                       0x00000018
#define PHY_BB_TIMING_CONTROL_11_SPUR_DELTA_PHASE_MSB                                                 19
#define PHY_BB_TIMING_CONTROL_11_SPUR_DELTA_PHASE_LSB                                                  0
#define PHY_BB_TIMING_CONTROL_11_SPUR_DELTA_PHASE_MASK                                        0x000fffff
#define PHY_BB_TIMING_CONTROL_11_SPUR_DELTA_PHASE_GET(x)                       (((x) & 0x000fffff) >> 0)
#define PHY_BB_TIMING_CONTROL_11_SPUR_DELTA_PHASE_SET(x)                       (((x) << 0) & 0x000fffff)
#define PHY_BB_TIMING_CONTROL_11_SPUR_FREQ_SD_MSB                                                     29
#define PHY_BB_TIMING_CONTROL_11_SPUR_FREQ_SD_LSB                                                     20
#define PHY_BB_TIMING_CONTROL_11_SPUR_FREQ_SD_MASK                                            0x3ff00000
#define PHY_BB_TIMING_CONTROL_11_SPUR_FREQ_SD_GET(x)                          (((x) & 0x3ff00000) >> 20)
#define PHY_BB_TIMING_CONTROL_11_SPUR_FREQ_SD_SET(x)                          (((x) << 20) & 0x3ff00000)
#define PHY_BB_TIMING_CONTROL_11_USE_SPUR_FILTER_IN_AGC_MSB                                           30
#define PHY_BB_TIMING_CONTROL_11_USE_SPUR_FILTER_IN_AGC_LSB                                           30
#define PHY_BB_TIMING_CONTROL_11_USE_SPUR_FILTER_IN_AGC_MASK                                  0x40000000
#define PHY_BB_TIMING_CONTROL_11_USE_SPUR_FILTER_IN_AGC_GET(x)                (((x) & 0x40000000) >> 30)
#define PHY_BB_TIMING_CONTROL_11_USE_SPUR_FILTER_IN_AGC_SET(x)                (((x) << 30) & 0x40000000)
#define PHY_BB_TIMING_CONTROL_11_USE_SPUR_FILTER_IN_SELFCOR_MSB                                       31
#define PHY_BB_TIMING_CONTROL_11_USE_SPUR_FILTER_IN_SELFCOR_LSB                                       31
#define PHY_BB_TIMING_CONTROL_11_USE_SPUR_FILTER_IN_SELFCOR_MASK                              0x80000000
#define PHY_BB_TIMING_CONTROL_11_USE_SPUR_FILTER_IN_SELFCOR_GET(x)            (((x) & 0x80000000) >> 31)
#define PHY_BB_TIMING_CONTROL_11_USE_SPUR_FILTER_IN_SELFCOR_SET(x)            (((x) << 31) & 0x80000000)

/* macros for bb_chn_reg_map.BB_spur_mask_controls */
#define PHY_BB_SPUR_MASK_CONTROLS_ADDRESS                                                     0x0000981c
#define PHY_BB_SPUR_MASK_CONTROLS_OFFSET                                                      0x0000001c
#define PHY_BB_SPUR_MASK_CONTROLS_SPUR_RSSI_THRESH_MSB                                                 7
#define PHY_BB_SPUR_MASK_CONTROLS_SPUR_RSSI_THRESH_LSB                                                 0
#define PHY_BB_SPUR_MASK_CONTROLS_SPUR_RSSI_THRESH_MASK                                       0x000000ff
#define PHY_BB_SPUR_MASK_CONTROLS_SPUR_RSSI_THRESH_GET(x)                      (((x) & 0x000000ff) >> 0)
#define PHY_BB_SPUR_MASK_CONTROLS_SPUR_RSSI_THRESH_SET(x)                      (((x) << 0) & 0x000000ff)
#define PHY_BB_SPUR_MASK_CONTROLS_EN_VIT_SPUR_RSSI_MSB                                                 8
#define PHY_BB_SPUR_MASK_CONTROLS_EN_VIT_SPUR_RSSI_LSB                                                 8
#define PHY_BB_SPUR_MASK_CONTROLS_EN_VIT_SPUR_RSSI_MASK                                       0x00000100
#define PHY_BB_SPUR_MASK_CONTROLS_EN_VIT_SPUR_RSSI_GET(x)                      (((x) & 0x00000100) >> 8)
#define PHY_BB_SPUR_MASK_CONTROLS_EN_VIT_SPUR_RSSI_SET(x)                      (((x) << 8) & 0x00000100)
#define PHY_BB_SPUR_MASK_CONTROLS_ENABLE_MASK_PPM_MSB                                                 17
#define PHY_BB_SPUR_MASK_CONTROLS_ENABLE_MASK_PPM_LSB                                                 17
#define PHY_BB_SPUR_MASK_CONTROLS_ENABLE_MASK_PPM_MASK                                        0x00020000
#define PHY_BB_SPUR_MASK_CONTROLS_ENABLE_MASK_PPM_GET(x)                      (((x) & 0x00020000) >> 17)
#define PHY_BB_SPUR_MASK_CONTROLS_ENABLE_MASK_PPM_SET(x)                      (((x) << 17) & 0x00020000)
#define PHY_BB_SPUR_MASK_CONTROLS_MASK_RATE_CNTL_MSB                                                  25
#define PHY_BB_SPUR_MASK_CONTROLS_MASK_RATE_CNTL_LSB                                                  18
#define PHY_BB_SPUR_MASK_CONTROLS_MASK_RATE_CNTL_MASK                                         0x03fc0000
#define PHY_BB_SPUR_MASK_CONTROLS_MASK_RATE_CNTL_GET(x)                       (((x) & 0x03fc0000) >> 18)
#define PHY_BB_SPUR_MASK_CONTROLS_MASK_RATE_CNTL_SET(x)                       (((x) << 18) & 0x03fc0000)
#define PHY_BB_SPUR_MASK_CONTROLS_ENABLE_NF_RSSI_SPUR_MIT_MSB                                         26
#define PHY_BB_SPUR_MASK_CONTROLS_ENABLE_NF_RSSI_SPUR_MIT_LSB                                         26
#define PHY_BB_SPUR_MASK_CONTROLS_ENABLE_NF_RSSI_SPUR_MIT_MASK                                0x04000000
#define PHY_BB_SPUR_MASK_CONTROLS_ENABLE_NF_RSSI_SPUR_MIT_GET(x)              (((x) & 0x04000000) >> 26)
#define PHY_BB_SPUR_MASK_CONTROLS_ENABLE_NF_RSSI_SPUR_MIT_SET(x)              (((x) << 26) & 0x04000000)

/* macros for bb_chn_reg_map.BB_find_signal_low */
#define PHY_BB_FIND_SIGNAL_LOW_ADDRESS                                                        0x00009820
#define PHY_BB_FIND_SIGNAL_LOW_OFFSET                                                         0x00000020
#define PHY_BB_FIND_SIGNAL_LOW_RELSTEP_LOW_MSB                                                         5
#define PHY_BB_FIND_SIGNAL_LOW_RELSTEP_LOW_LSB                                                         0
#define PHY_BB_FIND_SIGNAL_LOW_RELSTEP_LOW_MASK                                               0x0000003f
#define PHY_BB_FIND_SIGNAL_LOW_RELSTEP_LOW_GET(x)                              (((x) & 0x0000003f) >> 0)
#define PHY_BB_FIND_SIGNAL_LOW_RELSTEP_LOW_SET(x)                              (((x) << 0) & 0x0000003f)
#define PHY_BB_FIND_SIGNAL_LOW_FIRSTEP_LOW_MSB                                                        11
#define PHY_BB_FIND_SIGNAL_LOW_FIRSTEP_LOW_LSB                                                         6
#define PHY_BB_FIND_SIGNAL_LOW_FIRSTEP_LOW_MASK                                               0x00000fc0
#define PHY_BB_FIND_SIGNAL_LOW_FIRSTEP_LOW_GET(x)                              (((x) & 0x00000fc0) >> 6)
#define PHY_BB_FIND_SIGNAL_LOW_FIRSTEP_LOW_SET(x)                              (((x) << 6) & 0x00000fc0)
#define PHY_BB_FIND_SIGNAL_LOW_FIRPWR_LOW_MSB                                                         19
#define PHY_BB_FIND_SIGNAL_LOW_FIRPWR_LOW_LSB                                                         12
#define PHY_BB_FIND_SIGNAL_LOW_FIRPWR_LOW_MASK                                                0x000ff000
#define PHY_BB_FIND_SIGNAL_LOW_FIRPWR_LOW_GET(x)                              (((x) & 0x000ff000) >> 12)
#define PHY_BB_FIND_SIGNAL_LOW_FIRPWR_LOW_SET(x)                              (((x) << 12) & 0x000ff000)
#define PHY_BB_FIND_SIGNAL_LOW_YCOK_MAX_LOW_MSB                                                       23
#define PHY_BB_FIND_SIGNAL_LOW_YCOK_MAX_LOW_LSB                                                       20
#define PHY_BB_FIND_SIGNAL_LOW_YCOK_MAX_LOW_MASK                                              0x00f00000
#define PHY_BB_FIND_SIGNAL_LOW_YCOK_MAX_LOW_GET(x)                            (((x) & 0x00f00000) >> 20)
#define PHY_BB_FIND_SIGNAL_LOW_YCOK_MAX_LOW_SET(x)                            (((x) << 20) & 0x00f00000)
#define PHY_BB_FIND_SIGNAL_LOW_LONG_SC_THRESH_MSB                                                     30
#define PHY_BB_FIND_SIGNAL_LOW_LONG_SC_THRESH_LSB                                                     24
#define PHY_BB_FIND_SIGNAL_LOW_LONG_SC_THRESH_MASK                                            0x7f000000
#define PHY_BB_FIND_SIGNAL_LOW_LONG_SC_THRESH_GET(x)                          (((x) & 0x7f000000) >> 24)
#define PHY_BB_FIND_SIGNAL_LOW_LONG_SC_THRESH_SET(x)                          (((x) << 24) & 0x7f000000)

/* macros for bb_chn_reg_map.BB_sfcorr */
#define PHY_BB_SFCORR_ADDRESS                                                                 0x00009824
#define PHY_BB_SFCORR_OFFSET                                                                  0x00000024
#define PHY_BB_SFCORR_M2COUNT_THR_MSB                                                                  4
#define PHY_BB_SFCORR_M2COUNT_THR_LSB                                                                  0
#define PHY_BB_SFCORR_M2COUNT_THR_MASK                                                        0x0000001f
#define PHY_BB_SFCORR_M2COUNT_THR_GET(x)                                       (((x) & 0x0000001f) >> 0)
#define PHY_BB_SFCORR_M2COUNT_THR_SET(x)                                       (((x) << 0) & 0x0000001f)
#define PHY_BB_SFCORR_ADCSAT_THRESH_MSB                                                               10
#define PHY_BB_SFCORR_ADCSAT_THRESH_LSB                                                                5
#define PHY_BB_SFCORR_ADCSAT_THRESH_MASK                                                      0x000007e0
#define PHY_BB_SFCORR_ADCSAT_THRESH_GET(x)                                     (((x) & 0x000007e0) >> 5)
#define PHY_BB_SFCORR_ADCSAT_THRESH_SET(x)                                     (((x) << 5) & 0x000007e0)
#define PHY_BB_SFCORR_ADCSAT_ICOUNT_MSB                                                               16
#define PHY_BB_SFCORR_ADCSAT_ICOUNT_LSB                                                               11
#define PHY_BB_SFCORR_ADCSAT_ICOUNT_MASK                                                      0x0001f800
#define PHY_BB_SFCORR_ADCSAT_ICOUNT_GET(x)                                    (((x) & 0x0001f800) >> 11)
#define PHY_BB_SFCORR_ADCSAT_ICOUNT_SET(x)                                    (((x) << 11) & 0x0001f800)
#define PHY_BB_SFCORR_M1_THRES_MSB                                                                    23
#define PHY_BB_SFCORR_M1_THRES_LSB                                                                    17
#define PHY_BB_SFCORR_M1_THRES_MASK                                                           0x00fe0000
#define PHY_BB_SFCORR_M1_THRES_GET(x)                                         (((x) & 0x00fe0000) >> 17)
#define PHY_BB_SFCORR_M1_THRES_SET(x)                                         (((x) << 17) & 0x00fe0000)
#define PHY_BB_SFCORR_M2_THRES_MSB                                                                    30
#define PHY_BB_SFCORR_M2_THRES_LSB                                                                    24
#define PHY_BB_SFCORR_M2_THRES_MASK                                                           0x7f000000
#define PHY_BB_SFCORR_M2_THRES_GET(x)                                         (((x) & 0x7f000000) >> 24)
#define PHY_BB_SFCORR_M2_THRES_SET(x)                                         (((x) << 24) & 0x7f000000)

/* macros for bb_chn_reg_map.BB_self_corr_low */
#define PHY_BB_SELF_CORR_LOW_ADDRESS                                                          0x00009828
#define PHY_BB_SELF_CORR_LOW_OFFSET                                                           0x00000028
#define PHY_BB_SELF_CORR_LOW_USE_SELF_CORR_LOW_MSB                                                     0
#define PHY_BB_SELF_CORR_LOW_USE_SELF_CORR_LOW_LSB                                                     0
#define PHY_BB_SELF_CORR_LOW_USE_SELF_CORR_LOW_MASK                                           0x00000001
#define PHY_BB_SELF_CORR_LOW_USE_SELF_CORR_LOW_GET(x)                          (((x) & 0x00000001) >> 0)
#define PHY_BB_SELF_CORR_LOW_USE_SELF_CORR_LOW_SET(x)                          (((x) << 0) & 0x00000001)
#define PHY_BB_SELF_CORR_LOW_M1COUNT_MAX_LOW_MSB                                                       7
#define PHY_BB_SELF_CORR_LOW_M1COUNT_MAX_LOW_LSB                                                       1
#define PHY_BB_SELF_CORR_LOW_M1COUNT_MAX_LOW_MASK                                             0x000000fe
#define PHY_BB_SELF_CORR_LOW_M1COUNT_MAX_LOW_GET(x)                            (((x) & 0x000000fe) >> 1)
#define PHY_BB_SELF_CORR_LOW_M1COUNT_MAX_LOW_SET(x)                            (((x) << 1) & 0x000000fe)
#define PHY_BB_SELF_CORR_LOW_M2COUNT_THR_LOW_MSB                                                      13
#define PHY_BB_SELF_CORR_LOW_M2COUNT_THR_LOW_LSB                                                       8
#define PHY_BB_SELF_CORR_LOW_M2COUNT_THR_LOW_MASK                                             0x00003f00
#define PHY_BB_SELF_CORR_LOW_M2COUNT_THR_LOW_GET(x)                            (((x) & 0x00003f00) >> 8)
#define PHY_BB_SELF_CORR_LOW_M2COUNT_THR_LOW_SET(x)                            (((x) << 8) & 0x00003f00)
#define PHY_BB_SELF_CORR_LOW_M1_THRESH_LOW_MSB                                                        20
#define PHY_BB_SELF_CORR_LOW_M1_THRESH_LOW_LSB                                                        14
#define PHY_BB_SELF_CORR_LOW_M1_THRESH_LOW_MASK                                               0x001fc000
#define PHY_BB_SELF_CORR_LOW_M1_THRESH_LOW_GET(x)                             (((x) & 0x001fc000) >> 14)
#define PHY_BB_SELF_CORR_LOW_M1_THRESH_LOW_SET(x)                             (((x) << 14) & 0x001fc000)
#define PHY_BB_SELF_CORR_LOW_M2_THRESH_LOW_MSB                                                        27
#define PHY_BB_SELF_CORR_LOW_M2_THRESH_LOW_LSB                                                        21
#define PHY_BB_SELF_CORR_LOW_M2_THRESH_LOW_MASK                                               0x0fe00000
#define PHY_BB_SELF_CORR_LOW_M2_THRESH_LOW_GET(x)                             (((x) & 0x0fe00000) >> 21)
#define PHY_BB_SELF_CORR_LOW_M2_THRESH_LOW_SET(x)                             (((x) << 21) & 0x0fe00000)

/* macros for bb_chn_reg_map.BB_ext_chan_scorr_thr */
#define PHY_BB_EXT_CHAN_SCORR_THR_ADDRESS                                                     0x0000982c
#define PHY_BB_EXT_CHAN_SCORR_THR_OFFSET                                                      0x0000002c
#define PHY_BB_EXT_CHAN_SCORR_THR_M1_THRES_EXT_MSB                                                     6
#define PHY_BB_EXT_CHAN_SCORR_THR_M1_THRES_EXT_LSB                                                     0
#define PHY_BB_EXT_CHAN_SCORR_THR_M1_THRES_EXT_MASK                                           0x0000007f
#define PHY_BB_EXT_CHAN_SCORR_THR_M1_THRES_EXT_GET(x)                          (((x) & 0x0000007f) >> 0)
#define PHY_BB_EXT_CHAN_SCORR_THR_M1_THRES_EXT_SET(x)                          (((x) << 0) & 0x0000007f)
#define PHY_BB_EXT_CHAN_SCORR_THR_M2_THRES_EXT_MSB                                                    13
#define PHY_BB_EXT_CHAN_SCORR_THR_M2_THRES_EXT_LSB                                                     7
#define PHY_BB_EXT_CHAN_SCORR_THR_M2_THRES_EXT_MASK                                           0x00003f80
#define PHY_BB_EXT_CHAN_SCORR_THR_M2_THRES_EXT_GET(x)                          (((x) & 0x00003f80) >> 7)
#define PHY_BB_EXT_CHAN_SCORR_THR_M2_THRES_EXT_SET(x)                          (((x) << 7) & 0x00003f80)
#define PHY_BB_EXT_CHAN_SCORR_THR_M1_THRES_LOW_EXT_MSB                                                20
#define PHY_BB_EXT_CHAN_SCORR_THR_M1_THRES_LOW_EXT_LSB                                                14
#define PHY_BB_EXT_CHAN_SCORR_THR_M1_THRES_LOW_EXT_MASK                                       0x001fc000
#define PHY_BB_EXT_CHAN_SCORR_THR_M1_THRES_LOW_EXT_GET(x)                     (((x) & 0x001fc000) >> 14)
#define PHY_BB_EXT_CHAN_SCORR_THR_M1_THRES_LOW_EXT_SET(x)                     (((x) << 14) & 0x001fc000)
#define PHY_BB_EXT_CHAN_SCORR_THR_M2_THRES_LOW_EXT_MSB                                                27
#define PHY_BB_EXT_CHAN_SCORR_THR_M2_THRES_LOW_EXT_LSB                                                21
#define PHY_BB_EXT_CHAN_SCORR_THR_M2_THRES_LOW_EXT_MASK                                       0x0fe00000
#define PHY_BB_EXT_CHAN_SCORR_THR_M2_THRES_LOW_EXT_GET(x)                     (((x) & 0x0fe00000) >> 21)
#define PHY_BB_EXT_CHAN_SCORR_THR_M2_THRES_LOW_EXT_SET(x)                     (((x) << 21) & 0x0fe00000)
#define PHY_BB_EXT_CHAN_SCORR_THR_SPUR_SUBCHANNEL_SD_MSB                                              28
#define PHY_BB_EXT_CHAN_SCORR_THR_SPUR_SUBCHANNEL_SD_LSB                                              28
#define PHY_BB_EXT_CHAN_SCORR_THR_SPUR_SUBCHANNEL_SD_MASK                                     0x10000000
#define PHY_BB_EXT_CHAN_SCORR_THR_SPUR_SUBCHANNEL_SD_GET(x)                   (((x) & 0x10000000) >> 28)
#define PHY_BB_EXT_CHAN_SCORR_THR_SPUR_SUBCHANNEL_SD_SET(x)                   (((x) << 28) & 0x10000000)

/* macros for bb_chn_reg_map.BB_ext_chan_pwr_thr_2_b0 */
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_ADDRESS                                                  0x00009830
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_OFFSET                                                   0x00000030
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_CF_MAXCCAPWR_EXT_0_MSB                                            8
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_CF_MAXCCAPWR_EXT_0_LSB                                            0
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_CF_MAXCCAPWR_EXT_0_MASK                                  0x000001ff
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_CF_MAXCCAPWR_EXT_0_GET(x)                 (((x) & 0x000001ff) >> 0)
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_CF_MAXCCAPWR_EXT_0_SET(x)                 (((x) << 0) & 0x000001ff)
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_CYCPWR_THR1_EXT_MSB                                              15
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_CYCPWR_THR1_EXT_LSB                                               9
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_CYCPWR_THR1_EXT_MASK                                     0x0000fe00
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_CYCPWR_THR1_EXT_GET(x)                    (((x) & 0x0000fe00) >> 9)
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_CYCPWR_THR1_EXT_SET(x)                    (((x) << 9) & 0x0000fe00)
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_MINCCAPWR_EXT_0_MSB                                              24
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_MINCCAPWR_EXT_0_LSB                                              16
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_MINCCAPWR_EXT_0_MASK                                     0x01ff0000
#define PHY_BB_EXT_CHAN_PWR_THR_2_B0_MINCCAPWR_EXT_0_GET(x)                   (((x) & 0x01ff0000) >> 16)

/* macros for bb_chn_reg_map.BB_radar_detection */
#define PHY_BB_RADAR_DETECTION_ADDRESS                                                        0x00009834
#define PHY_BB_RADAR_DETECTION_OFFSET                                                         0x00000034
#define PHY_BB_RADAR_DETECTION_PULSE_DETECT_ENABLE_MSB                                                 0
#define PHY_BB_RADAR_DETECTION_PULSE_DETECT_ENABLE_LSB                                                 0
#define PHY_BB_RADAR_DETECTION_PULSE_DETECT_ENABLE_MASK                                       0x00000001
#define PHY_BB_RADAR_DETECTION_PULSE_DETECT_ENABLE_GET(x)                      (((x) & 0x00000001) >> 0)
#define PHY_BB_RADAR_DETECTION_PULSE_DETECT_ENABLE_SET(x)                      (((x) << 0) & 0x00000001)
#define PHY_BB_RADAR_DETECTION_PULSE_IN_BAND_THRESH_MSB                                                5
#define PHY_BB_RADAR_DETECTION_PULSE_IN_BAND_THRESH_LSB                                                1
#define PHY_BB_RADAR_DETECTION_PULSE_IN_BAND_THRESH_MASK                                      0x0000003e
#define PHY_BB_RADAR_DETECTION_PULSE_IN_BAND_THRESH_GET(x)                     (((x) & 0x0000003e) >> 1)
#define PHY_BB_RADAR_DETECTION_PULSE_IN_BAND_THRESH_SET(x)                     (((x) << 1) & 0x0000003e)
#define PHY_BB_RADAR_DETECTION_PULSE_RSSI_THRESH_MSB                                                  11
#define PHY_BB_RADAR_DETECTION_PULSE_RSSI_THRESH_LSB                                                   6
#define PHY_BB_RADAR_DETECTION_PULSE_RSSI_THRESH_MASK                                         0x00000fc0
#define PHY_BB_RADAR_DETECTION_PULSE_RSSI_THRESH_GET(x)                        (((x) & 0x00000fc0) >> 6)
#define PHY_BB_RADAR_DETECTION_PULSE_RSSI_THRESH_SET(x)                        (((x) << 6) & 0x00000fc0)
#define PHY_BB_RADAR_DETECTION_PULSE_HEIGHT_THRESH_MSB                                                17
#define PHY_BB_RADAR_DETECTION_PULSE_HEIGHT_THRESH_LSB                                                12
#define PHY_BB_RADAR_DETECTION_PULSE_HEIGHT_THRESH_MASK                                       0x0003f000
#define PHY_BB_RADAR_DETECTION_PULSE_HEIGHT_THRESH_GET(x)                     (((x) & 0x0003f000) >> 12)
#define PHY_BB_RADAR_DETECTION_PULSE_HEIGHT_THRESH_SET(x)                     (((x) << 12) & 0x0003f000)
#define PHY_BB_RADAR_DETECTION_RADAR_RSSI_THRESH_MSB                                                  23
#define PHY_BB_RADAR_DETECTION_RADAR_RSSI_THRESH_LSB                                                  18
#define PHY_BB_RADAR_DETECTION_RADAR_RSSI_THRESH_MASK                                         0x00fc0000
#define PHY_BB_RADAR_DETECTION_RADAR_RSSI_THRESH_GET(x)                       (((x) & 0x00fc0000) >> 18)
#define PHY_BB_RADAR_DETECTION_RADAR_RSSI_THRESH_SET(x)                       (((x) << 18) & 0x00fc0000)
#define PHY_BB_RADAR_DETECTION_RADAR_FIRPWR_THRESH_MSB                                                30
#define PHY_BB_RADAR_DETECTION_RADAR_FIRPWR_THRESH_LSB                                                24
#define PHY_BB_RADAR_DETECTION_RADAR_FIRPWR_THRESH_MASK                                       0x7f000000
#define PHY_BB_RADAR_DETECTION_RADAR_FIRPWR_THRESH_GET(x)                     (((x) & 0x7f000000) >> 24)
#define PHY_BB_RADAR_DETECTION_RADAR_FIRPWR_THRESH_SET(x)                     (((x) << 24) & 0x7f000000)
#define PHY_BB_RADAR_DETECTION_ENABLE_RADAR_FFT_MSB                                                   31
#define PHY_BB_RADAR_DETECTION_ENABLE_RADAR_FFT_LSB                                                   31
#define PHY_BB_RADAR_DETECTION_ENABLE_RADAR_FFT_MASK                                          0x80000000
#define PHY_BB_RADAR_DETECTION_ENABLE_RADAR_FFT_GET(x)                        (((x) & 0x80000000) >> 31)
#define PHY_BB_RADAR_DETECTION_ENABLE_RADAR_FFT_SET(x)                        (((x) << 31) & 0x80000000)

/* macros for bb_chn_reg_map.BB_radar_detection_2 */
#define PHY_BB_RADAR_DETECTION_2_ADDRESS                                                      0x00009838
#define PHY_BB_RADAR_DETECTION_2_OFFSET                                                       0x00000038
#define PHY_BB_RADAR_DETECTION_2_RADAR_LENGTH_MAX_MSB                                                  7
#define PHY_BB_RADAR_DETECTION_2_RADAR_LENGTH_MAX_LSB                                                  0
#define PHY_BB_RADAR_DETECTION_2_RADAR_LENGTH_MAX_MASK                                        0x000000ff
#define PHY_BB_RADAR_DETECTION_2_RADAR_LENGTH_MAX_GET(x)                       (((x) & 0x000000ff) >> 0)
#define PHY_BB_RADAR_DETECTION_2_RADAR_LENGTH_MAX_SET(x)                       (((x) << 0) & 0x000000ff)
#define PHY_BB_RADAR_DETECTION_2_PULSE_RELSTEP_THRESH_MSB                                             12
#define PHY_BB_RADAR_DETECTION_2_PULSE_RELSTEP_THRESH_LSB                                              8
#define PHY_BB_RADAR_DETECTION_2_PULSE_RELSTEP_THRESH_MASK                                    0x00001f00
#define PHY_BB_RADAR_DETECTION_2_PULSE_RELSTEP_THRESH_GET(x)                   (((x) & 0x00001f00) >> 8)
#define PHY_BB_RADAR_DETECTION_2_PULSE_RELSTEP_THRESH_SET(x)                   (((x) << 8) & 0x00001f00)
#define PHY_BB_RADAR_DETECTION_2_ENABLE_PULSE_RELSTEP_CHECK_MSB                                       13
#define PHY_BB_RADAR_DETECTION_2_ENABLE_PULSE_RELSTEP_CHECK_LSB                                       13
#define PHY_BB_RADAR_DETECTION_2_ENABLE_PULSE_RELSTEP_CHECK_MASK                              0x00002000
#define PHY_BB_RADAR_DETECTION_2_ENABLE_PULSE_RELSTEP_CHECK_GET(x)            (((x) & 0x00002000) >> 13)
#define PHY_BB_RADAR_DETECTION_2_ENABLE_PULSE_RELSTEP_CHECK_SET(x)            (((x) << 13) & 0x00002000)
#define PHY_BB_RADAR_DETECTION_2_ENABLE_MAX_RADAR_RSSI_MSB                                            14
#define PHY_BB_RADAR_DETECTION_2_ENABLE_MAX_RADAR_RSSI_LSB                                            14
#define PHY_BB_RADAR_DETECTION_2_ENABLE_MAX_RADAR_RSSI_MASK                                   0x00004000
#define PHY_BB_RADAR_DETECTION_2_ENABLE_MAX_RADAR_RSSI_GET(x)                 (((x) & 0x00004000) >> 14)
#define PHY_BB_RADAR_DETECTION_2_ENABLE_MAX_RADAR_RSSI_SET(x)                 (((x) << 14) & 0x00004000)
#define PHY_BB_RADAR_DETECTION_2_ENABLE_BLOCK_RADAR_CHECK_MSB                                         15
#define PHY_BB_RADAR_DETECTION_2_ENABLE_BLOCK_RADAR_CHECK_LSB                                         15
#define PHY_BB_RADAR_DETECTION_2_ENABLE_BLOCK_RADAR_CHECK_MASK                                0x00008000
#define PHY_BB_RADAR_DETECTION_2_ENABLE_BLOCK_RADAR_CHECK_GET(x)              (((x) & 0x00008000) >> 15)
#define PHY_BB_RADAR_DETECTION_2_ENABLE_BLOCK_RADAR_CHECK_SET(x)              (((x) << 15) & 0x00008000)
#define PHY_BB_RADAR_DETECTION_2_RADAR_RELPWR_THRESH_MSB                                              21
#define PHY_BB_RADAR_DETECTION_2_RADAR_RELPWR_THRESH_LSB                                              16
#define PHY_BB_RADAR_DETECTION_2_RADAR_RELPWR_THRESH_MASK                                     0x003f0000
#define PHY_BB_RADAR_DETECTION_2_RADAR_RELPWR_THRESH_GET(x)                   (((x) & 0x003f0000) >> 16)
#define PHY_BB_RADAR_DETECTION_2_RADAR_RELPWR_THRESH_SET(x)                   (((x) << 16) & 0x003f0000)
#define PHY_BB_RADAR_DETECTION_2_RADAR_USE_FIRPWR_128_MSB                                             22
#define PHY_BB_RADAR_DETECTION_2_RADAR_USE_FIRPWR_128_LSB                                             22
#define PHY_BB_RADAR_DETECTION_2_RADAR_USE_FIRPWR_128_MASK                                    0x00400000
#define PHY_BB_RADAR_DETECTION_2_RADAR_USE_FIRPWR_128_GET(x)                  (((x) & 0x00400000) >> 22)
#define PHY_BB_RADAR_DETECTION_2_RADAR_USE_FIRPWR_128_SET(x)                  (((x) << 22) & 0x00400000)
#define PHY_BB_RADAR_DETECTION_2_ENABLE_RADAR_RELPWR_CHECK_MSB                                        23
#define PHY_BB_RADAR_DETECTION_2_ENABLE_RADAR_RELPWR_CHECK_LSB                                        23
#define PHY_BB_RADAR_DETECTION_2_ENABLE_RADAR_RELPWR_CHECK_MASK                               0x00800000
#define PHY_BB_RADAR_DETECTION_2_ENABLE_RADAR_RELPWR_CHECK_GET(x)             (((x) & 0x00800000) >> 23)
#define PHY_BB_RADAR_DETECTION_2_ENABLE_RADAR_RELPWR_CHECK_SET(x)             (((x) << 23) & 0x00800000)
#define PHY_BB_RADAR_DETECTION_2_CF_RADAR_BIN_THRESH_SEL_MSB                                          26
#define PHY_BB_RADAR_DETECTION_2_CF_RADAR_BIN_THRESH_SEL_LSB                                          24
#define PHY_BB_RADAR_DETECTION_2_CF_RADAR_BIN_THRESH_SEL_MASK                                 0x07000000
#define PHY_BB_RADAR_DETECTION_2_CF_RADAR_BIN_THRESH_SEL_GET(x)               (((x) & 0x07000000) >> 24)
#define PHY_BB_RADAR_DETECTION_2_CF_RADAR_BIN_THRESH_SEL_SET(x)               (((x) << 24) & 0x07000000)
#define PHY_BB_RADAR_DETECTION_2_ENABLE_PULSE_GC_COUNT_CHECK_MSB                                      27
#define PHY_BB_RADAR_DETECTION_2_ENABLE_PULSE_GC_COUNT_CHECK_LSB                                      27
#define PHY_BB_RADAR_DETECTION_2_ENABLE_PULSE_GC_COUNT_CHECK_MASK                             0x08000000
#define PHY_BB_RADAR_DETECTION_2_ENABLE_PULSE_GC_COUNT_CHECK_GET(x)           (((x) & 0x08000000) >> 27)
#define PHY_BB_RADAR_DETECTION_2_ENABLE_PULSE_GC_COUNT_CHECK_SET(x)           (((x) << 27) & 0x08000000)

/* macros for bb_chn_reg_map.BB_extension_radar */
#define PHY_BB_EXTENSION_RADAR_ADDRESS                                                        0x0000983c
#define PHY_BB_EXTENSION_RADAR_OFFSET                                                         0x0000003c
#define PHY_BB_EXTENSION_RADAR_BLOCKER40_MAX_RADAR_MSB                                                13
#define PHY_BB_EXTENSION_RADAR_BLOCKER40_MAX_RADAR_LSB                                                 8
#define PHY_BB_EXTENSION_RADAR_BLOCKER40_MAX_RADAR_MASK                                       0x00003f00
#define PHY_BB_EXTENSION_RADAR_BLOCKER40_MAX_RADAR_GET(x)                      (((x) & 0x00003f00) >> 8)
#define PHY_BB_EXTENSION_RADAR_BLOCKER40_MAX_RADAR_SET(x)                      (((x) << 8) & 0x00003f00)
#define PHY_BB_EXTENSION_RADAR_ENABLE_EXT_RADAR_MSB                                                   14
#define PHY_BB_EXTENSION_RADAR_ENABLE_EXT_RADAR_LSB                                                   14
#define PHY_BB_EXTENSION_RADAR_ENABLE_EXT_RADAR_MASK                                          0x00004000
#define PHY_BB_EXTENSION_RADAR_ENABLE_EXT_RADAR_GET(x)                        (((x) & 0x00004000) >> 14)
#define PHY_BB_EXTENSION_RADAR_ENABLE_EXT_RADAR_SET(x)                        (((x) << 14) & 0x00004000)
#define PHY_BB_EXTENSION_RADAR_RADAR_DC_PWR_THRESH_MSB                                                22
#define PHY_BB_EXTENSION_RADAR_RADAR_DC_PWR_THRESH_LSB                                                15
#define PHY_BB_EXTENSION_RADAR_RADAR_DC_PWR_THRESH_MASK                                       0x007f8000
#define PHY_BB_EXTENSION_RADAR_RADAR_DC_PWR_THRESH_GET(x)                     (((x) & 0x007f8000) >> 15)
#define PHY_BB_EXTENSION_RADAR_RADAR_DC_PWR_THRESH_SET(x)                     (((x) << 15) & 0x007f8000)
#define PHY_BB_EXTENSION_RADAR_RADAR_LB_DC_CAP_MSB                                                    30
#define PHY_BB_EXTENSION_RADAR_RADAR_LB_DC_CAP_LSB                                                    23
#define PHY_BB_EXTENSION_RADAR_RADAR_LB_DC_CAP_MASK                                           0x7f800000
#define PHY_BB_EXTENSION_RADAR_RADAR_LB_DC_CAP_GET(x)                         (((x) & 0x7f800000) >> 23)
#define PHY_BB_EXTENSION_RADAR_RADAR_LB_DC_CAP_SET(x)                         (((x) << 23) & 0x7f800000)
#define PHY_BB_EXTENSION_RADAR_DISABLE_ADCSAT_HOLD_MSB                                                31
#define PHY_BB_EXTENSION_RADAR_DISABLE_ADCSAT_HOLD_LSB                                                31
#define PHY_BB_EXTENSION_RADAR_DISABLE_ADCSAT_HOLD_MASK                                       0x80000000
#define PHY_BB_EXTENSION_RADAR_DISABLE_ADCSAT_HOLD_GET(x)                     (((x) & 0x80000000) >> 31)
#define PHY_BB_EXTENSION_RADAR_DISABLE_ADCSAT_HOLD_SET(x)                     (((x) << 31) & 0x80000000)

/* macros for bb_chn_reg_map.BB_multichain_control */
#define PHY_BB_MULTICHAIN_CONTROL_ADDRESS                                                     0x00009880
#define PHY_BB_MULTICHAIN_CONTROL_OFFSET                                                      0x00000080
#define PHY_BB_MULTICHAIN_CONTROL_FORCE_ANALOG_GAIN_DIFF_MSB                                           0
#define PHY_BB_MULTICHAIN_CONTROL_FORCE_ANALOG_GAIN_DIFF_LSB                                           0
#define PHY_BB_MULTICHAIN_CONTROL_FORCE_ANALOG_GAIN_DIFF_MASK                                 0x00000001
#define PHY_BB_MULTICHAIN_CONTROL_FORCE_ANALOG_GAIN_DIFF_GET(x)                (((x) & 0x00000001) >> 0)
#define PHY_BB_MULTICHAIN_CONTROL_FORCE_ANALOG_GAIN_DIFF_SET(x)                (((x) << 0) & 0x00000001)
#define PHY_BB_MULTICHAIN_CONTROL_FORCED_GAIN_DIFF_01_MSB                                              7
#define PHY_BB_MULTICHAIN_CONTROL_FORCED_GAIN_DIFF_01_LSB                                              1
#define PHY_BB_MULTICHAIN_CONTROL_FORCED_GAIN_DIFF_01_MASK                                    0x000000fe
#define PHY_BB_MULTICHAIN_CONTROL_FORCED_GAIN_DIFF_01_GET(x)                   (((x) & 0x000000fe) >> 1)
#define PHY_BB_MULTICHAIN_CONTROL_FORCED_GAIN_DIFF_01_SET(x)                   (((x) << 1) & 0x000000fe)
#define PHY_BB_MULTICHAIN_CONTROL_SYNC_SYNTHON_MSB                                                     8
#define PHY_BB_MULTICHAIN_CONTROL_SYNC_SYNTHON_LSB                                                     8
#define PHY_BB_MULTICHAIN_CONTROL_SYNC_SYNTHON_MASK                                           0x00000100
#define PHY_BB_MULTICHAIN_CONTROL_SYNC_SYNTHON_GET(x)                          (((x) & 0x00000100) >> 8)
#define PHY_BB_MULTICHAIN_CONTROL_SYNC_SYNTHON_SET(x)                          (((x) << 8) & 0x00000100)
#define PHY_BB_MULTICHAIN_CONTROL_USE_POSEDGE_REFCLK_MSB                                               9
#define PHY_BB_MULTICHAIN_CONTROL_USE_POSEDGE_REFCLK_LSB                                               9
#define PHY_BB_MULTICHAIN_CONTROL_USE_POSEDGE_REFCLK_MASK                                     0x00000200
#define PHY_BB_MULTICHAIN_CONTROL_USE_POSEDGE_REFCLK_GET(x)                    (((x) & 0x00000200) >> 9)
#define PHY_BB_MULTICHAIN_CONTROL_USE_POSEDGE_REFCLK_SET(x)                    (((x) << 9) & 0x00000200)
#define PHY_BB_MULTICHAIN_CONTROL_CF_SHORT_SAT_MSB                                                    20
#define PHY_BB_MULTICHAIN_CONTROL_CF_SHORT_SAT_LSB                                                    10
#define PHY_BB_MULTICHAIN_CONTROL_CF_SHORT_SAT_MASK                                           0x001ffc00
#define PHY_BB_MULTICHAIN_CONTROL_CF_SHORT_SAT_GET(x)                         (((x) & 0x001ffc00) >> 10)
#define PHY_BB_MULTICHAIN_CONTROL_CF_SHORT_SAT_SET(x)                         (((x) << 10) & 0x001ffc00)
#define PHY_BB_MULTICHAIN_CONTROL_FORCED_GAIN_DIFF_02_MSB                                             28
#define PHY_BB_MULTICHAIN_CONTROL_FORCED_GAIN_DIFF_02_LSB                                             22
#define PHY_BB_MULTICHAIN_CONTROL_FORCED_GAIN_DIFF_02_MASK                                    0x1fc00000
#define PHY_BB_MULTICHAIN_CONTROL_FORCED_GAIN_DIFF_02_GET(x)                  (((x) & 0x1fc00000) >> 22)
#define PHY_BB_MULTICHAIN_CONTROL_FORCED_GAIN_DIFF_02_SET(x)                  (((x) << 22) & 0x1fc00000)
#define PHY_BB_MULTICHAIN_CONTROL_FORCE_SIGMA_ZERO_MSB                                                29
#define PHY_BB_MULTICHAIN_CONTROL_FORCE_SIGMA_ZERO_LSB                                                29
#define PHY_BB_MULTICHAIN_CONTROL_FORCE_SIGMA_ZERO_MASK                                       0x20000000
#define PHY_BB_MULTICHAIN_CONTROL_FORCE_SIGMA_ZERO_GET(x)                     (((x) & 0x20000000) >> 29)
#define PHY_BB_MULTICHAIN_CONTROL_FORCE_SIGMA_ZERO_SET(x)                     (((x) << 29) & 0x20000000)

/* macros for bb_chn_reg_map.BB_per_chain_csd */
#define PHY_BB_PER_CHAIN_CSD_ADDRESS                                                          0x00009884
#define PHY_BB_PER_CHAIN_CSD_OFFSET                                                           0x00000084
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN1_2CHAINS_MSB                                                      4
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN1_2CHAINS_LSB                                                      0
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN1_2CHAINS_MASK                                            0x0000001f
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN1_2CHAINS_GET(x)                           (((x) & 0x0000001f) >> 0)
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN1_2CHAINS_SET(x)                           (((x) << 0) & 0x0000001f)
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN1_3CHAINS_MSB                                                      9
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN1_3CHAINS_LSB                                                      5
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN1_3CHAINS_MASK                                            0x000003e0
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN1_3CHAINS_GET(x)                           (((x) & 0x000003e0) >> 5)
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN1_3CHAINS_SET(x)                           (((x) << 5) & 0x000003e0)
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN2_3CHAINS_MSB                                                     14
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN2_3CHAINS_LSB                                                     10
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN2_3CHAINS_MASK                                            0x00007c00
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN2_3CHAINS_GET(x)                          (((x) & 0x00007c00) >> 10)
#define PHY_BB_PER_CHAIN_CSD_CSD_CHN2_3CHAINS_SET(x)                          (((x) << 10) & 0x00007c00)

/* macros for bb_chn_reg_map.BB_tx_crc */
#define PHY_BB_TX_CRC_ADDRESS                                                                 0x000098a0
#define PHY_BB_TX_CRC_OFFSET                                                                  0x000000a0
#define PHY_BB_TX_CRC_TX_CRC_MSB                                                                      15
#define PHY_BB_TX_CRC_TX_CRC_LSB                                                                       0
#define PHY_BB_TX_CRC_TX_CRC_MASK                                                             0x0000ffff
#define PHY_BB_TX_CRC_TX_CRC_GET(x)                                            (((x) & 0x0000ffff) >> 0)

/* macros for bb_chn_reg_map.BB_tstdac_constant */
#define PHY_BB_TSTDAC_CONSTANT_ADDRESS                                                        0x000098a4
#define PHY_BB_TSTDAC_CONSTANT_OFFSET                                                         0x000000a4
#define PHY_BB_TSTDAC_CONSTANT_CF_TSTDAC_CONSTANT_I_MSB                                               10
#define PHY_BB_TSTDAC_CONSTANT_CF_TSTDAC_CONSTANT_I_LSB                                                0
#define PHY_BB_TSTDAC_CONSTANT_CF_TSTDAC_CONSTANT_I_MASK                                      0x000007ff
#define PHY_BB_TSTDAC_CONSTANT_CF_TSTDAC_CONSTANT_I_GET(x)                     (((x) & 0x000007ff) >> 0)
#define PHY_BB_TSTDAC_CONSTANT_CF_TSTDAC_CONSTANT_I_SET(x)                     (((x) << 0) & 0x000007ff)
#define PHY_BB_TSTDAC_CONSTANT_CF_TSTDAC_CONSTANT_Q_MSB                                               21
#define PHY_BB_TSTDAC_CONSTANT_CF_TSTDAC_CONSTANT_Q_LSB                                               11
#define PHY_BB_TSTDAC_CONSTANT_CF_TSTDAC_CONSTANT_Q_MASK                                      0x003ff800
#define PHY_BB_TSTDAC_CONSTANT_CF_TSTDAC_CONSTANT_Q_GET(x)                    (((x) & 0x003ff800) >> 11)
#define PHY_BB_TSTDAC_CONSTANT_CF_TSTDAC_CONSTANT_Q_SET(x)                    (((x) << 11) & 0x003ff800)

/* macros for bb_chn_reg_map.BB_spur_report_b0 */
#define PHY_BB_SPUR_REPORT_B0_ADDRESS                                                         0x000098a8
#define PHY_BB_SPUR_REPORT_B0_OFFSET                                                          0x000000a8
#define PHY_BB_SPUR_REPORT_B0_SPUR_EST_I_0_MSB                                                         7
#define PHY_BB_SPUR_REPORT_B0_SPUR_EST_I_0_LSB                                                         0
#define PHY_BB_SPUR_REPORT_B0_SPUR_EST_I_0_MASK                                               0x000000ff
#define PHY_BB_SPUR_REPORT_B0_SPUR_EST_I_0_GET(x)                              (((x) & 0x000000ff) >> 0)
#define PHY_BB_SPUR_REPORT_B0_SPUR_EST_Q_0_MSB                                                        15
#define PHY_BB_SPUR_REPORT_B0_SPUR_EST_Q_0_LSB                                                         8
#define PHY_BB_SPUR_REPORT_B0_SPUR_EST_Q_0_MASK                                               0x0000ff00
#define PHY_BB_SPUR_REPORT_B0_SPUR_EST_Q_0_GET(x)                              (((x) & 0x0000ff00) >> 8)
#define PHY_BB_SPUR_REPORT_B0_POWER_WITH_SPUR_REMOVED_0_MSB                                           31
#define PHY_BB_SPUR_REPORT_B0_POWER_WITH_SPUR_REMOVED_0_LSB                                           16
#define PHY_BB_SPUR_REPORT_B0_POWER_WITH_SPUR_REMOVED_0_MASK                                  0xffff0000
#define PHY_BB_SPUR_REPORT_B0_POWER_WITH_SPUR_REMOVED_0_GET(x)                (((x) & 0xffff0000) >> 16)

/* macros for bb_chn_reg_map.BB_txiqcal_control_3 */
#define PHY_BB_TXIQCAL_CONTROL_3_ADDRESS                                                      0x000098b0
#define PHY_BB_TXIQCAL_CONTROL_3_OFFSET                                                       0x000000b0
#define PHY_BB_TXIQCAL_CONTROL_3_PWR_HIGH_DB_MSB                                                       5
#define PHY_BB_TXIQCAL_CONTROL_3_PWR_HIGH_DB_LSB                                                       0
#define PHY_BB_TXIQCAL_CONTROL_3_PWR_HIGH_DB_MASK                                             0x0000003f
#define PHY_BB_TXIQCAL_CONTROL_3_PWR_HIGH_DB_GET(x)                            (((x) & 0x0000003f) >> 0)
#define PHY_BB_TXIQCAL_CONTROL_3_PWR_HIGH_DB_SET(x)                            (((x) << 0) & 0x0000003f)
#define PHY_BB_TXIQCAL_CONTROL_3_PWR_LOW_DB_MSB                                                       11
#define PHY_BB_TXIQCAL_CONTROL_3_PWR_LOW_DB_LSB                                                        6
#define PHY_BB_TXIQCAL_CONTROL_3_PWR_LOW_DB_MASK                                              0x00000fc0
#define PHY_BB_TXIQCAL_CONTROL_3_PWR_LOW_DB_GET(x)                             (((x) & 0x00000fc0) >> 6)
#define PHY_BB_TXIQCAL_CONTROL_3_PWR_LOW_DB_SET(x)                             (((x) << 6) & 0x00000fc0)
#define PHY_BB_TXIQCAL_CONTROL_3_IQCAL_TONE_PHS_STEP_MSB                                              21
#define PHY_BB_TXIQCAL_CONTROL_3_IQCAL_TONE_PHS_STEP_LSB                                              12
#define PHY_BB_TXIQCAL_CONTROL_3_IQCAL_TONE_PHS_STEP_MASK                                     0x003ff000
#define PHY_BB_TXIQCAL_CONTROL_3_IQCAL_TONE_PHS_STEP_GET(x)                   (((x) & 0x003ff000) >> 12)
#define PHY_BB_TXIQCAL_CONTROL_3_IQCAL_TONE_PHS_STEP_SET(x)                   (((x) << 12) & 0x003ff000)
#define PHY_BB_TXIQCAL_CONTROL_3_DC_EST_LEN_MSB                                                       23
#define PHY_BB_TXIQCAL_CONTROL_3_DC_EST_LEN_LSB                                                       22
#define PHY_BB_TXIQCAL_CONTROL_3_DC_EST_LEN_MASK                                              0x00c00000
#define PHY_BB_TXIQCAL_CONTROL_3_DC_EST_LEN_GET(x)                            (((x) & 0x00c00000) >> 22)
#define PHY_BB_TXIQCAL_CONTROL_3_DC_EST_LEN_SET(x)                            (((x) << 22) & 0x00c00000)
#define PHY_BB_TXIQCAL_CONTROL_3_ADC_SAT_LEN_MSB                                                      24
#define PHY_BB_TXIQCAL_CONTROL_3_ADC_SAT_LEN_LSB                                                      24
#define PHY_BB_TXIQCAL_CONTROL_3_ADC_SAT_LEN_MASK                                             0x01000000
#define PHY_BB_TXIQCAL_CONTROL_3_ADC_SAT_LEN_GET(x)                           (((x) & 0x01000000) >> 24)
#define PHY_BB_TXIQCAL_CONTROL_3_ADC_SAT_LEN_SET(x)                           (((x) << 24) & 0x01000000)
#define PHY_BB_TXIQCAL_CONTROL_3_ADC_SAT_SEL_MSB                                                      26
#define PHY_BB_TXIQCAL_CONTROL_3_ADC_SAT_SEL_LSB                                                      25
#define PHY_BB_TXIQCAL_CONTROL_3_ADC_SAT_SEL_MASK                                             0x06000000
#define PHY_BB_TXIQCAL_CONTROL_3_ADC_SAT_SEL_GET(x)                           (((x) & 0x06000000) >> 25)
#define PHY_BB_TXIQCAL_CONTROL_3_ADC_SAT_SEL_SET(x)                           (((x) << 25) & 0x06000000)
#define PHY_BB_TXIQCAL_CONTROL_3_IQCAL_MEAS_LEN_MSB                                                   28
#define PHY_BB_TXIQCAL_CONTROL_3_IQCAL_MEAS_LEN_LSB                                                   27
#define PHY_BB_TXIQCAL_CONTROL_3_IQCAL_MEAS_LEN_MASK                                          0x18000000
#define PHY_BB_TXIQCAL_CONTROL_3_IQCAL_MEAS_LEN_GET(x)                        (((x) & 0x18000000) >> 27)
#define PHY_BB_TXIQCAL_CONTROL_3_IQCAL_MEAS_LEN_SET(x)                        (((x) << 27) & 0x18000000)
#define PHY_BB_TXIQCAL_CONTROL_3_DESIRED_SIZE_DB_MSB                                                  30
#define PHY_BB_TXIQCAL_CONTROL_3_DESIRED_SIZE_DB_LSB                                                  29
#define PHY_BB_TXIQCAL_CONTROL_3_DESIRED_SIZE_DB_MASK                                         0x60000000
#define PHY_BB_TXIQCAL_CONTROL_3_DESIRED_SIZE_DB_GET(x)                       (((x) & 0x60000000) >> 29)
#define PHY_BB_TXIQCAL_CONTROL_3_DESIRED_SIZE_DB_SET(x)                       (((x) << 29) & 0x60000000)
#define PHY_BB_TXIQCAL_CONTROL_3_TX_IQCORR_EN_MSB                                                     31
#define PHY_BB_TXIQCAL_CONTROL_3_TX_IQCORR_EN_LSB                                                     31
#define PHY_BB_TXIQCAL_CONTROL_3_TX_IQCORR_EN_MASK                                            0x80000000
#define PHY_BB_TXIQCAL_CONTROL_3_TX_IQCORR_EN_GET(x)                          (((x) & 0x80000000) >> 31)
#define PHY_BB_TXIQCAL_CONTROL_3_TX_IQCORR_EN_SET(x)                          (((x) << 31) & 0x80000000)

/* macros for bb_chn_reg_map.BB_green_tx_control_1 */
#define PHY_BB_GREEN_TX_CONTROL_1_ADDRESS                                                     0x000098bc
#define PHY_BB_GREEN_TX_CONTROL_1_OFFSET                                                      0x000000bc
#define PHY_BB_GREEN_TX_CONTROL_1_GREEN_TX_ENABLE_MSB                                                  0
#define PHY_BB_GREEN_TX_CONTROL_1_GREEN_TX_ENABLE_LSB                                                  0
#define PHY_BB_GREEN_TX_CONTROL_1_GREEN_TX_ENABLE_MASK                                        0x00000001
#define PHY_BB_GREEN_TX_CONTROL_1_GREEN_TX_ENABLE_GET(x)                       (((x) & 0x00000001) >> 0)
#define PHY_BB_GREEN_TX_CONTROL_1_GREEN_TX_ENABLE_SET(x)                       (((x) << 0) & 0x00000001)
#define PHY_BB_GREEN_TX_CONTROL_1_GREEN_CASES_MSB                                                      1
#define PHY_BB_GREEN_TX_CONTROL_1_GREEN_CASES_LSB                                                      1
#define PHY_BB_GREEN_TX_CONTROL_1_GREEN_CASES_MASK                                            0x00000002
#define PHY_BB_GREEN_TX_CONTROL_1_GREEN_CASES_GET(x)                           (((x) & 0x00000002) >> 1)
#define PHY_BB_GREEN_TX_CONTROL_1_GREEN_CASES_SET(x)                           (((x) << 1) & 0x00000002)

/* macros for bb_chn_reg_map.BB_iq_adc_meas_0_b0 */
#define PHY_BB_IQ_ADC_MEAS_0_B0_ADDRESS                                                       0x000098c0
#define PHY_BB_IQ_ADC_MEAS_0_B0_OFFSET                                                        0x000000c0
#define PHY_BB_IQ_ADC_MEAS_0_B0_GAIN_DC_IQ_CAL_MEAS_0_0_MSB                                           31
#define PHY_BB_IQ_ADC_MEAS_0_B0_GAIN_DC_IQ_CAL_MEAS_0_0_LSB                                            0
#define PHY_BB_IQ_ADC_MEAS_0_B0_GAIN_DC_IQ_CAL_MEAS_0_0_MASK                                  0xffffffff
#define PHY_BB_IQ_ADC_MEAS_0_B0_GAIN_DC_IQ_CAL_MEAS_0_0_GET(x)                 (((x) & 0xffffffff) >> 0)

/* macros for bb_chn_reg_map.BB_iq_adc_meas_1_b0 */
#define PHY_BB_IQ_ADC_MEAS_1_B0_ADDRESS                                                       0x000098c4
#define PHY_BB_IQ_ADC_MEAS_1_B0_OFFSET                                                        0x000000c4
#define PHY_BB_IQ_ADC_MEAS_1_B0_GAIN_DC_IQ_CAL_MEAS_1_0_MSB                                           31
#define PHY_BB_IQ_ADC_MEAS_1_B0_GAIN_DC_IQ_CAL_MEAS_1_0_LSB                                            0
#define PHY_BB_IQ_ADC_MEAS_1_B0_GAIN_DC_IQ_CAL_MEAS_1_0_MASK                                  0xffffffff
#define PHY_BB_IQ_ADC_MEAS_1_B0_GAIN_DC_IQ_CAL_MEAS_1_0_GET(x)                 (((x) & 0xffffffff) >> 0)

/* macros for bb_chn_reg_map.BB_iq_adc_meas_2_b0 */
#define PHY_BB_IQ_ADC_MEAS_2_B0_ADDRESS                                                       0x000098c8
#define PHY_BB_IQ_ADC_MEAS_2_B0_OFFSET                                                        0x000000c8
#define PHY_BB_IQ_ADC_MEAS_2_B0_GAIN_DC_IQ_CAL_MEAS_2_0_MSB                                           31
#define PHY_BB_IQ_ADC_MEAS_2_B0_GAIN_DC_IQ_CAL_MEAS_2_0_LSB                                            0
#define PHY_BB_IQ_ADC_MEAS_2_B0_GAIN_DC_IQ_CAL_MEAS_2_0_MASK                                  0xffffffff
#define PHY_BB_IQ_ADC_MEAS_2_B0_GAIN_DC_IQ_CAL_MEAS_2_0_GET(x)                 (((x) & 0xffffffff) >> 0)

/* macros for bb_chn_reg_map.BB_iq_adc_meas_3_b0 */
#define PHY_BB_IQ_ADC_MEAS_3_B0_ADDRESS                                                       0x000098cc
#define PHY_BB_IQ_ADC_MEAS_3_B0_OFFSET                                                        0x000000cc
#define PHY_BB_IQ_ADC_MEAS_3_B0_GAIN_DC_IQ_CAL_MEAS_3_0_MSB                                           31
#define PHY_BB_IQ_ADC_MEAS_3_B0_GAIN_DC_IQ_CAL_MEAS_3_0_LSB                                            0
#define PHY_BB_IQ_ADC_MEAS_3_B0_GAIN_DC_IQ_CAL_MEAS_3_0_MASK                                  0xffffffff
#define PHY_BB_IQ_ADC_MEAS_3_B0_GAIN_DC_IQ_CAL_MEAS_3_0_GET(x)                 (((x) & 0xffffffff) >> 0)

/* macros for bb_chn_reg_map.BB_tx_phase_ramp_b0 */
#define PHY_BB_TX_PHASE_RAMP_B0_ADDRESS                                                       0x000098d0
#define PHY_BB_TX_PHASE_RAMP_B0_OFFSET                                                        0x000000d0
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_ENABLE_0_MSB                                             0
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_ENABLE_0_LSB                                             0
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_ENABLE_0_MASK                                   0x00000001
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_ENABLE_0_GET(x)                  (((x) & 0x00000001) >> 0)
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_ENABLE_0_SET(x)                  (((x) << 0) & 0x00000001)
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_BIAS_0_MSB                                               6
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_BIAS_0_LSB                                               1
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_BIAS_0_MASK                                     0x0000007e
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_BIAS_0_GET(x)                    (((x) & 0x0000007e) >> 1)
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_BIAS_0_SET(x)                    (((x) << 1) & 0x0000007e)
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_INIT_0_MSB                                              16
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_INIT_0_LSB                                               7
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_INIT_0_MASK                                     0x0001ff80
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_INIT_0_GET(x)                    (((x) & 0x0001ff80) >> 7)
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_INIT_0_SET(x)                    (((x) << 7) & 0x0001ff80)
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_ALPHA_0_MSB                                             24
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_ALPHA_0_LSB                                             17
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_ALPHA_0_MASK                                    0x01fe0000
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_ALPHA_0_GET(x)                  (((x) & 0x01fe0000) >> 17)
#define PHY_BB_TX_PHASE_RAMP_B0_CF_PHASE_RAMP_ALPHA_0_SET(x)                  (((x) << 17) & 0x01fe0000)

/* macros for bb_chn_reg_map.BB_adc_gain_dc_corr_b0 */
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADDRESS                                                    0x000098d4
#define PHY_BB_ADC_GAIN_DC_CORR_B0_OFFSET                                                     0x000000d4
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_Q_COEFF_0_MSB                                         5
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_Q_COEFF_0_LSB                                         0
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_Q_COEFF_0_MASK                               0x0000003f
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_Q_COEFF_0_GET(x)              (((x) & 0x0000003f) >> 0)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_Q_COEFF_0_SET(x)              (((x) << 0) & 0x0000003f)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_I_COEFF_0_MSB                                        11
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_I_COEFF_0_LSB                                         6
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_I_COEFF_0_MASK                               0x00000fc0
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_I_COEFF_0_GET(x)              (((x) & 0x00000fc0) >> 6)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_I_COEFF_0_SET(x)              (((x) << 6) & 0x00000fc0)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_Q_COEFF_0_MSB                                          20
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_Q_COEFF_0_LSB                                          12
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_Q_COEFF_0_MASK                                 0x001ff000
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_Q_COEFF_0_GET(x)               (((x) & 0x001ff000) >> 12)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_Q_COEFF_0_SET(x)               (((x) << 12) & 0x001ff000)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_I_COEFF_0_MSB                                          29
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_I_COEFF_0_LSB                                          21
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_I_COEFF_0_MASK                                 0x3fe00000
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_I_COEFF_0_GET(x)               (((x) & 0x3fe00000) >> 21)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_I_COEFF_0_SET(x)               (((x) << 21) & 0x3fe00000)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_ENABLE_MSB                                           30
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_ENABLE_LSB                                           30
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_ENABLE_MASK                                  0x40000000
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_ENABLE_GET(x)                (((x) & 0x40000000) >> 30)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_GAIN_CORR_ENABLE_SET(x)                (((x) << 30) & 0x40000000)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_ENABLE_MSB                                             31
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_ENABLE_LSB                                             31
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_ENABLE_MASK                                    0x80000000
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_ENABLE_GET(x)                  (((x) & 0x80000000) >> 31)
#define PHY_BB_ADC_GAIN_DC_CORR_B0_ADC_DC_CORR_ENABLE_SET(x)                  (((x) << 31) & 0x80000000)

/* macros for bb_chn_reg_map.BB_rx_iq_corr_b0 */
#define PHY_BB_RX_IQ_CORR_B0_ADDRESS                                                          0x000098dc
#define PHY_BB_RX_IQ_CORR_B0_OFFSET                                                           0x000000dc
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_Q_Q_COFF_0_MSB                                                  6
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_Q_Q_COFF_0_LSB                                                  0
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_Q_Q_COFF_0_MASK                                        0x0000007f
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_Q_Q_COFF_0_GET(x)                       (((x) & 0x0000007f) >> 0)
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_Q_Q_COFF_0_SET(x)                       (((x) << 0) & 0x0000007f)
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_Q_I_COFF_0_MSB                                                 13
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_Q_I_COFF_0_LSB                                                  7
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_Q_I_COFF_0_MASK                                        0x00003f80
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_Q_I_COFF_0_GET(x)                       (((x) & 0x00003f80) >> 7)
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_Q_I_COFF_0_SET(x)                       (((x) << 7) & 0x00003f80)
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_ENABLE_MSB                                                     14
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_ENABLE_LSB                                                     14
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_ENABLE_MASK                                            0x00004000
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_ENABLE_GET(x)                          (((x) & 0x00004000) >> 14)
#define PHY_BB_RX_IQ_CORR_B0_RX_IQCORR_ENABLE_SET(x)                          (((x) << 14) & 0x00004000)
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_Q_Q_COFF_0_MSB                                           21
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_Q_Q_COFF_0_LSB                                           15
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_Q_Q_COFF_0_MASK                                  0x003f8000
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_Q_Q_COFF_0_GET(x)                (((x) & 0x003f8000) >> 15)
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_Q_Q_COFF_0_SET(x)                (((x) << 15) & 0x003f8000)
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_Q_I_COFF_0_MSB                                           28
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_Q_I_COFF_0_LSB                                           22
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_Q_I_COFF_0_MASK                                  0x1fc00000
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_Q_I_COFF_0_GET(x)                (((x) & 0x1fc00000) >> 22)
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_Q_I_COFF_0_SET(x)                (((x) << 22) & 0x1fc00000)
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_ENABLE_MSB                                               29
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_ENABLE_LSB                                               29
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_ENABLE_MASK                                      0x20000000
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_ENABLE_GET(x)                    (((x) & 0x20000000) >> 29)
#define PHY_BB_RX_IQ_CORR_B0_LOOPBACK_IQCORR_ENABLE_SET(x)                    (((x) << 29) & 0x20000000)

/* macros for bb_chn_reg_map.BB_paprd_am2am_mask */
#define PHY_BB_PAPRD_AM2AM_MASK_ADDRESS                                                       0x000098e4
#define PHY_BB_PAPRD_AM2AM_MASK_OFFSET                                                        0x000000e4
#define PHY_BB_PAPRD_AM2AM_MASK_PAPRD_AM2AM_MASK_MSB                                                  24
#define PHY_BB_PAPRD_AM2AM_MASK_PAPRD_AM2AM_MASK_LSB                                                   0
#define PHY_BB_PAPRD_AM2AM_MASK_PAPRD_AM2AM_MASK_MASK                                         0x01ffffff
#define PHY_BB_PAPRD_AM2AM_MASK_PAPRD_AM2AM_MASK_GET(x)                        (((x) & 0x01ffffff) >> 0)
#define PHY_BB_PAPRD_AM2AM_MASK_PAPRD_AM2AM_MASK_SET(x)                        (((x) << 0) & 0x01ffffff)

/* macros for bb_chn_reg_map.BB_paprd_am2pm_mask */
#define PHY_BB_PAPRD_AM2PM_MASK_ADDRESS                                                       0x000098e8
#define PHY_BB_PAPRD_AM2PM_MASK_OFFSET                                                        0x000000e8
#define PHY_BB_PAPRD_AM2PM_MASK_PAPRD_AM2PM_MASK_MSB                                                  24
#define PHY_BB_PAPRD_AM2PM_MASK_PAPRD_AM2PM_MASK_LSB                                                   0
#define PHY_BB_PAPRD_AM2PM_MASK_PAPRD_AM2PM_MASK_MASK                                         0x01ffffff
#define PHY_BB_PAPRD_AM2PM_MASK_PAPRD_AM2PM_MASK_GET(x)                        (((x) & 0x01ffffff) >> 0)
#define PHY_BB_PAPRD_AM2PM_MASK_PAPRD_AM2PM_MASK_SET(x)                        (((x) << 0) & 0x01ffffff)

/* macros for bb_chn_reg_map.BB_paprd_ht40_mask */
#define PHY_BB_PAPRD_HT40_MASK_ADDRESS                                                        0x000098ec
#define PHY_BB_PAPRD_HT40_MASK_OFFSET                                                         0x000000ec
#define PHY_BB_PAPRD_HT40_MASK_PAPRD_HT40_MASK_MSB                                                    24
#define PHY_BB_PAPRD_HT40_MASK_PAPRD_HT40_MASK_LSB                                                     0
#define PHY_BB_PAPRD_HT40_MASK_PAPRD_HT40_MASK_MASK                                           0x01ffffff
#define PHY_BB_PAPRD_HT40_MASK_PAPRD_HT40_MASK_GET(x)                          (((x) & 0x01ffffff) >> 0)
#define PHY_BB_PAPRD_HT40_MASK_PAPRD_HT40_MASK_SET(x)                          (((x) << 0) & 0x01ffffff)

/* macros for bb_chn_reg_map.BB_paprd_ctrl0_b0 */
#define PHY_BB_PAPRD_CTRL0_B0_ADDRESS                                                         0x000098f0
#define PHY_BB_PAPRD_CTRL0_B0_OFFSET                                                          0x000000f0
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_ENABLE_0_MSB                                                       0
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_ENABLE_0_LSB                                                       0
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_ENABLE_0_MASK                                             0x00000001
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_ENABLE_0_GET(x)                            (((x) & 0x00000001) >> 0)
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_ENABLE_0_SET(x)                            (((x) << 0) & 0x00000001)
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_ADAPTIVE_USE_SINGLE_TABLE_0_MSB                                    1
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_ADAPTIVE_USE_SINGLE_TABLE_0_LSB                                    1
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_ADAPTIVE_USE_SINGLE_TABLE_0_MASK                          0x00000002
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_ADAPTIVE_USE_SINGLE_TABLE_0_GET(x)         (((x) & 0x00000002) >> 1)
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_ADAPTIVE_USE_SINGLE_TABLE_0_SET(x)         (((x) << 1) & 0x00000002)
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_VALID_GAIN_0_MSB                                                  26
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_VALID_GAIN_0_LSB                                                   2
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_VALID_GAIN_0_MASK                                         0x07fffffc
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_VALID_GAIN_0_GET(x)                        (((x) & 0x07fffffc) >> 2)
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_VALID_GAIN_0_SET(x)                        (((x) << 2) & 0x07fffffc)
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_MAG_THRSH_0_MSB                                                   31
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_MAG_THRSH_0_LSB                                                   27
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_MAG_THRSH_0_MASK                                          0xf8000000
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_MAG_THRSH_0_GET(x)                        (((x) & 0xf8000000) >> 27)
#define PHY_BB_PAPRD_CTRL0_B0_PAPRD_MAG_THRSH_0_SET(x)                        (((x) << 27) & 0xf8000000)

/* macros for bb_chn_reg_map.BB_paprd_ctrl1_b0 */
#define PHY_BB_PAPRD_CTRL1_B0_ADDRESS                                                         0x000098f4
#define PHY_BB_PAPRD_CTRL1_B0_OFFSET                                                          0x000000f4
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_SCALING_ENABLE_0_MSB                                      0
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_SCALING_ENABLE_0_LSB                                      0
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_SCALING_ENABLE_0_MASK                            0x00000001
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_SCALING_ENABLE_0_GET(x)           (((x) & 0x00000001) >> 0)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_SCALING_ENABLE_0_SET(x)           (((x) << 0) & 0x00000001)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_AM2AM_ENABLE_0_MSB                                        1
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_AM2AM_ENABLE_0_LSB                                        1
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_AM2AM_ENABLE_0_MASK                              0x00000002
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_AM2AM_ENABLE_0_GET(x)             (((x) & 0x00000002) >> 1)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_AM2AM_ENABLE_0_SET(x)             (((x) << 1) & 0x00000002)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_AM2PM_ENABLE_0_MSB                                        2
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_AM2PM_ENABLE_0_LSB                                        2
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_AM2PM_ENABLE_0_MASK                              0x00000004
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_AM2PM_ENABLE_0_GET(x)             (((x) & 0x00000004) >> 2)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_ADAPTIVE_AM2PM_ENABLE_0_SET(x)             (((x) << 2) & 0x00000004)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_POWER_AT_AM2AM_CAL_0_MSB                                           8
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_POWER_AT_AM2AM_CAL_0_LSB                                           3
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_POWER_AT_AM2AM_CAL_0_MASK                                 0x000001f8
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_POWER_AT_AM2AM_CAL_0_GET(x)                (((x) & 0x000001f8) >> 3)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_POWER_AT_AM2AM_CAL_0_SET(x)                (((x) << 3) & 0x000001f8)
#define PHY_BB_PAPRD_CTRL1_B0_PA_GAIN_SCALE_FACTOR_0_MSB                                              16
#define PHY_BB_PAPRD_CTRL1_B0_PA_GAIN_SCALE_FACTOR_0_LSB                                               9
#define PHY_BB_PAPRD_CTRL1_B0_PA_GAIN_SCALE_FACTOR_0_MASK                                     0x0001fe00
#define PHY_BB_PAPRD_CTRL1_B0_PA_GAIN_SCALE_FACTOR_0_GET(x)                    (((x) & 0x0001fe00) >> 9)
#define PHY_BB_PAPRD_CTRL1_B0_PA_GAIN_SCALE_FACTOR_0_SET(x)                    (((x) << 9) & 0x0001fe00)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_MAG_SCALE_FACTOR_0_MSB                                            26
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_MAG_SCALE_FACTOR_0_LSB                                            17
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_MAG_SCALE_FACTOR_0_MASK                                   0x07fe0000
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_MAG_SCALE_FACTOR_0_GET(x)                 (((x) & 0x07fe0000) >> 17)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_MAG_SCALE_FACTOR_0_SET(x)                 (((x) << 17) & 0x07fe0000)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_TRAINER_IANDQ_SEL_0_MSB                                           27
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_TRAINER_IANDQ_SEL_0_LSB                                           27
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_TRAINER_IANDQ_SEL_0_MASK                                  0x08000000
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_TRAINER_IANDQ_SEL_0_GET(x)                (((x) & 0x08000000) >> 27)
#define PHY_BB_PAPRD_CTRL1_B0_PAPRD_TRAINER_IANDQ_SEL_0_SET(x)                (((x) << 27) & 0x08000000)

/* macros for bb_chn_reg_map.BB_pa_gain123_b0 */
#define PHY_BB_PA_GAIN123_B0_ADDRESS                                                          0x000098f8
#define PHY_BB_PA_GAIN123_B0_OFFSET                                                           0x000000f8
#define PHY_BB_PA_GAIN123_B0_PA_GAIN1_0_MSB                                                            9
#define PHY_BB_PA_GAIN123_B0_PA_GAIN1_0_LSB                                                            0
#define PHY_BB_PA_GAIN123_B0_PA_GAIN1_0_MASK                                                  0x000003ff
#define PHY_BB_PA_GAIN123_B0_PA_GAIN1_0_GET(x)                                 (((x) & 0x000003ff) >> 0)
#define PHY_BB_PA_GAIN123_B0_PA_GAIN1_0_SET(x)                                 (((x) << 0) & 0x000003ff)
#define PHY_BB_PA_GAIN123_B0_PA_GAIN2_0_MSB                                                           19
#define PHY_BB_PA_GAIN123_B0_PA_GAIN2_0_LSB                                                           10
#define PHY_BB_PA_GAIN123_B0_PA_GAIN2_0_MASK                                                  0x000ffc00
#define PHY_BB_PA_GAIN123_B0_PA_GAIN2_0_GET(x)                                (((x) & 0x000ffc00) >> 10)
#define PHY_BB_PA_GAIN123_B0_PA_GAIN2_0_SET(x)                                (((x) << 10) & 0x000ffc00)
#define PHY_BB_PA_GAIN123_B0_PA_GAIN3_0_MSB                                                           29
#define PHY_BB_PA_GAIN123_B0_PA_GAIN3_0_LSB                                                           20
#define PHY_BB_PA_GAIN123_B0_PA_GAIN3_0_MASK                                                  0x3ff00000
#define PHY_BB_PA_GAIN123_B0_PA_GAIN3_0_GET(x)                                (((x) & 0x3ff00000) >> 20)
#define PHY_BB_PA_GAIN123_B0_PA_GAIN3_0_SET(x)                                (((x) << 20) & 0x3ff00000)

/* macros for bb_chn_reg_map.BB_pa_gain45_b0 */
#define PHY_BB_PA_GAIN45_B0_ADDRESS                                                           0x000098fc
#define PHY_BB_PA_GAIN45_B0_OFFSET                                                            0x000000fc
#define PHY_BB_PA_GAIN45_B0_PA_GAIN4_0_MSB                                                             9
#define PHY_BB_PA_GAIN45_B0_PA_GAIN4_0_LSB                                                             0
#define PHY_BB_PA_GAIN45_B0_PA_GAIN4_0_MASK                                                   0x000003ff
#define PHY_BB_PA_GAIN45_B0_PA_GAIN4_0_GET(x)                                  (((x) & 0x000003ff) >> 0)
#define PHY_BB_PA_GAIN45_B0_PA_GAIN4_0_SET(x)                                  (((x) << 0) & 0x000003ff)
#define PHY_BB_PA_GAIN45_B0_PA_GAIN5_0_MSB                                                            19
#define PHY_BB_PA_GAIN45_B0_PA_GAIN5_0_LSB                                                            10
#define PHY_BB_PA_GAIN45_B0_PA_GAIN5_0_MASK                                                   0x000ffc00
#define PHY_BB_PA_GAIN45_B0_PA_GAIN5_0_GET(x)                                 (((x) & 0x000ffc00) >> 10)
#define PHY_BB_PA_GAIN45_B0_PA_GAIN5_0_SET(x)                                 (((x) << 10) & 0x000ffc00)
#define PHY_BB_PA_GAIN45_B0_PAPRD_ADAPTIVE_TABLE_VALID_0_MSB                                          24
#define PHY_BB_PA_GAIN45_B0_PAPRD_ADAPTIVE_TABLE_VALID_0_LSB                                          20
#define PHY_BB_PA_GAIN45_B0_PAPRD_ADAPTIVE_TABLE_VALID_0_MASK                                 0x01f00000
#define PHY_BB_PA_GAIN45_B0_PAPRD_ADAPTIVE_TABLE_VALID_0_GET(x)               (((x) & 0x01f00000) >> 20)
#define PHY_BB_PA_GAIN45_B0_PAPRD_ADAPTIVE_TABLE_VALID_0_SET(x)               (((x) << 20) & 0x01f00000)

/* macros for bb_chn_reg_map.BB_paprd_pre_post_scale_0_b0 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B0_ADDRESS                                              0x00009900
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B0_OFFSET                                               0x00000100
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B0_PAPRD_PRE_POST_SCALING_0_0_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B0_PAPRD_PRE_POST_SCALING_0_0_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B0_PAPRD_PRE_POST_SCALING_0_0_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B0_PAPRD_PRE_POST_SCALING_0_0_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B0_PAPRD_PRE_POST_SCALING_0_0_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn_reg_map.BB_paprd_pre_post_scale_1_b0 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B0_ADDRESS                                              0x00009904
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B0_OFFSET                                               0x00000104
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B0_PAPRD_PRE_POST_SCALING_1_0_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B0_PAPRD_PRE_POST_SCALING_1_0_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B0_PAPRD_PRE_POST_SCALING_1_0_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B0_PAPRD_PRE_POST_SCALING_1_0_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B0_PAPRD_PRE_POST_SCALING_1_0_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn_reg_map.BB_paprd_pre_post_scale_2_b0 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B0_ADDRESS                                              0x00009908
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B0_OFFSET                                               0x00000108
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B0_PAPRD_PRE_POST_SCALING_2_0_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B0_PAPRD_PRE_POST_SCALING_2_0_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B0_PAPRD_PRE_POST_SCALING_2_0_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B0_PAPRD_PRE_POST_SCALING_2_0_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B0_PAPRD_PRE_POST_SCALING_2_0_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn_reg_map.BB_paprd_pre_post_scale_3_b0 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B0_ADDRESS                                              0x0000990c
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B0_OFFSET                                               0x0000010c
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B0_PAPRD_PRE_POST_SCALING_3_0_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B0_PAPRD_PRE_POST_SCALING_3_0_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B0_PAPRD_PRE_POST_SCALING_3_0_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B0_PAPRD_PRE_POST_SCALING_3_0_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B0_PAPRD_PRE_POST_SCALING_3_0_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn_reg_map.BB_paprd_pre_post_scale_4_b0 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B0_ADDRESS                                              0x00009910
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B0_OFFSET                                               0x00000110
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B0_PAPRD_PRE_POST_SCALING_4_0_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B0_PAPRD_PRE_POST_SCALING_4_0_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B0_PAPRD_PRE_POST_SCALING_4_0_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B0_PAPRD_PRE_POST_SCALING_4_0_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B0_PAPRD_PRE_POST_SCALING_4_0_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn_reg_map.BB_paprd_pre_post_scale_5_b0 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B0_ADDRESS                                              0x00009914
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B0_OFFSET                                               0x00000114
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B0_PAPRD_PRE_POST_SCALING_5_0_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B0_PAPRD_PRE_POST_SCALING_5_0_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B0_PAPRD_PRE_POST_SCALING_5_0_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B0_PAPRD_PRE_POST_SCALING_5_0_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B0_PAPRD_PRE_POST_SCALING_5_0_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn_reg_map.BB_paprd_pre_post_scale_6_b0 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B0_ADDRESS                                              0x00009918
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B0_OFFSET                                               0x00000118
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B0_PAPRD_PRE_POST_SCALING_6_0_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B0_PAPRD_PRE_POST_SCALING_6_0_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B0_PAPRD_PRE_POST_SCALING_6_0_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B0_PAPRD_PRE_POST_SCALING_6_0_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B0_PAPRD_PRE_POST_SCALING_6_0_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn_reg_map.BB_paprd_pre_post_scale_7_b0 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B0_ADDRESS                                              0x0000991c
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B0_OFFSET                                               0x0000011c
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B0_PAPRD_PRE_POST_SCALING_7_0_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B0_PAPRD_PRE_POST_SCALING_7_0_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B0_PAPRD_PRE_POST_SCALING_7_0_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B0_PAPRD_PRE_POST_SCALING_7_0_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B0_PAPRD_PRE_POST_SCALING_7_0_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn_reg_map.BB_paprd_mem_tab_b0 */
#define PHY_BB_PAPRD_MEM_TAB_B0_ADDRESS                                                       0x00009920
#define PHY_BB_PAPRD_MEM_TAB_B0_OFFSET                                                        0x00000120
#define PHY_BB_PAPRD_MEM_TAB_B0_PAPRD_MEM_MSB                                                         21
#define PHY_BB_PAPRD_MEM_TAB_B0_PAPRD_MEM_LSB                                                          0
#define PHY_BB_PAPRD_MEM_TAB_B0_PAPRD_MEM_MASK                                                0x003fffff
#define PHY_BB_PAPRD_MEM_TAB_B0_PAPRD_MEM_GET(x)                               (((x) & 0x003fffff) >> 0)
#define PHY_BB_PAPRD_MEM_TAB_B0_PAPRD_MEM_SET(x)                               (((x) << 0) & 0x003fffff)

/* macros for bb_chn_reg_map.BB_chan_info_chan_tab_b0 */
#define PHY_BB_CHAN_INFO_CHAN_TAB_B0_ADDRESS                                                  0x00009b00
#define PHY_BB_CHAN_INFO_CHAN_TAB_B0_OFFSET                                                   0x00000300
#define PHY_BB_CHAN_INFO_CHAN_TAB_B0_CHANINFO_WORD_MSB                                                31
#define PHY_BB_CHAN_INFO_CHAN_TAB_B0_CHANINFO_WORD_LSB                                                 0
#define PHY_BB_CHAN_INFO_CHAN_TAB_B0_CHANINFO_WORD_MASK                                       0xffffffff
#define PHY_BB_CHAN_INFO_CHAN_TAB_B0_CHANINFO_WORD_GET(x)                      (((x) & 0xffffffff) >> 0)

/* macros for bb_chn_reg_map.BB_chn_tables_intf_addr */
#define PHY_BB_CHN_TABLES_INTF_ADDR_ADDRESS                                                   0x00009bf0
#define PHY_BB_CHN_TABLES_INTF_ADDR_OFFSET                                                    0x000003f0
#define PHY_BB_CHN_TABLES_INTF_ADDR_CHN_TABLES_ADDR_MSB                                               17
#define PHY_BB_CHN_TABLES_INTF_ADDR_CHN_TABLES_ADDR_LSB                                                2
#define PHY_BB_CHN_TABLES_INTF_ADDR_CHN_TABLES_ADDR_MASK                                      0x0003fffc
#define PHY_BB_CHN_TABLES_INTF_ADDR_CHN_TABLES_ADDR_GET(x)                     (((x) & 0x0003fffc) >> 2)
#define PHY_BB_CHN_TABLES_INTF_ADDR_CHN_TABLES_ADDR_SET(x)                     (((x) << 2) & 0x0003fffc)
#define PHY_BB_CHN_TABLES_INTF_ADDR_CHN_ADDR_AUTO_INCR_MSB                                            31
#define PHY_BB_CHN_TABLES_INTF_ADDR_CHN_ADDR_AUTO_INCR_LSB                                            31
#define PHY_BB_CHN_TABLES_INTF_ADDR_CHN_ADDR_AUTO_INCR_MASK                                   0x80000000
#define PHY_BB_CHN_TABLES_INTF_ADDR_CHN_ADDR_AUTO_INCR_GET(x)                 (((x) & 0x80000000) >> 31)
#define PHY_BB_CHN_TABLES_INTF_ADDR_CHN_ADDR_AUTO_INCR_SET(x)                 (((x) << 31) & 0x80000000)

/* macros for bb_chn_reg_map.BB_chn_tables_intf_data */
#define PHY_BB_CHN_TABLES_INTF_DATA_ADDRESS                                                   0x00009bf4
#define PHY_BB_CHN_TABLES_INTF_DATA_OFFSET                                                    0x000003f4
#define PHY_BB_CHN_TABLES_INTF_DATA_CHN_TABLES_DATA_MSB                                               31
#define PHY_BB_CHN_TABLES_INTF_DATA_CHN_TABLES_DATA_LSB                                                0
#define PHY_BB_CHN_TABLES_INTF_DATA_CHN_TABLES_DATA_MASK                                      0xffffffff
#define PHY_BB_CHN_TABLES_INTF_DATA_CHN_TABLES_DATA_GET(x)                     (((x) & 0xffffffff) >> 0)
#define PHY_BB_CHN_TABLES_INTF_DATA_CHN_TABLES_DATA_SET(x)                     (((x) << 0) & 0xffffffff)

#ifndef __ASSEMBLER__

typedef struct chn_reg_map_reg_s {
  volatile unsigned int BB_timing_controls_1;                          /*        0x0 - 0x4        */
  volatile unsigned int BB_timing_controls_2;                          /*        0x4 - 0x8        */
  volatile unsigned int BB_timing_controls_3;                          /*        0x8 - 0xc        */
  volatile unsigned int BB_timing_control_4;                           /*        0xc - 0x10       */
  volatile unsigned int BB_timing_control_5;                           /*       0x10 - 0x14       */
  volatile unsigned int BB_timing_control_6;                           /*       0x14 - 0x18       */
  volatile unsigned int BB_timing_control_11;                          /*       0x18 - 0x1c       */
  volatile unsigned int BB_spur_mask_controls;                         /*       0x1c - 0x20       */
  volatile unsigned int BB_find_signal_low;                            /*       0x20 - 0x24       */
  volatile unsigned int BB_sfcorr;                                     /*       0x24 - 0x28       */
  volatile unsigned int BB_self_corr_low;                              /*       0x28 - 0x2c       */
  volatile unsigned int BB_ext_chan_scorr_thr;                         /*       0x2c - 0x30       */
  volatile unsigned int BB_ext_chan_pwr_thr_2_b0;                      /*       0x30 - 0x34       */
  volatile unsigned int BB_radar_detection;                            /*       0x34 - 0x38       */
  volatile unsigned int BB_radar_detection_2;                          /*       0x38 - 0x3c       */
  volatile unsigned int BB_extension_radar;                            /*       0x3c - 0x40       */
  volatile char pad__0[0x40];                                          /*       0x40 - 0x80       */
  volatile unsigned int BB_multichain_control;                         /*       0x80 - 0x84       */
  volatile unsigned int BB_per_chain_csd;                              /*       0x84 - 0x88       */
  volatile char pad__1[0x18];                                          /*       0x88 - 0xa0       */
  volatile unsigned int BB_tx_crc;                                     /*       0xa0 - 0xa4       */
  volatile unsigned int BB_tstdac_constant;                            /*       0xa4 - 0xa8       */
  volatile unsigned int BB_spur_report_b0;                             /*       0xa8 - 0xac       */
  volatile char pad__2[0x4];                                           /*       0xac - 0xb0       */
  volatile unsigned int BB_txiqcal_control_3;                          /*       0xb0 - 0xb4       */
  volatile char pad__3[0x8];                                           /*       0xb4 - 0xbc       */
  volatile unsigned int BB_green_tx_control_1;                         /*       0xbc - 0xc0       */
  volatile unsigned int BB_iq_adc_meas_0_b0;                           /*       0xc0 - 0xc4       */
  volatile unsigned int BB_iq_adc_meas_1_b0;                           /*       0xc4 - 0xc8       */
  volatile unsigned int BB_iq_adc_meas_2_b0;                           /*       0xc8 - 0xcc       */
  volatile unsigned int BB_iq_adc_meas_3_b0;                           /*       0xcc - 0xd0       */
  volatile unsigned int BB_tx_phase_ramp_b0;                           /*       0xd0 - 0xd4       */
  volatile unsigned int BB_adc_gain_dc_corr_b0;                        /*       0xd4 - 0xd8       */
  volatile char pad__4[0x4];                                           /*       0xd8 - 0xdc       */
  volatile unsigned int BB_rx_iq_corr_b0;                              /*       0xdc - 0xe0       */
  volatile char pad__5[0x4];                                           /*       0xe0 - 0xe4       */
  volatile unsigned int BB_paprd_am2am_mask;                           /*       0xe4 - 0xe8       */
  volatile unsigned int BB_paprd_am2pm_mask;                           /*       0xe8 - 0xec       */
  volatile unsigned int BB_paprd_ht40_mask;                            /*       0xec - 0xf0       */
  volatile unsigned int BB_paprd_ctrl0_b0;                             /*       0xf0 - 0xf4       */
  volatile unsigned int BB_paprd_ctrl1_b0;                             /*       0xf4 - 0xf8       */
  volatile unsigned int BB_pa_gain123_b0;                              /*       0xf8 - 0xfc       */
  volatile unsigned int BB_pa_gain45_b0;                               /*       0xfc - 0x100      */
  volatile unsigned int BB_paprd_pre_post_scale_0_b0;                  /*      0x100 - 0x104      */
  volatile unsigned int BB_paprd_pre_post_scale_1_b0;                  /*      0x104 - 0x108      */
  volatile unsigned int BB_paprd_pre_post_scale_2_b0;                  /*      0x108 - 0x10c      */
  volatile unsigned int BB_paprd_pre_post_scale_3_b0;                  /*      0x10c - 0x110      */
  volatile unsigned int BB_paprd_pre_post_scale_4_b0;                  /*      0x110 - 0x114      */
  volatile unsigned int BB_paprd_pre_post_scale_5_b0;                  /*      0x114 - 0x118      */
  volatile unsigned int BB_paprd_pre_post_scale_6_b0;                  /*      0x118 - 0x11c      */
  volatile unsigned int BB_paprd_pre_post_scale_7_b0;                  /*      0x11c - 0x120      */
  volatile unsigned int BB_paprd_mem_tab_b0[120];                      /*      0x120 - 0x300      */
  volatile unsigned int BB_chan_info_chan_tab_b0[60];                  /*      0x300 - 0x3f0      */
  volatile unsigned int BB_chn_tables_intf_addr;                       /*      0x3f0 - 0x3f4      */
  volatile unsigned int BB_chn_tables_intf_data;                       /*      0x3f4 - 0x3f8      */
} chn_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_mrc_reg_map.BB_timing_control_3a */
#define PHY_BB_TIMING_CONTROL_3A_ADDRESS                                                      0x00009c00
#define PHY_BB_TIMING_CONTROL_3A_OFFSET                                                       0x00000000
#define PHY_BB_TIMING_CONTROL_3A_STE_THR_HI_RSSI_MSB                                                   6
#define PHY_BB_TIMING_CONTROL_3A_STE_THR_HI_RSSI_LSB                                                   0
#define PHY_BB_TIMING_CONTROL_3A_STE_THR_HI_RSSI_MASK                                         0x0000007f
#define PHY_BB_TIMING_CONTROL_3A_STE_THR_HI_RSSI_GET(x)                        (((x) & 0x0000007f) >> 0)
#define PHY_BB_TIMING_CONTROL_3A_STE_THR_HI_RSSI_SET(x)                        (((x) << 0) & 0x0000007f)
#define PHY_BB_TIMING_CONTROL_3A_USE_HTSIG1_20_40_BW_VALUE_MSB                                         7
#define PHY_BB_TIMING_CONTROL_3A_USE_HTSIG1_20_40_BW_VALUE_LSB                                         7
#define PHY_BB_TIMING_CONTROL_3A_USE_HTSIG1_20_40_BW_VALUE_MASK                               0x00000080
#define PHY_BB_TIMING_CONTROL_3A_USE_HTSIG1_20_40_BW_VALUE_GET(x)              (((x) & 0x00000080) >> 7)
#define PHY_BB_TIMING_CONTROL_3A_USE_HTSIG1_20_40_BW_VALUE_SET(x)              (((x) << 7) & 0x00000080)

/* macros for bb_mrc_reg_map.BB_ldpc_cntl1 */
#define PHY_BB_LDPC_CNTL1_ADDRESS                                                             0x00009c04
#define PHY_BB_LDPC_CNTL1_OFFSET                                                              0x00000004
#define PHY_BB_LDPC_CNTL1_LDPC_LLR_SCALING0_MSB                                                       31
#define PHY_BB_LDPC_CNTL1_LDPC_LLR_SCALING0_LSB                                                        0
#define PHY_BB_LDPC_CNTL1_LDPC_LLR_SCALING0_MASK                                              0xffffffff
#define PHY_BB_LDPC_CNTL1_LDPC_LLR_SCALING0_GET(x)                             (((x) & 0xffffffff) >> 0)
#define PHY_BB_LDPC_CNTL1_LDPC_LLR_SCALING0_SET(x)                             (((x) << 0) & 0xffffffff)

/* macros for bb_mrc_reg_map.BB_ldpc_cntl2 */
#define PHY_BB_LDPC_CNTL2_ADDRESS                                                             0x00009c08
#define PHY_BB_LDPC_CNTL2_OFFSET                                                              0x00000008
#define PHY_BB_LDPC_CNTL2_LDPC_LLR_SCALING1_MSB                                                       15
#define PHY_BB_LDPC_CNTL2_LDPC_LLR_SCALING1_LSB                                                        0
#define PHY_BB_LDPC_CNTL2_LDPC_LLR_SCALING1_MASK                                              0x0000ffff
#define PHY_BB_LDPC_CNTL2_LDPC_LLR_SCALING1_GET(x)                             (((x) & 0x0000ffff) >> 0)
#define PHY_BB_LDPC_CNTL2_LDPC_LLR_SCALING1_SET(x)                             (((x) << 0) & 0x0000ffff)
#define PHY_BB_LDPC_CNTL2_LDPC_LATENCY_MSB                                                            26
#define PHY_BB_LDPC_CNTL2_LDPC_LATENCY_LSB                                                            16
#define PHY_BB_LDPC_CNTL2_LDPC_LATENCY_MASK                                                   0x07ff0000
#define PHY_BB_LDPC_CNTL2_LDPC_LATENCY_GET(x)                                 (((x) & 0x07ff0000) >> 16)
#define PHY_BB_LDPC_CNTL2_LDPC_LATENCY_SET(x)                                 (((x) << 16) & 0x07ff0000)

/* macros for bb_mrc_reg_map.BB_pilot_spur_mask */
#define PHY_BB_PILOT_SPUR_MASK_ADDRESS                                                        0x00009c0c
#define PHY_BB_PILOT_SPUR_MASK_OFFSET                                                         0x0000000c
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_A_MSB                                                     4
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_A_LSB                                                     0
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_A_MASK                                           0x0000001f
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_A_GET(x)                          (((x) & 0x0000001f) >> 0)
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_A_SET(x)                          (((x) << 0) & 0x0000001f)
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_IDX_A_MSB                                                11
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_IDX_A_LSB                                                 5
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_IDX_A_MASK                                       0x00000fe0
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_IDX_A_GET(x)                      (((x) & 0x00000fe0) >> 5)
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_IDX_A_SET(x)                      (((x) << 5) & 0x00000fe0)
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_B_MSB                                                    16
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_B_LSB                                                    12
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_B_MASK                                           0x0001f000
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_B_GET(x)                         (((x) & 0x0001f000) >> 12)
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_B_SET(x)                         (((x) << 12) & 0x0001f000)
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_IDX_B_MSB                                                23
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_IDX_B_LSB                                                17
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_IDX_B_MASK                                       0x00fe0000
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_IDX_B_GET(x)                     (((x) & 0x00fe0000) >> 17)
#define PHY_BB_PILOT_SPUR_MASK_CF_PILOT_MASK_IDX_B_SET(x)                     (((x) << 17) & 0x00fe0000)

/* macros for bb_mrc_reg_map.BB_chan_spur_mask */
#define PHY_BB_CHAN_SPUR_MASK_ADDRESS                                                         0x00009c10
#define PHY_BB_CHAN_SPUR_MASK_OFFSET                                                          0x00000010
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_A_MSB                                                       4
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_A_LSB                                                       0
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_A_MASK                                             0x0000001f
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_A_GET(x)                            (((x) & 0x0000001f) >> 0)
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_A_SET(x)                            (((x) << 0) & 0x0000001f)
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_IDX_A_MSB                                                  11
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_IDX_A_LSB                                                   5
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_IDX_A_MASK                                         0x00000fe0
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_IDX_A_GET(x)                        (((x) & 0x00000fe0) >> 5)
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_IDX_A_SET(x)                        (((x) << 5) & 0x00000fe0)
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_B_MSB                                                      16
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_B_LSB                                                      12
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_B_MASK                                             0x0001f000
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_B_GET(x)                           (((x) & 0x0001f000) >> 12)
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_B_SET(x)                           (((x) << 12) & 0x0001f000)
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_IDX_B_MSB                                                  23
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_IDX_B_LSB                                                  17
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_IDX_B_MASK                                         0x00fe0000
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_IDX_B_GET(x)                       (((x) & 0x00fe0000) >> 17)
#define PHY_BB_CHAN_SPUR_MASK_CF_CHAN_MASK_IDX_B_SET(x)                       (((x) << 17) & 0x00fe0000)

/* macros for bb_mrc_reg_map.BB_short_gi_delta_slope */
#define PHY_BB_SHORT_GI_DELTA_SLOPE_ADDRESS                                                   0x00009c14
#define PHY_BB_SHORT_GI_DELTA_SLOPE_OFFSET                                                    0x00000014
#define PHY_BB_SHORT_GI_DELTA_SLOPE_DELTA_SLOPE_COEF_EXP_SHORT_GI_MSB                                  3
#define PHY_BB_SHORT_GI_DELTA_SLOPE_DELTA_SLOPE_COEF_EXP_SHORT_GI_LSB                                  0
#define PHY_BB_SHORT_GI_DELTA_SLOPE_DELTA_SLOPE_COEF_EXP_SHORT_GI_MASK                        0x0000000f
#define PHY_BB_SHORT_GI_DELTA_SLOPE_DELTA_SLOPE_COEF_EXP_SHORT_GI_GET(x)       (((x) & 0x0000000f) >> 0)
#define PHY_BB_SHORT_GI_DELTA_SLOPE_DELTA_SLOPE_COEF_EXP_SHORT_GI_SET(x)       (((x) << 0) & 0x0000000f)
#define PHY_BB_SHORT_GI_DELTA_SLOPE_DELTA_SLOPE_COEF_MAN_SHORT_GI_MSB                                 18
#define PHY_BB_SHORT_GI_DELTA_SLOPE_DELTA_SLOPE_COEF_MAN_SHORT_GI_LSB                                  4
#define PHY_BB_SHORT_GI_DELTA_SLOPE_DELTA_SLOPE_COEF_MAN_SHORT_GI_MASK                        0x0007fff0
#define PHY_BB_SHORT_GI_DELTA_SLOPE_DELTA_SLOPE_COEF_MAN_SHORT_GI_GET(x)       (((x) & 0x0007fff0) >> 4)
#define PHY_BB_SHORT_GI_DELTA_SLOPE_DELTA_SLOPE_COEF_MAN_SHORT_GI_SET(x)       (((x) << 4) & 0x0007fff0)

/* macros for bb_mrc_reg_map.BB_ml_cntl1 */
#define PHY_BB_ML_CNTL1_ADDRESS                                                               0x00009c18
#define PHY_BB_ML_CNTL1_OFFSET                                                                0x00000018
#define PHY_BB_ML_CNTL1_CF_ML_2S_WEIGHT_TABLE_MSB                                                     23
#define PHY_BB_ML_CNTL1_CF_ML_2S_WEIGHT_TABLE_LSB                                                      0
#define PHY_BB_ML_CNTL1_CF_ML_2S_WEIGHT_TABLE_MASK                                            0x00ffffff
#define PHY_BB_ML_CNTL1_CF_ML_2S_WEIGHT_TABLE_GET(x)                           (((x) & 0x00ffffff) >> 0)
#define PHY_BB_ML_CNTL1_CF_ML_2S_WEIGHT_TABLE_SET(x)                           (((x) << 0) & 0x00ffffff)
#define PHY_BB_ML_CNTL1_CF_IS_FLAT_CH_THR_ML_MSB                                                      25
#define PHY_BB_ML_CNTL1_CF_IS_FLAT_CH_THR_ML_LSB                                                      24
#define PHY_BB_ML_CNTL1_CF_IS_FLAT_CH_THR_ML_MASK                                             0x03000000
#define PHY_BB_ML_CNTL1_CF_IS_FLAT_CH_THR_ML_GET(x)                           (((x) & 0x03000000) >> 24)
#define PHY_BB_ML_CNTL1_CF_IS_FLAT_CH_THR_ML_SET(x)                           (((x) << 24) & 0x03000000)
#define PHY_BB_ML_CNTL1_CF_IS_FLAT_CH_THR_ZF_MSB                                                      27
#define PHY_BB_ML_CNTL1_CF_IS_FLAT_CH_THR_ZF_LSB                                                      26
#define PHY_BB_ML_CNTL1_CF_IS_FLAT_CH_THR_ZF_MASK                                             0x0c000000
#define PHY_BB_ML_CNTL1_CF_IS_FLAT_CH_THR_ZF_GET(x)                           (((x) & 0x0c000000) >> 26)
#define PHY_BB_ML_CNTL1_CF_IS_FLAT_CH_THR_ZF_SET(x)                           (((x) << 26) & 0x0c000000)

/* macros for bb_mrc_reg_map.BB_ml_cntl2 */
#define PHY_BB_ML_CNTL2_ADDRESS                                                               0x00009c1c
#define PHY_BB_ML_CNTL2_OFFSET                                                                0x0000001c
#define PHY_BB_ML_CNTL2_CF_ML_3S_WEIGHT_TABLE_MSB                                                     23
#define PHY_BB_ML_CNTL2_CF_ML_3S_WEIGHT_TABLE_LSB                                                      0
#define PHY_BB_ML_CNTL2_CF_ML_3S_WEIGHT_TABLE_MASK                                            0x00ffffff
#define PHY_BB_ML_CNTL2_CF_ML_3S_WEIGHT_TABLE_GET(x)                           (((x) & 0x00ffffff) >> 0)
#define PHY_BB_ML_CNTL2_CF_ML_3S_WEIGHT_TABLE_SET(x)                           (((x) << 0) & 0x00ffffff)

/* macros for bb_mrc_reg_map.BB_tstadc */
#define PHY_BB_TSTADC_ADDRESS                                                                 0x00009c20
#define PHY_BB_TSTADC_OFFSET                                                                  0x00000020
#define PHY_BB_TSTADC_TSTADC_OUT_Q_MSB                                                                 9
#define PHY_BB_TSTADC_TSTADC_OUT_Q_LSB                                                                 0
#define PHY_BB_TSTADC_TSTADC_OUT_Q_MASK                                                       0x000003ff
#define PHY_BB_TSTADC_TSTADC_OUT_Q_GET(x)                                      (((x) & 0x000003ff) >> 0)
#define PHY_BB_TSTADC_TSTADC_OUT_I_MSB                                                                19
#define PHY_BB_TSTADC_TSTADC_OUT_I_LSB                                                                10
#define PHY_BB_TSTADC_TSTADC_OUT_I_MASK                                                       0x000ffc00
#define PHY_BB_TSTADC_TSTADC_OUT_I_GET(x)                                     (((x) & 0x000ffc00) >> 10)

#ifndef __ASSEMBLER__

typedef struct mrc_reg_map_reg_s {
  volatile unsigned int BB_timing_control_3a;                          /*        0x0 - 0x4        */
  volatile unsigned int BB_ldpc_cntl1;                                 /*        0x4 - 0x8        */
  volatile unsigned int BB_ldpc_cntl2;                                 /*        0x8 - 0xc        */
  volatile unsigned int BB_pilot_spur_mask;                            /*        0xc - 0x10       */
  volatile unsigned int BB_chan_spur_mask;                             /*       0x10 - 0x14       */
  volatile unsigned int BB_short_gi_delta_slope;                       /*       0x14 - 0x18       */
  volatile unsigned int BB_ml_cntl1;                                   /*       0x18 - 0x1c       */
  volatile unsigned int BB_ml_cntl2;                                   /*       0x1c - 0x20       */
  volatile unsigned int BB_tstadc;                                     /*       0x20 - 0x24       */
} mrc_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_bbb_reg_map.BB_bbb_rx_ctrl_1 */
#define PHY_BB_BBB_RX_CTRL_1_ADDRESS                                                          0x00009d00
#define PHY_BB_BBB_RX_CTRL_1_OFFSET                                                           0x00000000
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_THRESHOLD_2_MSB                                                2
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_THRESHOLD_2_LSB                                                0
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_THRESHOLD_2_MASK                                      0x00000007
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_THRESHOLD_2_GET(x)                     (((x) & 0x00000007) >> 0)
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_THRESHOLD_2_SET(x)                     (((x) << 0) & 0x00000007)
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_THRESHOLD_MSB                                                  7
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_THRESHOLD_LSB                                                  3
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_THRESHOLD_MASK                                        0x000000f8
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_THRESHOLD_GET(x)                       (((x) & 0x000000f8) >> 3)
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_THRESHOLD_SET(x)                       (((x) << 3) & 0x000000f8)
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_N_SYNC_MSB                                                    10
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_N_SYNC_LSB                                                     8
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_N_SYNC_MASK                                           0x00000700
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_N_SYNC_GET(x)                          (((x) & 0x00000700) >> 8)
#define PHY_BB_BBB_RX_CTRL_1_COARSE_TIM_N_SYNC_SET(x)                          (((x) << 8) & 0x00000700)
#define PHY_BB_BBB_RX_CTRL_1_MAX_BAL_LONG_MSB                                                         15
#define PHY_BB_BBB_RX_CTRL_1_MAX_BAL_LONG_LSB                                                         11
#define PHY_BB_BBB_RX_CTRL_1_MAX_BAL_LONG_MASK                                                0x0000f800
#define PHY_BB_BBB_RX_CTRL_1_MAX_BAL_LONG_GET(x)                              (((x) & 0x0000f800) >> 11)
#define PHY_BB_BBB_RX_CTRL_1_MAX_BAL_LONG_SET(x)                              (((x) << 11) & 0x0000f800)
#define PHY_BB_BBB_RX_CTRL_1_MAX_BAL_SHORT_MSB                                                        20
#define PHY_BB_BBB_RX_CTRL_1_MAX_BAL_SHORT_LSB                                                        16
#define PHY_BB_BBB_RX_CTRL_1_MAX_BAL_SHORT_MASK                                               0x001f0000
#define PHY_BB_BBB_RX_CTRL_1_MAX_BAL_SHORT_GET(x)                             (((x) & 0x001f0000) >> 16)
#define PHY_BB_BBB_RX_CTRL_1_MAX_BAL_SHORT_SET(x)                             (((x) << 16) & 0x001f0000)
#define PHY_BB_BBB_RX_CTRL_1_RECON_LMS_STEP_MSB                                                       23
#define PHY_BB_BBB_RX_CTRL_1_RECON_LMS_STEP_LSB                                                       21
#define PHY_BB_BBB_RX_CTRL_1_RECON_LMS_STEP_MASK                                              0x00e00000
#define PHY_BB_BBB_RX_CTRL_1_RECON_LMS_STEP_GET(x)                            (((x) & 0x00e00000) >> 21)
#define PHY_BB_BBB_RX_CTRL_1_RECON_LMS_STEP_SET(x)                            (((x) << 21) & 0x00e00000)
#define PHY_BB_BBB_RX_CTRL_1_SB_CHECK_WIN_MSB                                                         30
#define PHY_BB_BBB_RX_CTRL_1_SB_CHECK_WIN_LSB                                                         24
#define PHY_BB_BBB_RX_CTRL_1_SB_CHECK_WIN_MASK                                                0x7f000000
#define PHY_BB_BBB_RX_CTRL_1_SB_CHECK_WIN_GET(x)                              (((x) & 0x7f000000) >> 24)
#define PHY_BB_BBB_RX_CTRL_1_SB_CHECK_WIN_SET(x)                              (((x) << 24) & 0x7f000000)
#define PHY_BB_BBB_RX_CTRL_1_EN_RX_ABORT_CCK_MSB                                                      31
#define PHY_BB_BBB_RX_CTRL_1_EN_RX_ABORT_CCK_LSB                                                      31
#define PHY_BB_BBB_RX_CTRL_1_EN_RX_ABORT_CCK_MASK                                             0x80000000
#define PHY_BB_BBB_RX_CTRL_1_EN_RX_ABORT_CCK_GET(x)                           (((x) & 0x80000000) >> 31)
#define PHY_BB_BBB_RX_CTRL_1_EN_RX_ABORT_CCK_SET(x)                           (((x) << 31) & 0x80000000)

/* macros for bb_bbb_reg_map.BB_bbb_rx_ctrl_2 */
#define PHY_BB_BBB_RX_CTRL_2_ADDRESS                                                          0x00009d04
#define PHY_BB_BBB_RX_CTRL_2_OFFSET                                                           0x00000004
#define PHY_BB_BBB_RX_CTRL_2_FREQ_EST_N_AVG_LONG_MSB                                                   5
#define PHY_BB_BBB_RX_CTRL_2_FREQ_EST_N_AVG_LONG_LSB                                                   0
#define PHY_BB_BBB_RX_CTRL_2_FREQ_EST_N_AVG_LONG_MASK                                         0x0000003f
#define PHY_BB_BBB_RX_CTRL_2_FREQ_EST_N_AVG_LONG_GET(x)                        (((x) & 0x0000003f) >> 0)
#define PHY_BB_BBB_RX_CTRL_2_FREQ_EST_N_AVG_LONG_SET(x)                        (((x) << 0) & 0x0000003f)
#define PHY_BB_BBB_RX_CTRL_2_CHAN_AVG_LONG_MSB                                                        11
#define PHY_BB_BBB_RX_CTRL_2_CHAN_AVG_LONG_LSB                                                         6
#define PHY_BB_BBB_RX_CTRL_2_CHAN_AVG_LONG_MASK                                               0x00000fc0
#define PHY_BB_BBB_RX_CTRL_2_CHAN_AVG_LONG_GET(x)                              (((x) & 0x00000fc0) >> 6)
#define PHY_BB_BBB_RX_CTRL_2_CHAN_AVG_LONG_SET(x)                              (((x) << 6) & 0x00000fc0)
#define PHY_BB_BBB_RX_CTRL_2_COARSE_TIM_THRESHOLD_3_MSB                                               16
#define PHY_BB_BBB_RX_CTRL_2_COARSE_TIM_THRESHOLD_3_LSB                                               12
#define PHY_BB_BBB_RX_CTRL_2_COARSE_TIM_THRESHOLD_3_MASK                                      0x0001f000
#define PHY_BB_BBB_RX_CTRL_2_COARSE_TIM_THRESHOLD_3_GET(x)                    (((x) & 0x0001f000) >> 12)
#define PHY_BB_BBB_RX_CTRL_2_COARSE_TIM_THRESHOLD_3_SET(x)                    (((x) << 12) & 0x0001f000)
#define PHY_BB_BBB_RX_CTRL_2_FREQ_TRACK_UPDATE_PERIOD_MSB                                             21
#define PHY_BB_BBB_RX_CTRL_2_FREQ_TRACK_UPDATE_PERIOD_LSB                                             17
#define PHY_BB_BBB_RX_CTRL_2_FREQ_TRACK_UPDATE_PERIOD_MASK                                    0x003e0000
#define PHY_BB_BBB_RX_CTRL_2_FREQ_TRACK_UPDATE_PERIOD_GET(x)                  (((x) & 0x003e0000) >> 17)
#define PHY_BB_BBB_RX_CTRL_2_FREQ_TRACK_UPDATE_PERIOD_SET(x)                  (((x) << 17) & 0x003e0000)
#define PHY_BB_BBB_RX_CTRL_2_FREQ_EST_SCALING_PERIOD_MSB                                              25
#define PHY_BB_BBB_RX_CTRL_2_FREQ_EST_SCALING_PERIOD_LSB                                              22
#define PHY_BB_BBB_RX_CTRL_2_FREQ_EST_SCALING_PERIOD_MASK                                     0x03c00000
#define PHY_BB_BBB_RX_CTRL_2_FREQ_EST_SCALING_PERIOD_GET(x)                   (((x) & 0x03c00000) >> 22)
#define PHY_BB_BBB_RX_CTRL_2_FREQ_EST_SCALING_PERIOD_SET(x)                   (((x) << 22) & 0x03c00000)
#define PHY_BB_BBB_RX_CTRL_2_LOOP_COEF_DPSK_C2_DATA_MSB                                               31
#define PHY_BB_BBB_RX_CTRL_2_LOOP_COEF_DPSK_C2_DATA_LSB                                               26
#define PHY_BB_BBB_RX_CTRL_2_LOOP_COEF_DPSK_C2_DATA_MASK                                      0xfc000000
#define PHY_BB_BBB_RX_CTRL_2_LOOP_COEF_DPSK_C2_DATA_GET(x)                    (((x) & 0xfc000000) >> 26)
#define PHY_BB_BBB_RX_CTRL_2_LOOP_COEF_DPSK_C2_DATA_SET(x)                    (((x) << 26) & 0xfc000000)

/* macros for bb_bbb_reg_map.BB_bbb_rx_ctrl_3 */
#define PHY_BB_BBB_RX_CTRL_3_ADDRESS                                                          0x00009d08
#define PHY_BB_BBB_RX_CTRL_3_OFFSET                                                           0x00000008
#define PHY_BB_BBB_RX_CTRL_3_TIM_ADJUST_FREQ_DPSK_MSB                                                  7
#define PHY_BB_BBB_RX_CTRL_3_TIM_ADJUST_FREQ_DPSK_LSB                                                  0
#define PHY_BB_BBB_RX_CTRL_3_TIM_ADJUST_FREQ_DPSK_MASK                                        0x000000ff
#define PHY_BB_BBB_RX_CTRL_3_TIM_ADJUST_FREQ_DPSK_GET(x)                       (((x) & 0x000000ff) >> 0)
#define PHY_BB_BBB_RX_CTRL_3_TIM_ADJUST_FREQ_DPSK_SET(x)                       (((x) << 0) & 0x000000ff)
#define PHY_BB_BBB_RX_CTRL_3_TIM_ADJUST_FREQ_CCK_MSB                                                  15
#define PHY_BB_BBB_RX_CTRL_3_TIM_ADJUST_FREQ_CCK_LSB                                                   8
#define PHY_BB_BBB_RX_CTRL_3_TIM_ADJUST_FREQ_CCK_MASK                                         0x0000ff00
#define PHY_BB_BBB_RX_CTRL_3_TIM_ADJUST_FREQ_CCK_GET(x)                        (((x) & 0x0000ff00) >> 8)
#define PHY_BB_BBB_RX_CTRL_3_TIM_ADJUST_FREQ_CCK_SET(x)                        (((x) << 8) & 0x0000ff00)
#define PHY_BB_BBB_RX_CTRL_3_TIMER_N_SFD_MSB                                                          23
#define PHY_BB_BBB_RX_CTRL_3_TIMER_N_SFD_LSB                                                          16
#define PHY_BB_BBB_RX_CTRL_3_TIMER_N_SFD_MASK                                                 0x00ff0000
#define PHY_BB_BBB_RX_CTRL_3_TIMER_N_SFD_GET(x)                               (((x) & 0x00ff0000) >> 16)
#define PHY_BB_BBB_RX_CTRL_3_TIMER_N_SFD_SET(x)                               (((x) << 16) & 0x00ff0000)

/* macros for bb_bbb_reg_map.BB_bbb_rx_ctrl_4 */
#define PHY_BB_BBB_RX_CTRL_4_ADDRESS                                                          0x00009d0c
#define PHY_BB_BBB_RX_CTRL_4_OFFSET                                                           0x0000000c
#define PHY_BB_BBB_RX_CTRL_4_TIMER_N_SYNC_MSB                                                          3
#define PHY_BB_BBB_RX_CTRL_4_TIMER_N_SYNC_LSB                                                          0
#define PHY_BB_BBB_RX_CTRL_4_TIMER_N_SYNC_MASK                                                0x0000000f
#define PHY_BB_BBB_RX_CTRL_4_TIMER_N_SYNC_GET(x)                               (((x) & 0x0000000f) >> 0)
#define PHY_BB_BBB_RX_CTRL_4_TIMER_N_SYNC_SET(x)                               (((x) << 0) & 0x0000000f)
#define PHY_BB_BBB_RX_CTRL_4_TIM_ADJUST_TIMER_EXP_MSB                                                 15
#define PHY_BB_BBB_RX_CTRL_4_TIM_ADJUST_TIMER_EXP_LSB                                                  4
#define PHY_BB_BBB_RX_CTRL_4_TIM_ADJUST_TIMER_EXP_MASK                                        0x0000fff0
#define PHY_BB_BBB_RX_CTRL_4_TIM_ADJUST_TIMER_EXP_GET(x)                       (((x) & 0x0000fff0) >> 4)
#define PHY_BB_BBB_RX_CTRL_4_TIM_ADJUST_TIMER_EXP_SET(x)                       (((x) << 4) & 0x0000fff0)
#define PHY_BB_BBB_RX_CTRL_4_FORCE_UNLOCKED_CLOCKS_MSB                                                16
#define PHY_BB_BBB_RX_CTRL_4_FORCE_UNLOCKED_CLOCKS_LSB                                                16
#define PHY_BB_BBB_RX_CTRL_4_FORCE_UNLOCKED_CLOCKS_MASK                                       0x00010000
#define PHY_BB_BBB_RX_CTRL_4_FORCE_UNLOCKED_CLOCKS_GET(x)                     (((x) & 0x00010000) >> 16)
#define PHY_BB_BBB_RX_CTRL_4_FORCE_UNLOCKED_CLOCKS_SET(x)                     (((x) << 16) & 0x00010000)
#define PHY_BB_BBB_RX_CTRL_4_DYNAMIC_PREAM_SEL_MSB                                                    17
#define PHY_BB_BBB_RX_CTRL_4_DYNAMIC_PREAM_SEL_LSB                                                    17
#define PHY_BB_BBB_RX_CTRL_4_DYNAMIC_PREAM_SEL_MASK                                           0x00020000
#define PHY_BB_BBB_RX_CTRL_4_DYNAMIC_PREAM_SEL_GET(x)                         (((x) & 0x00020000) >> 17)
#define PHY_BB_BBB_RX_CTRL_4_DYNAMIC_PREAM_SEL_SET(x)                         (((x) << 17) & 0x00020000)
#define PHY_BB_BBB_RX_CTRL_4_SHORT_PREAMBLE_MSB                                                       18
#define PHY_BB_BBB_RX_CTRL_4_SHORT_PREAMBLE_LSB                                                       18
#define PHY_BB_BBB_RX_CTRL_4_SHORT_PREAMBLE_MASK                                              0x00040000
#define PHY_BB_BBB_RX_CTRL_4_SHORT_PREAMBLE_GET(x)                            (((x) & 0x00040000) >> 18)
#define PHY_BB_BBB_RX_CTRL_4_SHORT_PREAMBLE_SET(x)                            (((x) << 18) & 0x00040000)
#define PHY_BB_BBB_RX_CTRL_4_FREQ_EST_N_AVG_SHORT_MSB                                                 24
#define PHY_BB_BBB_RX_CTRL_4_FREQ_EST_N_AVG_SHORT_LSB                                                 19
#define PHY_BB_BBB_RX_CTRL_4_FREQ_EST_N_AVG_SHORT_MASK                                        0x01f80000
#define PHY_BB_BBB_RX_CTRL_4_FREQ_EST_N_AVG_SHORT_GET(x)                      (((x) & 0x01f80000) >> 19)
#define PHY_BB_BBB_RX_CTRL_4_FREQ_EST_N_AVG_SHORT_SET(x)                      (((x) << 19) & 0x01f80000)
#define PHY_BB_BBB_RX_CTRL_4_CHAN_AVG_SHORT_MSB                                                       30
#define PHY_BB_BBB_RX_CTRL_4_CHAN_AVG_SHORT_LSB                                                       25
#define PHY_BB_BBB_RX_CTRL_4_CHAN_AVG_SHORT_MASK                                              0x7e000000
#define PHY_BB_BBB_RX_CTRL_4_CHAN_AVG_SHORT_GET(x)                            (((x) & 0x7e000000) >> 25)
#define PHY_BB_BBB_RX_CTRL_4_CHAN_AVG_SHORT_SET(x)                            (((x) << 25) & 0x7e000000)
#define PHY_BB_BBB_RX_CTRL_4_USE_MRC_WEIGHT_MSB                                                       31
#define PHY_BB_BBB_RX_CTRL_4_USE_MRC_WEIGHT_LSB                                                       31
#define PHY_BB_BBB_RX_CTRL_4_USE_MRC_WEIGHT_MASK                                              0x80000000
#define PHY_BB_BBB_RX_CTRL_4_USE_MRC_WEIGHT_GET(x)                            (((x) & 0x80000000) >> 31)
#define PHY_BB_BBB_RX_CTRL_4_USE_MRC_WEIGHT_SET(x)                            (((x) << 31) & 0x80000000)

/* macros for bb_bbb_reg_map.BB_bbb_rx_ctrl_5 */
#define PHY_BB_BBB_RX_CTRL_5_ADDRESS                                                          0x00009d10
#define PHY_BB_BBB_RX_CTRL_5_OFFSET                                                           0x00000010
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C1_DATA_MSB                                                4
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C1_DATA_LSB                                                0
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C1_DATA_MASK                                      0x0000001f
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C1_DATA_GET(x)                     (((x) & 0x0000001f) >> 0)
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C1_DATA_SET(x)                     (((x) << 0) & 0x0000001f)
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C1_HEAD_MSB                                                9
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C1_HEAD_LSB                                                5
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C1_HEAD_MASK                                      0x000003e0
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C1_HEAD_GET(x)                     (((x) & 0x000003e0) >> 5)
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C1_HEAD_SET(x)                     (((x) << 5) & 0x000003e0)
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C2_HEAD_MSB                                               15
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C2_HEAD_LSB                                               10
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C2_HEAD_MASK                                      0x0000fc00
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C2_HEAD_GET(x)                    (((x) & 0x0000fc00) >> 10)
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_DPSK_C2_HEAD_SET(x)                    (((x) << 10) & 0x0000fc00)
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_CCK_C1_MSB                                                     20
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_CCK_C1_LSB                                                     16
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_CCK_C1_MASK                                            0x001f0000
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_CCK_C1_GET(x)                          (((x) & 0x001f0000) >> 16)
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_CCK_C1_SET(x)                          (((x) << 16) & 0x001f0000)
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_CCK_C2_MSB                                                     26
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_CCK_C2_LSB                                                     21
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_CCK_C2_MASK                                            0x07e00000
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_CCK_C2_GET(x)                          (((x) & 0x07e00000) >> 21)
#define PHY_BB_BBB_RX_CTRL_5_LOOP_COEF_CCK_C2_SET(x)                          (((x) << 21) & 0x07e00000)

/* macros for bb_bbb_reg_map.BB_bbb_rx_ctrl_6 */
#define PHY_BB_BBB_RX_CTRL_6_ADDRESS                                                          0x00009d14
#define PHY_BB_BBB_RX_CTRL_6_OFFSET                                                           0x00000014
#define PHY_BB_BBB_RX_CTRL_6_SYNC_START_DELAY_MSB                                                      9
#define PHY_BB_BBB_RX_CTRL_6_SYNC_START_DELAY_LSB                                                      0
#define PHY_BB_BBB_RX_CTRL_6_SYNC_START_DELAY_MASK                                            0x000003ff
#define PHY_BB_BBB_RX_CTRL_6_SYNC_START_DELAY_GET(x)                           (((x) & 0x000003ff) >> 0)
#define PHY_BB_BBB_RX_CTRL_6_SYNC_START_DELAY_SET(x)                           (((x) << 0) & 0x000003ff)
#define PHY_BB_BBB_RX_CTRL_6_MAP_1S_TO_2S_MSB                                                         10
#define PHY_BB_BBB_RX_CTRL_6_MAP_1S_TO_2S_LSB                                                         10
#define PHY_BB_BBB_RX_CTRL_6_MAP_1S_TO_2S_MASK                                                0x00000400
#define PHY_BB_BBB_RX_CTRL_6_MAP_1S_TO_2S_GET(x)                              (((x) & 0x00000400) >> 10)
#define PHY_BB_BBB_RX_CTRL_6_MAP_1S_TO_2S_SET(x)                              (((x) << 10) & 0x00000400)
#define PHY_BB_BBB_RX_CTRL_6_START_IIR_DELAY_MSB                                                      20
#define PHY_BB_BBB_RX_CTRL_6_START_IIR_DELAY_LSB                                                      11
#define PHY_BB_BBB_RX_CTRL_6_START_IIR_DELAY_MASK                                             0x001ff800
#define PHY_BB_BBB_RX_CTRL_6_START_IIR_DELAY_GET(x)                           (((x) & 0x001ff800) >> 11)
#define PHY_BB_BBB_RX_CTRL_6_START_IIR_DELAY_SET(x)                           (((x) << 11) & 0x001ff800)
#define PHY_BB_BBB_RX_CTRL_6_USE_MCORR_WEIGHT_MSB                                                     21
#define PHY_BB_BBB_RX_CTRL_6_USE_MCORR_WEIGHT_LSB                                                     21
#define PHY_BB_BBB_RX_CTRL_6_USE_MCORR_WEIGHT_MASK                                            0x00200000
#define PHY_BB_BBB_RX_CTRL_6_USE_MCORR_WEIGHT_GET(x)                          (((x) & 0x00200000) >> 21)
#define PHY_BB_BBB_RX_CTRL_6_USE_MCORR_WEIGHT_SET(x)                          (((x) << 21) & 0x00200000)
#define PHY_BB_BBB_RX_CTRL_6_USE_BKPWR_FOR_CENTER_INDEX_MSB                                           22
#define PHY_BB_BBB_RX_CTRL_6_USE_BKPWR_FOR_CENTER_INDEX_LSB                                           22
#define PHY_BB_BBB_RX_CTRL_6_USE_BKPWR_FOR_CENTER_INDEX_MASK                                  0x00400000
#define PHY_BB_BBB_RX_CTRL_6_USE_BKPWR_FOR_CENTER_INDEX_GET(x)                (((x) & 0x00400000) >> 22)
#define PHY_BB_BBB_RX_CTRL_6_USE_BKPWR_FOR_CENTER_INDEX_SET(x)                (((x) << 22) & 0x00400000)
#define PHY_BB_BBB_RX_CTRL_6_CCK_SEL_CHAIN_BY_EO_MSB                                                  23
#define PHY_BB_BBB_RX_CTRL_6_CCK_SEL_CHAIN_BY_EO_LSB                                                  23
#define PHY_BB_BBB_RX_CTRL_6_CCK_SEL_CHAIN_BY_EO_MASK                                         0x00800000
#define PHY_BB_BBB_RX_CTRL_6_CCK_SEL_CHAIN_BY_EO_GET(x)                       (((x) & 0x00800000) >> 23)
#define PHY_BB_BBB_RX_CTRL_6_CCK_SEL_CHAIN_BY_EO_SET(x)                       (((x) << 23) & 0x00800000)
#define PHY_BB_BBB_RX_CTRL_6_FORCE_CCK_SEL_CHAIN_MSB                                                  24
#define PHY_BB_BBB_RX_CTRL_6_FORCE_CCK_SEL_CHAIN_LSB                                                  24
#define PHY_BB_BBB_RX_CTRL_6_FORCE_CCK_SEL_CHAIN_MASK                                         0x01000000
#define PHY_BB_BBB_RX_CTRL_6_FORCE_CCK_SEL_CHAIN_GET(x)                       (((x) & 0x01000000) >> 24)
#define PHY_BB_BBB_RX_CTRL_6_FORCE_CCK_SEL_CHAIN_SET(x)                       (((x) << 24) & 0x01000000)
#define PHY_BB_BBB_RX_CTRL_6_FORCE_CENTER_INDEX_MSB                                                   25
#define PHY_BB_BBB_RX_CTRL_6_FORCE_CENTER_INDEX_LSB                                                   25
#define PHY_BB_BBB_RX_CTRL_6_FORCE_CENTER_INDEX_MASK                                          0x02000000
#define PHY_BB_BBB_RX_CTRL_6_FORCE_CENTER_INDEX_GET(x)                        (((x) & 0x02000000) >> 25)
#define PHY_BB_BBB_RX_CTRL_6_FORCE_CENTER_INDEX_SET(x)                        (((x) << 25) & 0x02000000)

/* macros for bb_bbb_reg_map.BB_force_clken_cck */
#define PHY_BB_FORCE_CLKEN_CCK_ADDRESS                                                        0x00009d18
#define PHY_BB_FORCE_CLKEN_CCK_OFFSET                                                         0x00000018
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_MSB                                                    0
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_LSB                                                    0
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_MASK                                          0x00000001
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_GET(x)                         (((x) & 0x00000001) >> 0)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE0_SET(x)                         (((x) << 0) & 0x00000001)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_MSB                                                    1
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_LSB                                                    1
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_MASK                                          0x00000002
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_GET(x)                         (((x) & 0x00000002) >> 1)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE1_SET(x)                         (((x) << 1) & 0x00000002)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_MSB                                                    2
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_LSB                                                    2
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_MASK                                          0x00000004
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_GET(x)                         (((x) & 0x00000004) >> 2)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE2_SET(x)                         (((x) << 2) & 0x00000004)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_MSB                                                    3
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_LSB                                                    3
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_MASK                                          0x00000008
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_GET(x)                         (((x) & 0x00000008) >> 3)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ENABLE3_SET(x)                         (((x) << 3) & 0x00000008)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_MSB                                                     4
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_LSB                                                     4
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_MASK                                           0x00000010
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_GET(x)                          (((x) & 0x00000010) >> 4)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_RX_ALWAYS_SET(x)                          (((x) << 4) & 0x00000010)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_MSB                                                    5
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_LSB                                                    5
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_MASK                                          0x00000020
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_GET(x)                         (((x) & 0x00000020) >> 5)
#define PHY_BB_FORCE_CLKEN_CCK_FORCE_TXSM_CLKEN_SET(x)                         (((x) << 5) & 0x00000020)

#ifndef __ASSEMBLER__

typedef struct bbb_reg_map_reg_s {
  volatile unsigned int BB_bbb_rx_ctrl_1;                              /*        0x0 - 0x4        */
  volatile unsigned int BB_bbb_rx_ctrl_2;                              /*        0x4 - 0x8        */
  volatile unsigned int BB_bbb_rx_ctrl_3;                              /*        0x8 - 0xc        */
  volatile unsigned int BB_bbb_rx_ctrl_4;                              /*        0xc - 0x10       */
  volatile unsigned int BB_bbb_rx_ctrl_5;                              /*       0x10 - 0x14       */
  volatile unsigned int BB_bbb_rx_ctrl_6;                              /*       0x14 - 0x18       */
  volatile unsigned int BB_force_clken_cck;                            /*       0x18 - 0x1c       */
} bbb_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_agc_reg_map.BB_settling_time */
#define PHY_BB_SETTLING_TIME_ADDRESS                                                          0x00009e00
#define PHY_BB_SETTLING_TIME_OFFSET                                                           0x00000000
#define PHY_BB_SETTLING_TIME_AGC_SETTLING_MSB                                                          6
#define PHY_BB_SETTLING_TIME_AGC_SETTLING_LSB                                                          0
#define PHY_BB_SETTLING_TIME_AGC_SETTLING_MASK                                                0x0000007f
#define PHY_BB_SETTLING_TIME_AGC_SETTLING_GET(x)                               (((x) & 0x0000007f) >> 0)
#define PHY_BB_SETTLING_TIME_AGC_SETTLING_SET(x)                               (((x) << 0) & 0x0000007f)
#define PHY_BB_SETTLING_TIME_SWITCH_SETTLING_MSB                                                      13
#define PHY_BB_SETTLING_TIME_SWITCH_SETTLING_LSB                                                       7
#define PHY_BB_SETTLING_TIME_SWITCH_SETTLING_MASK                                             0x00003f80
#define PHY_BB_SETTLING_TIME_SWITCH_SETTLING_GET(x)                            (((x) & 0x00003f80) >> 7)
#define PHY_BB_SETTLING_TIME_SWITCH_SETTLING_SET(x)                            (((x) << 7) & 0x00003f80)
#define PHY_BB_SETTLING_TIME_ADCSAT_THRL_MSB                                                          19
#define PHY_BB_SETTLING_TIME_ADCSAT_THRL_LSB                                                          14
#define PHY_BB_SETTLING_TIME_ADCSAT_THRL_MASK                                                 0x000fc000
#define PHY_BB_SETTLING_TIME_ADCSAT_THRL_GET(x)                               (((x) & 0x000fc000) >> 14)
#define PHY_BB_SETTLING_TIME_ADCSAT_THRL_SET(x)                               (((x) << 14) & 0x000fc000)
#define PHY_BB_SETTLING_TIME_ADCSAT_THRH_MSB                                                          25
#define PHY_BB_SETTLING_TIME_ADCSAT_THRH_LSB                                                          20
#define PHY_BB_SETTLING_TIME_ADCSAT_THRH_MASK                                                 0x03f00000
#define PHY_BB_SETTLING_TIME_ADCSAT_THRH_GET(x)                               (((x) & 0x03f00000) >> 20)
#define PHY_BB_SETTLING_TIME_ADCSAT_THRH_SET(x)                               (((x) << 20) & 0x03f00000)
#define PHY_BB_SETTLING_TIME_LBRESET_ADVANCE_MSB                                                      29
#define PHY_BB_SETTLING_TIME_LBRESET_ADVANCE_LSB                                                      26
#define PHY_BB_SETTLING_TIME_LBRESET_ADVANCE_MASK                                             0x3c000000
#define PHY_BB_SETTLING_TIME_LBRESET_ADVANCE_GET(x)                           (((x) & 0x3c000000) >> 26)
#define PHY_BB_SETTLING_TIME_LBRESET_ADVANCE_SET(x)                           (((x) << 26) & 0x3c000000)

/* macros for bb_agc_reg_map.BB_gain_force_max_gains_b0 */
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_ADDRESS                                                0x00009e04
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_OFFSET                                                 0x00000004
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_RF_GAIN_F_0_MSB                                                 7
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_RF_GAIN_F_0_LSB                                                 0
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_RF_GAIN_F_0_MASK                                       0x000000ff
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_RF_GAIN_F_0_GET(x)                      (((x) & 0x000000ff) >> 0)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_RF_GAIN_F_0_SET(x)                      (((x) << 0) & 0x000000ff)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_MB_GAIN_F_0_MSB                                                15
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_MB_GAIN_F_0_LSB                                                 8
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_MB_GAIN_F_0_MASK                                       0x0000ff00
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_MB_GAIN_F_0_GET(x)                      (((x) & 0x0000ff00) >> 8)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_MB_GAIN_F_0_SET(x)                      (((x) << 8) & 0x0000ff00)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN1_SW_F_0_MSB                                             16
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN1_SW_F_0_LSB                                             16
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN1_SW_F_0_MASK                                    0x00010000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN1_SW_F_0_GET(x)                  (((x) & 0x00010000) >> 16)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN1_SW_F_0_SET(x)                  (((x) << 16) & 0x00010000)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN2_SW_F_0_MSB                                             17
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN2_SW_F_0_LSB                                             17
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN2_SW_F_0_MASK                                    0x00020000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN2_SW_F_0_GET(x)                  (((x) & 0x00020000) >> 17)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN2_SW_F_0_SET(x)                  (((x) << 17) & 0x00020000)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN1_HYST_MARGIN_0_MSB                                      24
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN1_HYST_MARGIN_0_LSB                                      18
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN1_HYST_MARGIN_0_MASK                             0x01fc0000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN1_HYST_MARGIN_0_GET(x)           (((x) & 0x01fc0000) >> 18)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN1_HYST_MARGIN_0_SET(x)           (((x) << 18) & 0x01fc0000)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN2_HYST_MARGIN_0_MSB                                      31
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN2_HYST_MARGIN_0_LSB                                      25
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN2_HYST_MARGIN_0_MASK                             0xfe000000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN2_HYST_MARGIN_0_GET(x)           (((x) & 0xfe000000) >> 25)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B0_XATTEN2_HYST_MARGIN_0_SET(x)           (((x) << 25) & 0xfe000000)

/* macros for bb_agc_reg_map.BB_gains_min_offsets */
#define PHY_BB_GAINS_MIN_OFFSETS_ADDRESS                                                      0x00009e08
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSET                                                       0x00000008
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC1_MSB                                                          6
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC1_LSB                                                          0
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC1_MASK                                                0x0000007f
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC1_GET(x)                               (((x) & 0x0000007f) >> 0)
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC1_SET(x)                               (((x) << 0) & 0x0000007f)
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC2_MSB                                                         11
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC2_LSB                                                          7
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC2_MASK                                                0x00000f80
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC2_GET(x)                               (((x) & 0x00000f80) >> 7)
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC2_SET(x)                               (((x) << 7) & 0x00000f80)
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC3_MSB                                                         16
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC3_LSB                                                         12
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC3_MASK                                                0x0001f000
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC3_GET(x)                              (((x) & 0x0001f000) >> 12)
#define PHY_BB_GAINS_MIN_OFFSETS_OFFSETC3_SET(x)                              (((x) << 12) & 0x0001f000)
#define PHY_BB_GAINS_MIN_OFFSETS_GAIN_FORCE_MSB                                                       17
#define PHY_BB_GAINS_MIN_OFFSETS_GAIN_FORCE_LSB                                                       17
#define PHY_BB_GAINS_MIN_OFFSETS_GAIN_FORCE_MASK                                              0x00020000
#define PHY_BB_GAINS_MIN_OFFSETS_GAIN_FORCE_GET(x)                            (((x) & 0x00020000) >> 17)
#define PHY_BB_GAINS_MIN_OFFSETS_GAIN_FORCE_SET(x)                            (((x) << 17) & 0x00020000)
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_ENABLE_MSB                                               18
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_ENABLE_LSB                                               18
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_ENABLE_MASK                                      0x00040000
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_ENABLE_GET(x)                    (((x) & 0x00040000) >> 18)
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_ENABLE_SET(x)                    (((x) << 18) & 0x00040000)
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_GC_MSB                                                   19
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_GC_LSB                                                   19
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_GC_MASK                                          0x00080000
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_GC_GET(x)                        (((x) & 0x00080000) >> 19)
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_GC_SET(x)                        (((x) << 19) & 0x00080000)
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_VOTING_MSB                                               20
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_VOTING_LSB                                               20
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_VOTING_MASK                                      0x00100000
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_VOTING_GET(x)                    (((x) & 0x00100000) >> 20)
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_VOTING_SET(x)                    (((x) << 20) & 0x00100000)
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_PHY_ERR_MSB                                              21
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_PHY_ERR_LSB                                              21
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_PHY_ERR_MASK                                     0x00200000
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_PHY_ERR_GET(x)                   (((x) & 0x00200000) >> 21)
#define PHY_BB_GAINS_MIN_OFFSETS_CF_AGC_HIST_PHY_ERR_SET(x)                   (((x) << 21) & 0x00200000)

/* macros for bb_agc_reg_map.BB_desired_sigsize */
#define PHY_BB_DESIRED_SIGSIZE_ADDRESS                                                        0x00009e0c
#define PHY_BB_DESIRED_SIGSIZE_OFFSET                                                         0x0000000c
#define PHY_BB_DESIRED_SIGSIZE_ADC_DESIRED_SIZE_MSB                                                    7
#define PHY_BB_DESIRED_SIGSIZE_ADC_DESIRED_SIZE_LSB                                                    0
#define PHY_BB_DESIRED_SIGSIZE_ADC_DESIRED_SIZE_MASK                                          0x000000ff
#define PHY_BB_DESIRED_SIGSIZE_ADC_DESIRED_SIZE_GET(x)                         (((x) & 0x000000ff) >> 0)
#define PHY_BB_DESIRED_SIGSIZE_ADC_DESIRED_SIZE_SET(x)                         (((x) << 0) & 0x000000ff)
#define PHY_BB_DESIRED_SIGSIZE_TOTAL_DESIRED_MSB                                                      27
#define PHY_BB_DESIRED_SIGSIZE_TOTAL_DESIRED_LSB                                                      20
#define PHY_BB_DESIRED_SIGSIZE_TOTAL_DESIRED_MASK                                             0x0ff00000
#define PHY_BB_DESIRED_SIGSIZE_TOTAL_DESIRED_GET(x)                           (((x) & 0x0ff00000) >> 20)
#define PHY_BB_DESIRED_SIGSIZE_TOTAL_DESIRED_SET(x)                           (((x) << 20) & 0x0ff00000)
#define PHY_BB_DESIRED_SIGSIZE_INIT_GC_COUNT_MAX_MSB                                                  29
#define PHY_BB_DESIRED_SIGSIZE_INIT_GC_COUNT_MAX_LSB                                                  28
#define PHY_BB_DESIRED_SIGSIZE_INIT_GC_COUNT_MAX_MASK                                         0x30000000
#define PHY_BB_DESIRED_SIGSIZE_INIT_GC_COUNT_MAX_GET(x)                       (((x) & 0x30000000) >> 28)
#define PHY_BB_DESIRED_SIGSIZE_INIT_GC_COUNT_MAX_SET(x)                       (((x) << 28) & 0x30000000)
#define PHY_BB_DESIRED_SIGSIZE_REDUCE_INIT_GC_COUNT_MSB                                               30
#define PHY_BB_DESIRED_SIGSIZE_REDUCE_INIT_GC_COUNT_LSB                                               30
#define PHY_BB_DESIRED_SIGSIZE_REDUCE_INIT_GC_COUNT_MASK                                      0x40000000
#define PHY_BB_DESIRED_SIGSIZE_REDUCE_INIT_GC_COUNT_GET(x)                    (((x) & 0x40000000) >> 30)
#define PHY_BB_DESIRED_SIGSIZE_REDUCE_INIT_GC_COUNT_SET(x)                    (((x) << 30) & 0x40000000)
#define PHY_BB_DESIRED_SIGSIZE_ENA_INIT_GAIN_MSB                                                      31
#define PHY_BB_DESIRED_SIGSIZE_ENA_INIT_GAIN_LSB                                                      31
#define PHY_BB_DESIRED_SIGSIZE_ENA_INIT_GAIN_MASK                                             0x80000000
#define PHY_BB_DESIRED_SIGSIZE_ENA_INIT_GAIN_GET(x)                           (((x) & 0x80000000) >> 31)
#define PHY_BB_DESIRED_SIGSIZE_ENA_INIT_GAIN_SET(x)                           (((x) << 31) & 0x80000000)

/* macros for bb_agc_reg_map.BB_find_signal */
#define PHY_BB_FIND_SIGNAL_ADDRESS                                                            0x00009e10
#define PHY_BB_FIND_SIGNAL_OFFSET                                                             0x00000010
#define PHY_BB_FIND_SIGNAL_RELSTEP_MSB                                                                 5
#define PHY_BB_FIND_SIGNAL_RELSTEP_LSB                                                                 0
#define PHY_BB_FIND_SIGNAL_RELSTEP_MASK                                                       0x0000003f
#define PHY_BB_FIND_SIGNAL_RELSTEP_GET(x)                                      (((x) & 0x0000003f) >> 0)
#define PHY_BB_FIND_SIGNAL_RELSTEP_SET(x)                                      (((x) << 0) & 0x0000003f)
#define PHY_BB_FIND_SIGNAL_RELPWR_MSB                                                                 11
#define PHY_BB_FIND_SIGNAL_RELPWR_LSB                                                                  6
#define PHY_BB_FIND_SIGNAL_RELPWR_MASK                                                        0x00000fc0
#define PHY_BB_FIND_SIGNAL_RELPWR_GET(x)                                       (((x) & 0x00000fc0) >> 6)
#define PHY_BB_FIND_SIGNAL_RELPWR_SET(x)                                       (((x) << 6) & 0x00000fc0)
#define PHY_BB_FIND_SIGNAL_FIRSTEP_MSB                                                                17
#define PHY_BB_FIND_SIGNAL_FIRSTEP_LSB                                                                12
#define PHY_BB_FIND_SIGNAL_FIRSTEP_MASK                                                       0x0003f000
#define PHY_BB_FIND_SIGNAL_FIRSTEP_GET(x)                                     (((x) & 0x0003f000) >> 12)
#define PHY_BB_FIND_SIGNAL_FIRSTEP_SET(x)                                     (((x) << 12) & 0x0003f000)
#define PHY_BB_FIND_SIGNAL_FIRPWR_MSB                                                                 25
#define PHY_BB_FIND_SIGNAL_FIRPWR_LSB                                                                 18
#define PHY_BB_FIND_SIGNAL_FIRPWR_MASK                                                        0x03fc0000
#define PHY_BB_FIND_SIGNAL_FIRPWR_GET(x)                                      (((x) & 0x03fc0000) >> 18)
#define PHY_BB_FIND_SIGNAL_FIRPWR_SET(x)                                      (((x) << 18) & 0x03fc0000)
#define PHY_BB_FIND_SIGNAL_M1COUNT_MAX_MSB                                                            31
#define PHY_BB_FIND_SIGNAL_M1COUNT_MAX_LSB                                                            26
#define PHY_BB_FIND_SIGNAL_M1COUNT_MAX_MASK                                                   0xfc000000
#define PHY_BB_FIND_SIGNAL_M1COUNT_MAX_GET(x)                                 (((x) & 0xfc000000) >> 26)
#define PHY_BB_FIND_SIGNAL_M1COUNT_MAX_SET(x)                                 (((x) << 26) & 0xfc000000)

/* macros for bb_agc_reg_map.BB_agc */
#define PHY_BB_AGC_ADDRESS                                                                    0x00009e14
#define PHY_BB_AGC_OFFSET                                                                     0x00000014
#define PHY_BB_AGC_COARSEPWR_CONST_MSB                                                                 6
#define PHY_BB_AGC_COARSEPWR_CONST_LSB                                                                 0
#define PHY_BB_AGC_COARSEPWR_CONST_MASK                                                       0x0000007f
#define PHY_BB_AGC_COARSEPWR_CONST_GET(x)                                      (((x) & 0x0000007f) >> 0)
#define PHY_BB_AGC_COARSEPWR_CONST_SET(x)                                      (((x) << 0) & 0x0000007f)
#define PHY_BB_AGC_COARSE_LOW_MSB                                                                     14
#define PHY_BB_AGC_COARSE_LOW_LSB                                                                      7
#define PHY_BB_AGC_COARSE_LOW_MASK                                                            0x00007f80
#define PHY_BB_AGC_COARSE_LOW_GET(x)                                           (((x) & 0x00007f80) >> 7)
#define PHY_BB_AGC_COARSE_LOW_SET(x)                                           (((x) << 7) & 0x00007f80)
#define PHY_BB_AGC_COARSE_HIGH_MSB                                                                    21
#define PHY_BB_AGC_COARSE_HIGH_LSB                                                                    15
#define PHY_BB_AGC_COARSE_HIGH_MASK                                                           0x003f8000
#define PHY_BB_AGC_COARSE_HIGH_GET(x)                                         (((x) & 0x003f8000) >> 15)
#define PHY_BB_AGC_COARSE_HIGH_SET(x)                                         (((x) << 15) & 0x003f8000)
#define PHY_BB_AGC_QUICK_DROP_MSB                                                                     29
#define PHY_BB_AGC_QUICK_DROP_LSB                                                                     22
#define PHY_BB_AGC_QUICK_DROP_MASK                                                            0x3fc00000
#define PHY_BB_AGC_QUICK_DROP_GET(x)                                          (((x) & 0x3fc00000) >> 22)
#define PHY_BB_AGC_QUICK_DROP_SET(x)                                          (((x) << 22) & 0x3fc00000)
#define PHY_BB_AGC_RSSI_OUT_SELECT_MSB                                                                31
#define PHY_BB_AGC_RSSI_OUT_SELECT_LSB                                                                30
#define PHY_BB_AGC_RSSI_OUT_SELECT_MASK                                                       0xc0000000
#define PHY_BB_AGC_RSSI_OUT_SELECT_GET(x)                                     (((x) & 0xc0000000) >> 30)
#define PHY_BB_AGC_RSSI_OUT_SELECT_SET(x)                                     (((x) << 30) & 0xc0000000)

/* macros for bb_agc_reg_map.BB_ext_atten_switch_ctl_b0 */
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_ADDRESS                                                0x00009e18
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_OFFSET                                                 0x00000018
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN1_DB_0_MSB                                                5
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN1_DB_0_LSB                                                0
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN1_DB_0_MASK                                      0x0000003f
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN1_DB_0_GET(x)                     (((x) & 0x0000003f) >> 0)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN1_DB_0_SET(x)                     (((x) << 0) & 0x0000003f)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN2_DB_0_MSB                                               11
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN2_DB_0_LSB                                                6
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN2_DB_0_MASK                                      0x00000fc0
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN2_DB_0_GET(x)                     (((x) & 0x00000fc0) >> 6)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN2_DB_0_SET(x)                     (((x) << 6) & 0x00000fc0)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN1_MARGIN_0_MSB                                           16
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN1_MARGIN_0_LSB                                           12
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN1_MARGIN_0_MASK                                  0x0001f000
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN1_MARGIN_0_GET(x)                (((x) & 0x0001f000) >> 12)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN1_MARGIN_0_SET(x)                (((x) << 12) & 0x0001f000)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN2_MARGIN_0_MSB                                           21
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN2_MARGIN_0_LSB                                           17
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN2_MARGIN_0_MASK                                  0x003e0000
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN2_MARGIN_0_GET(x)                (((x) & 0x003e0000) >> 17)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XATTEN2_MARGIN_0_SET(x)                (((x) << 17) & 0x003e0000)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XLNA_GAIN_DB_0_MSB                                             26
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XLNA_GAIN_DB_0_LSB                                             22
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XLNA_GAIN_DB_0_MASK                                    0x07c00000
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XLNA_GAIN_DB_0_GET(x)                  (((x) & 0x07c00000) >> 22)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B0_XLNA_GAIN_DB_0_SET(x)                  (((x) << 22) & 0x07c00000)

/* macros for bb_agc_reg_map.BB_cca_b0 */
#define PHY_BB_CCA_B0_ADDRESS                                                                 0x00009e1c
#define PHY_BB_CCA_B0_OFFSET                                                                  0x0000001c
#define PHY_BB_CCA_B0_CF_MAXCCAPWR_0_MSB                                                               8
#define PHY_BB_CCA_B0_CF_MAXCCAPWR_0_LSB                                                               0
#define PHY_BB_CCA_B0_CF_MAXCCAPWR_0_MASK                                                     0x000001ff
#define PHY_BB_CCA_B0_CF_MAXCCAPWR_0_GET(x)                                    (((x) & 0x000001ff) >> 0)
#define PHY_BB_CCA_B0_CF_MAXCCAPWR_0_SET(x)                                    (((x) << 0) & 0x000001ff)
#define PHY_BB_CCA_B0_CF_CCA_COUNT_MAXC_MSB                                                           11
#define PHY_BB_CCA_B0_CF_CCA_COUNT_MAXC_LSB                                                            9
#define PHY_BB_CCA_B0_CF_CCA_COUNT_MAXC_MASK                                                  0x00000e00
#define PHY_BB_CCA_B0_CF_CCA_COUNT_MAXC_GET(x)                                 (((x) & 0x00000e00) >> 9)
#define PHY_BB_CCA_B0_CF_CCA_COUNT_MAXC_SET(x)                                 (((x) << 9) & 0x00000e00)
#define PHY_BB_CCA_B0_CF_THRESH62_MSB                                                                 19
#define PHY_BB_CCA_B0_CF_THRESH62_LSB                                                                 12
#define PHY_BB_CCA_B0_CF_THRESH62_MASK                                                        0x000ff000
#define PHY_BB_CCA_B0_CF_THRESH62_GET(x)                                      (((x) & 0x000ff000) >> 12)
#define PHY_BB_CCA_B0_CF_THRESH62_SET(x)                                      (((x) << 12) & 0x000ff000)
#define PHY_BB_CCA_B0_MINCCAPWR_0_MSB                                                                 28
#define PHY_BB_CCA_B0_MINCCAPWR_0_LSB                                                                 20
#define PHY_BB_CCA_B0_MINCCAPWR_0_MASK                                                        0x1ff00000
#define PHY_BB_CCA_B0_MINCCAPWR_0_GET(x)                                      (((x) & 0x1ff00000) >> 20)

/* macros for bb_agc_reg_map.BB_cca_ctrl_2_b0 */
#define PHY_BB_CCA_CTRL_2_B0_ADDRESS                                                          0x00009e20
#define PHY_BB_CCA_CTRL_2_B0_OFFSET                                                           0x00000020
#define PHY_BB_CCA_CTRL_2_B0_MINCCAPWR_THR_0_MSB                                                       8
#define PHY_BB_CCA_CTRL_2_B0_MINCCAPWR_THR_0_LSB                                                       0
#define PHY_BB_CCA_CTRL_2_B0_MINCCAPWR_THR_0_MASK                                             0x000001ff
#define PHY_BB_CCA_CTRL_2_B0_MINCCAPWR_THR_0_GET(x)                            (((x) & 0x000001ff) >> 0)
#define PHY_BB_CCA_CTRL_2_B0_MINCCAPWR_THR_0_SET(x)                            (((x) << 0) & 0x000001ff)
#define PHY_BB_CCA_CTRL_2_B0_ENABLE_MINCCAPWR_THR_MSB                                                  9
#define PHY_BB_CCA_CTRL_2_B0_ENABLE_MINCCAPWR_THR_LSB                                                  9
#define PHY_BB_CCA_CTRL_2_B0_ENABLE_MINCCAPWR_THR_MASK                                        0x00000200
#define PHY_BB_CCA_CTRL_2_B0_ENABLE_MINCCAPWR_THR_GET(x)                       (((x) & 0x00000200) >> 9)
#define PHY_BB_CCA_CTRL_2_B0_ENABLE_MINCCAPWR_THR_SET(x)                       (((x) << 9) & 0x00000200)
#define PHY_BB_CCA_CTRL_2_B0_NF_GAIN_COMP_0_MSB                                                       17
#define PHY_BB_CCA_CTRL_2_B0_NF_GAIN_COMP_0_LSB                                                       10
#define PHY_BB_CCA_CTRL_2_B0_NF_GAIN_COMP_0_MASK                                              0x0003fc00
#define PHY_BB_CCA_CTRL_2_B0_NF_GAIN_COMP_0_GET(x)                            (((x) & 0x0003fc00) >> 10)
#define PHY_BB_CCA_CTRL_2_B0_NF_GAIN_COMP_0_SET(x)                            (((x) << 10) & 0x0003fc00)
#define PHY_BB_CCA_CTRL_2_B0_THRESH62_MODE_MSB                                                        18
#define PHY_BB_CCA_CTRL_2_B0_THRESH62_MODE_LSB                                                        18
#define PHY_BB_CCA_CTRL_2_B0_THRESH62_MODE_MASK                                               0x00040000
#define PHY_BB_CCA_CTRL_2_B0_THRESH62_MODE_GET(x)                             (((x) & 0x00040000) >> 18)
#define PHY_BB_CCA_CTRL_2_B0_THRESH62_MODE_SET(x)                             (((x) << 18) & 0x00040000)

/* macros for bb_agc_reg_map.BB_restart */
#define PHY_BB_RESTART_ADDRESS                                                                0x00009e24
#define PHY_BB_RESTART_OFFSET                                                                 0x00000024
#define PHY_BB_RESTART_ENABLE_RESTART_MSB                                                              0
#define PHY_BB_RESTART_ENABLE_RESTART_LSB                                                              0
#define PHY_BB_RESTART_ENABLE_RESTART_MASK                                                    0x00000001
#define PHY_BB_RESTART_ENABLE_RESTART_GET(x)                                   (((x) & 0x00000001) >> 0)
#define PHY_BB_RESTART_ENABLE_RESTART_SET(x)                                   (((x) << 0) & 0x00000001)
#define PHY_BB_RESTART_RESTART_LGFIRPWR_DELTA_MSB                                                      5
#define PHY_BB_RESTART_RESTART_LGFIRPWR_DELTA_LSB                                                      1
#define PHY_BB_RESTART_RESTART_LGFIRPWR_DELTA_MASK                                            0x0000003e
#define PHY_BB_RESTART_RESTART_LGFIRPWR_DELTA_GET(x)                           (((x) & 0x0000003e) >> 1)
#define PHY_BB_RESTART_RESTART_LGFIRPWR_DELTA_SET(x)                           (((x) << 1) & 0x0000003e)
#define PHY_BB_RESTART_ENABLE_PWR_DROP_ERR_MSB                                                         6
#define PHY_BB_RESTART_ENABLE_PWR_DROP_ERR_LSB                                                         6
#define PHY_BB_RESTART_ENABLE_PWR_DROP_ERR_MASK                                               0x00000040
#define PHY_BB_RESTART_ENABLE_PWR_DROP_ERR_GET(x)                              (((x) & 0x00000040) >> 6)
#define PHY_BB_RESTART_ENABLE_PWR_DROP_ERR_SET(x)                              (((x) << 6) & 0x00000040)
#define PHY_BB_RESTART_PWRDROP_LGFIRPWR_DELTA_MSB                                                     11
#define PHY_BB_RESTART_PWRDROP_LGFIRPWR_DELTA_LSB                                                      7
#define PHY_BB_RESTART_PWRDROP_LGFIRPWR_DELTA_MASK                                            0x00000f80
#define PHY_BB_RESTART_PWRDROP_LGFIRPWR_DELTA_GET(x)                           (((x) & 0x00000f80) >> 7)
#define PHY_BB_RESTART_PWRDROP_LGFIRPWR_DELTA_SET(x)                           (((x) << 7) & 0x00000f80)
#define PHY_BB_RESTART_OFDM_CCK_RSSI_BIAS_MSB                                                         17
#define PHY_BB_RESTART_OFDM_CCK_RSSI_BIAS_LSB                                                         12
#define PHY_BB_RESTART_OFDM_CCK_RSSI_BIAS_MASK                                                0x0003f000
#define PHY_BB_RESTART_OFDM_CCK_RSSI_BIAS_GET(x)                              (((x) & 0x0003f000) >> 12)
#define PHY_BB_RESTART_OFDM_CCK_RSSI_BIAS_SET(x)                              (((x) << 12) & 0x0003f000)
#define PHY_BB_RESTART_ANT_FAST_DIV_GC_LIMIT_MSB                                                      20
#define PHY_BB_RESTART_ANT_FAST_DIV_GC_LIMIT_LSB                                                      18
#define PHY_BB_RESTART_ANT_FAST_DIV_GC_LIMIT_MASK                                             0x001c0000
#define PHY_BB_RESTART_ANT_FAST_DIV_GC_LIMIT_GET(x)                           (((x) & 0x001c0000) >> 18)
#define PHY_BB_RESTART_ANT_FAST_DIV_GC_LIMIT_SET(x)                           (((x) << 18) & 0x001c0000)
#define PHY_BB_RESTART_ENABLE_ANT_FAST_DIV_M2FLAG_MSB                                                 21
#define PHY_BB_RESTART_ENABLE_ANT_FAST_DIV_M2FLAG_LSB                                                 21
#define PHY_BB_RESTART_ENABLE_ANT_FAST_DIV_M2FLAG_MASK                                        0x00200000
#define PHY_BB_RESTART_ENABLE_ANT_FAST_DIV_M2FLAG_GET(x)                      (((x) & 0x00200000) >> 21)
#define PHY_BB_RESTART_ENABLE_ANT_FAST_DIV_M2FLAG_SET(x)                      (((x) << 21) & 0x00200000)
#define PHY_BB_RESTART_WEAK_RSSI_VOTE_THR_MSB                                                         28
#define PHY_BB_RESTART_WEAK_RSSI_VOTE_THR_LSB                                                         22
#define PHY_BB_RESTART_WEAK_RSSI_VOTE_THR_MASK                                                0x1fc00000
#define PHY_BB_RESTART_WEAK_RSSI_VOTE_THR_GET(x)                              (((x) & 0x1fc00000) >> 22)
#define PHY_BB_RESTART_WEAK_RSSI_VOTE_THR_SET(x)                              (((x) << 22) & 0x1fc00000)
#define PHY_BB_RESTART_ENABLE_PWR_DROP_ERR_CCK_MSB                                                    29
#define PHY_BB_RESTART_ENABLE_PWR_DROP_ERR_CCK_LSB                                                    29
#define PHY_BB_RESTART_ENABLE_PWR_DROP_ERR_CCK_MASK                                           0x20000000
#define PHY_BB_RESTART_ENABLE_PWR_DROP_ERR_CCK_GET(x)                         (((x) & 0x20000000) >> 29)
#define PHY_BB_RESTART_ENABLE_PWR_DROP_ERR_CCK_SET(x)                         (((x) << 29) & 0x20000000)
#define PHY_BB_RESTART_DISABLE_DC_RESTART_MSB                                                         30
#define PHY_BB_RESTART_DISABLE_DC_RESTART_LSB                                                         30
#define PHY_BB_RESTART_DISABLE_DC_RESTART_MASK                                                0x40000000
#define PHY_BB_RESTART_DISABLE_DC_RESTART_GET(x)                              (((x) & 0x40000000) >> 30)
#define PHY_BB_RESTART_DISABLE_DC_RESTART_SET(x)                              (((x) << 30) & 0x40000000)
#define PHY_BB_RESTART_RESTART_MODE_BW40_MSB                                                          31
#define PHY_BB_RESTART_RESTART_MODE_BW40_LSB                                                          31
#define PHY_BB_RESTART_RESTART_MODE_BW40_MASK                                                 0x80000000
#define PHY_BB_RESTART_RESTART_MODE_BW40_GET(x)                               (((x) & 0x80000000) >> 31)
#define PHY_BB_RESTART_RESTART_MODE_BW40_SET(x)                               (((x) << 31) & 0x80000000)

/* macros for bb_agc_reg_map.BB_multichain_gain_ctrl */
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ADDRESS                                                   0x00009e28
#define PHY_BB_MULTICHAIN_GAIN_CTRL_OFFSET                                                    0x00000028
#define PHY_BB_MULTICHAIN_GAIN_CTRL_QUICKDROP_LOW_MSB                                                  7
#define PHY_BB_MULTICHAIN_GAIN_CTRL_QUICKDROP_LOW_LSB                                                  0
#define PHY_BB_MULTICHAIN_GAIN_CTRL_QUICKDROP_LOW_MASK                                        0x000000ff
#define PHY_BB_MULTICHAIN_GAIN_CTRL_QUICKDROP_LOW_GET(x)                       (((x) & 0x000000ff) >> 0)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_QUICKDROP_LOW_SET(x)                       (((x) << 0) & 0x000000ff)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_CHECK_STRONG_ANT_MSB                                        8
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_CHECK_STRONG_ANT_LSB                                        8
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_CHECK_STRONG_ANT_MASK                              0x00000100
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_CHECK_STRONG_ANT_GET(x)             (((x) & 0x00000100) >> 8)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_CHECK_STRONG_ANT_SET(x)             (((x) << 8) & 0x00000100)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_FAST_DIV_BIAS_MSB                                             14
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_FAST_DIV_BIAS_LSB                                              9
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_FAST_DIV_BIAS_MASK                                    0x00007e00
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_FAST_DIV_BIAS_GET(x)                   (((x) & 0x00007e00) >> 9)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_FAST_DIV_BIAS_SET(x)                   (((x) << 9) & 0x00007e00)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_SNR_MSB                                            20
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_SNR_LSB                                            15
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_SNR_MASK                                   0x001f8000
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_SNR_GET(x)                 (((x) & 0x001f8000) >> 15)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_SNR_SET(x)                 (((x) << 15) & 0x001f8000)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_ENA_MSB                                            21
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_ENA_LSB                                            21
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_ENA_MASK                                   0x00200000
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_ENA_GET(x)                 (((x) & 0x00200000) >> 21)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_ENA_SET(x)                 (((x) << 21) & 0x00200000)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_MODE_MSB                                           22
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_MODE_LSB                                           22
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_MODE_MASK                                  0x00400000
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_MODE_GET(x)                (((x) & 0x00400000) >> 22)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_CAP_GAIN_RATIO_MODE_SET(x)                (((x) << 22) & 0x00400000)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_ANT_SW_RX_PROT_MSB                                         23
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_ANT_SW_RX_PROT_LSB                                         23
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_ANT_SW_RX_PROT_MASK                                0x00800000
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_ANT_SW_RX_PROT_GET(x)              (((x) & 0x00800000) >> 23)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_ANT_SW_RX_PROT_SET(x)              (((x) << 23) & 0x00800000)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_ANT_DIV_LNADIV_MSB                                         24
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_ANT_DIV_LNADIV_LSB                                         24
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_ANT_DIV_LNADIV_MASK                                0x01000000
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_ANT_DIV_LNADIV_GET(x)              (((x) & 0x01000000) >> 24)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ENABLE_ANT_DIV_LNADIV_SET(x)              (((x) << 24) & 0x01000000)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_ALT_LNACONF_MSB                                           26
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_ALT_LNACONF_LSB                                           25
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_ALT_LNACONF_MASK                                  0x06000000
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_ALT_LNACONF_GET(x)                (((x) & 0x06000000) >> 25)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_ALT_LNACONF_SET(x)                (((x) << 25) & 0x06000000)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_MAIN_LNACONF_MSB                                          28
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_MAIN_LNACONF_LSB                                          27
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_MAIN_LNACONF_MASK                                 0x18000000
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_MAIN_LNACONF_GET(x)               (((x) & 0x18000000) >> 27)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_MAIN_LNACONF_SET(x)               (((x) << 27) & 0x18000000)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_ALT_GAINTB_MSB                                            29
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_ALT_GAINTB_LSB                                            29
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_ALT_GAINTB_MASK                                   0x20000000
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_ALT_GAINTB_GET(x)                 (((x) & 0x20000000) >> 29)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_ALT_GAINTB_SET(x)                 (((x) << 29) & 0x20000000)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_MAIN_GAINTB_MSB                                           30
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_MAIN_GAINTB_LSB                                           30
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_MAIN_GAINTB_MASK                                  0x40000000
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_MAIN_GAINTB_GET(x)                (((x) & 0x40000000) >> 30)
#define PHY_BB_MULTICHAIN_GAIN_CTRL_ANT_DIV_MAIN_GAINTB_SET(x)                (((x) << 30) & 0x40000000)

/* macros for bb_agc_reg_map.BB_ext_chan_pwr_thr_1 */
#define PHY_BB_EXT_CHAN_PWR_THR_1_ADDRESS                                                     0x00009e2c
#define PHY_BB_EXT_CHAN_PWR_THR_1_OFFSET                                                      0x0000002c
#define PHY_BB_EXT_CHAN_PWR_THR_1_THRESH62_EXT_MSB                                                     7
#define PHY_BB_EXT_CHAN_PWR_THR_1_THRESH62_EXT_LSB                                                     0
#define PHY_BB_EXT_CHAN_PWR_THR_1_THRESH62_EXT_MASK                                           0x000000ff
#define PHY_BB_EXT_CHAN_PWR_THR_1_THRESH62_EXT_GET(x)                          (((x) & 0x000000ff) >> 0)
#define PHY_BB_EXT_CHAN_PWR_THR_1_THRESH62_EXT_SET(x)                          (((x) << 0) & 0x000000ff)
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_MINGAINIDX_MSB                                      15
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_MINGAINIDX_LSB                                       8
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_MINGAINIDX_MASK                             0x0000ff00
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_MINGAINIDX_GET(x)            (((x) & 0x0000ff00) >> 8)
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_MINGAINIDX_SET(x)            (((x) << 8) & 0x0000ff00)
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_DELTAGAINIDX_MSB                                    20
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_DELTAGAINIDX_LSB                                    16
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_DELTAGAINIDX_MASK                           0x001f0000
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_DELTAGAINIDX_GET(x)         (((x) & 0x001f0000) >> 16)
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_DELTAGAINIDX_SET(x)         (((x) << 16) & 0x001f0000)
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_DELTANF_MSB                                         26
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_DELTANF_LSB                                         21
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_DELTANF_MASK                                0x07e00000
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_DELTANF_GET(x)              (((x) & 0x07e00000) >> 21)
#define PHY_BB_EXT_CHAN_PWR_THR_1_ANT_DIV_ALT_ANT_DELTANF_SET(x)              (((x) << 21) & 0x07e00000)

/* macros for bb_agc_reg_map.BB_ext_chan_detect_win */
#define PHY_BB_EXT_CHAN_DETECT_WIN_ADDRESS                                                    0x00009e30
#define PHY_BB_EXT_CHAN_DETECT_WIN_OFFSET                                                     0x00000030
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_MSB                                               3
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_LSB                                               0
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_MASK                                     0x0000000f
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_GET(x)                    (((x) & 0x0000000f) >> 0)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_SET(x)                    (((x) << 0) & 0x0000000f)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_LOW_MSB                                           7
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_LOW_LSB                                           4
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_LOW_MASK                                 0x000000f0
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_LOW_GET(x)                (((x) & 0x000000f0) >> 4)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_LOW_SET(x)                (((x) << 4) & 0x000000f0)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_CCK_MSB                                          12
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_CCK_LSB                                           8
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_CCK_MASK                                 0x00001f00
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_CCK_GET(x)                (((x) & 0x00001f00) >> 8)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_WEAK_CCK_SET(x)                (((x) << 8) & 0x00001f00)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_20H_COUNT_MSB                                                  15
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_20H_COUNT_LSB                                                  13
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_20H_COUNT_MASK                                         0x0000e000
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_20H_COUNT_GET(x)                       (((x) & 0x0000e000) >> 13)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_20H_COUNT_SET(x)                       (((x) << 13) & 0x0000e000)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_EXT_BLK_COUNT_MSB                                              18
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_EXT_BLK_COUNT_LSB                                              16
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_EXT_BLK_COUNT_MASK                                     0x00070000
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_EXT_BLK_COUNT_GET(x)                   (((x) & 0x00070000) >> 16)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_EXT_BLK_COUNT_SET(x)                   (((x) << 16) & 0x00070000)
#define PHY_BB_EXT_CHAN_DETECT_WIN_WEAK_SIG_THR_CCK_EXT_MSB                                           24
#define PHY_BB_EXT_CHAN_DETECT_WIN_WEAK_SIG_THR_CCK_EXT_LSB                                           19
#define PHY_BB_EXT_CHAN_DETECT_WIN_WEAK_SIG_THR_CCK_EXT_MASK                                  0x01f80000
#define PHY_BB_EXT_CHAN_DETECT_WIN_WEAK_SIG_THR_CCK_EXT_GET(x)                (((x) & 0x01f80000) >> 19)
#define PHY_BB_EXT_CHAN_DETECT_WIN_WEAK_SIG_THR_CCK_EXT_SET(x)                (((x) << 19) & 0x01f80000)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_THRESH_MSB                                            28
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_THRESH_LSB                                            25
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_THRESH_MASK                                   0x1e000000
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_THRESH_GET(x)                 (((x) & 0x1e000000) >> 25)
#define PHY_BB_EXT_CHAN_DETECT_WIN_DET_DIFF_WIN_THRESH_SET(x)                 (((x) << 25) & 0x1e000000)

/* macros for bb_agc_reg_map.BB_pwr_thr_20_40_det */
#define PHY_BB_PWR_THR_20_40_DET_ADDRESS                                                      0x00009e34
#define PHY_BB_PWR_THR_20_40_DET_OFFSET                                                       0x00000034
#define PHY_BB_PWR_THR_20_40_DET_PWRDIFF40_THRSTR_MSB                                                  4
#define PHY_BB_PWR_THR_20_40_DET_PWRDIFF40_THRSTR_LSB                                                  0
#define PHY_BB_PWR_THR_20_40_DET_PWRDIFF40_THRSTR_MASK                                        0x0000001f
#define PHY_BB_PWR_THR_20_40_DET_PWRDIFF40_THRSTR_GET(x)                       (((x) & 0x0000001f) >> 0)
#define PHY_BB_PWR_THR_20_40_DET_PWRDIFF40_THRSTR_SET(x)                       (((x) << 0) & 0x0000001f)
#define PHY_BB_PWR_THR_20_40_DET_BLOCKER40_MAX_MSB                                                    10
#define PHY_BB_PWR_THR_20_40_DET_BLOCKER40_MAX_LSB                                                     5
#define PHY_BB_PWR_THR_20_40_DET_BLOCKER40_MAX_MASK                                           0x000007e0
#define PHY_BB_PWR_THR_20_40_DET_BLOCKER40_MAX_GET(x)                          (((x) & 0x000007e0) >> 5)
#define PHY_BB_PWR_THR_20_40_DET_BLOCKER40_MAX_SET(x)                          (((x) << 5) & 0x000007e0)
#define PHY_BB_PWR_THR_20_40_DET_DET40_PWRSTEP_MAX_MSB                                                15
#define PHY_BB_PWR_THR_20_40_DET_DET40_PWRSTEP_MAX_LSB                                                11
#define PHY_BB_PWR_THR_20_40_DET_DET40_PWRSTEP_MAX_MASK                                       0x0000f800
#define PHY_BB_PWR_THR_20_40_DET_DET40_PWRSTEP_MAX_GET(x)                     (((x) & 0x0000f800) >> 11)
#define PHY_BB_PWR_THR_20_40_DET_DET40_PWRSTEP_MAX_SET(x)                     (((x) << 11) & 0x0000f800)
#define PHY_BB_PWR_THR_20_40_DET_DET40_THR_SNR_MSB                                                    23
#define PHY_BB_PWR_THR_20_40_DET_DET40_THR_SNR_LSB                                                    16
#define PHY_BB_PWR_THR_20_40_DET_DET40_THR_SNR_MASK                                           0x00ff0000
#define PHY_BB_PWR_THR_20_40_DET_DET40_THR_SNR_GET(x)                         (((x) & 0x00ff0000) >> 16)
#define PHY_BB_PWR_THR_20_40_DET_DET40_THR_SNR_SET(x)                         (((x) << 16) & 0x00ff0000)
#define PHY_BB_PWR_THR_20_40_DET_DET40_PRI_BIAS_MSB                                                   28
#define PHY_BB_PWR_THR_20_40_DET_DET40_PRI_BIAS_LSB                                                   24
#define PHY_BB_PWR_THR_20_40_DET_DET40_PRI_BIAS_MASK                                          0x1f000000
#define PHY_BB_PWR_THR_20_40_DET_DET40_PRI_BIAS_GET(x)                        (((x) & 0x1f000000) >> 24)
#define PHY_BB_PWR_THR_20_40_DET_DET40_PRI_BIAS_SET(x)                        (((x) << 24) & 0x1f000000)
#define PHY_BB_PWR_THR_20_40_DET_PWRSTEP40_ENA_MSB                                                    29
#define PHY_BB_PWR_THR_20_40_DET_PWRSTEP40_ENA_LSB                                                    29
#define PHY_BB_PWR_THR_20_40_DET_PWRSTEP40_ENA_MASK                                           0x20000000
#define PHY_BB_PWR_THR_20_40_DET_PWRSTEP40_ENA_GET(x)                         (((x) & 0x20000000) >> 29)
#define PHY_BB_PWR_THR_20_40_DET_PWRSTEP40_ENA_SET(x)                         (((x) << 29) & 0x20000000)
#define PHY_BB_PWR_THR_20_40_DET_LOWSNR40_ENA_MSB                                                     30
#define PHY_BB_PWR_THR_20_40_DET_LOWSNR40_ENA_LSB                                                     30
#define PHY_BB_PWR_THR_20_40_DET_LOWSNR40_ENA_MASK                                            0x40000000
#define PHY_BB_PWR_THR_20_40_DET_LOWSNR40_ENA_GET(x)                          (((x) & 0x40000000) >> 30)
#define PHY_BB_PWR_THR_20_40_DET_LOWSNR40_ENA_SET(x)                          (((x) << 30) & 0x40000000)

/* macros for bb_agc_reg_map.BB_rifs_srch */
#define PHY_BB_RIFS_SRCH_ADDRESS                                                              0x00009e38
#define PHY_BB_RIFS_SRCH_OFFSET                                                               0x00000038
#define PHY_BB_RIFS_SRCH_INIT_GAIN_DB_OFFSET_MSB                                                      15
#define PHY_BB_RIFS_SRCH_INIT_GAIN_DB_OFFSET_LSB                                                       8
#define PHY_BB_RIFS_SRCH_INIT_GAIN_DB_OFFSET_MASK                                             0x0000ff00
#define PHY_BB_RIFS_SRCH_INIT_GAIN_DB_OFFSET_GET(x)                            (((x) & 0x0000ff00) >> 8)
#define PHY_BB_RIFS_SRCH_INIT_GAIN_DB_OFFSET_SET(x)                            (((x) << 8) & 0x0000ff00)
#define PHY_BB_RIFS_SRCH_RIFS_INIT_DELAY_MSB                                                          25
#define PHY_BB_RIFS_SRCH_RIFS_INIT_DELAY_LSB                                                          16
#define PHY_BB_RIFS_SRCH_RIFS_INIT_DELAY_MASK                                                 0x03ff0000
#define PHY_BB_RIFS_SRCH_RIFS_INIT_DELAY_GET(x)                               (((x) & 0x03ff0000) >> 16)
#define PHY_BB_RIFS_SRCH_RIFS_INIT_DELAY_SET(x)                               (((x) << 16) & 0x03ff0000)
#define PHY_BB_RIFS_SRCH_RIFS_DISABLE_PWRLOW_GC_MSB                                                   26
#define PHY_BB_RIFS_SRCH_RIFS_DISABLE_PWRLOW_GC_LSB                                                   26
#define PHY_BB_RIFS_SRCH_RIFS_DISABLE_PWRLOW_GC_MASK                                          0x04000000
#define PHY_BB_RIFS_SRCH_RIFS_DISABLE_PWRLOW_GC_GET(x)                        (((x) & 0x04000000) >> 26)
#define PHY_BB_RIFS_SRCH_RIFS_DISABLE_PWRLOW_GC_SET(x)                        (((x) << 26) & 0x04000000)
#define PHY_BB_RIFS_SRCH_RIFS_DISABLE_CCK_DET_MSB                                                     27
#define PHY_BB_RIFS_SRCH_RIFS_DISABLE_CCK_DET_LSB                                                     27
#define PHY_BB_RIFS_SRCH_RIFS_DISABLE_CCK_DET_MASK                                            0x08000000
#define PHY_BB_RIFS_SRCH_RIFS_DISABLE_CCK_DET_GET(x)                          (((x) & 0x08000000) >> 27)
#define PHY_BB_RIFS_SRCH_RIFS_DISABLE_CCK_DET_SET(x)                          (((x) << 27) & 0x08000000)

/* macros for bb_agc_reg_map.BB_peak_det_ctrl_1 */
#define PHY_BB_PEAK_DET_CTRL_1_ADDRESS                                                        0x00009e3c
#define PHY_BB_PEAK_DET_CTRL_1_OFFSET                                                         0x0000003c
#define PHY_BB_PEAK_DET_CTRL_1_USE_OC_GAIN_TABLE_MSB                                                   0
#define PHY_BB_PEAK_DET_CTRL_1_USE_OC_GAIN_TABLE_LSB                                                   0
#define PHY_BB_PEAK_DET_CTRL_1_USE_OC_GAIN_TABLE_MASK                                         0x00000001
#define PHY_BB_PEAK_DET_CTRL_1_USE_OC_GAIN_TABLE_GET(x)                        (((x) & 0x00000001) >> 0)
#define PHY_BB_PEAK_DET_CTRL_1_USE_OC_GAIN_TABLE_SET(x)                        (((x) << 0) & 0x00000001)
#define PHY_BB_PEAK_DET_CTRL_1_USE_PEAK_DET_MSB                                                        1
#define PHY_BB_PEAK_DET_CTRL_1_USE_PEAK_DET_LSB                                                        1
#define PHY_BB_PEAK_DET_CTRL_1_USE_PEAK_DET_MASK                                              0x00000002
#define PHY_BB_PEAK_DET_CTRL_1_USE_PEAK_DET_GET(x)                             (((x) & 0x00000002) >> 1)
#define PHY_BB_PEAK_DET_CTRL_1_USE_PEAK_DET_SET(x)                             (((x) << 1) & 0x00000002)
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_WIN_LEN_MSB                                                    7
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_WIN_LEN_LSB                                                    2
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_WIN_LEN_MASK                                          0x000000fc
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_WIN_LEN_GET(x)                         (((x) & 0x000000fc) >> 2)
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_WIN_LEN_SET(x)                         (((x) << 2) & 0x000000fc)
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_LOW_0_MSB                                           12
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_LOW_0_LSB                                            8
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_LOW_0_MASK                                  0x00001f00
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_LOW_0_GET(x)                 (((x) & 0x00001f00) >> 8)
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_LOW_0_SET(x)                 (((x) << 8) & 0x00001f00)
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_MED_0_MSB                                           17
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_MED_0_LSB                                           13
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_MED_0_MASK                                  0x0003e000
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_MED_0_GET(x)                (((x) & 0x0003e000) >> 13)
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_MED_0_SET(x)                (((x) << 13) & 0x0003e000)
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_HIGH_0_MSB                                          22
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_HIGH_0_LSB                                          18
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_HIGH_0_MASK                                 0x007c0000
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_HIGH_0_GET(x)               (((x) & 0x007c0000) >> 18)
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_TALLY_THR_HIGH_0_SET(x)               (((x) << 18) & 0x007c0000)
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_SETTLING_MSB                                                  29
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_SETTLING_LSB                                                  23
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_SETTLING_MASK                                         0x3f800000
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_SETTLING_GET(x)                       (((x) & 0x3f800000) >> 23)
#define PHY_BB_PEAK_DET_CTRL_1_PEAK_DET_SETTLING_SET(x)                       (((x) << 23) & 0x3f800000)
#define PHY_BB_PEAK_DET_CTRL_1_PWD_PKDET_DURING_CAL_MSB                                               30
#define PHY_BB_PEAK_DET_CTRL_1_PWD_PKDET_DURING_CAL_LSB                                               30
#define PHY_BB_PEAK_DET_CTRL_1_PWD_PKDET_DURING_CAL_MASK                                      0x40000000
#define PHY_BB_PEAK_DET_CTRL_1_PWD_PKDET_DURING_CAL_GET(x)                    (((x) & 0x40000000) >> 30)
#define PHY_BB_PEAK_DET_CTRL_1_PWD_PKDET_DURING_CAL_SET(x)                    (((x) << 30) & 0x40000000)
#define PHY_BB_PEAK_DET_CTRL_1_PWD_PKDET_DURING_RX_MSB                                                31
#define PHY_BB_PEAK_DET_CTRL_1_PWD_PKDET_DURING_RX_LSB                                                31
#define PHY_BB_PEAK_DET_CTRL_1_PWD_PKDET_DURING_RX_MASK                                       0x80000000
#define PHY_BB_PEAK_DET_CTRL_1_PWD_PKDET_DURING_RX_GET(x)                     (((x) & 0x80000000) >> 31)
#define PHY_BB_PEAK_DET_CTRL_1_PWD_PKDET_DURING_RX_SET(x)                     (((x) << 31) & 0x80000000)

/* macros for bb_agc_reg_map.BB_peak_det_ctrl_2 */
#define PHY_BB_PEAK_DET_CTRL_2_ADDRESS                                                        0x00009e40
#define PHY_BB_PEAK_DET_CTRL_2_OFFSET                                                         0x00000040
#define PHY_BB_PEAK_DET_CTRL_2_RFSAT_2_ADD_RFGAIN_DEL_MSB                                              9
#define PHY_BB_PEAK_DET_CTRL_2_RFSAT_2_ADD_RFGAIN_DEL_LSB                                              0
#define PHY_BB_PEAK_DET_CTRL_2_RFSAT_2_ADD_RFGAIN_DEL_MASK                                    0x000003ff
#define PHY_BB_PEAK_DET_CTRL_2_RFSAT_2_ADD_RFGAIN_DEL_GET(x)                   (((x) & 0x000003ff) >> 0)
#define PHY_BB_PEAK_DET_CTRL_2_RFSAT_2_ADD_RFGAIN_DEL_SET(x)                   (((x) << 0) & 0x000003ff)
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_LOW_0_MSB                                              14
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_LOW_0_LSB                                              10
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_LOW_0_MASK                                     0x00007c00
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_LOW_0_GET(x)                   (((x) & 0x00007c00) >> 10)
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_LOW_0_SET(x)                   (((x) << 10) & 0x00007c00)
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_MED_0_MSB                                              19
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_MED_0_LSB                                              15
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_MED_0_MASK                                     0x000f8000
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_MED_0_GET(x)                   (((x) & 0x000f8000) >> 15)
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_MED_0_SET(x)                   (((x) << 15) & 0x000f8000)
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_HIGH_0_MSB                                             24
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_HIGH_0_LSB                                             20
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_HIGH_0_MASK                                    0x01f00000
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_HIGH_0_GET(x)                  (((x) & 0x01f00000) >> 20)
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_HIGH_0_SET(x)                  (((x) << 20) & 0x01f00000)
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_NON_0_MSB                                              29
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_NON_0_LSB                                              25
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_NON_0_MASK                                     0x3e000000
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_NON_0_GET(x)                   (((x) & 0x3e000000) >> 25)
#define PHY_BB_PEAK_DET_CTRL_2_RF_GAIN_DROP_DB_NON_0_SET(x)                   (((x) << 25) & 0x3e000000)
#define PHY_BB_PEAK_DET_CTRL_2_ENABLE_RFSAT_RESTART_MSB                                               30
#define PHY_BB_PEAK_DET_CTRL_2_ENABLE_RFSAT_RESTART_LSB                                               30
#define PHY_BB_PEAK_DET_CTRL_2_ENABLE_RFSAT_RESTART_MASK                                      0x40000000
#define PHY_BB_PEAK_DET_CTRL_2_ENABLE_RFSAT_RESTART_GET(x)                    (((x) & 0x40000000) >> 30)
#define PHY_BB_PEAK_DET_CTRL_2_ENABLE_RFSAT_RESTART_SET(x)                    (((x) << 30) & 0x40000000)

/* macros for bb_agc_reg_map.BB_rx_gain_bounds_1 */
#define PHY_BB_RX_GAIN_BOUNDS_1_ADDRESS                                                       0x00009e44
#define PHY_BB_RX_GAIN_BOUNDS_1_OFFSET                                                        0x00000044
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_MB_GAIN_MSB                                                     7
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_MB_GAIN_LSB                                                     0
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_MB_GAIN_MASK                                           0x000000ff
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_MB_GAIN_GET(x)                          (((x) & 0x000000ff) >> 0)
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_MB_GAIN_SET(x)                          (((x) << 0) & 0x000000ff)
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_RF_GAIN_REF_MSB                                                15
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_RF_GAIN_REF_LSB                                                 8
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_RF_GAIN_REF_MASK                                       0x0000ff00
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_RF_GAIN_REF_GET(x)                      (((x) & 0x0000ff00) >> 8)
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_RF_GAIN_REF_SET(x)                      (((x) << 8) & 0x0000ff00)
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_RF_GAIN_MSB                                                    23
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_RF_GAIN_LSB                                                    16
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_RF_GAIN_MASK                                           0x00ff0000
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_RF_GAIN_GET(x)                         (((x) & 0x00ff0000) >> 16)
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_MAX_RF_GAIN_SET(x)                         (((x) << 16) & 0x00ff0000)
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_OCGAIN_SEL_2G_MSB                                                  24
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_OCGAIN_SEL_2G_LSB                                                  24
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_OCGAIN_SEL_2G_MASK                                         0x01000000
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_OCGAIN_SEL_2G_GET(x)                       (((x) & 0x01000000) >> 24)
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_OCGAIN_SEL_2G_SET(x)                       (((x) << 24) & 0x01000000)
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_OCGAIN_SEL_5G_MSB                                                  25
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_OCGAIN_SEL_5G_LSB                                                  25
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_OCGAIN_SEL_5G_MASK                                         0x02000000
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_OCGAIN_SEL_5G_GET(x)                       (((x) & 0x02000000) >> 25)
#define PHY_BB_RX_GAIN_BOUNDS_1_RX_OCGAIN_SEL_5G_SET(x)                       (((x) << 25) & 0x02000000)

/* macros for bb_agc_reg_map.BB_rx_gain_bounds_2 */
#define PHY_BB_RX_GAIN_BOUNDS_2_ADDRESS                                                       0x00009e48
#define PHY_BB_RX_GAIN_BOUNDS_2_OFFSET                                                        0x00000048
#define PHY_BB_RX_GAIN_BOUNDS_2_GC_RSSI_LOW_DB_MSB                                                     7
#define PHY_BB_RX_GAIN_BOUNDS_2_GC_RSSI_LOW_DB_LSB                                                     0
#define PHY_BB_RX_GAIN_BOUNDS_2_GC_RSSI_LOW_DB_MASK                                           0x000000ff
#define PHY_BB_RX_GAIN_BOUNDS_2_GC_RSSI_LOW_DB_GET(x)                          (((x) & 0x000000ff) >> 0)
#define PHY_BB_RX_GAIN_BOUNDS_2_GC_RSSI_LOW_DB_SET(x)                          (((x) << 0) & 0x000000ff)
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_REF_BASE_ADDR_MSB                                             15
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_REF_BASE_ADDR_LSB                                              8
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_REF_BASE_ADDR_MASK                                    0x0000ff00
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_REF_BASE_ADDR_GET(x)                   (((x) & 0x0000ff00) >> 8)
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_REF_BASE_ADDR_SET(x)                   (((x) << 8) & 0x0000ff00)
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_BASE_ADDR_MSB                                                 23
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_BASE_ADDR_LSB                                                 16
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_BASE_ADDR_MASK                                        0x00ff0000
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_BASE_ADDR_GET(x)                      (((x) & 0x00ff0000) >> 16)
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_BASE_ADDR_SET(x)                      (((x) << 16) & 0x00ff0000)
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_DIV_BASE_ADDR_MSB                                             31
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_DIV_BASE_ADDR_LSB                                             24
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_DIV_BASE_ADDR_MASK                                    0xff000000
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_DIV_BASE_ADDR_GET(x)                  (((x) & 0xff000000) >> 24)
#define PHY_BB_RX_GAIN_BOUNDS_2_RF_GAIN_DIV_BASE_ADDR_SET(x)                  (((x) << 24) & 0xff000000)

/* macros for bb_agc_reg_map.BB_peak_det_cal_ctrl */
#define PHY_BB_PEAK_DET_CAL_CTRL_ADDRESS                                                      0x00009e4c
#define PHY_BB_PEAK_DET_CAL_CTRL_OFFSET                                                       0x0000004c
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_WIN_THR_MSB                                                 5
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_WIN_THR_LSB                                                 0
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_WIN_THR_MASK                                       0x0000003f
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_WIN_THR_GET(x)                      (((x) & 0x0000003f) >> 0)
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_WIN_THR_SET(x)                      (((x) << 0) & 0x0000003f)
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_BIAS_MSB                                                   11
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_BIAS_LSB                                                    6
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_BIAS_MASK                                          0x00000fc0
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_BIAS_GET(x)                         (((x) & 0x00000fc0) >> 6)
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_BIAS_SET(x)                         (((x) << 6) & 0x00000fc0)
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_MEAS_TIME_SEL_MSB                                          13
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_MEAS_TIME_SEL_LSB                                          12
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_MEAS_TIME_SEL_MASK                                 0x00003000
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_MEAS_TIME_SEL_GET(x)               (((x) & 0x00003000) >> 12)
#define PHY_BB_PEAK_DET_CAL_CTRL_PKDET_CAL_MEAS_TIME_SEL_SET(x)               (((x) << 12) & 0x00003000)

/* macros for bb_agc_reg_map.BB_agc_dig_dc_ctrl */
#define PHY_BB_AGC_DIG_DC_CTRL_ADDRESS                                                        0x00009e50
#define PHY_BB_AGC_DIG_DC_CTRL_OFFSET                                                         0x00000050
#define PHY_BB_AGC_DIG_DC_CTRL_USE_DIG_DC_MSB                                                          0
#define PHY_BB_AGC_DIG_DC_CTRL_USE_DIG_DC_LSB                                                          0
#define PHY_BB_AGC_DIG_DC_CTRL_USE_DIG_DC_MASK                                                0x00000001
#define PHY_BB_AGC_DIG_DC_CTRL_USE_DIG_DC_GET(x)                               (((x) & 0x00000001) >> 0)
#define PHY_BB_AGC_DIG_DC_CTRL_USE_DIG_DC_SET(x)                               (((x) << 0) & 0x00000001)
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_SCALE_BIAS_MSB                                                   3
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_SCALE_BIAS_LSB                                                   1
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_SCALE_BIAS_MASK                                         0x0000000e
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_SCALE_BIAS_GET(x)                        (((x) & 0x0000000e) >> 1)
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_SCALE_BIAS_SET(x)                        (((x) << 1) & 0x0000000e)
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_CORRECT_CAP_MSB                                                  9
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_CORRECT_CAP_LSB                                                  4
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_CORRECT_CAP_MASK                                        0x000003f0
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_CORRECT_CAP_GET(x)                       (((x) & 0x000003f0) >> 4)
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_CORRECT_CAP_SET(x)                       (((x) << 4) & 0x000003f0)
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_SWITCH_CCK_MSB                                                  10
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_SWITCH_CCK_LSB                                                  10
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_SWITCH_CCK_MASK                                         0x00000400
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_SWITCH_CCK_GET(x)                       (((x) & 0x00000400) >> 10)
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_SWITCH_CCK_SET(x)                       (((x) << 10) & 0x00000400)
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_MIXER_SEL_MASK_MSB                                              31
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_MIXER_SEL_MASK_LSB                                              16
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_MIXER_SEL_MASK_MASK                                     0xffff0000
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_MIXER_SEL_MASK_GET(x)                   (((x) & 0xffff0000) >> 16)
#define PHY_BB_AGC_DIG_DC_CTRL_DIG_DC_MIXER_SEL_MASK_SET(x)                   (((x) << 16) & 0xffff0000)

/* macros for bb_agc_reg_map.BB_bt_coex_1 */
#define PHY_BB_BT_COEX_1_ADDRESS                                                              0x00009e54
#define PHY_BB_BT_COEX_1_OFFSET                                                               0x00000054
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_LOW_1_MSB                                                  4
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_LOW_1_LSB                                                  0
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_LOW_1_MASK                                        0x0000001f
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_LOW_1_GET(x)                       (((x) & 0x0000001f) >> 0)
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_LOW_1_SET(x)                       (((x) << 0) & 0x0000001f)
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_MED_1_MSB                                                  9
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_MED_1_LSB                                                  5
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_MED_1_MASK                                        0x000003e0
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_MED_1_GET(x)                       (((x) & 0x000003e0) >> 5)
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_MED_1_SET(x)                       (((x) << 5) & 0x000003e0)
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_HIGH_1_MSB                                                14
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_HIGH_1_LSB                                                10
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_HIGH_1_MASK                                       0x00007c00
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_HIGH_1_GET(x)                     (((x) & 0x00007c00) >> 10)
#define PHY_BB_BT_COEX_1_PEAK_DET_TALLY_THR_HIGH_1_SET(x)                     (((x) << 10) & 0x00007c00)
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_LOW_1_MSB                                                    19
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_LOW_1_LSB                                                    15
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_LOW_1_MASK                                           0x000f8000
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_LOW_1_GET(x)                         (((x) & 0x000f8000) >> 15)
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_LOW_1_SET(x)                         (((x) << 15) & 0x000f8000)
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_MED_1_MSB                                                    24
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_MED_1_LSB                                                    20
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_MED_1_MASK                                           0x01f00000
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_MED_1_GET(x)                         (((x) & 0x01f00000) >> 20)
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_MED_1_SET(x)                         (((x) << 20) & 0x01f00000)
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_HIGH_1_MSB                                                   29
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_HIGH_1_LSB                                                   25
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_HIGH_1_MASK                                          0x3e000000
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_HIGH_1_GET(x)                        (((x) & 0x3e000000) >> 25)
#define PHY_BB_BT_COEX_1_RF_GAIN_DROP_DB_HIGH_1_SET(x)                        (((x) << 25) & 0x3e000000)
#define PHY_BB_BT_COEX_1_BT_TX_DISABLE_NF_CAL_MSB                                                     30
#define PHY_BB_BT_COEX_1_BT_TX_DISABLE_NF_CAL_LSB                                                     30
#define PHY_BB_BT_COEX_1_BT_TX_DISABLE_NF_CAL_MASK                                            0x40000000
#define PHY_BB_BT_COEX_1_BT_TX_DISABLE_NF_CAL_GET(x)                          (((x) & 0x40000000) >> 30)
#define PHY_BB_BT_COEX_1_BT_TX_DISABLE_NF_CAL_SET(x)                          (((x) << 30) & 0x40000000)

/* macros for bb_agc_reg_map.BB_bt_coex_2 */
#define PHY_BB_BT_COEX_2_ADDRESS                                                              0x00009e58
#define PHY_BB_BT_COEX_2_OFFSET                                                               0x00000058
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_LOW_2_MSB                                                  4
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_LOW_2_LSB                                                  0
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_LOW_2_MASK                                        0x0000001f
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_LOW_2_GET(x)                       (((x) & 0x0000001f) >> 0)
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_LOW_2_SET(x)                       (((x) << 0) & 0x0000001f)
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_MED_2_MSB                                                  9
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_MED_2_LSB                                                  5
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_MED_2_MASK                                        0x000003e0
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_MED_2_GET(x)                       (((x) & 0x000003e0) >> 5)
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_MED_2_SET(x)                       (((x) << 5) & 0x000003e0)
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_HIGH_2_MSB                                                14
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_HIGH_2_LSB                                                10
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_HIGH_2_MASK                                       0x00007c00
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_HIGH_2_GET(x)                     (((x) & 0x00007c00) >> 10)
#define PHY_BB_BT_COEX_2_PEAK_DET_TALLY_THR_HIGH_2_SET(x)                     (((x) << 10) & 0x00007c00)
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_LOW_2_MSB                                                    19
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_LOW_2_LSB                                                    15
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_LOW_2_MASK                                           0x000f8000
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_LOW_2_GET(x)                         (((x) & 0x000f8000) >> 15)
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_LOW_2_SET(x)                         (((x) << 15) & 0x000f8000)
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_MED_2_MSB                                                    24
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_MED_2_LSB                                                    20
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_MED_2_MASK                                           0x01f00000
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_MED_2_GET(x)                         (((x) & 0x01f00000) >> 20)
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_MED_2_SET(x)                         (((x) << 20) & 0x01f00000)
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_HIGH_2_MSB                                                   29
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_HIGH_2_LSB                                                   25
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_HIGH_2_MASK                                          0x3e000000
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_HIGH_2_GET(x)                        (((x) & 0x3e000000) >> 25)
#define PHY_BB_BT_COEX_2_RF_GAIN_DROP_DB_HIGH_2_SET(x)                        (((x) << 25) & 0x3e000000)
#define PHY_BB_BT_COEX_2_RFSAT_RX_RX_MSB                                                              31
#define PHY_BB_BT_COEX_2_RFSAT_RX_RX_LSB                                                              30
#define PHY_BB_BT_COEX_2_RFSAT_RX_RX_MASK                                                     0xc0000000
#define PHY_BB_BT_COEX_2_RFSAT_RX_RX_GET(x)                                   (((x) & 0xc0000000) >> 30)
#define PHY_BB_BT_COEX_2_RFSAT_RX_RX_SET(x)                                   (((x) << 30) & 0xc0000000)

/* macros for bb_agc_reg_map.BB_bt_coex_3 */
#define PHY_BB_BT_COEX_3_ADDRESS                                                              0x00009e5c
#define PHY_BB_BT_COEX_3_OFFSET                                                               0x0000005c
#define PHY_BB_BT_COEX_3_RFSAT_BT_SRCH_SRCH_MSB                                                        1
#define PHY_BB_BT_COEX_3_RFSAT_BT_SRCH_SRCH_LSB                                                        0
#define PHY_BB_BT_COEX_3_RFSAT_BT_SRCH_SRCH_MASK                                              0x00000003
#define PHY_BB_BT_COEX_3_RFSAT_BT_SRCH_SRCH_GET(x)                             (((x) & 0x00000003) >> 0)
#define PHY_BB_BT_COEX_3_RFSAT_BT_SRCH_SRCH_SET(x)                             (((x) << 0) & 0x00000003)
#define PHY_BB_BT_COEX_3_RFSAT_BT_RX_SRCH_MSB                                                          3
#define PHY_BB_BT_COEX_3_RFSAT_BT_RX_SRCH_LSB                                                          2
#define PHY_BB_BT_COEX_3_RFSAT_BT_RX_SRCH_MASK                                                0x0000000c
#define PHY_BB_BT_COEX_3_RFSAT_BT_RX_SRCH_GET(x)                               (((x) & 0x0000000c) >> 2)
#define PHY_BB_BT_COEX_3_RFSAT_BT_RX_SRCH_SET(x)                               (((x) << 2) & 0x0000000c)
#define PHY_BB_BT_COEX_3_RFSAT_BT_SRCH_RX_MSB                                                          5
#define PHY_BB_BT_COEX_3_RFSAT_BT_SRCH_RX_LSB                                                          4
#define PHY_BB_BT_COEX_3_RFSAT_BT_SRCH_RX_MASK                                                0x00000030
#define PHY_BB_BT_COEX_3_RFSAT_BT_SRCH_RX_GET(x)                               (((x) & 0x00000030) >> 4)
#define PHY_BB_BT_COEX_3_RFSAT_BT_SRCH_RX_SET(x)                               (((x) << 4) & 0x00000030)
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_SRCH_SRCH_MSB                                                      7
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_SRCH_SRCH_LSB                                                      6
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_SRCH_SRCH_MASK                                            0x000000c0
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_SRCH_SRCH_GET(x)                           (((x) & 0x000000c0) >> 6)
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_SRCH_SRCH_SET(x)                           (((x) << 6) & 0x000000c0)
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_RX_SRCH_MSB                                                        9
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_RX_SRCH_LSB                                                        8
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_RX_SRCH_MASK                                              0x00000300
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_RX_SRCH_GET(x)                             (((x) & 0x00000300) >> 8)
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_RX_SRCH_SET(x)                             (((x) << 8) & 0x00000300)
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_SRCH_RX_MSB                                                       11
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_SRCH_RX_LSB                                                       10
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_SRCH_RX_MASK                                              0x00000c00
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_SRCH_RX_GET(x)                            (((x) & 0x00000c00) >> 10)
#define PHY_BB_BT_COEX_3_RFSAT_WLAN_SRCH_RX_SET(x)                            (((x) << 10) & 0x00000c00)
#define PHY_BB_BT_COEX_3_RFSAT_EQ_SRCH_SRCH_MSB                                                       13
#define PHY_BB_BT_COEX_3_RFSAT_EQ_SRCH_SRCH_LSB                                                       12
#define PHY_BB_BT_COEX_3_RFSAT_EQ_SRCH_SRCH_MASK                                              0x00003000
#define PHY_BB_BT_COEX_3_RFSAT_EQ_SRCH_SRCH_GET(x)                            (((x) & 0x00003000) >> 12)
#define PHY_BB_BT_COEX_3_RFSAT_EQ_SRCH_SRCH_SET(x)                            (((x) << 12) & 0x00003000)
#define PHY_BB_BT_COEX_3_RFSAT_EQ_RX_SRCH_MSB                                                         15
#define PHY_BB_BT_COEX_3_RFSAT_EQ_RX_SRCH_LSB                                                         14
#define PHY_BB_BT_COEX_3_RFSAT_EQ_RX_SRCH_MASK                                                0x0000c000
#define PHY_BB_BT_COEX_3_RFSAT_EQ_RX_SRCH_GET(x)                              (((x) & 0x0000c000) >> 14)
#define PHY_BB_BT_COEX_3_RFSAT_EQ_RX_SRCH_SET(x)                              (((x) << 14) & 0x0000c000)
#define PHY_BB_BT_COEX_3_RFSAT_EQ_SRCH_RX_MSB                                                         17
#define PHY_BB_BT_COEX_3_RFSAT_EQ_SRCH_RX_LSB                                                         16
#define PHY_BB_BT_COEX_3_RFSAT_EQ_SRCH_RX_MASK                                                0x00030000
#define PHY_BB_BT_COEX_3_RFSAT_EQ_SRCH_RX_GET(x)                              (((x) & 0x00030000) >> 16)
#define PHY_BB_BT_COEX_3_RFSAT_EQ_SRCH_RX_SET(x)                              (((x) << 16) & 0x00030000)
#define PHY_BB_BT_COEX_3_RF_GAIN_DROP_DB_NON_1_MSB                                                    22
#define PHY_BB_BT_COEX_3_RF_GAIN_DROP_DB_NON_1_LSB                                                    18
#define PHY_BB_BT_COEX_3_RF_GAIN_DROP_DB_NON_1_MASK                                           0x007c0000
#define PHY_BB_BT_COEX_3_RF_GAIN_DROP_DB_NON_1_GET(x)                         (((x) & 0x007c0000) >> 18)
#define PHY_BB_BT_COEX_3_RF_GAIN_DROP_DB_NON_1_SET(x)                         (((x) << 18) & 0x007c0000)
#define PHY_BB_BT_COEX_3_RF_GAIN_DROP_DB_NON_2_MSB                                                    27
#define PHY_BB_BT_COEX_3_RF_GAIN_DROP_DB_NON_2_LSB                                                    23
#define PHY_BB_BT_COEX_3_RF_GAIN_DROP_DB_NON_2_MASK                                           0x0f800000
#define PHY_BB_BT_COEX_3_RF_GAIN_DROP_DB_NON_2_GET(x)                         (((x) & 0x0f800000) >> 23)
#define PHY_BB_BT_COEX_3_RF_GAIN_DROP_DB_NON_2_SET(x)                         (((x) << 23) & 0x0f800000)
#define PHY_BB_BT_COEX_3_BT_RX_FIRPWR_INCR_MSB                                                        31
#define PHY_BB_BT_COEX_3_BT_RX_FIRPWR_INCR_LSB                                                        28
#define PHY_BB_BT_COEX_3_BT_RX_FIRPWR_INCR_MASK                                               0xf0000000
#define PHY_BB_BT_COEX_3_BT_RX_FIRPWR_INCR_GET(x)                             (((x) & 0xf0000000) >> 28)
#define PHY_BB_BT_COEX_3_BT_RX_FIRPWR_INCR_SET(x)                             (((x) << 28) & 0xf0000000)

/* macros for bb_agc_reg_map.BB_bt_coex_4 */
#define PHY_BB_BT_COEX_4_ADDRESS                                                              0x00009e60
#define PHY_BB_BT_COEX_4_OFFSET                                                               0x00000060
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_0_MSB                                                          7
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_0_LSB                                                          0
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_0_MASK                                                0x000000ff
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_0_GET(x)                               (((x) & 0x000000ff) >> 0)
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_0_SET(x)                               (((x) << 0) & 0x000000ff)
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_1_MSB                                                         15
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_1_LSB                                                          8
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_1_MASK                                                0x0000ff00
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_1_GET(x)                               (((x) & 0x0000ff00) >> 8)
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_1_SET(x)                               (((x) << 8) & 0x0000ff00)
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_2_MSB                                                         23
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_2_LSB                                                         16
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_2_MASK                                                0x00ff0000
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_2_GET(x)                              (((x) & 0x00ff0000) >> 16)
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_2_SET(x)                              (((x) << 16) & 0x00ff0000)
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_3_MSB                                                         31
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_3_LSB                                                         24
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_3_MASK                                                0xff000000
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_3_GET(x)                              (((x) & 0xff000000) >> 24)
#define PHY_BB_BT_COEX_4_RFGAIN_EQV_LNA_3_SET(x)                              (((x) << 24) & 0xff000000)

/* macros for bb_agc_reg_map.BB_bt_coex_5 */
#define PHY_BB_BT_COEX_5_ADDRESS                                                              0x00009e64
#define PHY_BB_BT_COEX_5_OFFSET                                                               0x00000064
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_4_MSB                                                          7
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_4_LSB                                                          0
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_4_MASK                                                0x000000ff
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_4_GET(x)                               (((x) & 0x000000ff) >> 0)
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_4_SET(x)                               (((x) << 0) & 0x000000ff)
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_5_MSB                                                         15
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_5_LSB                                                          8
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_5_MASK                                                0x0000ff00
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_5_GET(x)                               (((x) & 0x0000ff00) >> 8)
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_5_SET(x)                               (((x) << 8) & 0x0000ff00)
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_6_MSB                                                         23
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_6_LSB                                                         16
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_6_MASK                                                0x00ff0000
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_6_GET(x)                              (((x) & 0x00ff0000) >> 16)
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_6_SET(x)                              (((x) << 16) & 0x00ff0000)
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_7_MSB                                                         31
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_7_LSB                                                         24
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_7_MASK                                                0xff000000
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_7_GET(x)                              (((x) & 0xff000000) >> 24)
#define PHY_BB_BT_COEX_5_RFGAIN_EQV_LNA_7_SET(x)                              (((x) << 24) & 0xff000000)

/* macros for bb_agc_reg_map.BB_redpwr_ctrl_1 */
#define PHY_BB_REDPWR_CTRL_1_ADDRESS                                                          0x00009e68
#define PHY_BB_REDPWR_CTRL_1_OFFSET                                                           0x00000068
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_MSB                                                           1
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_LSB                                                           0
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_MASK                                                 0x00000003
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_GET(x)                                (((x) & 0x00000003) >> 0)
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_SET(x)                                (((x) << 0) & 0x00000003)
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_CLR_MSB                                                       2
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_CLR_LSB                                                       2
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_CLR_MASK                                             0x00000004
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_CLR_GET(x)                            (((x) & 0x00000004) >> 2)
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_CLR_SET(x)                            (((x) << 2) & 0x00000004)
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_SET_MSB                                                       3
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_SET_LSB                                                       3
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_SET_MASK                                             0x00000008
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_SET_GET(x)                            (((x) & 0x00000008) >> 3)
#define PHY_BB_REDPWR_CTRL_1_REDPWR_MODE_SET_SET(x)                            (((x) << 3) & 0x00000008)
#define PHY_BB_REDPWR_CTRL_1_GAIN_CORR_DB2_MSB                                                         8
#define PHY_BB_REDPWR_CTRL_1_GAIN_CORR_DB2_LSB                                                         4
#define PHY_BB_REDPWR_CTRL_1_GAIN_CORR_DB2_MASK                                               0x000001f0
#define PHY_BB_REDPWR_CTRL_1_GAIN_CORR_DB2_GET(x)                              (((x) & 0x000001f0) >> 4)
#define PHY_BB_REDPWR_CTRL_1_GAIN_CORR_DB2_SET(x)                              (((x) << 4) & 0x000001f0)
#define PHY_BB_REDPWR_CTRL_1_SCFIR_ADJ_GAIN_MSB                                                       12
#define PHY_BB_REDPWR_CTRL_1_SCFIR_ADJ_GAIN_LSB                                                        9
#define PHY_BB_REDPWR_CTRL_1_SCFIR_ADJ_GAIN_MASK                                              0x00001e00
#define PHY_BB_REDPWR_CTRL_1_SCFIR_ADJ_GAIN_GET(x)                             (((x) & 0x00001e00) >> 9)
#define PHY_BB_REDPWR_CTRL_1_SCFIR_ADJ_GAIN_SET(x)                             (((x) << 9) & 0x00001e00)
#define PHY_BB_REDPWR_CTRL_1_QUICKDROP_RF_MSB                                                         17
#define PHY_BB_REDPWR_CTRL_1_QUICKDROP_RF_LSB                                                         13
#define PHY_BB_REDPWR_CTRL_1_QUICKDROP_RF_MASK                                                0x0003e000
#define PHY_BB_REDPWR_CTRL_1_QUICKDROP_RF_GET(x)                              (((x) & 0x0003e000) >> 13)
#define PHY_BB_REDPWR_CTRL_1_QUICKDROP_RF_SET(x)                              (((x) << 13) & 0x0003e000)
#define PHY_BB_REDPWR_CTRL_1_BYPASS_FIR_F_MSB                                                         18
#define PHY_BB_REDPWR_CTRL_1_BYPASS_FIR_F_LSB                                                         18
#define PHY_BB_REDPWR_CTRL_1_BYPASS_FIR_F_MASK                                                0x00040000
#define PHY_BB_REDPWR_CTRL_1_BYPASS_FIR_F_GET(x)                              (((x) & 0x00040000) >> 18)
#define PHY_BB_REDPWR_CTRL_1_BYPASS_FIR_F_SET(x)                              (((x) << 18) & 0x00040000)
#define PHY_BB_REDPWR_CTRL_1_ADC_HALF_REF_F_MSB                                                       19
#define PHY_BB_REDPWR_CTRL_1_ADC_HALF_REF_F_LSB                                                       19
#define PHY_BB_REDPWR_CTRL_1_ADC_HALF_REF_F_MASK                                              0x00080000
#define PHY_BB_REDPWR_CTRL_1_ADC_HALF_REF_F_GET(x)                            (((x) & 0x00080000) >> 19)
#define PHY_BB_REDPWR_CTRL_1_ADC_HALF_REF_F_SET(x)                            (((x) << 19) & 0x00080000)
#define PHY_BB_REDPWR_CTRL_1_BYPASS_FIR_PAPRD_F_MSB                                                   20
#define PHY_BB_REDPWR_CTRL_1_BYPASS_FIR_PAPRD_F_LSB                                                   20
#define PHY_BB_REDPWR_CTRL_1_BYPASS_FIR_PAPRD_F_MASK                                          0x00100000
#define PHY_BB_REDPWR_CTRL_1_BYPASS_FIR_PAPRD_F_GET(x)                        (((x) & 0x00100000) >> 20)
#define PHY_BB_REDPWR_CTRL_1_BYPASS_FIR_PAPRD_F_SET(x)                        (((x) << 20) & 0x00100000)
#define PHY_BB_REDPWR_CTRL_1_ADC_HALF_REF_PAPRD_F_MSB                                                 21
#define PHY_BB_REDPWR_CTRL_1_ADC_HALF_REF_PAPRD_F_LSB                                                 21
#define PHY_BB_REDPWR_CTRL_1_ADC_HALF_REF_PAPRD_F_MASK                                        0x00200000
#define PHY_BB_REDPWR_CTRL_1_ADC_HALF_REF_PAPRD_F_GET(x)                      (((x) & 0x00200000) >> 21)
#define PHY_BB_REDPWR_CTRL_1_ADC_HALF_REF_PAPRD_F_SET(x)                      (((x) << 21) & 0x00200000)
#define PHY_BB_REDPWR_CTRL_1_LP_PAPRD_FORCE_MSB                                                       22
#define PHY_BB_REDPWR_CTRL_1_LP_PAPRD_FORCE_LSB                                                       22
#define PHY_BB_REDPWR_CTRL_1_LP_PAPRD_FORCE_MASK                                              0x00400000
#define PHY_BB_REDPWR_CTRL_1_LP_PAPRD_FORCE_GET(x)                            (((x) & 0x00400000) >> 22)
#define PHY_BB_REDPWR_CTRL_1_LP_PAPRD_FORCE_SET(x)                            (((x) << 22) & 0x00400000)

/* macros for bb_agc_reg_map.BB_redpwr_ctrl_2 */
#define PHY_BB_REDPWR_CTRL_2_ADDRESS                                                          0x00009e6c
#define PHY_BB_REDPWR_CTRL_2_OFFSET                                                           0x0000006c
#define PHY_BB_REDPWR_CTRL_2_SC01_SW_INDEX_MSB                                                         6
#define PHY_BB_REDPWR_CTRL_2_SC01_SW_INDEX_LSB                                                         0
#define PHY_BB_REDPWR_CTRL_2_SC01_SW_INDEX_MASK                                               0x0000007f
#define PHY_BB_REDPWR_CTRL_2_SC01_SW_INDEX_GET(x)                              (((x) & 0x0000007f) >> 0)
#define PHY_BB_REDPWR_CTRL_2_SC01_SW_INDEX_SET(x)                              (((x) << 0) & 0x0000007f)
#define PHY_BB_REDPWR_CTRL_2_SC10_SW_INDEX_MSB                                                        13
#define PHY_BB_REDPWR_CTRL_2_SC10_SW_INDEX_LSB                                                         7
#define PHY_BB_REDPWR_CTRL_2_SC10_SW_INDEX_MASK                                               0x00003f80
#define PHY_BB_REDPWR_CTRL_2_SC10_SW_INDEX_GET(x)                              (((x) & 0x00003f80) >> 7)
#define PHY_BB_REDPWR_CTRL_2_SC10_SW_INDEX_SET(x)                              (((x) << 7) & 0x00003f80)
#define PHY_BB_REDPWR_CTRL_2_LAST_SC0_INDEX_MSB                                                       20
#define PHY_BB_REDPWR_CTRL_2_LAST_SC0_INDEX_LSB                                                       14
#define PHY_BB_REDPWR_CTRL_2_LAST_SC0_INDEX_MASK                                              0x001fc000
#define PHY_BB_REDPWR_CTRL_2_LAST_SC0_INDEX_GET(x)                            (((x) & 0x001fc000) >> 14)
#define PHY_BB_REDPWR_CTRL_2_LAST_SC0_INDEX_SET(x)                            (((x) << 14) & 0x001fc000)

/* macros for bb_agc_reg_map.BB_rssi_b0 */
#define PHY_BB_RSSI_B0_ADDRESS                                                                0x00009f80
#define PHY_BB_RSSI_B0_OFFSET                                                                 0x00000180
#define PHY_BB_RSSI_B0_RSSI_0_MSB                                                                      7
#define PHY_BB_RSSI_B0_RSSI_0_LSB                                                                      0
#define PHY_BB_RSSI_B0_RSSI_0_MASK                                                            0x000000ff
#define PHY_BB_RSSI_B0_RSSI_0_GET(x)                                           (((x) & 0x000000ff) >> 0)
#define PHY_BB_RSSI_B0_RSSI_EXT_0_MSB                                                                 15
#define PHY_BB_RSSI_B0_RSSI_EXT_0_LSB                                                                  8
#define PHY_BB_RSSI_B0_RSSI_EXT_0_MASK                                                        0x0000ff00
#define PHY_BB_RSSI_B0_RSSI_EXT_0_GET(x)                                       (((x) & 0x0000ff00) >> 8)

/* macros for bb_agc_reg_map.BB_spur_est_cck_report_b0 */
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_ADDRESS                                                 0x00009f84
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_OFFSET                                                  0x00000184
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_SD_I_0_CCK_MSB                                          7
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_SD_I_0_CCK_LSB                                          0
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_SD_I_0_CCK_MASK                                0x000000ff
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_SD_I_0_CCK_GET(x)               (((x) & 0x000000ff) >> 0)
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_SD_Q_0_CCK_MSB                                         15
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_SD_Q_0_CCK_LSB                                          8
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_SD_Q_0_CCK_MASK                                0x0000ff00
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_SD_Q_0_CCK_GET(x)               (((x) & 0x0000ff00) >> 8)
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_I_0_CCK_MSB                                            23
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_I_0_CCK_LSB                                            16
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_I_0_CCK_MASK                                   0x00ff0000
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_I_0_CCK_GET(x)                 (((x) & 0x00ff0000) >> 16)
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_Q_0_CCK_MSB                                            31
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_Q_0_CCK_LSB                                            24
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_Q_0_CCK_MASK                                   0xff000000
#define PHY_BB_SPUR_EST_CCK_REPORT_B0_SPUR_EST_Q_0_CCK_GET(x)                 (((x) & 0xff000000) >> 24)

/* macros for bb_agc_reg_map.BB_agc_dig_dc_status_i_b0 */
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_ADDRESS                                                 0x00009f88
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_OFFSET                                                  0x00000188
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C1_RES_I_0_MSB                                            8
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C1_RES_I_0_LSB                                            0
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C1_RES_I_0_MASK                                  0x000001ff
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C1_RES_I_0_GET(x)                 (((x) & 0x000001ff) >> 0)
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C2_RES_I_0_MSB                                           17
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C2_RES_I_0_LSB                                            9
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C2_RES_I_0_MASK                                  0x0003fe00
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C2_RES_I_0_GET(x)                 (((x) & 0x0003fe00) >> 9)
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C3_RES_I_0_MSB                                           26
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C3_RES_I_0_LSB                                           18
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C3_RES_I_0_MASK                                  0x07fc0000
#define PHY_BB_AGC_DIG_DC_STATUS_I_B0_DIG_DC_C3_RES_I_0_GET(x)                (((x) & 0x07fc0000) >> 18)

/* macros for bb_agc_reg_map.BB_agc_dig_dc_status_q_b0 */
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_ADDRESS                                                 0x00009f8c
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_OFFSET                                                  0x0000018c
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C1_RES_Q_0_MSB                                            8
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C1_RES_Q_0_LSB                                            0
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C1_RES_Q_0_MASK                                  0x000001ff
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C1_RES_Q_0_GET(x)                 (((x) & 0x000001ff) >> 0)
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C2_RES_Q_0_MSB                                           17
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C2_RES_Q_0_LSB                                            9
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C2_RES_Q_0_MASK                                  0x0003fe00
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C2_RES_Q_0_GET(x)                 (((x) & 0x0003fe00) >> 9)
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C3_RES_Q_0_MSB                                           26
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C3_RES_Q_0_LSB                                           18
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C3_RES_Q_0_MASK                                  0x07fc0000
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B0_DIG_DC_C3_RES_Q_0_GET(x)                (((x) & 0x07fc0000) >> 18)

/* macros for bb_agc_reg_map.BB_dc_cal_status_b0 */
#define PHY_BB_DC_CAL_STATUS_B0_ADDRESS                                                       0x00009f90
#define PHY_BB_DC_CAL_STATUS_B0_OFFSET                                                        0x00000190
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC1I_0_MSB                                                        4
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC1I_0_LSB                                                        0
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC1I_0_MASK                                              0x0000001f
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC1I_0_GET(x)                             (((x) & 0x0000001f) >> 0)
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC1Q_0_MSB                                                        9
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC1Q_0_LSB                                                        5
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC1Q_0_MASK                                              0x000003e0
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC1Q_0_GET(x)                             (((x) & 0x000003e0) >> 5)
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC2I_0_MSB                                                       14
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC2I_0_LSB                                                       10
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC2I_0_MASK                                              0x00007c00
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC2I_0_GET(x)                            (((x) & 0x00007c00) >> 10)
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC2Q_0_MSB                                                       19
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC2Q_0_LSB                                                       15
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC2Q_0_MASK                                              0x000f8000
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC2Q_0_GET(x)                            (((x) & 0x000f8000) >> 15)
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC3I_0_MSB                                                       24
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC3I_0_LSB                                                       20
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC3I_0_MASK                                              0x01f00000
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC3I_0_GET(x)                            (((x) & 0x01f00000) >> 20)
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC3Q_0_MSB                                                       29
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC3Q_0_LSB                                                       25
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC3Q_0_MASK                                              0x3e000000
#define PHY_BB_DC_CAL_STATUS_B0_OFFSETC3Q_0_GET(x)                            (((x) & 0x3e000000) >> 25)

/* macros for bb_agc_reg_map.BB_bbb_sig_detect */
#define PHY_BB_BBB_SIG_DETECT_ADDRESS                                                         0x00009fc0
#define PHY_BB_BBB_SIG_DETECT_OFFSET                                                          0x000001c0
#define PHY_BB_BBB_SIG_DETECT_WEAK_SIG_THR_CCK_MSB                                                     5
#define PHY_BB_BBB_SIG_DETECT_WEAK_SIG_THR_CCK_LSB                                                     0
#define PHY_BB_BBB_SIG_DETECT_WEAK_SIG_THR_CCK_MASK                                           0x0000003f
#define PHY_BB_BBB_SIG_DETECT_WEAK_SIG_THR_CCK_GET(x)                          (((x) & 0x0000003f) >> 0)
#define PHY_BB_BBB_SIG_DETECT_WEAK_SIG_THR_CCK_SET(x)                          (((x) << 0) & 0x0000003f)
#define PHY_BB_BBB_SIG_DETECT_ANT_SWITCH_TIME_MSB                                                     12
#define PHY_BB_BBB_SIG_DETECT_ANT_SWITCH_TIME_LSB                                                      6
#define PHY_BB_BBB_SIG_DETECT_ANT_SWITCH_TIME_MASK                                            0x00001fc0
#define PHY_BB_BBB_SIG_DETECT_ANT_SWITCH_TIME_GET(x)                           (((x) & 0x00001fc0) >> 6)
#define PHY_BB_BBB_SIG_DETECT_ANT_SWITCH_TIME_SET(x)                           (((x) << 6) & 0x00001fc0)
#define PHY_BB_BBB_SIG_DETECT_ENABLE_ANT_FAST_DIV_MSB                                                 13
#define PHY_BB_BBB_SIG_DETECT_ENABLE_ANT_FAST_DIV_LSB                                                 13
#define PHY_BB_BBB_SIG_DETECT_ENABLE_ANT_FAST_DIV_MASK                                        0x00002000
#define PHY_BB_BBB_SIG_DETECT_ENABLE_ANT_FAST_DIV_GET(x)                      (((x) & 0x00002000) >> 13)
#define PHY_BB_BBB_SIG_DETECT_ENABLE_ANT_FAST_DIV_SET(x)                      (((x) << 13) & 0x00002000)
#define PHY_BB_BBB_SIG_DETECT_LB_ALPHA_128_CCK_MSB                                                    14
#define PHY_BB_BBB_SIG_DETECT_LB_ALPHA_128_CCK_LSB                                                    14
#define PHY_BB_BBB_SIG_DETECT_LB_ALPHA_128_CCK_MASK                                           0x00004000
#define PHY_BB_BBB_SIG_DETECT_LB_ALPHA_128_CCK_GET(x)                         (((x) & 0x00004000) >> 14)
#define PHY_BB_BBB_SIG_DETECT_LB_ALPHA_128_CCK_SET(x)                         (((x) << 14) & 0x00004000)
#define PHY_BB_BBB_SIG_DETECT_LB_RX_ENABLE_CCK_MSB                                                    15
#define PHY_BB_BBB_SIG_DETECT_LB_RX_ENABLE_CCK_LSB                                                    15
#define PHY_BB_BBB_SIG_DETECT_LB_RX_ENABLE_CCK_MASK                                           0x00008000
#define PHY_BB_BBB_SIG_DETECT_LB_RX_ENABLE_CCK_GET(x)                         (((x) & 0x00008000) >> 15)
#define PHY_BB_BBB_SIG_DETECT_LB_RX_ENABLE_CCK_SET(x)                         (((x) << 15) & 0x00008000)
#define PHY_BB_BBB_SIG_DETECT_CYC32_COARSE_DC_EST_CCK_MSB                                             16
#define PHY_BB_BBB_SIG_DETECT_CYC32_COARSE_DC_EST_CCK_LSB                                             16
#define PHY_BB_BBB_SIG_DETECT_CYC32_COARSE_DC_EST_CCK_MASK                                    0x00010000
#define PHY_BB_BBB_SIG_DETECT_CYC32_COARSE_DC_EST_CCK_GET(x)                  (((x) & 0x00010000) >> 16)
#define PHY_BB_BBB_SIG_DETECT_CYC32_COARSE_DC_EST_CCK_SET(x)                  (((x) << 16) & 0x00010000)
#define PHY_BB_BBB_SIG_DETECT_CYC64_COARSE_DC_EST_CCK_MSB                                             17
#define PHY_BB_BBB_SIG_DETECT_CYC64_COARSE_DC_EST_CCK_LSB                                             17
#define PHY_BB_BBB_SIG_DETECT_CYC64_COARSE_DC_EST_CCK_MASK                                    0x00020000
#define PHY_BB_BBB_SIG_DETECT_CYC64_COARSE_DC_EST_CCK_GET(x)                  (((x) & 0x00020000) >> 17)
#define PHY_BB_BBB_SIG_DETECT_CYC64_COARSE_DC_EST_CCK_SET(x)                  (((x) << 17) & 0x00020000)
#define PHY_BB_BBB_SIG_DETECT_ENABLE_COARSE_DC_CCK_MSB                                                18
#define PHY_BB_BBB_SIG_DETECT_ENABLE_COARSE_DC_CCK_LSB                                                18
#define PHY_BB_BBB_SIG_DETECT_ENABLE_COARSE_DC_CCK_MASK                                       0x00040000
#define PHY_BB_BBB_SIG_DETECT_ENABLE_COARSE_DC_CCK_GET(x)                     (((x) & 0x00040000) >> 18)
#define PHY_BB_BBB_SIG_DETECT_ENABLE_COARSE_DC_CCK_SET(x)                     (((x) << 18) & 0x00040000)
#define PHY_BB_BBB_SIG_DETECT_CYC256_FINE_DC_EST_CCK_MSB                                              19
#define PHY_BB_BBB_SIG_DETECT_CYC256_FINE_DC_EST_CCK_LSB                                              19
#define PHY_BB_BBB_SIG_DETECT_CYC256_FINE_DC_EST_CCK_MASK                                     0x00080000
#define PHY_BB_BBB_SIG_DETECT_CYC256_FINE_DC_EST_CCK_GET(x)                   (((x) & 0x00080000) >> 19)
#define PHY_BB_BBB_SIG_DETECT_CYC256_FINE_DC_EST_CCK_SET(x)                   (((x) << 19) & 0x00080000)
#define PHY_BB_BBB_SIG_DETECT_ENABLE_FINE_DC_CCK_MSB                                                  20
#define PHY_BB_BBB_SIG_DETECT_ENABLE_FINE_DC_CCK_LSB                                                  20
#define PHY_BB_BBB_SIG_DETECT_ENABLE_FINE_DC_CCK_MASK                                         0x00100000
#define PHY_BB_BBB_SIG_DETECT_ENABLE_FINE_DC_CCK_GET(x)                       (((x) & 0x00100000) >> 20)
#define PHY_BB_BBB_SIG_DETECT_ENABLE_FINE_DC_CCK_SET(x)                       (((x) << 20) & 0x00100000)
#define PHY_BB_BBB_SIG_DETECT_DELAY_START_SYNC_CCK_MSB                                                21
#define PHY_BB_BBB_SIG_DETECT_DELAY_START_SYNC_CCK_LSB                                                21
#define PHY_BB_BBB_SIG_DETECT_DELAY_START_SYNC_CCK_MASK                                       0x00200000
#define PHY_BB_BBB_SIG_DETECT_DELAY_START_SYNC_CCK_GET(x)                     (((x) & 0x00200000) >> 21)
#define PHY_BB_BBB_SIG_DETECT_DELAY_START_SYNC_CCK_SET(x)                     (((x) << 21) & 0x00200000)
#define PHY_BB_BBB_SIG_DETECT_USE_DC_EST_DURING_SRCH_MSB                                              22
#define PHY_BB_BBB_SIG_DETECT_USE_DC_EST_DURING_SRCH_LSB                                              22
#define PHY_BB_BBB_SIG_DETECT_USE_DC_EST_DURING_SRCH_MASK                                     0x00400000
#define PHY_BB_BBB_SIG_DETECT_USE_DC_EST_DURING_SRCH_GET(x)                   (((x) & 0x00400000) >> 22)
#define PHY_BB_BBB_SIG_DETECT_USE_DC_EST_DURING_SRCH_SET(x)                   (((x) << 22) & 0x00400000)
#define PHY_BB_BBB_SIG_DETECT_BBB_MRC_OFF_NO_SWAP_MSB                                                 23
#define PHY_BB_BBB_SIG_DETECT_BBB_MRC_OFF_NO_SWAP_LSB                                                 23
#define PHY_BB_BBB_SIG_DETECT_BBB_MRC_OFF_NO_SWAP_MASK                                        0x00800000
#define PHY_BB_BBB_SIG_DETECT_BBB_MRC_OFF_NO_SWAP_GET(x)                      (((x) & 0x00800000) >> 23)
#define PHY_BB_BBB_SIG_DETECT_BBB_MRC_OFF_NO_SWAP_SET(x)                      (((x) << 23) & 0x00800000)
#define PHY_BB_BBB_SIG_DETECT_SWAP_DEFAULT_CHAIN_CCK_MSB                                              24
#define PHY_BB_BBB_SIG_DETECT_SWAP_DEFAULT_CHAIN_CCK_LSB                                              24
#define PHY_BB_BBB_SIG_DETECT_SWAP_DEFAULT_CHAIN_CCK_MASK                                     0x01000000
#define PHY_BB_BBB_SIG_DETECT_SWAP_DEFAULT_CHAIN_CCK_GET(x)                   (((x) & 0x01000000) >> 24)
#define PHY_BB_BBB_SIG_DETECT_SWAP_DEFAULT_CHAIN_CCK_SET(x)                   (((x) << 24) & 0x01000000)
#define PHY_BB_BBB_SIG_DETECT_ENABLE_BARKER_TWO_PHASE_MSB                                             31
#define PHY_BB_BBB_SIG_DETECT_ENABLE_BARKER_TWO_PHASE_LSB                                             31
#define PHY_BB_BBB_SIG_DETECT_ENABLE_BARKER_TWO_PHASE_MASK                                    0x80000000
#define PHY_BB_BBB_SIG_DETECT_ENABLE_BARKER_TWO_PHASE_GET(x)                  (((x) & 0x80000000) >> 31)
#define PHY_BB_BBB_SIG_DETECT_ENABLE_BARKER_TWO_PHASE_SET(x)                  (((x) << 31) & 0x80000000)

/* macros for bb_agc_reg_map.BB_bbb_dagc_ctrl */
#define PHY_BB_BBB_DAGC_CTRL_ADDRESS                                                          0x00009fc4
#define PHY_BB_BBB_DAGC_CTRL_OFFSET                                                           0x000001c4
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_DAGC_CCK_MSB                                                       0
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_DAGC_CCK_LSB                                                       0
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_DAGC_CCK_MASK                                             0x00000001
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_DAGC_CCK_GET(x)                            (((x) & 0x00000001) >> 0)
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_DAGC_CCK_SET(x)                            (((x) << 0) & 0x00000001)
#define PHY_BB_BBB_DAGC_CTRL_DAGC_TARGET_PWR_CCK_MSB                                                   8
#define PHY_BB_BBB_DAGC_CTRL_DAGC_TARGET_PWR_CCK_LSB                                                   1
#define PHY_BB_BBB_DAGC_CTRL_DAGC_TARGET_PWR_CCK_MASK                                         0x000001fe
#define PHY_BB_BBB_DAGC_CTRL_DAGC_TARGET_PWR_CCK_GET(x)                        (((x) & 0x000001fe) >> 1)
#define PHY_BB_BBB_DAGC_CTRL_DAGC_TARGET_PWR_CCK_SET(x)                        (((x) << 1) & 0x000001fe)
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_BARKER_RSSI_THR_MSB                                                9
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_BARKER_RSSI_THR_LSB                                                9
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_BARKER_RSSI_THR_MASK                                      0x00000200
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_BARKER_RSSI_THR_GET(x)                     (((x) & 0x00000200) >> 9)
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_BARKER_RSSI_THR_SET(x)                     (((x) << 9) & 0x00000200)
#define PHY_BB_BBB_DAGC_CTRL_BARKER_RSSI_THR_MSB                                                      16
#define PHY_BB_BBB_DAGC_CTRL_BARKER_RSSI_THR_LSB                                                      10
#define PHY_BB_BBB_DAGC_CTRL_BARKER_RSSI_THR_MASK                                             0x0001fc00
#define PHY_BB_BBB_DAGC_CTRL_BARKER_RSSI_THR_GET(x)                           (((x) & 0x0001fc00) >> 10)
#define PHY_BB_BBB_DAGC_CTRL_BARKER_RSSI_THR_SET(x)                           (((x) << 10) & 0x0001fc00)
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_FIRSTEP_SEL_MSB                                                   17
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_FIRSTEP_SEL_LSB                                                   17
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_FIRSTEP_SEL_MASK                                          0x00020000
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_FIRSTEP_SEL_GET(x)                        (((x) & 0x00020000) >> 17)
#define PHY_BB_BBB_DAGC_CTRL_ENABLE_FIRSTEP_SEL_SET(x)                        (((x) << 17) & 0x00020000)
#define PHY_BB_BBB_DAGC_CTRL_FIRSTEP_2_MSB                                                            23
#define PHY_BB_BBB_DAGC_CTRL_FIRSTEP_2_LSB                                                            18
#define PHY_BB_BBB_DAGC_CTRL_FIRSTEP_2_MASK                                                   0x00fc0000
#define PHY_BB_BBB_DAGC_CTRL_FIRSTEP_2_GET(x)                                 (((x) & 0x00fc0000) >> 18)
#define PHY_BB_BBB_DAGC_CTRL_FIRSTEP_2_SET(x)                                 (((x) << 18) & 0x00fc0000)
#define PHY_BB_BBB_DAGC_CTRL_FIRSTEP_COUNT_LGMAX_MSB                                                  27
#define PHY_BB_BBB_DAGC_CTRL_FIRSTEP_COUNT_LGMAX_LSB                                                  24
#define PHY_BB_BBB_DAGC_CTRL_FIRSTEP_COUNT_LGMAX_MASK                                         0x0f000000
#define PHY_BB_BBB_DAGC_CTRL_FIRSTEP_COUNT_LGMAX_GET(x)                       (((x) & 0x0f000000) >> 24)
#define PHY_BB_BBB_DAGC_CTRL_FIRSTEP_COUNT_LGMAX_SET(x)                       (((x) << 24) & 0x0f000000)
#define PHY_BB_BBB_DAGC_CTRL_FORCE_RX_CHAIN_CCK_0_MSB                                                 29
#define PHY_BB_BBB_DAGC_CTRL_FORCE_RX_CHAIN_CCK_0_LSB                                                 28
#define PHY_BB_BBB_DAGC_CTRL_FORCE_RX_CHAIN_CCK_0_MASK                                        0x30000000
#define PHY_BB_BBB_DAGC_CTRL_FORCE_RX_CHAIN_CCK_0_GET(x)                      (((x) & 0x30000000) >> 28)
#define PHY_BB_BBB_DAGC_CTRL_FORCE_RX_CHAIN_CCK_0_SET(x)                      (((x) << 28) & 0x30000000)
#define PHY_BB_BBB_DAGC_CTRL_FORCE_RX_CHAIN_CCK_1_MSB                                                 31
#define PHY_BB_BBB_DAGC_CTRL_FORCE_RX_CHAIN_CCK_1_LSB                                                 30
#define PHY_BB_BBB_DAGC_CTRL_FORCE_RX_CHAIN_CCK_1_MASK                                        0xc0000000
#define PHY_BB_BBB_DAGC_CTRL_FORCE_RX_CHAIN_CCK_1_GET(x)                      (((x) & 0xc0000000) >> 30)
#define PHY_BB_BBB_DAGC_CTRL_FORCE_RX_CHAIN_CCK_1_SET(x)                      (((x) << 30) & 0xc0000000)

/* macros for bb_agc_reg_map.BB_iqcorr_ctrl_cck */
#define PHY_BB_IQCORR_CTRL_CCK_ADDRESS                                                        0x00009fc8
#define PHY_BB_IQCORR_CTRL_CCK_OFFSET                                                         0x000001c8
#define PHY_BB_IQCORR_CTRL_CCK_IQCORR_Q_Q_COFF_CCK_MSB                                                 4
#define PHY_BB_IQCORR_CTRL_CCK_IQCORR_Q_Q_COFF_CCK_LSB                                                 0
#define PHY_BB_IQCORR_CTRL_CCK_IQCORR_Q_Q_COFF_CCK_MASK                                       0x0000001f
#define PHY_BB_IQCORR_CTRL_CCK_IQCORR_Q_Q_COFF_CCK_GET(x)                      (((x) & 0x0000001f) >> 0)
#define PHY_BB_IQCORR_CTRL_CCK_IQCORR_Q_Q_COFF_CCK_SET(x)                      (((x) << 0) & 0x0000001f)
#define PHY_BB_IQCORR_CTRL_CCK_IQCORR_Q_I_COFF_CCK_MSB                                                10
#define PHY_BB_IQCORR_CTRL_CCK_IQCORR_Q_I_COFF_CCK_LSB                                                 5
#define PHY_BB_IQCORR_CTRL_CCK_IQCORR_Q_I_COFF_CCK_MASK                                       0x000007e0
#define PHY_BB_IQCORR_CTRL_CCK_IQCORR_Q_I_COFF_CCK_GET(x)                      (((x) & 0x000007e0) >> 5)
#define PHY_BB_IQCORR_CTRL_CCK_IQCORR_Q_I_COFF_CCK_SET(x)                      (((x) << 5) & 0x000007e0)
#define PHY_BB_IQCORR_CTRL_CCK_ENABLE_IQCORR_CCK_MSB                                                  11
#define PHY_BB_IQCORR_CTRL_CCK_ENABLE_IQCORR_CCK_LSB                                                  11
#define PHY_BB_IQCORR_CTRL_CCK_ENABLE_IQCORR_CCK_MASK                                         0x00000800
#define PHY_BB_IQCORR_CTRL_CCK_ENABLE_IQCORR_CCK_GET(x)                       (((x) & 0x00000800) >> 11)
#define PHY_BB_IQCORR_CTRL_CCK_ENABLE_IQCORR_CCK_SET(x)                       (((x) << 11) & 0x00000800)
#define PHY_BB_IQCORR_CTRL_CCK_RXCAL_MEAS_TIME_SEL_MSB                                                13
#define PHY_BB_IQCORR_CTRL_CCK_RXCAL_MEAS_TIME_SEL_LSB                                                12
#define PHY_BB_IQCORR_CTRL_CCK_RXCAL_MEAS_TIME_SEL_MASK                                       0x00003000
#define PHY_BB_IQCORR_CTRL_CCK_RXCAL_MEAS_TIME_SEL_GET(x)                     (((x) & 0x00003000) >> 12)
#define PHY_BB_IQCORR_CTRL_CCK_RXCAL_MEAS_TIME_SEL_SET(x)                     (((x) << 12) & 0x00003000)
#define PHY_BB_IQCORR_CTRL_CCK_CLCAL_MEAS_TIME_SEL_MSB                                                15
#define PHY_BB_IQCORR_CTRL_CCK_CLCAL_MEAS_TIME_SEL_LSB                                                14
#define PHY_BB_IQCORR_CTRL_CCK_CLCAL_MEAS_TIME_SEL_MASK                                       0x0000c000
#define PHY_BB_IQCORR_CTRL_CCK_CLCAL_MEAS_TIME_SEL_GET(x)                     (((x) & 0x0000c000) >> 14)
#define PHY_BB_IQCORR_CTRL_CCK_CLCAL_MEAS_TIME_SEL_SET(x)                     (((x) << 14) & 0x0000c000)
#define PHY_BB_IQCORR_CTRL_CCK_CF_CLC_INIT_RFGAIN_MSB                                                 20
#define PHY_BB_IQCORR_CTRL_CCK_CF_CLC_INIT_RFGAIN_LSB                                                 16
#define PHY_BB_IQCORR_CTRL_CCK_CF_CLC_INIT_RFGAIN_MASK                                        0x001f0000
#define PHY_BB_IQCORR_CTRL_CCK_CF_CLC_INIT_RFGAIN_GET(x)                      (((x) & 0x001f0000) >> 16)
#define PHY_BB_IQCORR_CTRL_CCK_CF_CLC_INIT_RFGAIN_SET(x)                      (((x) << 16) & 0x001f0000)

/* macros for bb_agc_reg_map.BB_cck_spur_mit */
#define PHY_BB_CCK_SPUR_MIT_ADDRESS                                                           0x00009fcc
#define PHY_BB_CCK_SPUR_MIT_OFFSET                                                            0x000001cc
#define PHY_BB_CCK_SPUR_MIT_USE_CCK_SPUR_MIT_MSB                                                       0
#define PHY_BB_CCK_SPUR_MIT_USE_CCK_SPUR_MIT_LSB                                                       0
#define PHY_BB_CCK_SPUR_MIT_USE_CCK_SPUR_MIT_MASK                                             0x00000001
#define PHY_BB_CCK_SPUR_MIT_USE_CCK_SPUR_MIT_GET(x)                            (((x) & 0x00000001) >> 0)
#define PHY_BB_CCK_SPUR_MIT_USE_CCK_SPUR_MIT_SET(x)                            (((x) << 0) & 0x00000001)
#define PHY_BB_CCK_SPUR_MIT_SPUR_RSSI_THR_MSB                                                          8
#define PHY_BB_CCK_SPUR_MIT_SPUR_RSSI_THR_LSB                                                          1
#define PHY_BB_CCK_SPUR_MIT_SPUR_RSSI_THR_MASK                                                0x000001fe
#define PHY_BB_CCK_SPUR_MIT_SPUR_RSSI_THR_GET(x)                               (((x) & 0x000001fe) >> 1)
#define PHY_BB_CCK_SPUR_MIT_SPUR_RSSI_THR_SET(x)                               (((x) << 1) & 0x000001fe)
#define PHY_BB_CCK_SPUR_MIT_CCK_SPUR_FREQ_MSB                                                         28
#define PHY_BB_CCK_SPUR_MIT_CCK_SPUR_FREQ_LSB                                                          9
#define PHY_BB_CCK_SPUR_MIT_CCK_SPUR_FREQ_MASK                                                0x1ffffe00
#define PHY_BB_CCK_SPUR_MIT_CCK_SPUR_FREQ_GET(x)                               (((x) & 0x1ffffe00) >> 9)
#define PHY_BB_CCK_SPUR_MIT_CCK_SPUR_FREQ_SET(x)                               (((x) << 9) & 0x1ffffe00)
#define PHY_BB_CCK_SPUR_MIT_SPUR_FILTER_TYPE_MSB                                                      30
#define PHY_BB_CCK_SPUR_MIT_SPUR_FILTER_TYPE_LSB                                                      29
#define PHY_BB_CCK_SPUR_MIT_SPUR_FILTER_TYPE_MASK                                             0x60000000
#define PHY_BB_CCK_SPUR_MIT_SPUR_FILTER_TYPE_GET(x)                           (((x) & 0x60000000) >> 29)
#define PHY_BB_CCK_SPUR_MIT_SPUR_FILTER_TYPE_SET(x)                           (((x) << 29) & 0x60000000)

/* macros for bb_agc_reg_map.BB_mrc_cck_ctrl */
#define PHY_BB_MRC_CCK_CTRL_ADDRESS                                                           0x00009fd0
#define PHY_BB_MRC_CCK_CTRL_OFFSET                                                            0x000001d0
#define PHY_BB_MRC_CCK_CTRL_BBB_MRC_EN_MSB                                                             0
#define PHY_BB_MRC_CCK_CTRL_BBB_MRC_EN_LSB                                                             0
#define PHY_BB_MRC_CCK_CTRL_BBB_MRC_EN_MASK                                                   0x00000001
#define PHY_BB_MRC_CCK_CTRL_BBB_MRC_EN_GET(x)                                  (((x) & 0x00000001) >> 0)
#define PHY_BB_MRC_CCK_CTRL_BBB_MRC_EN_SET(x)                                  (((x) << 0) & 0x00000001)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_MUX_REG_MSB                                                  1
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_MUX_REG_LSB                                                  1
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_MUX_REG_MASK                                        0x00000002
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_MUX_REG_GET(x)                       (((x) & 0x00000002) >> 1)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_MUX_REG_SET(x)                       (((x) << 1) & 0x00000002)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_PD_ACCU_THR_HI_MSB                                               4
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_PD_ACCU_THR_HI_LSB                                               2
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_PD_ACCU_THR_HI_MASK                                     0x0000001c
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_PD_ACCU_THR_HI_GET(x)                    (((x) & 0x0000001c) >> 2)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_PD_ACCU_THR_HI_SET(x)                    (((x) << 2) & 0x0000001c)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_PD_ACCU_THR_LOW_MSB                                              7
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_PD_ACCU_THR_LOW_LSB                                              5
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_PD_ACCU_THR_LOW_MASK                                    0x000000e0
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_PD_ACCU_THR_LOW_GET(x)                   (((x) & 0x000000e0) >> 5)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_PD_ACCU_THR_LOW_SET(x)                   (((x) << 5) & 0x000000e0)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_BARKER_RSSI_THR_MSB                                             11
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_BARKER_RSSI_THR_LSB                                              8
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_BARKER_RSSI_THR_MASK                                    0x00000f00
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_BARKER_RSSI_THR_GET(x)                   (((x) & 0x00000f00) >> 8)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_BARKER_RSSI_THR_SET(x)                   (((x) << 8) & 0x00000f00)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_BK_THR_HI_MSB                                               16
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_BK_THR_HI_LSB                                               12
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_BK_THR_HI_MASK                                      0x0001f000
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_BK_THR_HI_GET(x)                    (((x) & 0x0001f000) >> 12)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_BK_THR_HI_SET(x)                    (((x) << 12) & 0x0001f000)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_BK_THR_LOW_MSB                                              21
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_BK_THR_LOW_LSB                                              17
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_BK_THR_LOW_MASK                                     0x003e0000
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_BK_THR_LOW_GET(x)                   (((x) & 0x003e0000) >> 17)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MRC_BK_THR_LOW_SET(x)                   (((x) << 17) & 0x003e0000)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MIN_VALUE_MSB                                                   27
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MIN_VALUE_LSB                                                   22
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MIN_VALUE_MASK                                          0x0fc00000
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MIN_VALUE_GET(x)                        (((x) & 0x0fc00000) >> 22)
#define PHY_BB_MRC_CCK_CTRL_AGCDP_CCK_MIN_VALUE_SET(x)                        (((x) << 22) & 0x0fc00000)

/* macros for bb_agc_reg_map.BB_cck_blocker_det */
#define PHY_BB_CCK_BLOCKER_DET_ADDRESS                                                        0x00009fd4
#define PHY_BB_CCK_BLOCKER_DET_OFFSET                                                         0x000001d4
#define PHY_BB_CCK_BLOCKER_DET_CCK_FREQ_SHIFT_BLOCKER_DETECTION_MSB                                    0
#define PHY_BB_CCK_BLOCKER_DET_CCK_FREQ_SHIFT_BLOCKER_DETECTION_LSB                                    0
#define PHY_BB_CCK_BLOCKER_DET_CCK_FREQ_SHIFT_BLOCKER_DETECTION_MASK                          0x00000001
#define PHY_BB_CCK_BLOCKER_DET_CCK_FREQ_SHIFT_BLOCKER_DETECTION_GET(x)         (((x) & 0x00000001) >> 0)
#define PHY_BB_CCK_BLOCKER_DET_CCK_FREQ_SHIFT_BLOCKER_DETECTION_SET(x)         (((x) << 0) & 0x00000001)
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_RESTART_WEAK_SIG_MSB                                    1
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_RESTART_WEAK_SIG_LSB                                    1
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_RESTART_WEAK_SIG_MASK                          0x00000002
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_RESTART_WEAK_SIG_GET(x)         (((x) & 0x00000002) >> 1)
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_RESTART_WEAK_SIG_SET(x)         (((x) << 1) & 0x00000002)
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_BKSUM_NUM_MSB                                           5
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_BKSUM_NUM_LSB                                           2
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_BKSUM_NUM_MASK                                 0x0000003c
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_BKSUM_NUM_GET(x)                (((x) & 0x0000003c) >> 2)
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_BKSUM_NUM_SET(x)                (((x) << 2) & 0x0000003c)
#define PHY_BB_CCK_BLOCKER_DET_BK_VALID_DELAY_MSB                                                      8
#define PHY_BB_CCK_BLOCKER_DET_BK_VALID_DELAY_LSB                                                      6
#define PHY_BB_CCK_BLOCKER_DET_BK_VALID_DELAY_MASK                                            0x000001c0
#define PHY_BB_CCK_BLOCKER_DET_BK_VALID_DELAY_GET(x)                           (((x) & 0x000001c0) >> 6)
#define PHY_BB_CCK_BLOCKER_DET_BK_VALID_DELAY_SET(x)                           (((x) << 6) & 0x000001c0)
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_THR_MSB                                                13
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_THR_LSB                                                 9
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_THR_MASK                                       0x00003e00
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_THR_GET(x)                      (((x) & 0x00003e00) >> 9)
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_THR_SET(x)                      (((x) << 9) & 0x00003e00)
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_DELAY_THR_MSB                                          19
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_DELAY_THR_LSB                                          14
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_DELAY_THR_MASK                                 0x000fc000
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_DELAY_THR_GET(x)               (((x) & 0x000fc000) >> 14)
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_DET_DELAY_THR_SET(x)               (((x) << 14) & 0x000fc000)
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_MONITOR_TIME_MSB                                           25
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_MONITOR_TIME_LSB                                           20
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_MONITOR_TIME_MASK                                  0x03f00000
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_MONITOR_TIME_GET(x)                (((x) & 0x03f00000) >> 20)
#define PHY_BB_CCK_BLOCKER_DET_CCK_BLOCKER_MONITOR_TIME_SET(x)                (((x) << 20) & 0x03f00000)
#define PHY_BB_CCK_BLOCKER_DET_SKIP_RAMP_ENABLE_MSB                                                   26
#define PHY_BB_CCK_BLOCKER_DET_SKIP_RAMP_ENABLE_LSB                                                   26
#define PHY_BB_CCK_BLOCKER_DET_SKIP_RAMP_ENABLE_MASK                                          0x04000000
#define PHY_BB_CCK_BLOCKER_DET_SKIP_RAMP_ENABLE_GET(x)                        (((x) & 0x04000000) >> 26)
#define PHY_BB_CCK_BLOCKER_DET_SKIP_RAMP_ENABLE_SET(x)                        (((x) << 26) & 0x04000000)
#define PHY_BB_CCK_BLOCKER_DET_CCK_DET_RAMP_THR_MSB                                                   31
#define PHY_BB_CCK_BLOCKER_DET_CCK_DET_RAMP_THR_LSB                                                   27
#define PHY_BB_CCK_BLOCKER_DET_CCK_DET_RAMP_THR_MASK                                          0xf8000000
#define PHY_BB_CCK_BLOCKER_DET_CCK_DET_RAMP_THR_GET(x)                        (((x) & 0xf8000000) >> 27)
#define PHY_BB_CCK_BLOCKER_DET_CCK_DET_RAMP_THR_SET(x)                        (((x) << 27) & 0xf8000000)

/* macros for bb_agc_reg_map.BB_rx_ocgain */
#define PHY_BB_RX_OCGAIN_ADDRESS                                                              0x0000a000
#define PHY_BB_RX_OCGAIN_OFFSET                                                               0x00000200
#define PHY_BB_RX_OCGAIN_GAIN_ENTRY_MSB                                                               31
#define PHY_BB_RX_OCGAIN_GAIN_ENTRY_LSB                                                                0
#define PHY_BB_RX_OCGAIN_GAIN_ENTRY_MASK                                                      0xffffffff
#define PHY_BB_RX_OCGAIN_GAIN_ENTRY_GET(x)                                     (((x) & 0xffffffff) >> 0)
#define PHY_BB_RX_OCGAIN_GAIN_ENTRY_SET(x)                                     (((x) << 0) & 0xffffffff)

#ifndef __ASSEMBLER__

typedef struct agc_reg_map_reg_s {
  volatile unsigned int BB_settling_time;                              /*        0x0 - 0x4        */
  volatile unsigned int BB_gain_force_max_gains_b0;                    /*        0x4 - 0x8        */
  volatile unsigned int BB_gains_min_offsets;                          /*        0x8 - 0xc        */
  volatile unsigned int BB_desired_sigsize;                            /*        0xc - 0x10       */
  volatile unsigned int BB_find_signal;                                /*       0x10 - 0x14       */
  volatile unsigned int BB_agc;                                        /*       0x14 - 0x18       */
  volatile unsigned int BB_ext_atten_switch_ctl_b0;                    /*       0x18 - 0x1c       */
  volatile unsigned int BB_cca_b0;                                     /*       0x1c - 0x20       */
  volatile unsigned int BB_cca_ctrl_2_b0;                              /*       0x20 - 0x24       */
  volatile unsigned int BB_restart;                                    /*       0x24 - 0x28       */
  volatile unsigned int BB_multichain_gain_ctrl;                       /*       0x28 - 0x2c       */
  volatile unsigned int BB_ext_chan_pwr_thr_1;                         /*       0x2c - 0x30       */
  volatile unsigned int BB_ext_chan_detect_win;                        /*       0x30 - 0x34       */
  volatile unsigned int BB_pwr_thr_20_40_det;                          /*       0x34 - 0x38       */
  volatile unsigned int BB_rifs_srch;                                  /*       0x38 - 0x3c       */
  volatile unsigned int BB_peak_det_ctrl_1;                            /*       0x3c - 0x40       */
  volatile unsigned int BB_peak_det_ctrl_2;                            /*       0x40 - 0x44       */
  volatile unsigned int BB_rx_gain_bounds_1;                           /*       0x44 - 0x48       */
  volatile unsigned int BB_rx_gain_bounds_2;                           /*       0x48 - 0x4c       */
  volatile unsigned int BB_peak_det_cal_ctrl;                          /*       0x4c - 0x50       */
  volatile unsigned int BB_agc_dig_dc_ctrl;                            /*       0x50 - 0x54       */
  volatile unsigned int BB_bt_coex_1;                                  /*       0x54 - 0x58       */
  volatile unsigned int BB_bt_coex_2;                                  /*       0x58 - 0x5c       */
  volatile unsigned int BB_bt_coex_3;                                  /*       0x5c - 0x60       */
  volatile unsigned int BB_bt_coex_4;                                  /*       0x60 - 0x64       */
  volatile unsigned int BB_bt_coex_5;                                  /*       0x64 - 0x68       */
  volatile unsigned int BB_redpwr_ctrl_1;                              /*       0x68 - 0x6c       */
  volatile unsigned int BB_redpwr_ctrl_2;                              /*       0x6c - 0x70       */
  volatile char pad__0[0x110];                                         /*       0x70 - 0x180      */
  volatile unsigned int BB_rssi_b0;                                    /*      0x180 - 0x184      */
  volatile unsigned int BB_spur_est_cck_report_b0;                     /*      0x184 - 0x188      */
  volatile unsigned int BB_agc_dig_dc_status_i_b0;                     /*      0x188 - 0x18c      */
  volatile unsigned int BB_agc_dig_dc_status_q_b0;                     /*      0x18c - 0x190      */
  volatile unsigned int BB_dc_cal_status_b0;                           /*      0x190 - 0x194      */
  volatile char pad__1[0x2c];                                          /*      0x194 - 0x1c0      */
  volatile unsigned int BB_bbb_sig_detect;                             /*      0x1c0 - 0x1c4      */
  volatile unsigned int BB_bbb_dagc_ctrl;                              /*      0x1c4 - 0x1c8      */
  volatile unsigned int BB_iqcorr_ctrl_cck;                            /*      0x1c8 - 0x1cc      */
  volatile unsigned int BB_cck_spur_mit;                               /*      0x1cc - 0x1d0      */
  volatile unsigned int BB_mrc_cck_ctrl;                               /*      0x1d0 - 0x1d4      */
  volatile unsigned int BB_cck_blocker_det;                            /*      0x1d4 - 0x1d8      */
  volatile char pad__2[0x28];                                          /*      0x1d8 - 0x200      */
  volatile unsigned int BB_rx_ocgain[128];                             /*      0x200 - 0x400      */
} agc_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_sm_reg_map.BB_D2_chip_id */
#define PHY_BB_D2_CHIP_ID_ADDRESS                                                             0x0000a200
#define PHY_BB_D2_CHIP_ID_OFFSET                                                              0x00000000
#define PHY_BB_D2_CHIP_ID_OLD_ID_MSB                                                                   7
#define PHY_BB_D2_CHIP_ID_OLD_ID_LSB                                                                   0
#define PHY_BB_D2_CHIP_ID_OLD_ID_MASK                                                         0x000000ff
#define PHY_BB_D2_CHIP_ID_OLD_ID_GET(x)                                        (((x) & 0x000000ff) >> 0)
#define PHY_BB_D2_CHIP_ID_ID_MSB                                                                      31
#define PHY_BB_D2_CHIP_ID_ID_LSB                                                                       8
#define PHY_BB_D2_CHIP_ID_ID_MASK                                                             0xffffff00
#define PHY_BB_D2_CHIP_ID_ID_GET(x)                                            (((x) & 0xffffff00) >> 8)

/* macros for bb_sm_reg_map.BB_gen_controls */
#define PHY_BB_GEN_CONTROLS_ADDRESS                                                           0x0000a204
#define PHY_BB_GEN_CONTROLS_OFFSET                                                            0x00000004
#define PHY_BB_GEN_CONTROLS_TURBO_MSB                                                                  0
#define PHY_BB_GEN_CONTROLS_TURBO_LSB                                                                  0
#define PHY_BB_GEN_CONTROLS_TURBO_MASK                                                        0x00000001
#define PHY_BB_GEN_CONTROLS_TURBO_GET(x)                                       (((x) & 0x00000001) >> 0)
#define PHY_BB_GEN_CONTROLS_TURBO_SET(x)                                       (((x) << 0) & 0x00000001)
#define PHY_BB_GEN_CONTROLS_CF_SHORT20_MSB                                                             1
#define PHY_BB_GEN_CONTROLS_CF_SHORT20_LSB                                                             1
#define PHY_BB_GEN_CONTROLS_CF_SHORT20_MASK                                                   0x00000002
#define PHY_BB_GEN_CONTROLS_CF_SHORT20_GET(x)                                  (((x) & 0x00000002) >> 1)
#define PHY_BB_GEN_CONTROLS_CF_SHORT20_SET(x)                                  (((x) << 1) & 0x00000002)
#define PHY_BB_GEN_CONTROLS_DYN_20_40_MSB                                                              2
#define PHY_BB_GEN_CONTROLS_DYN_20_40_LSB                                                              2
#define PHY_BB_GEN_CONTROLS_DYN_20_40_MASK                                                    0x00000004
#define PHY_BB_GEN_CONTROLS_DYN_20_40_GET(x)                                   (((x) & 0x00000004) >> 2)
#define PHY_BB_GEN_CONTROLS_DYN_20_40_SET(x)                                   (((x) << 2) & 0x00000004)
#define PHY_BB_GEN_CONTROLS_DYN_20_40_PRI_ONLY_MSB                                                     3
#define PHY_BB_GEN_CONTROLS_DYN_20_40_PRI_ONLY_LSB                                                     3
#define PHY_BB_GEN_CONTROLS_DYN_20_40_PRI_ONLY_MASK                                           0x00000008
#define PHY_BB_GEN_CONTROLS_DYN_20_40_PRI_ONLY_GET(x)                          (((x) & 0x00000008) >> 3)
#define PHY_BB_GEN_CONTROLS_DYN_20_40_PRI_ONLY_SET(x)                          (((x) << 3) & 0x00000008)
#define PHY_BB_GEN_CONTROLS_DYN_20_40_PRI_CHN_MSB                                                      4
#define PHY_BB_GEN_CONTROLS_DYN_20_40_PRI_CHN_LSB                                                      4
#define PHY_BB_GEN_CONTROLS_DYN_20_40_PRI_CHN_MASK                                            0x00000010
#define PHY_BB_GEN_CONTROLS_DYN_20_40_PRI_CHN_GET(x)                           (((x) & 0x00000010) >> 4)
#define PHY_BB_GEN_CONTROLS_DYN_20_40_PRI_CHN_SET(x)                           (((x) << 4) & 0x00000010)
#define PHY_BB_GEN_CONTROLS_DYN_20_40_EXT_CHN_MSB                                                      5
#define PHY_BB_GEN_CONTROLS_DYN_20_40_EXT_CHN_LSB                                                      5
#define PHY_BB_GEN_CONTROLS_DYN_20_40_EXT_CHN_MASK                                            0x00000020
#define PHY_BB_GEN_CONTROLS_DYN_20_40_EXT_CHN_GET(x)                           (((x) & 0x00000020) >> 5)
#define PHY_BB_GEN_CONTROLS_DYN_20_40_EXT_CHN_SET(x)                           (((x) << 5) & 0x00000020)
#define PHY_BB_GEN_CONTROLS_HT_ENABLE_MSB                                                              6
#define PHY_BB_GEN_CONTROLS_HT_ENABLE_LSB                                                              6
#define PHY_BB_GEN_CONTROLS_HT_ENABLE_MASK                                                    0x00000040
#define PHY_BB_GEN_CONTROLS_HT_ENABLE_GET(x)                                   (((x) & 0x00000040) >> 6)
#define PHY_BB_GEN_CONTROLS_HT_ENABLE_SET(x)                                   (((x) << 6) & 0x00000040)
#define PHY_BB_GEN_CONTROLS_ALLOW_SHORT_GI_MSB                                                         7
#define PHY_BB_GEN_CONTROLS_ALLOW_SHORT_GI_LSB                                                         7
#define PHY_BB_GEN_CONTROLS_ALLOW_SHORT_GI_MASK                                               0x00000080
#define PHY_BB_GEN_CONTROLS_ALLOW_SHORT_GI_GET(x)                              (((x) & 0x00000080) >> 7)
#define PHY_BB_GEN_CONTROLS_ALLOW_SHORT_GI_SET(x)                              (((x) << 7) & 0x00000080)
#define PHY_BB_GEN_CONTROLS_CF_2_CHAINS_USE_WALSH_MSB                                                  8
#define PHY_BB_GEN_CONTROLS_CF_2_CHAINS_USE_WALSH_LSB                                                  8
#define PHY_BB_GEN_CONTROLS_CF_2_CHAINS_USE_WALSH_MASK                                        0x00000100
#define PHY_BB_GEN_CONTROLS_CF_2_CHAINS_USE_WALSH_GET(x)                       (((x) & 0x00000100) >> 8)
#define PHY_BB_GEN_CONTROLS_CF_2_CHAINS_USE_WALSH_SET(x)                       (((x) << 8) & 0x00000100)
#define PHY_BB_GEN_CONTROLS_CF_3_CHAINS_USE_WALSH_MSB                                                  9
#define PHY_BB_GEN_CONTROLS_CF_3_CHAINS_USE_WALSH_LSB                                                  9
#define PHY_BB_GEN_CONTROLS_CF_3_CHAINS_USE_WALSH_MASK                                        0x00000200
#define PHY_BB_GEN_CONTROLS_CF_3_CHAINS_USE_WALSH_GET(x)                       (((x) & 0x00000200) >> 9)
#define PHY_BB_GEN_CONTROLS_CF_3_CHAINS_USE_WALSH_SET(x)                       (((x) << 9) & 0x00000200)
#define PHY_BB_GEN_CONTROLS_GF_ENABLE_MSB                                                             10
#define PHY_BB_GEN_CONTROLS_GF_ENABLE_LSB                                                             10
#define PHY_BB_GEN_CONTROLS_GF_ENABLE_MASK                                                    0x00000400
#define PHY_BB_GEN_CONTROLS_GF_ENABLE_GET(x)                                  (((x) & 0x00000400) >> 10)
#define PHY_BB_GEN_CONTROLS_GF_ENABLE_SET(x)                                  (((x) << 10) & 0x00000400)
#define PHY_BB_GEN_CONTROLS_ENABLE_DAC_ASYNC_FIFO_MSB                                                 11
#define PHY_BB_GEN_CONTROLS_ENABLE_DAC_ASYNC_FIFO_LSB                                                 11
#define PHY_BB_GEN_CONTROLS_ENABLE_DAC_ASYNC_FIFO_MASK                                        0x00000800
#define PHY_BB_GEN_CONTROLS_ENABLE_DAC_ASYNC_FIFO_GET(x)                      (((x) & 0x00000800) >> 11)
#define PHY_BB_GEN_CONTROLS_ENABLE_DAC_ASYNC_FIFO_SET(x)                      (((x) << 11) & 0x00000800)
#define PHY_BB_GEN_CONTROLS_BOND_OPT_CHAIN_SEL_MSB                                                    14
#define PHY_BB_GEN_CONTROLS_BOND_OPT_CHAIN_SEL_LSB                                                    14
#define PHY_BB_GEN_CONTROLS_BOND_OPT_CHAIN_SEL_MASK                                           0x00004000
#define PHY_BB_GEN_CONTROLS_BOND_OPT_CHAIN_SEL_GET(x)                         (((x) & 0x00004000) >> 14)
#define PHY_BB_GEN_CONTROLS_BOND_OPT_CHAIN_SEL_SET(x)                         (((x) << 14) & 0x00004000)
#define PHY_BB_GEN_CONTROLS_STATIC20_MODE_HT40_PACKET_HANDLING_MSB                                    15
#define PHY_BB_GEN_CONTROLS_STATIC20_MODE_HT40_PACKET_HANDLING_LSB                                    15
#define PHY_BB_GEN_CONTROLS_STATIC20_MODE_HT40_PACKET_HANDLING_MASK                           0x00008000
#define PHY_BB_GEN_CONTROLS_STATIC20_MODE_HT40_PACKET_HANDLING_GET(x)         (((x) & 0x00008000) >> 15)
#define PHY_BB_GEN_CONTROLS_STATIC20_MODE_HT40_PACKET_HANDLING_SET(x)         (((x) << 15) & 0x00008000)
#define PHY_BB_GEN_CONTROLS_STATIC20_MODE_HT40_PACKET_ERROR_RPT_MSB                                   16
#define PHY_BB_GEN_CONTROLS_STATIC20_MODE_HT40_PACKET_ERROR_RPT_LSB                                   16
#define PHY_BB_GEN_CONTROLS_STATIC20_MODE_HT40_PACKET_ERROR_RPT_MASK                          0x00010000
#define PHY_BB_GEN_CONTROLS_STATIC20_MODE_HT40_PACKET_ERROR_RPT_GET(x)        (((x) & 0x00010000) >> 16)
#define PHY_BB_GEN_CONTROLS_STATIC20_MODE_HT40_PACKET_ERROR_RPT_SET(x)        (((x) << 16) & 0x00010000)
#define PHY_BB_GEN_CONTROLS_ENABLE_CSD_PHASE_DITHERING_MSB                                            17
#define PHY_BB_GEN_CONTROLS_ENABLE_CSD_PHASE_DITHERING_LSB                                            17
#define PHY_BB_GEN_CONTROLS_ENABLE_CSD_PHASE_DITHERING_MASK                                   0x00020000
#define PHY_BB_GEN_CONTROLS_ENABLE_CSD_PHASE_DITHERING_GET(x)                 (((x) & 0x00020000) >> 17)
#define PHY_BB_GEN_CONTROLS_ENABLE_CSD_PHASE_DITHERING_SET(x)                 (((x) << 17) & 0x00020000)
#define PHY_BB_GEN_CONTROLS_UNSUPP_HT_RATE_THRESHOLD_MSB                                              24
#define PHY_BB_GEN_CONTROLS_UNSUPP_HT_RATE_THRESHOLD_LSB                                              18
#define PHY_BB_GEN_CONTROLS_UNSUPP_HT_RATE_THRESHOLD_MASK                                     0x01fc0000
#define PHY_BB_GEN_CONTROLS_UNSUPP_HT_RATE_THRESHOLD_GET(x)                   (((x) & 0x01fc0000) >> 18)
#define PHY_BB_GEN_CONTROLS_UNSUPP_HT_RATE_THRESHOLD_SET(x)                   (((x) << 18) & 0x01fc0000)
#define PHY_BB_GEN_CONTROLS_EN_ERR_TX_CHAIN_MASK_ZERO_MSB                                             25
#define PHY_BB_GEN_CONTROLS_EN_ERR_TX_CHAIN_MASK_ZERO_LSB                                             25
#define PHY_BB_GEN_CONTROLS_EN_ERR_TX_CHAIN_MASK_ZERO_MASK                                    0x02000000
#define PHY_BB_GEN_CONTROLS_EN_ERR_TX_CHAIN_MASK_ZERO_GET(x)                  (((x) & 0x02000000) >> 25)
#define PHY_BB_GEN_CONTROLS_EN_ERR_TX_CHAIN_MASK_ZERO_SET(x)                  (((x) << 25) & 0x02000000)
#define PHY_BB_GEN_CONTROLS_IS_MCKINLEY_TPC_MSB                                                       26
#define PHY_BB_GEN_CONTROLS_IS_MCKINLEY_TPC_LSB                                                       26
#define PHY_BB_GEN_CONTROLS_IS_MCKINLEY_TPC_MASK                                              0x04000000
#define PHY_BB_GEN_CONTROLS_IS_MCKINLEY_TPC_GET(x)                            (((x) & 0x04000000) >> 26)
#define PHY_BB_GEN_CONTROLS_IS_MCKINLEY_TPC_SET(x)                            (((x) << 26) & 0x04000000)

/* macros for bb_sm_reg_map.BB_modes_select */
#define PHY_BB_MODES_SELECT_ADDRESS                                                           0x0000a208
#define PHY_BB_MODES_SELECT_OFFSET                                                            0x00000008
#define PHY_BB_MODES_SELECT_CCK_MODE_MSB                                                               0
#define PHY_BB_MODES_SELECT_CCK_MODE_LSB                                                               0
#define PHY_BB_MODES_SELECT_CCK_MODE_MASK                                                     0x00000001
#define PHY_BB_MODES_SELECT_CCK_MODE_GET(x)                                    (((x) & 0x00000001) >> 0)
#define PHY_BB_MODES_SELECT_CCK_MODE_SET(x)                                    (((x) << 0) & 0x00000001)
#define PHY_BB_MODES_SELECT_DYN_OFDM_CCK_MODE_MSB                                                      2
#define PHY_BB_MODES_SELECT_DYN_OFDM_CCK_MODE_LSB                                                      2
#define PHY_BB_MODES_SELECT_DYN_OFDM_CCK_MODE_MASK                                            0x00000004
#define PHY_BB_MODES_SELECT_DYN_OFDM_CCK_MODE_GET(x)                           (((x) & 0x00000004) >> 2)
#define PHY_BB_MODES_SELECT_DYN_OFDM_CCK_MODE_SET(x)                           (((x) << 2) & 0x00000004)
#define PHY_BB_MODES_SELECT_HALF_RATE_MODE_MSB                                                         5
#define PHY_BB_MODES_SELECT_HALF_RATE_MODE_LSB                                                         5
#define PHY_BB_MODES_SELECT_HALF_RATE_MODE_MASK                                               0x00000020
#define PHY_BB_MODES_SELECT_HALF_RATE_MODE_GET(x)                              (((x) & 0x00000020) >> 5)
#define PHY_BB_MODES_SELECT_HALF_RATE_MODE_SET(x)                              (((x) << 5) & 0x00000020)
#define PHY_BB_MODES_SELECT_QUARTER_RATE_MODE_MSB                                                      6
#define PHY_BB_MODES_SELECT_QUARTER_RATE_MODE_LSB                                                      6
#define PHY_BB_MODES_SELECT_QUARTER_RATE_MODE_MASK                                            0x00000040
#define PHY_BB_MODES_SELECT_QUARTER_RATE_MODE_GET(x)                           (((x) & 0x00000040) >> 6)
#define PHY_BB_MODES_SELECT_QUARTER_RATE_MODE_SET(x)                           (((x) << 6) & 0x00000040)
#define PHY_BB_MODES_SELECT_MAC_CLK_MODE_MSB                                                           7
#define PHY_BB_MODES_SELECT_MAC_CLK_MODE_LSB                                                           7
#define PHY_BB_MODES_SELECT_MAC_CLK_MODE_MASK                                                 0x00000080
#define PHY_BB_MODES_SELECT_MAC_CLK_MODE_GET(x)                                (((x) & 0x00000080) >> 7)
#define PHY_BB_MODES_SELECT_MAC_CLK_MODE_SET(x)                                (((x) << 7) & 0x00000080)
#define PHY_BB_MODES_SELECT_DISABLE_DYN_CCK_DET_MSB                                                    8
#define PHY_BB_MODES_SELECT_DISABLE_DYN_CCK_DET_LSB                                                    8
#define PHY_BB_MODES_SELECT_DISABLE_DYN_CCK_DET_MASK                                          0x00000100
#define PHY_BB_MODES_SELECT_DISABLE_DYN_CCK_DET_GET(x)                         (((x) & 0x00000100) >> 8)
#define PHY_BB_MODES_SELECT_DISABLE_DYN_CCK_DET_SET(x)                         (((x) << 8) & 0x00000100)
#define PHY_BB_MODES_SELECT_SVD_HALF_RATE_MODE_MSB                                                     9
#define PHY_BB_MODES_SELECT_SVD_HALF_RATE_MODE_LSB                                                     9
#define PHY_BB_MODES_SELECT_SVD_HALF_RATE_MODE_MASK                                           0x00000200
#define PHY_BB_MODES_SELECT_SVD_HALF_RATE_MODE_GET(x)                          (((x) & 0x00000200) >> 9)
#define PHY_BB_MODES_SELECT_SVD_HALF_RATE_MODE_SET(x)                          (((x) << 9) & 0x00000200)
#define PHY_BB_MODES_SELECT_DISABLE_DYN_FAST_ADC_MSB                                                  10
#define PHY_BB_MODES_SELECT_DISABLE_DYN_FAST_ADC_LSB                                                  10
#define PHY_BB_MODES_SELECT_DISABLE_DYN_FAST_ADC_MASK                                         0x00000400
#define PHY_BB_MODES_SELECT_DISABLE_DYN_FAST_ADC_GET(x)                       (((x) & 0x00000400) >> 10)
#define PHY_BB_MODES_SELECT_DISABLE_DYN_FAST_ADC_SET(x)                       (((x) << 10) & 0x00000400)

/* macros for bb_sm_reg_map.BB_active */
#define PHY_BB_ACTIVE_ADDRESS                                                                 0x0000a20c
#define PHY_BB_ACTIVE_OFFSET                                                                  0x0000000c
#define PHY_BB_ACTIVE_CF_ACTIVE_MSB                                                                    0
#define PHY_BB_ACTIVE_CF_ACTIVE_LSB                                                                    0
#define PHY_BB_ACTIVE_CF_ACTIVE_MASK                                                          0x00000001
#define PHY_BB_ACTIVE_CF_ACTIVE_GET(x)                                         (((x) & 0x00000001) >> 0)
#define PHY_BB_ACTIVE_CF_ACTIVE_SET(x)                                         (((x) << 0) & 0x00000001)

/* macros for bb_sm_reg_map.BB_vit_spur_mask_A */
#define PHY_BB_VIT_SPUR_MASK_A_ADDRESS                                                        0x0000a220
#define PHY_BB_VIT_SPUR_MASK_A_OFFSET                                                         0x00000020
#define PHY_BB_VIT_SPUR_MASK_A_CF_PUNC_MASK_A_MSB                                                      9
#define PHY_BB_VIT_SPUR_MASK_A_CF_PUNC_MASK_A_LSB                                                      0
#define PHY_BB_VIT_SPUR_MASK_A_CF_PUNC_MASK_A_MASK                                            0x000003ff
#define PHY_BB_VIT_SPUR_MASK_A_CF_PUNC_MASK_A_GET(x)                           (((x) & 0x000003ff) >> 0)
#define PHY_BB_VIT_SPUR_MASK_A_CF_PUNC_MASK_A_SET(x)                           (((x) << 0) & 0x000003ff)
#define PHY_BB_VIT_SPUR_MASK_A_CF_PUNC_MASK_IDX_A_MSB                                                 16
#define PHY_BB_VIT_SPUR_MASK_A_CF_PUNC_MASK_IDX_A_LSB                                                 10
#define PHY_BB_VIT_SPUR_MASK_A_CF_PUNC_MASK_IDX_A_MASK                                        0x0001fc00
#define PHY_BB_VIT_SPUR_MASK_A_CF_PUNC_MASK_IDX_A_GET(x)                      (((x) & 0x0001fc00) >> 10)
#define PHY_BB_VIT_SPUR_MASK_A_CF_PUNC_MASK_IDX_A_SET(x)                      (((x) << 10) & 0x0001fc00)

/* macros for bb_sm_reg_map.BB_vit_spur_mask_B */
#define PHY_BB_VIT_SPUR_MASK_B_ADDRESS                                                        0x0000a224
#define PHY_BB_VIT_SPUR_MASK_B_OFFSET                                                         0x00000024
#define PHY_BB_VIT_SPUR_MASK_B_CF_PUNC_MASK_B_MSB                                                      9
#define PHY_BB_VIT_SPUR_MASK_B_CF_PUNC_MASK_B_LSB                                                      0
#define PHY_BB_VIT_SPUR_MASK_B_CF_PUNC_MASK_B_MASK                                            0x000003ff
#define PHY_BB_VIT_SPUR_MASK_B_CF_PUNC_MASK_B_GET(x)                           (((x) & 0x000003ff) >> 0)
#define PHY_BB_VIT_SPUR_MASK_B_CF_PUNC_MASK_B_SET(x)                           (((x) << 0) & 0x000003ff)
#define PHY_BB_VIT_SPUR_MASK_B_CF_PUNC_MASK_IDX_B_MSB                                                 16
#define PHY_BB_VIT_SPUR_MASK_B_CF_PUNC_MASK_IDX_B_LSB                                                 10
#define PHY_BB_VIT_SPUR_MASK_B_CF_PUNC_MASK_IDX_B_MASK                                        0x0001fc00
#define PHY_BB_VIT_SPUR_MASK_B_CF_PUNC_MASK_IDX_B_GET(x)                      (((x) & 0x0001fc00) >> 10)
#define PHY_BB_VIT_SPUR_MASK_B_CF_PUNC_MASK_IDX_B_SET(x)                      (((x) << 10) & 0x0001fc00)

/* macros for bb_sm_reg_map.BB_spectral_scan */
#define PHY_BB_SPECTRAL_SCAN_ADDRESS                                                          0x0000a228
#define PHY_BB_SPECTRAL_SCAN_OFFSET                                                           0x00000028
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_ENA_MSB                                                     0
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_ENA_LSB                                                     0
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_ENA_MASK                                           0x00000001
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_ENA_GET(x)                          (((x) & 0x00000001) >> 0)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_ENA_SET(x)                          (((x) << 0) & 0x00000001)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_ACTIVE_MSB                                                  1
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_ACTIVE_LSB                                                  1
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_ACTIVE_MASK                                        0x00000002
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_ACTIVE_GET(x)                       (((x) & 0x00000002) >> 1)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_ACTIVE_SET(x)                       (((x) << 1) & 0x00000002)
#define PHY_BB_SPECTRAL_SCAN_DISABLE_RADAR_TCTL_RST_MSB                                                2
#define PHY_BB_SPECTRAL_SCAN_DISABLE_RADAR_TCTL_RST_LSB                                                2
#define PHY_BB_SPECTRAL_SCAN_DISABLE_RADAR_TCTL_RST_MASK                                      0x00000004
#define PHY_BB_SPECTRAL_SCAN_DISABLE_RADAR_TCTL_RST_GET(x)                     (((x) & 0x00000004) >> 2)
#define PHY_BB_SPECTRAL_SCAN_DISABLE_RADAR_TCTL_RST_SET(x)                     (((x) << 2) & 0x00000004)
#define PHY_BB_SPECTRAL_SCAN_DISABLE_PULSE_COARSE_LOW_MSB                                              3
#define PHY_BB_SPECTRAL_SCAN_DISABLE_PULSE_COARSE_LOW_LSB                                              3
#define PHY_BB_SPECTRAL_SCAN_DISABLE_PULSE_COARSE_LOW_MASK                                    0x00000008
#define PHY_BB_SPECTRAL_SCAN_DISABLE_PULSE_COARSE_LOW_GET(x)                   (((x) & 0x00000008) >> 3)
#define PHY_BB_SPECTRAL_SCAN_DISABLE_PULSE_COARSE_LOW_SET(x)                   (((x) << 3) & 0x00000008)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_FFT_PERIOD_MSB                                              7
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_FFT_PERIOD_LSB                                              4
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_FFT_PERIOD_MASK                                    0x000000f0
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_FFT_PERIOD_GET(x)                   (((x) & 0x000000f0) >> 4)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_FFT_PERIOD_SET(x)                   (((x) << 4) & 0x000000f0)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_PERIOD_MSB                                                 15
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_PERIOD_LSB                                                  8
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_PERIOD_MASK                                        0x0000ff00
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_PERIOD_GET(x)                       (((x) & 0x0000ff00) >> 8)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_PERIOD_SET(x)                       (((x) << 8) & 0x0000ff00)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_COUNT_MSB                                                  27
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_COUNT_LSB                                                  16
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_COUNT_MASK                                         0x0fff0000
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_COUNT_GET(x)                       (((x) & 0x0fff0000) >> 16)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_COUNT_SET(x)                       (((x) << 16) & 0x0fff0000)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_SHORT_RPT_MSB                                              28
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_SHORT_RPT_LSB                                              28
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_SHORT_RPT_MASK                                     0x10000000
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_SHORT_RPT_GET(x)                   (((x) & 0x10000000) >> 28)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_SHORT_RPT_SET(x)                   (((x) << 28) & 0x10000000)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_PRIORITY_MSB                                               29
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_PRIORITY_LSB                                               29
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_PRIORITY_MASK                                      0x20000000
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_PRIORITY_GET(x)                    (((x) & 0x20000000) >> 29)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_PRIORITY_SET(x)                    (((x) << 29) & 0x20000000)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_USE_ERR5_MSB                                               30
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_USE_ERR5_LSB                                               30
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_USE_ERR5_MASK                                      0x40000000
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_USE_ERR5_GET(x)                    (((x) & 0x40000000) >> 30)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_USE_ERR5_SET(x)                    (((x) << 30) & 0x40000000)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_COMPRESSED_RPT_MSB                                         31
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_COMPRESSED_RPT_LSB                                         31
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_COMPRESSED_RPT_MASK                                0x80000000
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_COMPRESSED_RPT_GET(x)              (((x) & 0x80000000) >> 31)
#define PHY_BB_SPECTRAL_SCAN_SPECTRAL_SCAN_COMPRESSED_RPT_SET(x)              (((x) << 31) & 0x80000000)

/* macros for bb_sm_reg_map.BB_radar_bw_filter */
#define PHY_BB_RADAR_BW_FILTER_ADDRESS                                                        0x0000a22c
#define PHY_BB_RADAR_BW_FILTER_OFFSET                                                         0x0000002c
#define PHY_BB_RADAR_BW_FILTER_RADAR_AVG_BW_CHECK_MSB                                                  0
#define PHY_BB_RADAR_BW_FILTER_RADAR_AVG_BW_CHECK_LSB                                                  0
#define PHY_BB_RADAR_BW_FILTER_RADAR_AVG_BW_CHECK_MASK                                        0x00000001
#define PHY_BB_RADAR_BW_FILTER_RADAR_AVG_BW_CHECK_GET(x)                       (((x) & 0x00000001) >> 0)
#define PHY_BB_RADAR_BW_FILTER_RADAR_AVG_BW_CHECK_SET(x)                       (((x) << 0) & 0x00000001)
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_SRC_SEL_MSB                                                    1
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_SRC_SEL_LSB                                                    1
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_SRC_SEL_MASK                                          0x00000002
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_SRC_SEL_GET(x)                         (((x) & 0x00000002) >> 1)
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_SRC_SEL_SET(x)                         (((x) << 1) & 0x00000002)
#define PHY_BB_RADAR_BW_FILTER_RADAR_FIRPWR_SEL_MSB                                                    3
#define PHY_BB_RADAR_BW_FILTER_RADAR_FIRPWR_SEL_LSB                                                    2
#define PHY_BB_RADAR_BW_FILTER_RADAR_FIRPWR_SEL_MASK                                          0x0000000c
#define PHY_BB_RADAR_BW_FILTER_RADAR_FIRPWR_SEL_GET(x)                         (((x) & 0x0000000c) >> 2)
#define PHY_BB_RADAR_BW_FILTER_RADAR_FIRPWR_SEL_SET(x)                         (((x) << 2) & 0x0000000c)
#define PHY_BB_RADAR_BW_FILTER_RADAR_PULSE_WIDTH_SEL_MSB                                               5
#define PHY_BB_RADAR_BW_FILTER_RADAR_PULSE_WIDTH_SEL_LSB                                               4
#define PHY_BB_RADAR_BW_FILTER_RADAR_PULSE_WIDTH_SEL_MASK                                     0x00000030
#define PHY_BB_RADAR_BW_FILTER_RADAR_PULSE_WIDTH_SEL_GET(x)                    (((x) & 0x00000030) >> 4)
#define PHY_BB_RADAR_BW_FILTER_RADAR_PULSE_WIDTH_SEL_SET(x)                    (((x) << 4) & 0x00000030)
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_FIRPWR_THRESH_MSB                                             14
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_FIRPWR_THRESH_LSB                                              8
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_FIRPWR_THRESH_MASK                                    0x00007f00
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_FIRPWR_THRESH_GET(x)                   (((x) & 0x00007f00) >> 8)
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_FIRPWR_THRESH_SET(x)                   (((x) << 8) & 0x00007f00)
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_PWR_BIAS_MSB                                                  20
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_PWR_BIAS_LSB                                                  15
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_PWR_BIAS_MASK                                         0x001f8000
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_PWR_BIAS_GET(x)                       (((x) & 0x001f8000) >> 15)
#define PHY_BB_RADAR_BW_FILTER_RADAR_DC_PWR_BIAS_SET(x)                       (((x) << 15) & 0x001f8000)
#define PHY_BB_RADAR_BW_FILTER_RADAR_BIN_MAX_BW_MSB                                                   26
#define PHY_BB_RADAR_BW_FILTER_RADAR_BIN_MAX_BW_LSB                                                   21
#define PHY_BB_RADAR_BW_FILTER_RADAR_BIN_MAX_BW_MASK                                          0x07e00000
#define PHY_BB_RADAR_BW_FILTER_RADAR_BIN_MAX_BW_GET(x)                        (((x) & 0x07e00000) >> 21)
#define PHY_BB_RADAR_BW_FILTER_RADAR_BIN_MAX_BW_SET(x)                        (((x) << 21) & 0x07e00000)

/* macros for bb_sm_reg_map.BB_search_start_delay */
#define PHY_BB_SEARCH_START_DELAY_ADDRESS                                                     0x0000a230
#define PHY_BB_SEARCH_START_DELAY_OFFSET                                                      0x00000030
#define PHY_BB_SEARCH_START_DELAY_SEARCH_START_DELAY_MSB                                              11
#define PHY_BB_SEARCH_START_DELAY_SEARCH_START_DELAY_LSB                                               0
#define PHY_BB_SEARCH_START_DELAY_SEARCH_START_DELAY_MASK                                     0x00000fff
#define PHY_BB_SEARCH_START_DELAY_SEARCH_START_DELAY_GET(x)                    (((x) & 0x00000fff) >> 0)
#define PHY_BB_SEARCH_START_DELAY_SEARCH_START_DELAY_SET(x)                    (((x) << 0) & 0x00000fff)
#define PHY_BB_SEARCH_START_DELAY_ENABLE_FLT_SVD_MSB                                                  12
#define PHY_BB_SEARCH_START_DELAY_ENABLE_FLT_SVD_LSB                                                  12
#define PHY_BB_SEARCH_START_DELAY_ENABLE_FLT_SVD_MASK                                         0x00001000
#define PHY_BB_SEARCH_START_DELAY_ENABLE_FLT_SVD_GET(x)                       (((x) & 0x00001000) >> 12)
#define PHY_BB_SEARCH_START_DELAY_ENABLE_FLT_SVD_SET(x)                       (((x) << 12) & 0x00001000)
#define PHY_BB_SEARCH_START_DELAY_ENABLE_SEND_CHAN_MSB                                                13
#define PHY_BB_SEARCH_START_DELAY_ENABLE_SEND_CHAN_LSB                                                13
#define PHY_BB_SEARCH_START_DELAY_ENABLE_SEND_CHAN_MASK                                       0x00002000
#define PHY_BB_SEARCH_START_DELAY_ENABLE_SEND_CHAN_GET(x)                     (((x) & 0x00002000) >> 13)
#define PHY_BB_SEARCH_START_DELAY_ENABLE_SEND_CHAN_SET(x)                     (((x) << 13) & 0x00002000)
#define PHY_BB_SEARCH_START_DELAY_RX_SOUNDING_ENABLE_MSB                                              14
#define PHY_BB_SEARCH_START_DELAY_RX_SOUNDING_ENABLE_LSB                                              14
#define PHY_BB_SEARCH_START_DELAY_RX_SOUNDING_ENABLE_MASK                                     0x00004000
#define PHY_BB_SEARCH_START_DELAY_RX_SOUNDING_ENABLE_GET(x)                   (((x) & 0x00004000) >> 14)
#define PHY_BB_SEARCH_START_DELAY_RX_SOUNDING_ENABLE_SET(x)                   (((x) << 14) & 0x00004000)
#define PHY_BB_SEARCH_START_DELAY_RM_HCSD4SVD_MSB                                                     15
#define PHY_BB_SEARCH_START_DELAY_RM_HCSD4SVD_LSB                                                     15
#define PHY_BB_SEARCH_START_DELAY_RM_HCSD4SVD_MASK                                            0x00008000
#define PHY_BB_SEARCH_START_DELAY_RM_HCSD4SVD_GET(x)                          (((x) & 0x00008000) >> 15)
#define PHY_BB_SEARCH_START_DELAY_RM_HCSD4SVD_SET(x)                          (((x) << 15) & 0x00008000)

/* macros for bb_sm_reg_map.BB_max_rx_length */
#define PHY_BB_MAX_RX_LENGTH_ADDRESS                                                          0x0000a234
#define PHY_BB_MAX_RX_LENGTH_OFFSET                                                           0x00000034
#define PHY_BB_MAX_RX_LENGTH_MAX_RX_LENGTH_MSB                                                        11
#define PHY_BB_MAX_RX_LENGTH_MAX_RX_LENGTH_LSB                                                         0
#define PHY_BB_MAX_RX_LENGTH_MAX_RX_LENGTH_MASK                                               0x00000fff
#define PHY_BB_MAX_RX_LENGTH_MAX_RX_LENGTH_GET(x)                              (((x) & 0x00000fff) >> 0)
#define PHY_BB_MAX_RX_LENGTH_MAX_RX_LENGTH_SET(x)                              (((x) << 0) & 0x00000fff)
#define PHY_BB_MAX_RX_LENGTH_MAX_HT_LENGTH_MSB                                                        29
#define PHY_BB_MAX_RX_LENGTH_MAX_HT_LENGTH_LSB                                                        12
#define PHY_BB_MAX_RX_LENGTH_MAX_HT_LENGTH_MASK                                               0x3ffff000
#define PHY_BB_MAX_RX_LENGTH_MAX_HT_LENGTH_GET(x)                             (((x) & 0x3ffff000) >> 12)
#define PHY_BB_MAX_RX_LENGTH_MAX_HT_LENGTH_SET(x)                             (((x) << 12) & 0x3ffff000)

/* macros for bb_sm_reg_map.BB_frame_control */
#define PHY_BB_FRAME_CONTROL_ADDRESS                                                          0x0000a238
#define PHY_BB_FRAME_CONTROL_OFFSET                                                           0x00000038
#define PHY_BB_FRAME_CONTROL_CF_OVERLAP_WINDOW_MSB                                                     1
#define PHY_BB_FRAME_CONTROL_CF_OVERLAP_WINDOW_LSB                                                     0
#define PHY_BB_FRAME_CONTROL_CF_OVERLAP_WINDOW_MASK                                           0x00000003
#define PHY_BB_FRAME_CONTROL_CF_OVERLAP_WINDOW_GET(x)                          (((x) & 0x00000003) >> 0)
#define PHY_BB_FRAME_CONTROL_CF_OVERLAP_WINDOW_SET(x)                          (((x) << 0) & 0x00000003)
#define PHY_BB_FRAME_CONTROL_CF_SCALE_SHORT_MSB                                                        2
#define PHY_BB_FRAME_CONTROL_CF_SCALE_SHORT_LSB                                                        2
#define PHY_BB_FRAME_CONTROL_CF_SCALE_SHORT_MASK                                              0x00000004
#define PHY_BB_FRAME_CONTROL_CF_SCALE_SHORT_GET(x)                             (((x) & 0x00000004) >> 2)
#define PHY_BB_FRAME_CONTROL_CF_SCALE_SHORT_SET(x)                             (((x) << 2) & 0x00000004)
#define PHY_BB_FRAME_CONTROL_CF_TX_CLIP_MSB                                                            5
#define PHY_BB_FRAME_CONTROL_CF_TX_CLIP_LSB                                                            3
#define PHY_BB_FRAME_CONTROL_CF_TX_CLIP_MASK                                                  0x00000038
#define PHY_BB_FRAME_CONTROL_CF_TX_CLIP_GET(x)                                 (((x) & 0x00000038) >> 3)
#define PHY_BB_FRAME_CONTROL_CF_TX_CLIP_SET(x)                                 (((x) << 3) & 0x00000038)
#define PHY_BB_FRAME_CONTROL_CF_TX_DOUBLESAMP_DAC_MSB                                                  7
#define PHY_BB_FRAME_CONTROL_CF_TX_DOUBLESAMP_DAC_LSB                                                  6
#define PHY_BB_FRAME_CONTROL_CF_TX_DOUBLESAMP_DAC_MASK                                        0x000000c0
#define PHY_BB_FRAME_CONTROL_CF_TX_DOUBLESAMP_DAC_GET(x)                       (((x) & 0x000000c0) >> 6)
#define PHY_BB_FRAME_CONTROL_CF_TX_DOUBLESAMP_DAC_SET(x)                       (((x) << 6) & 0x000000c0)
#define PHY_BB_FRAME_CONTROL_TX_END_ADJUST_MSB                                                        15
#define PHY_BB_FRAME_CONTROL_TX_END_ADJUST_LSB                                                         8
#define PHY_BB_FRAME_CONTROL_TX_END_ADJUST_MASK                                               0x0000ff00
#define PHY_BB_FRAME_CONTROL_TX_END_ADJUST_GET(x)                              (((x) & 0x0000ff00) >> 8)
#define PHY_BB_FRAME_CONTROL_TX_END_ADJUST_SET(x)                              (((x) << 8) & 0x0000ff00)
#define PHY_BB_FRAME_CONTROL_PREPEND_CHAN_INFO_MSB                                                    16
#define PHY_BB_FRAME_CONTROL_PREPEND_CHAN_INFO_LSB                                                    16
#define PHY_BB_FRAME_CONTROL_PREPEND_CHAN_INFO_MASK                                           0x00010000
#define PHY_BB_FRAME_CONTROL_PREPEND_CHAN_INFO_GET(x)                         (((x) & 0x00010000) >> 16)
#define PHY_BB_FRAME_CONTROL_PREPEND_CHAN_INFO_SET(x)                         (((x) << 16) & 0x00010000)
#define PHY_BB_FRAME_CONTROL_SHORT_HIGH_PAR_NORM_MSB                                                  17
#define PHY_BB_FRAME_CONTROL_SHORT_HIGH_PAR_NORM_LSB                                                  17
#define PHY_BB_FRAME_CONTROL_SHORT_HIGH_PAR_NORM_MASK                                         0x00020000
#define PHY_BB_FRAME_CONTROL_SHORT_HIGH_PAR_NORM_GET(x)                       (((x) & 0x00020000) >> 17)
#define PHY_BB_FRAME_CONTROL_SHORT_HIGH_PAR_NORM_SET(x)                       (((x) << 17) & 0x00020000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_GREEN_FIELD_MSB                                                   18
#define PHY_BB_FRAME_CONTROL_EN_ERR_GREEN_FIELD_LSB                                                   18
#define PHY_BB_FRAME_CONTROL_EN_ERR_GREEN_FIELD_MASK                                          0x00040000
#define PHY_BB_FRAME_CONTROL_EN_ERR_GREEN_FIELD_GET(x)                        (((x) & 0x00040000) >> 18)
#define PHY_BB_FRAME_CONTROL_EN_ERR_GREEN_FIELD_SET(x)                        (((x) << 18) & 0x00040000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_STATIC20_MODE_HT40_PACKET_MSB                                     19
#define PHY_BB_FRAME_CONTROL_EN_ERR_STATIC20_MODE_HT40_PACKET_LSB                                     19
#define PHY_BB_FRAME_CONTROL_EN_ERR_STATIC20_MODE_HT40_PACKET_MASK                            0x00080000
#define PHY_BB_FRAME_CONTROL_EN_ERR_STATIC20_MODE_HT40_PACKET_GET(x)          (((x) & 0x00080000) >> 19)
#define PHY_BB_FRAME_CONTROL_EN_ERR_STATIC20_MODE_HT40_PACKET_SET(x)          (((x) << 19) & 0x00080000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_OFDM_XCORR_MSB                                                    20
#define PHY_BB_FRAME_CONTROL_EN_ERR_OFDM_XCORR_LSB                                                    20
#define PHY_BB_FRAME_CONTROL_EN_ERR_OFDM_XCORR_MASK                                           0x00100000
#define PHY_BB_FRAME_CONTROL_EN_ERR_OFDM_XCORR_GET(x)                         (((x) & 0x00100000) >> 20)
#define PHY_BB_FRAME_CONTROL_EN_ERR_OFDM_XCORR_SET(x)                         (((x) << 20) & 0x00100000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_LONG_SC_THR_MSB                                                   21
#define PHY_BB_FRAME_CONTROL_EN_ERR_LONG_SC_THR_LSB                                                   21
#define PHY_BB_FRAME_CONTROL_EN_ERR_LONG_SC_THR_MASK                                          0x00200000
#define PHY_BB_FRAME_CONTROL_EN_ERR_LONG_SC_THR_GET(x)                        (((x) & 0x00200000) >> 21)
#define PHY_BB_FRAME_CONTROL_EN_ERR_LONG_SC_THR_SET(x)                        (((x) << 21) & 0x00200000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_LONG1_MSB                                                     22
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_LONG1_LSB                                                     22
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_LONG1_MASK                                            0x00400000
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_LONG1_GET(x)                          (((x) & 0x00400000) >> 22)
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_LONG1_SET(x)                          (((x) << 22) & 0x00400000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_EARLY_TRIG_MSB                                                23
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_EARLY_TRIG_LSB                                                23
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_EARLY_TRIG_MASK                                       0x00800000
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_EARLY_TRIG_GET(x)                     (((x) & 0x00800000) >> 23)
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_EARLY_TRIG_SET(x)                     (((x) << 23) & 0x00800000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_TIMEOUT_MSB                                                   24
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_TIMEOUT_LSB                                                   24
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_TIMEOUT_MASK                                          0x01000000
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_TIMEOUT_GET(x)                        (((x) & 0x01000000) >> 24)
#define PHY_BB_FRAME_CONTROL_EN_ERR_TIM_TIMEOUT_SET(x)                        (((x) << 24) & 0x01000000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_SIGNAL_PARITY_MSB                                                 25
#define PHY_BB_FRAME_CONTROL_EN_ERR_SIGNAL_PARITY_LSB                                                 25
#define PHY_BB_FRAME_CONTROL_EN_ERR_SIGNAL_PARITY_MASK                                        0x02000000
#define PHY_BB_FRAME_CONTROL_EN_ERR_SIGNAL_PARITY_GET(x)                      (((x) & 0x02000000) >> 25)
#define PHY_BB_FRAME_CONTROL_EN_ERR_SIGNAL_PARITY_SET(x)                      (((x) << 25) & 0x02000000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_RATE_ILLEGAL_MSB                                                  26
#define PHY_BB_FRAME_CONTROL_EN_ERR_RATE_ILLEGAL_LSB                                                  26
#define PHY_BB_FRAME_CONTROL_EN_ERR_RATE_ILLEGAL_MASK                                         0x04000000
#define PHY_BB_FRAME_CONTROL_EN_ERR_RATE_ILLEGAL_GET(x)                       (((x) & 0x04000000) >> 26)
#define PHY_BB_FRAME_CONTROL_EN_ERR_RATE_ILLEGAL_SET(x)                       (((x) << 26) & 0x04000000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_LENGTH_ILLEGAL_MSB                                                27
#define PHY_BB_FRAME_CONTROL_EN_ERR_LENGTH_ILLEGAL_LSB                                                27
#define PHY_BB_FRAME_CONTROL_EN_ERR_LENGTH_ILLEGAL_MASK                                       0x08000000
#define PHY_BB_FRAME_CONTROL_EN_ERR_LENGTH_ILLEGAL_GET(x)                     (((x) & 0x08000000) >> 27)
#define PHY_BB_FRAME_CONTROL_EN_ERR_LENGTH_ILLEGAL_SET(x)                     (((x) << 27) & 0x08000000)
#define PHY_BB_FRAME_CONTROL_NO_6MBPS_SERVICE_ERR_MSB                                                 28
#define PHY_BB_FRAME_CONTROL_NO_6MBPS_SERVICE_ERR_LSB                                                 28
#define PHY_BB_FRAME_CONTROL_NO_6MBPS_SERVICE_ERR_MASK                                        0x10000000
#define PHY_BB_FRAME_CONTROL_NO_6MBPS_SERVICE_ERR_GET(x)                      (((x) & 0x10000000) >> 28)
#define PHY_BB_FRAME_CONTROL_NO_6MBPS_SERVICE_ERR_SET(x)                      (((x) << 28) & 0x10000000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_SERVICE_MSB                                                       29
#define PHY_BB_FRAME_CONTROL_EN_ERR_SERVICE_LSB                                                       29
#define PHY_BB_FRAME_CONTROL_EN_ERR_SERVICE_MASK                                              0x20000000
#define PHY_BB_FRAME_CONTROL_EN_ERR_SERVICE_GET(x)                            (((x) & 0x20000000) >> 29)
#define PHY_BB_FRAME_CONTROL_EN_ERR_SERVICE_SET(x)                            (((x) << 29) & 0x20000000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_TX_UNDERRUN_MSB                                                   30
#define PHY_BB_FRAME_CONTROL_EN_ERR_TX_UNDERRUN_LSB                                                   30
#define PHY_BB_FRAME_CONTROL_EN_ERR_TX_UNDERRUN_MASK                                          0x40000000
#define PHY_BB_FRAME_CONTROL_EN_ERR_TX_UNDERRUN_GET(x)                        (((x) & 0x40000000) >> 30)
#define PHY_BB_FRAME_CONTROL_EN_ERR_TX_UNDERRUN_SET(x)                        (((x) << 30) & 0x40000000)
#define PHY_BB_FRAME_CONTROL_EN_ERR_RX_ABORT_MSB                                                      31
#define PHY_BB_FRAME_CONTROL_EN_ERR_RX_ABORT_LSB                                                      31
#define PHY_BB_FRAME_CONTROL_EN_ERR_RX_ABORT_MASK                                             0x80000000
#define PHY_BB_FRAME_CONTROL_EN_ERR_RX_ABORT_GET(x)                           (((x) & 0x80000000) >> 31)
#define PHY_BB_FRAME_CONTROL_EN_ERR_RX_ABORT_SET(x)                           (((x) << 31) & 0x80000000)

/* macros for bb_sm_reg_map.BB_rfbus_request */
#define PHY_BB_RFBUS_REQUEST_ADDRESS                                                          0x0000a23c
#define PHY_BB_RFBUS_REQUEST_OFFSET                                                           0x0000003c
#define PHY_BB_RFBUS_REQUEST_RFBUS_REQUEST_MSB                                                         0
#define PHY_BB_RFBUS_REQUEST_RFBUS_REQUEST_LSB                                                         0
#define PHY_BB_RFBUS_REQUEST_RFBUS_REQUEST_MASK                                               0x00000001
#define PHY_BB_RFBUS_REQUEST_RFBUS_REQUEST_GET(x)                              (((x) & 0x00000001) >> 0)
#define PHY_BB_RFBUS_REQUEST_RFBUS_REQUEST_SET(x)                              (((x) << 0) & 0x00000001)

/* macros for bb_sm_reg_map.BB_rfbus_grant */
#define PHY_BB_RFBUS_GRANT_ADDRESS                                                            0x0000a240
#define PHY_BB_RFBUS_GRANT_OFFSET                                                             0x00000040
#define PHY_BB_RFBUS_GRANT_RFBUS_GRANT_MSB                                                             0
#define PHY_BB_RFBUS_GRANT_RFBUS_GRANT_LSB                                                             0
#define PHY_BB_RFBUS_GRANT_RFBUS_GRANT_MASK                                                   0x00000001
#define PHY_BB_RFBUS_GRANT_RFBUS_GRANT_GET(x)                                  (((x) & 0x00000001) >> 0)
#define PHY_BB_RFBUS_GRANT_BT_ANT_MSB                                                                  1
#define PHY_BB_RFBUS_GRANT_BT_ANT_LSB                                                                  1
#define PHY_BB_RFBUS_GRANT_BT_ANT_MASK                                                        0x00000002
#define PHY_BB_RFBUS_GRANT_BT_ANT_GET(x)                                       (((x) & 0x00000002) >> 1)

/* macros for bb_sm_reg_map.BB_rifs */
#define PHY_BB_RIFS_ADDRESS                                                                   0x0000a244
#define PHY_BB_RIFS_OFFSET                                                                    0x00000044
#define PHY_BB_RIFS_DISABLE_FCC_FIX_MSB                                                               25
#define PHY_BB_RIFS_DISABLE_FCC_FIX_LSB                                                               25
#define PHY_BB_RIFS_DISABLE_FCC_FIX_MASK                                                      0x02000000
#define PHY_BB_RIFS_DISABLE_FCC_FIX_GET(x)                                    (((x) & 0x02000000) >> 25)
#define PHY_BB_RIFS_DISABLE_FCC_FIX_SET(x)                                    (((x) << 25) & 0x02000000)
#define PHY_BB_RIFS_ENABLE_RESET_TDOMAIN_MSB                                                          26
#define PHY_BB_RIFS_ENABLE_RESET_TDOMAIN_LSB                                                          26
#define PHY_BB_RIFS_ENABLE_RESET_TDOMAIN_MASK                                                 0x04000000
#define PHY_BB_RIFS_ENABLE_RESET_TDOMAIN_GET(x)                               (((x) & 0x04000000) >> 26)
#define PHY_BB_RIFS_ENABLE_RESET_TDOMAIN_SET(x)                               (((x) << 26) & 0x04000000)
#define PHY_BB_RIFS_DISABLE_FCC_FIX2_MSB                                                              27
#define PHY_BB_RIFS_DISABLE_FCC_FIX2_LSB                                                              27
#define PHY_BB_RIFS_DISABLE_FCC_FIX2_MASK                                                     0x08000000
#define PHY_BB_RIFS_DISABLE_FCC_FIX2_GET(x)                                   (((x) & 0x08000000) >> 27)
#define PHY_BB_RIFS_DISABLE_FCC_FIX2_SET(x)                                   (((x) << 27) & 0x08000000)
#define PHY_BB_RIFS_DISABLE_RIFS_CCK_FIX_MSB                                                          28
#define PHY_BB_RIFS_DISABLE_RIFS_CCK_FIX_LSB                                                          28
#define PHY_BB_RIFS_DISABLE_RIFS_CCK_FIX_MASK                                                 0x10000000
#define PHY_BB_RIFS_DISABLE_RIFS_CCK_FIX_GET(x)                               (((x) & 0x10000000) >> 28)
#define PHY_BB_RIFS_DISABLE_RIFS_CCK_FIX_SET(x)                               (((x) << 28) & 0x10000000)
#define PHY_BB_RIFS_DISABLE_ERROR_RESET_FIX_MSB                                                       29
#define PHY_BB_RIFS_DISABLE_ERROR_RESET_FIX_LSB                                                       29
#define PHY_BB_RIFS_DISABLE_ERROR_RESET_FIX_MASK                                              0x20000000
#define PHY_BB_RIFS_DISABLE_ERROR_RESET_FIX_GET(x)                            (((x) & 0x20000000) >> 29)
#define PHY_BB_RIFS_DISABLE_ERROR_RESET_FIX_SET(x)                            (((x) << 29) & 0x20000000)
#define PHY_BB_RIFS_RADAR_USE_FDOMAIN_RESET_MSB                                                       30
#define PHY_BB_RIFS_RADAR_USE_FDOMAIN_RESET_LSB                                                       30
#define PHY_BB_RIFS_RADAR_USE_FDOMAIN_RESET_MASK                                              0x40000000
#define PHY_BB_RIFS_RADAR_USE_FDOMAIN_RESET_GET(x)                            (((x) & 0x40000000) >> 30)
#define PHY_BB_RIFS_RADAR_USE_FDOMAIN_RESET_SET(x)                            (((x) << 30) & 0x40000000)

/* macros for bb_sm_reg_map.BB_spectral_scan_2 */
#define PHY_BB_SPECTRAL_SCAN_2_ADDRESS                                                        0x0000a248
#define PHY_BB_SPECTRAL_SCAN_2_OFFSET                                                         0x00000048
#define PHY_BB_SPECTRAL_SCAN_2_SPECTRAL_SCAN_RPT_MODE_MSB                                              0
#define PHY_BB_SPECTRAL_SCAN_2_SPECTRAL_SCAN_RPT_MODE_LSB                                              0
#define PHY_BB_SPECTRAL_SCAN_2_SPECTRAL_SCAN_RPT_MODE_MASK                                    0x00000001
#define PHY_BB_SPECTRAL_SCAN_2_SPECTRAL_SCAN_RPT_MODE_GET(x)                   (((x) & 0x00000001) >> 0)
#define PHY_BB_SPECTRAL_SCAN_2_SPECTRAL_SCAN_RPT_MODE_SET(x)                   (((x) << 0) & 0x00000001)
#define PHY_BB_SPECTRAL_SCAN_2_SPECTRAL_SCAN_NOISE_FLOOR_REF_MSB                                       8
#define PHY_BB_SPECTRAL_SCAN_2_SPECTRAL_SCAN_NOISE_FLOOR_REF_LSB                                       1
#define PHY_BB_SPECTRAL_SCAN_2_SPECTRAL_SCAN_NOISE_FLOOR_REF_MASK                             0x000001fe
#define PHY_BB_SPECTRAL_SCAN_2_SPECTRAL_SCAN_NOISE_FLOOR_REF_GET(x)            (((x) & 0x000001fe) >> 1)
#define PHY_BB_SPECTRAL_SCAN_2_SPECTRAL_SCAN_NOISE_FLOOR_REF_SET(x)            (((x) << 1) & 0x000001fe)

/* macros for bb_sm_reg_map.BB_rx_clear_delay */
#define PHY_BB_RX_CLEAR_DELAY_ADDRESS                                                         0x0000a250
#define PHY_BB_RX_CLEAR_DELAY_OFFSET                                                          0x00000050
#define PHY_BB_RX_CLEAR_DELAY_OFDM_XR_RX_CLEAR_DELAY_MSB                                               9
#define PHY_BB_RX_CLEAR_DELAY_OFDM_XR_RX_CLEAR_DELAY_LSB                                               0
#define PHY_BB_RX_CLEAR_DELAY_OFDM_XR_RX_CLEAR_DELAY_MASK                                     0x000003ff
#define PHY_BB_RX_CLEAR_DELAY_OFDM_XR_RX_CLEAR_DELAY_GET(x)                    (((x) & 0x000003ff) >> 0)
#define PHY_BB_RX_CLEAR_DELAY_OFDM_XR_RX_CLEAR_DELAY_SET(x)                    (((x) << 0) & 0x000003ff)

/* macros for bb_sm_reg_map.BB_analog_power_on_time */
#define PHY_BB_ANALOG_POWER_ON_TIME_ADDRESS                                                   0x0000a254
#define PHY_BB_ANALOG_POWER_ON_TIME_OFFSET                                                    0x00000054
#define PHY_BB_ANALOG_POWER_ON_TIME_ACTIVE_TO_RECEIVE_MSB                                             13
#define PHY_BB_ANALOG_POWER_ON_TIME_ACTIVE_TO_RECEIVE_LSB                                              0
#define PHY_BB_ANALOG_POWER_ON_TIME_ACTIVE_TO_RECEIVE_MASK                                    0x00003fff
#define PHY_BB_ANALOG_POWER_ON_TIME_ACTIVE_TO_RECEIVE_GET(x)                   (((x) & 0x00003fff) >> 0)
#define PHY_BB_ANALOG_POWER_ON_TIME_ACTIVE_TO_RECEIVE_SET(x)                   (((x) << 0) & 0x00003fff)

/* macros for bb_sm_reg_map.BB_tx_timing_1 */
#define PHY_BB_TX_TIMING_1_ADDRESS                                                            0x0000a258
#define PHY_BB_TX_TIMING_1_OFFSET                                                             0x00000058
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_ADC_OFF_MSB                                                     7
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_ADC_OFF_LSB                                                     0
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_ADC_OFF_MASK                                           0x000000ff
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_ADC_OFF_GET(x)                          (((x) & 0x000000ff) >> 0)
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_ADC_OFF_SET(x)                          (((x) << 0) & 0x000000ff)
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_A2_RX_OFF_MSB                                                  15
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_A2_RX_OFF_LSB                                                   8
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_A2_RX_OFF_MASK                                         0x0000ff00
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_A2_RX_OFF_GET(x)                        (((x) & 0x0000ff00) >> 8)
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_A2_RX_OFF_SET(x)                        (((x) << 8) & 0x0000ff00)
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_DAC_ON_MSB                                                     23
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_DAC_ON_LSB                                                     16
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_DAC_ON_MASK                                            0x00ff0000
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_DAC_ON_GET(x)                          (((x) & 0x00ff0000) >> 16)
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_DAC_ON_SET(x)                          (((x) << 16) & 0x00ff0000)
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_A2_TX_ON_MSB                                                   31
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_A2_TX_ON_LSB                                                   24
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_A2_TX_ON_MASK                                          0xff000000
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_A2_TX_ON_GET(x)                        (((x) & 0xff000000) >> 24)
#define PHY_BB_TX_TIMING_1_TX_FRAME_TO_A2_TX_ON_SET(x)                        (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_tx_timing_2 */
#define PHY_BB_TX_TIMING_2_ADDRESS                                                            0x0000a25c
#define PHY_BB_TX_TIMING_2_OFFSET                                                             0x0000005c
#define PHY_BB_TX_TIMING_2_TX_FRAME_TO_TX_D_START_MSB                                                  7
#define PHY_BB_TX_TIMING_2_TX_FRAME_TO_TX_D_START_LSB                                                  0
#define PHY_BB_TX_TIMING_2_TX_FRAME_TO_TX_D_START_MASK                                        0x000000ff
#define PHY_BB_TX_TIMING_2_TX_FRAME_TO_TX_D_START_GET(x)                       (((x) & 0x000000ff) >> 0)
#define PHY_BB_TX_TIMING_2_TX_FRAME_TO_TX_D_START_SET(x)                       (((x) << 0) & 0x000000ff)
#define PHY_BB_TX_TIMING_2_TX_FRAME_TO_PA_ON_MSB                                                      15
#define PHY_BB_TX_TIMING_2_TX_FRAME_TO_PA_ON_LSB                                                       8
#define PHY_BB_TX_TIMING_2_TX_FRAME_TO_PA_ON_MASK                                             0x0000ff00
#define PHY_BB_TX_TIMING_2_TX_FRAME_TO_PA_ON_GET(x)                            (((x) & 0x0000ff00) >> 8)
#define PHY_BB_TX_TIMING_2_TX_FRAME_TO_PA_ON_SET(x)                            (((x) << 8) & 0x0000ff00)
#define PHY_BB_TX_TIMING_2_TX_END_TO_PA_OFF_MSB                                                       23
#define PHY_BB_TX_TIMING_2_TX_END_TO_PA_OFF_LSB                                                       16
#define PHY_BB_TX_TIMING_2_TX_END_TO_PA_OFF_MASK                                              0x00ff0000
#define PHY_BB_TX_TIMING_2_TX_END_TO_PA_OFF_GET(x)                            (((x) & 0x00ff0000) >> 16)
#define PHY_BB_TX_TIMING_2_TX_END_TO_PA_OFF_SET(x)                            (((x) << 16) & 0x00ff0000)
#define PHY_BB_TX_TIMING_2_TX_END_TO_A2_TX_OFF_MSB                                                    31
#define PHY_BB_TX_TIMING_2_TX_END_TO_A2_TX_OFF_LSB                                                    24
#define PHY_BB_TX_TIMING_2_TX_END_TO_A2_TX_OFF_MASK                                           0xff000000
#define PHY_BB_TX_TIMING_2_TX_END_TO_A2_TX_OFF_GET(x)                         (((x) & 0xff000000) >> 24)
#define PHY_BB_TX_TIMING_2_TX_END_TO_A2_TX_OFF_SET(x)                         (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_tx_timing_3 */
#define PHY_BB_TX_TIMING_3_ADDRESS                                                            0x0000a260
#define PHY_BB_TX_TIMING_3_OFFSET                                                             0x00000060
#define PHY_BB_TX_TIMING_3_TX_END_TO_DAC_OFF_MSB                                                       7
#define PHY_BB_TX_TIMING_3_TX_END_TO_DAC_OFF_LSB                                                       0
#define PHY_BB_TX_TIMING_3_TX_END_TO_DAC_OFF_MASK                                             0x000000ff
#define PHY_BB_TX_TIMING_3_TX_END_TO_DAC_OFF_GET(x)                            (((x) & 0x000000ff) >> 0)
#define PHY_BB_TX_TIMING_3_TX_END_TO_DAC_OFF_SET(x)                            (((x) << 0) & 0x000000ff)
#define PHY_BB_TX_TIMING_3_TX_FRAME_TO_THERM_CHAIN_ON_MSB                                             15
#define PHY_BB_TX_TIMING_3_TX_FRAME_TO_THERM_CHAIN_ON_LSB                                              8
#define PHY_BB_TX_TIMING_3_TX_FRAME_TO_THERM_CHAIN_ON_MASK                                    0x0000ff00
#define PHY_BB_TX_TIMING_3_TX_FRAME_TO_THERM_CHAIN_ON_GET(x)                   (((x) & 0x0000ff00) >> 8)
#define PHY_BB_TX_TIMING_3_TX_FRAME_TO_THERM_CHAIN_ON_SET(x)                   (((x) << 8) & 0x0000ff00)
#define PHY_BB_TX_TIMING_3_TX_END_TO_A2_RX_ON_MSB                                                     23
#define PHY_BB_TX_TIMING_3_TX_END_TO_A2_RX_ON_LSB                                                     16
#define PHY_BB_TX_TIMING_3_TX_END_TO_A2_RX_ON_MASK                                            0x00ff0000
#define PHY_BB_TX_TIMING_3_TX_END_TO_A2_RX_ON_GET(x)                          (((x) & 0x00ff0000) >> 16)
#define PHY_BB_TX_TIMING_3_TX_END_TO_A2_RX_ON_SET(x)                          (((x) << 16) & 0x00ff0000)
#define PHY_BB_TX_TIMING_3_TX_END_TO_ADC_ON_MSB                                                       31
#define PHY_BB_TX_TIMING_3_TX_END_TO_ADC_ON_LSB                                                       24
#define PHY_BB_TX_TIMING_3_TX_END_TO_ADC_ON_MASK                                              0xff000000
#define PHY_BB_TX_TIMING_3_TX_END_TO_ADC_ON_GET(x)                            (((x) & 0xff000000) >> 24)
#define PHY_BB_TX_TIMING_3_TX_END_TO_ADC_ON_SET(x)                            (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_xpa_timing_control */
#define PHY_BB_XPA_TIMING_CONTROL_ADDRESS                                                     0x0000a264
#define PHY_BB_XPA_TIMING_CONTROL_OFFSET                                                      0x00000064
#define PHY_BB_XPA_TIMING_CONTROL_TX_FRAME_TO_XPAA_ON_MSB                                              7
#define PHY_BB_XPA_TIMING_CONTROL_TX_FRAME_TO_XPAA_ON_LSB                                              0
#define PHY_BB_XPA_TIMING_CONTROL_TX_FRAME_TO_XPAA_ON_MASK                                    0x000000ff
#define PHY_BB_XPA_TIMING_CONTROL_TX_FRAME_TO_XPAA_ON_GET(x)                   (((x) & 0x000000ff) >> 0)
#define PHY_BB_XPA_TIMING_CONTROL_TX_FRAME_TO_XPAA_ON_SET(x)                   (((x) << 0) & 0x000000ff)
#define PHY_BB_XPA_TIMING_CONTROL_TX_FRAME_TO_XPAB_ON_MSB                                             15
#define PHY_BB_XPA_TIMING_CONTROL_TX_FRAME_TO_XPAB_ON_LSB                                              8
#define PHY_BB_XPA_TIMING_CONTROL_TX_FRAME_TO_XPAB_ON_MASK                                    0x0000ff00
#define PHY_BB_XPA_TIMING_CONTROL_TX_FRAME_TO_XPAB_ON_GET(x)                   (((x) & 0x0000ff00) >> 8)
#define PHY_BB_XPA_TIMING_CONTROL_TX_FRAME_TO_XPAB_ON_SET(x)                   (((x) << 8) & 0x0000ff00)
#define PHY_BB_XPA_TIMING_CONTROL_TX_END_TO_XPAA_OFF_MSB                                              23
#define PHY_BB_XPA_TIMING_CONTROL_TX_END_TO_XPAA_OFF_LSB                                              16
#define PHY_BB_XPA_TIMING_CONTROL_TX_END_TO_XPAA_OFF_MASK                                     0x00ff0000
#define PHY_BB_XPA_TIMING_CONTROL_TX_END_TO_XPAA_OFF_GET(x)                   (((x) & 0x00ff0000) >> 16)
#define PHY_BB_XPA_TIMING_CONTROL_TX_END_TO_XPAA_OFF_SET(x)                   (((x) << 16) & 0x00ff0000)
#define PHY_BB_XPA_TIMING_CONTROL_TX_END_TO_XPAB_OFF_MSB                                              31
#define PHY_BB_XPA_TIMING_CONTROL_TX_END_TO_XPAB_OFF_LSB                                              24
#define PHY_BB_XPA_TIMING_CONTROL_TX_END_TO_XPAB_OFF_MASK                                     0xff000000
#define PHY_BB_XPA_TIMING_CONTROL_TX_END_TO_XPAB_OFF_GET(x)                   (((x) & 0xff000000) >> 24)
#define PHY_BB_XPA_TIMING_CONTROL_TX_END_TO_XPAB_OFF_SET(x)                   (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_misc_pa_control */
#define PHY_BB_MISC_PA_CONTROL_ADDRESS                                                        0x0000a280
#define PHY_BB_MISC_PA_CONTROL_OFFSET                                                         0x00000080
#define PHY_BB_MISC_PA_CONTROL_XPAA_ACTIVE_HIGH_MSB                                                    0
#define PHY_BB_MISC_PA_CONTROL_XPAA_ACTIVE_HIGH_LSB                                                    0
#define PHY_BB_MISC_PA_CONTROL_XPAA_ACTIVE_HIGH_MASK                                          0x00000001
#define PHY_BB_MISC_PA_CONTROL_XPAA_ACTIVE_HIGH_GET(x)                         (((x) & 0x00000001) >> 0)
#define PHY_BB_MISC_PA_CONTROL_XPAA_ACTIVE_HIGH_SET(x)                         (((x) << 0) & 0x00000001)
#define PHY_BB_MISC_PA_CONTROL_XPAB_ACTIVE_HIGH_MSB                                                    1
#define PHY_BB_MISC_PA_CONTROL_XPAB_ACTIVE_HIGH_LSB                                                    1
#define PHY_BB_MISC_PA_CONTROL_XPAB_ACTIVE_HIGH_MASK                                          0x00000002
#define PHY_BB_MISC_PA_CONTROL_XPAB_ACTIVE_HIGH_GET(x)                         (((x) & 0x00000002) >> 1)
#define PHY_BB_MISC_PA_CONTROL_XPAB_ACTIVE_HIGH_SET(x)                         (((x) << 1) & 0x00000002)
#define PHY_BB_MISC_PA_CONTROL_ENABLE_XPAA_MSB                                                         2
#define PHY_BB_MISC_PA_CONTROL_ENABLE_XPAA_LSB                                                         2
#define PHY_BB_MISC_PA_CONTROL_ENABLE_XPAA_MASK                                               0x00000004
#define PHY_BB_MISC_PA_CONTROL_ENABLE_XPAA_GET(x)                              (((x) & 0x00000004) >> 2)
#define PHY_BB_MISC_PA_CONTROL_ENABLE_XPAA_SET(x)                              (((x) << 2) & 0x00000004)
#define PHY_BB_MISC_PA_CONTROL_ENABLE_XPAB_MSB                                                         3
#define PHY_BB_MISC_PA_CONTROL_ENABLE_XPAB_LSB                                                         3
#define PHY_BB_MISC_PA_CONTROL_ENABLE_XPAB_MASK                                               0x00000008
#define PHY_BB_MISC_PA_CONTROL_ENABLE_XPAB_GET(x)                              (((x) & 0x00000008) >> 3)
#define PHY_BB_MISC_PA_CONTROL_ENABLE_XPAB_SET(x)                              (((x) << 3) & 0x00000008)

/* macros for bb_sm_reg_map.BB_switch_table_chn_b0 */
#define PHY_BB_SWITCH_TABLE_CHN_B0_ADDRESS                                                    0x0000a284
#define PHY_BB_SWITCH_TABLE_CHN_B0_OFFSET                                                     0x00000084
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_IDLE_0_MSB                                             1
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_IDLE_0_LSB                                             0
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_IDLE_0_MASK                                   0x00000003
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_IDLE_0_GET(x)                  (((x) & 0x00000003) >> 0)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_IDLE_0_SET(x)                  (((x) << 0) & 0x00000003)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_T_0_MSB                                                3
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_T_0_LSB                                                2
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_T_0_MASK                                      0x0000000c
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_T_0_GET(x)                     (((x) & 0x0000000c) >> 2)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_T_0_SET(x)                     (((x) << 2) & 0x0000000c)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_R_0_MSB                                                5
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_R_0_LSB                                                4
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_R_0_MASK                                      0x00000030
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_R_0_GET(x)                     (((x) & 0x00000030) >> 4)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_R_0_SET(x)                     (((x) << 4) & 0x00000030)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_RX1_0_MSB                                              7
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_RX1_0_LSB                                              6
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_RX1_0_MASK                                    0x000000c0
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_RX1_0_GET(x)                   (((x) & 0x000000c0) >> 6)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_RX1_0_SET(x)                   (((x) << 6) & 0x000000c0)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_RX12_0_MSB                                             9
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_RX12_0_LSB                                             8
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_RX12_0_MASK                                   0x00000300
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_RX12_0_GET(x)                  (((x) & 0x00000300) >> 8)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_RX12_0_SET(x)                  (((x) << 8) & 0x00000300)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_B_0_MSB                                               11
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_B_0_LSB                                               10
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_B_0_MASK                                      0x00000c00
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_B_0_GET(x)                    (((x) & 0x00000c00) >> 10)
#define PHY_BB_SWITCH_TABLE_CHN_B0_SWITCH_TABLE_B_0_SET(x)                    (((x) << 10) & 0x00000c00)

/* macros for bb_sm_reg_map.BB_switch_table_com1 */
#define PHY_BB_SWITCH_TABLE_COM1_ADDRESS                                                      0x0000a288
#define PHY_BB_SWITCH_TABLE_COM1_OFFSET                                                       0x00000088
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_IDLE_MSB                                             3
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_IDLE_LSB                                             0
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_IDLE_MASK                                   0x0000000f
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_IDLE_GET(x)                  (((x) & 0x0000000f) >> 0)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_IDLE_SET(x)                  (((x) << 0) & 0x0000000f)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_T1_MSB                                               7
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_T1_LSB                                               4
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_T1_MASK                                     0x000000f0
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_T1_GET(x)                    (((x) & 0x000000f0) >> 4)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_T1_SET(x)                    (((x) << 4) & 0x000000f0)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_T2_MSB                                              11
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_T2_LSB                                               8
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_T2_MASK                                     0x00000f00
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_T2_GET(x)                    (((x) & 0x00000f00) >> 8)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_T2_SET(x)                    (((x) << 8) & 0x00000f00)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_B_MSB                                               15
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_B_LSB                                               12
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_B_MASK                                      0x0000f000
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_B_GET(x)                    (((x) & 0x0000f000) >> 12)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_B_SET(x)                    (((x) << 12) & 0x0000f000)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_IDLE_ALT_MSB                                        19
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_IDLE_ALT_LSB                                        16
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_IDLE_ALT_MASK                               0x000f0000
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_IDLE_ALT_GET(x)             (((x) & 0x000f0000) >> 16)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_IDLE_ALT_SET(x)             (((x) << 16) & 0x000f0000)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_SPDT_MSB                                            23
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_SPDT_LSB                                            20
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_SPDT_MASK                                   0x00f00000
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_SPDT_GET(x)                 (((x) & 0x00f00000) >> 20)
#define PHY_BB_SWITCH_TABLE_COM1_SWITCH_TABLE_COM_SPDT_SET(x)                 (((x) << 20) & 0x00f00000)

/* macros for bb_sm_reg_map.BB_switch_table_com2 */
#define PHY_BB_SWITCH_TABLE_COM2_ADDRESS                                                      0x0000a28c
#define PHY_BB_SWITCH_TABLE_COM2_OFFSET                                                       0x0000008c
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA1L1_MSB                                            3
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA1L1_LSB                                            0
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA1L1_MASK                                  0x0000000f
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA1L1_GET(x)                 (((x) & 0x0000000f) >> 0)
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA1L1_SET(x)                 (((x) << 0) & 0x0000000f)
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA2L1_MSB                                            7
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA2L1_LSB                                            4
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA2L1_MASK                                  0x000000f0
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA2L1_GET(x)                 (((x) & 0x000000f0) >> 4)
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA2L1_SET(x)                 (((x) << 4) & 0x000000f0)
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA1L2_MSB                                           11
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA1L2_LSB                                            8
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA1L2_MASK                                  0x00000f00
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA1L2_GET(x)                 (((x) & 0x00000f00) >> 8)
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA1L2_SET(x)                 (((x) << 8) & 0x00000f00)
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA2L2_MSB                                           15
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA2L2_LSB                                           12
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA2L2_MASK                                  0x0000f000
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA2L2_GET(x)                (((x) & 0x0000f000) >> 12)
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA2L2_SET(x)                (((x) << 12) & 0x0000f000)
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA12_MSB                                            19
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA12_LSB                                            16
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA12_MASK                                   0x000f0000
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA12_GET(x)                 (((x) & 0x000f0000) >> 16)
#define PHY_BB_SWITCH_TABLE_COM2_SWITCH_TABLE_COM_RA12_SET(x)                 (((x) << 16) & 0x000f0000)

/* macros for bb_sm_reg_map.BB_multichain_enable */
#define PHY_BB_MULTICHAIN_ENABLE_ADDRESS                                                      0x0000a2a0
#define PHY_BB_MULTICHAIN_ENABLE_OFFSET                                                       0x000000a0
#define PHY_BB_MULTICHAIN_ENABLE_RX_CHAIN_MASK_MSB                                                     2
#define PHY_BB_MULTICHAIN_ENABLE_RX_CHAIN_MASK_LSB                                                     0
#define PHY_BB_MULTICHAIN_ENABLE_RX_CHAIN_MASK_MASK                                           0x00000007
#define PHY_BB_MULTICHAIN_ENABLE_RX_CHAIN_MASK_GET(x)                          (((x) & 0x00000007) >> 0)
#define PHY_BB_MULTICHAIN_ENABLE_RX_CHAIN_MASK_SET(x)                          (((x) << 0) & 0x00000007)

/* macros for bb_sm_reg_map.BB_cal_chain_mask */
#define PHY_BB_CAL_CHAIN_MASK_ADDRESS                                                         0x0000a2c0
#define PHY_BB_CAL_CHAIN_MASK_OFFSET                                                          0x000000c0
#define PHY_BB_CAL_CHAIN_MASK_CAL_CHAIN_MASK_MSB                                                       2
#define PHY_BB_CAL_CHAIN_MASK_CAL_CHAIN_MASK_LSB                                                       0
#define PHY_BB_CAL_CHAIN_MASK_CAL_CHAIN_MASK_MASK                                             0x00000007
#define PHY_BB_CAL_CHAIN_MASK_CAL_CHAIN_MASK_GET(x)                            (((x) & 0x00000007) >> 0)
#define PHY_BB_CAL_CHAIN_MASK_CAL_CHAIN_MASK_SET(x)                            (((x) << 0) & 0x00000007)

/* macros for bb_sm_reg_map.BB_agc_control */
#define PHY_BB_AGC_CONTROL_ADDRESS                                                            0x0000a2c4
#define PHY_BB_AGC_CONTROL_OFFSET                                                             0x000000c4
#define PHY_BB_AGC_CONTROL_DO_CALIBRATE_MSB                                                            0
#define PHY_BB_AGC_CONTROL_DO_CALIBRATE_LSB                                                            0
#define PHY_BB_AGC_CONTROL_DO_CALIBRATE_MASK                                                  0x00000001
#define PHY_BB_AGC_CONTROL_DO_CALIBRATE_GET(x)                                 (((x) & 0x00000001) >> 0)
#define PHY_BB_AGC_CONTROL_DO_CALIBRATE_SET(x)                                 (((x) << 0) & 0x00000001)
#define PHY_BB_AGC_CONTROL_DO_NOISEFLOOR_MSB                                                           1
#define PHY_BB_AGC_CONTROL_DO_NOISEFLOOR_LSB                                                           1
#define PHY_BB_AGC_CONTROL_DO_NOISEFLOOR_MASK                                                 0x00000002
#define PHY_BB_AGC_CONTROL_DO_NOISEFLOOR_GET(x)                                (((x) & 0x00000002) >> 1)
#define PHY_BB_AGC_CONTROL_DO_NOISEFLOOR_SET(x)                                (((x) << 1) & 0x00000002)
#define PHY_BB_AGC_CONTROL_MIN_NUM_GAIN_CHANGE_MSB                                                     5
#define PHY_BB_AGC_CONTROL_MIN_NUM_GAIN_CHANGE_LSB                                                     3
#define PHY_BB_AGC_CONTROL_MIN_NUM_GAIN_CHANGE_MASK                                           0x00000038
#define PHY_BB_AGC_CONTROL_MIN_NUM_GAIN_CHANGE_GET(x)                          (((x) & 0x00000038) >> 3)
#define PHY_BB_AGC_CONTROL_MIN_NUM_GAIN_CHANGE_SET(x)                          (((x) << 3) & 0x00000038)
#define PHY_BB_AGC_CONTROL_YCOK_MAX_MSB                                                                9
#define PHY_BB_AGC_CONTROL_YCOK_MAX_LSB                                                                6
#define PHY_BB_AGC_CONTROL_YCOK_MAX_MASK                                                      0x000003c0
#define PHY_BB_AGC_CONTROL_YCOK_MAX_GET(x)                                     (((x) & 0x000003c0) >> 6)
#define PHY_BB_AGC_CONTROL_YCOK_MAX_SET(x)                                     (((x) << 6) & 0x000003c0)
#define PHY_BB_AGC_CONTROL_LEAKY_BUCKET_ENABLE_MSB                                                    10
#define PHY_BB_AGC_CONTROL_LEAKY_BUCKET_ENABLE_LSB                                                    10
#define PHY_BB_AGC_CONTROL_LEAKY_BUCKET_ENABLE_MASK                                           0x00000400
#define PHY_BB_AGC_CONTROL_LEAKY_BUCKET_ENABLE_GET(x)                         (((x) & 0x00000400) >> 10)
#define PHY_BB_AGC_CONTROL_LEAKY_BUCKET_ENABLE_SET(x)                         (((x) << 10) & 0x00000400)
#define PHY_BB_AGC_CONTROL_CAL_ENABLE_MSB                                                             11
#define PHY_BB_AGC_CONTROL_CAL_ENABLE_LSB                                                             11
#define PHY_BB_AGC_CONTROL_CAL_ENABLE_MASK                                                    0x00000800
#define PHY_BB_AGC_CONTROL_CAL_ENABLE_GET(x)                                  (((x) & 0x00000800) >> 11)
#define PHY_BB_AGC_CONTROL_CAL_ENABLE_SET(x)                                  (((x) << 11) & 0x00000800)
#define PHY_BB_AGC_CONTROL_USE_TABLE_SEED_MSB                                                         12
#define PHY_BB_AGC_CONTROL_USE_TABLE_SEED_LSB                                                         12
#define PHY_BB_AGC_CONTROL_USE_TABLE_SEED_MASK                                                0x00001000
#define PHY_BB_AGC_CONTROL_USE_TABLE_SEED_GET(x)                              (((x) & 0x00001000) >> 12)
#define PHY_BB_AGC_CONTROL_USE_TABLE_SEED_SET(x)                              (((x) << 12) & 0x00001000)
#define PHY_BB_AGC_CONTROL_AGC_UPDATE_TABLE_SEED_MSB                                                  13
#define PHY_BB_AGC_CONTROL_AGC_UPDATE_TABLE_SEED_LSB                                                  13
#define PHY_BB_AGC_CONTROL_AGC_UPDATE_TABLE_SEED_MASK                                         0x00002000
#define PHY_BB_AGC_CONTROL_AGC_UPDATE_TABLE_SEED_GET(x)                       (((x) & 0x00002000) >> 13)
#define PHY_BB_AGC_CONTROL_AGC_UPDATE_TABLE_SEED_SET(x)                       (((x) << 13) & 0x00002000)
#define PHY_BB_AGC_CONTROL_ENABLE_NOISEFLOOR_MSB                                                      15
#define PHY_BB_AGC_CONTROL_ENABLE_NOISEFLOOR_LSB                                                      15
#define PHY_BB_AGC_CONTROL_ENABLE_NOISEFLOOR_MASK                                             0x00008000
#define PHY_BB_AGC_CONTROL_ENABLE_NOISEFLOOR_GET(x)                           (((x) & 0x00008000) >> 15)
#define PHY_BB_AGC_CONTROL_ENABLE_NOISEFLOOR_SET(x)                           (((x) << 15) & 0x00008000)
#define PHY_BB_AGC_CONTROL_ENABLE_FLTR_CAL_MSB                                                        16
#define PHY_BB_AGC_CONTROL_ENABLE_FLTR_CAL_LSB                                                        16
#define PHY_BB_AGC_CONTROL_ENABLE_FLTR_CAL_MASK                                               0x00010000
#define PHY_BB_AGC_CONTROL_ENABLE_FLTR_CAL_GET(x)                             (((x) & 0x00010000) >> 16)
#define PHY_BB_AGC_CONTROL_ENABLE_FLTR_CAL_SET(x)                             (((x) << 16) & 0x00010000)
#define PHY_BB_AGC_CONTROL_NO_UPDATE_NOISEFLOOR_MSB                                                   17
#define PHY_BB_AGC_CONTROL_NO_UPDATE_NOISEFLOOR_LSB                                                   17
#define PHY_BB_AGC_CONTROL_NO_UPDATE_NOISEFLOOR_MASK                                          0x00020000
#define PHY_BB_AGC_CONTROL_NO_UPDATE_NOISEFLOOR_GET(x)                        (((x) & 0x00020000) >> 17)
#define PHY_BB_AGC_CONTROL_NO_UPDATE_NOISEFLOOR_SET(x)                        (((x) << 17) & 0x00020000)
#define PHY_BB_AGC_CONTROL_EXTEND_NF_PWR_MEAS_MSB                                                     18
#define PHY_BB_AGC_CONTROL_EXTEND_NF_PWR_MEAS_LSB                                                     18
#define PHY_BB_AGC_CONTROL_EXTEND_NF_PWR_MEAS_MASK                                            0x00040000
#define PHY_BB_AGC_CONTROL_EXTEND_NF_PWR_MEAS_GET(x)                          (((x) & 0x00040000) >> 18)
#define PHY_BB_AGC_CONTROL_EXTEND_NF_PWR_MEAS_SET(x)                          (((x) << 18) & 0x00040000)
#define PHY_BB_AGC_CONTROL_CLC_SUCCESS_MSB                                                            19
#define PHY_BB_AGC_CONTROL_CLC_SUCCESS_LSB                                                            19
#define PHY_BB_AGC_CONTROL_CLC_SUCCESS_MASK                                                   0x00080000
#define PHY_BB_AGC_CONTROL_CLC_SUCCESS_GET(x)                                 (((x) & 0x00080000) >> 19)
#define PHY_BB_AGC_CONTROL_ENABLE_PKDET_CAL_MSB                                                       20
#define PHY_BB_AGC_CONTROL_ENABLE_PKDET_CAL_LSB                                                       20
#define PHY_BB_AGC_CONTROL_ENABLE_PKDET_CAL_MASK                                              0x00100000
#define PHY_BB_AGC_CONTROL_ENABLE_PKDET_CAL_GET(x)                            (((x) & 0x00100000) >> 20)
#define PHY_BB_AGC_CONTROL_ENABLE_PKDET_CAL_SET(x)                            (((x) << 20) & 0x00100000)

/* macros for bb_sm_reg_map.BB_iq_adc_cal_mode */
#define PHY_BB_IQ_ADC_CAL_MODE_ADDRESS                                                        0x0000a2c8
#define PHY_BB_IQ_ADC_CAL_MODE_OFFSET                                                         0x000000c8
#define PHY_BB_IQ_ADC_CAL_MODE_GAIN_DC_IQ_CAL_MODE_MSB                                                 1
#define PHY_BB_IQ_ADC_CAL_MODE_GAIN_DC_IQ_CAL_MODE_LSB                                                 0
#define PHY_BB_IQ_ADC_CAL_MODE_GAIN_DC_IQ_CAL_MODE_MASK                                       0x00000003
#define PHY_BB_IQ_ADC_CAL_MODE_GAIN_DC_IQ_CAL_MODE_GET(x)                      (((x) & 0x00000003) >> 0)
#define PHY_BB_IQ_ADC_CAL_MODE_GAIN_DC_IQ_CAL_MODE_SET(x)                      (((x) << 0) & 0x00000003)
#define PHY_BB_IQ_ADC_CAL_MODE_TEST_CALADCOFF_MSB                                                      2
#define PHY_BB_IQ_ADC_CAL_MODE_TEST_CALADCOFF_LSB                                                      2
#define PHY_BB_IQ_ADC_CAL_MODE_TEST_CALADCOFF_MASK                                            0x00000004
#define PHY_BB_IQ_ADC_CAL_MODE_TEST_CALADCOFF_GET(x)                           (((x) & 0x00000004) >> 2)
#define PHY_BB_IQ_ADC_CAL_MODE_TEST_CALADCOFF_SET(x)                           (((x) << 2) & 0x00000004)

/* macros for bb_sm_reg_map.BB_fcal_1 */
#define PHY_BB_FCAL_1_ADDRESS                                                                 0x0000a2cc
#define PHY_BB_FCAL_1_OFFSET                                                                  0x000000cc
#define PHY_BB_FCAL_1_FLC_PB_FSTEP_MSB                                                                 9
#define PHY_BB_FCAL_1_FLC_PB_FSTEP_LSB                                                                 0
#define PHY_BB_FCAL_1_FLC_PB_FSTEP_MASK                                                       0x000003ff
#define PHY_BB_FCAL_1_FLC_PB_FSTEP_GET(x)                                      (((x) & 0x000003ff) >> 0)
#define PHY_BB_FCAL_1_FLC_PB_FSTEP_SET(x)                                      (((x) << 0) & 0x000003ff)
#define PHY_BB_FCAL_1_FLC_SB_FSTEP_MSB                                                                19
#define PHY_BB_FCAL_1_FLC_SB_FSTEP_LSB                                                                10
#define PHY_BB_FCAL_1_FLC_SB_FSTEP_MASK                                                       0x000ffc00
#define PHY_BB_FCAL_1_FLC_SB_FSTEP_GET(x)                                     (((x) & 0x000ffc00) >> 10)
#define PHY_BB_FCAL_1_FLC_SB_FSTEP_SET(x)                                     (((x) << 10) & 0x000ffc00)
#define PHY_BB_FCAL_1_FLC_PB_ATTEN_MSB                                                                24
#define PHY_BB_FCAL_1_FLC_PB_ATTEN_LSB                                                                20
#define PHY_BB_FCAL_1_FLC_PB_ATTEN_MASK                                                       0x01f00000
#define PHY_BB_FCAL_1_FLC_PB_ATTEN_GET(x)                                     (((x) & 0x01f00000) >> 20)
#define PHY_BB_FCAL_1_FLC_PB_ATTEN_SET(x)                                     (((x) << 20) & 0x01f00000)
#define PHY_BB_FCAL_1_FLC_SB_ATTEN_MSB                                                                29
#define PHY_BB_FCAL_1_FLC_SB_ATTEN_LSB                                                                25
#define PHY_BB_FCAL_1_FLC_SB_ATTEN_MASK                                                       0x3e000000
#define PHY_BB_FCAL_1_FLC_SB_ATTEN_GET(x)                                     (((x) & 0x3e000000) >> 25)
#define PHY_BB_FCAL_1_FLC_SB_ATTEN_SET(x)                                     (((x) << 25) & 0x3e000000)

/* macros for bb_sm_reg_map.BB_fcal_2_b0 */
#define PHY_BB_FCAL_2_B0_ADDRESS                                                              0x0000a2d0
#define PHY_BB_FCAL_2_B0_OFFSET                                                               0x000000d0
#define PHY_BB_FCAL_2_B0_FLC_PWR_THRESH_MSB                                                            2
#define PHY_BB_FCAL_2_B0_FLC_PWR_THRESH_LSB                                                            0
#define PHY_BB_FCAL_2_B0_FLC_PWR_THRESH_MASK                                                  0x00000007
#define PHY_BB_FCAL_2_B0_FLC_PWR_THRESH_GET(x)                                 (((x) & 0x00000007) >> 0)
#define PHY_BB_FCAL_2_B0_FLC_PWR_THRESH_SET(x)                                 (((x) << 0) & 0x00000007)
#define PHY_BB_FCAL_2_B0_FLC_SW_CAP_VAL_0_MSB                                                          7
#define PHY_BB_FCAL_2_B0_FLC_SW_CAP_VAL_0_LSB                                                          3
#define PHY_BB_FCAL_2_B0_FLC_SW_CAP_VAL_0_MASK                                                0x000000f8
#define PHY_BB_FCAL_2_B0_FLC_SW_CAP_VAL_0_GET(x)                               (((x) & 0x000000f8) >> 3)
#define PHY_BB_FCAL_2_B0_FLC_SW_CAP_VAL_0_SET(x)                               (((x) << 3) & 0x000000f8)
#define PHY_BB_FCAL_2_B0_FLC_BBMISCGAIN_MSB                                                            9
#define PHY_BB_FCAL_2_B0_FLC_BBMISCGAIN_LSB                                                            8
#define PHY_BB_FCAL_2_B0_FLC_BBMISCGAIN_MASK                                                  0x00000300
#define PHY_BB_FCAL_2_B0_FLC_BBMISCGAIN_GET(x)                                 (((x) & 0x00000300) >> 8)
#define PHY_BB_FCAL_2_B0_FLC_BBMISCGAIN_SET(x)                                 (((x) << 8) & 0x00000300)
#define PHY_BB_FCAL_2_B0_FLC_BB1DBGAIN_MSB                                                            12
#define PHY_BB_FCAL_2_B0_FLC_BB1DBGAIN_LSB                                                            10
#define PHY_BB_FCAL_2_B0_FLC_BB1DBGAIN_MASK                                                   0x00001c00
#define PHY_BB_FCAL_2_B0_FLC_BB1DBGAIN_GET(x)                                 (((x) & 0x00001c00) >> 10)
#define PHY_BB_FCAL_2_B0_FLC_BB1DBGAIN_SET(x)                                 (((x) << 10) & 0x00001c00)
#define PHY_BB_FCAL_2_B0_FLC_BB6DBGAIN_MSB                                                            14
#define PHY_BB_FCAL_2_B0_FLC_BB6DBGAIN_LSB                                                            13
#define PHY_BB_FCAL_2_B0_FLC_BB6DBGAIN_MASK                                                   0x00006000
#define PHY_BB_FCAL_2_B0_FLC_BB6DBGAIN_GET(x)                                 (((x) & 0x00006000) >> 13)
#define PHY_BB_FCAL_2_B0_FLC_BB6DBGAIN_SET(x)                                 (((x) << 13) & 0x00006000)
#define PHY_BB_FCAL_2_B0_FLC_SW_CAP_SET_MSB                                                           15
#define PHY_BB_FCAL_2_B0_FLC_SW_CAP_SET_LSB                                                           15
#define PHY_BB_FCAL_2_B0_FLC_SW_CAP_SET_MASK                                                  0x00008000
#define PHY_BB_FCAL_2_B0_FLC_SW_CAP_SET_GET(x)                                (((x) & 0x00008000) >> 15)
#define PHY_BB_FCAL_2_B0_FLC_SW_CAP_SET_SET(x)                                (((x) << 15) & 0x00008000)
#define PHY_BB_FCAL_2_B0_FLC_MEAS_WIN_MSB                                                             18
#define PHY_BB_FCAL_2_B0_FLC_MEAS_WIN_LSB                                                             16
#define PHY_BB_FCAL_2_B0_FLC_MEAS_WIN_MASK                                                    0x00070000
#define PHY_BB_FCAL_2_B0_FLC_MEAS_WIN_GET(x)                                  (((x) & 0x00070000) >> 16)
#define PHY_BB_FCAL_2_B0_FLC_MEAS_WIN_SET(x)                                  (((x) << 16) & 0x00070000)
#define PHY_BB_FCAL_2_B0_FLC_CAP_VAL_STATUS_0_MSB                                                     24
#define PHY_BB_FCAL_2_B0_FLC_CAP_VAL_STATUS_0_LSB                                                     20
#define PHY_BB_FCAL_2_B0_FLC_CAP_VAL_STATUS_0_MASK                                            0x01f00000
#define PHY_BB_FCAL_2_B0_FLC_CAP_VAL_STATUS_0_GET(x)                          (((x) & 0x01f00000) >> 20)

/* macros for bb_sm_reg_map.BB_dft_tone_ctrl_b0 */
#define PHY_BB_DFT_TONE_CTRL_B0_ADDRESS                                                       0x0000a2d4
#define PHY_BB_DFT_TONE_CTRL_B0_OFFSET                                                        0x000000d4
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_EN_0_MSB                                                      0
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_EN_0_LSB                                                      0
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_EN_0_MASK                                            0x00000001
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_EN_0_GET(x)                           (((x) & 0x00000001) >> 0)
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_EN_0_SET(x)                           (((x) << 0) & 0x00000001)
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_AMP_SEL_0_MSB                                                 3
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_AMP_SEL_0_LSB                                                 2
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_AMP_SEL_0_MASK                                       0x0000000c
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_AMP_SEL_0_GET(x)                      (((x) & 0x0000000c) >> 2)
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_AMP_SEL_0_SET(x)                      (((x) << 2) & 0x0000000c)
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_FREQ_ANG_0_MSB                                               12
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_FREQ_ANG_0_LSB                                                4
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_FREQ_ANG_0_MASK                                      0x00001ff0
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_FREQ_ANG_0_GET(x)                     (((x) & 0x00001ff0) >> 4)
#define PHY_BB_DFT_TONE_CTRL_B0_DFT_TONE_FREQ_ANG_0_SET(x)                     (((x) << 4) & 0x00001ff0)

/* macros for bb_sm_reg_map.BB_cl_cal_ctrl */
#define PHY_BB_CL_CAL_CTRL_ADDRESS                                                            0x0000a2d8
#define PHY_BB_CL_CAL_CTRL_OFFSET                                                             0x000000d8
#define PHY_BB_CL_CAL_CTRL_ENABLE_PARALLEL_CAL_MSB                                                     0
#define PHY_BB_CL_CAL_CTRL_ENABLE_PARALLEL_CAL_LSB                                                     0
#define PHY_BB_CL_CAL_CTRL_ENABLE_PARALLEL_CAL_MASK                                           0x00000001
#define PHY_BB_CL_CAL_CTRL_ENABLE_PARALLEL_CAL_GET(x)                          (((x) & 0x00000001) >> 0)
#define PHY_BB_CL_CAL_CTRL_ENABLE_PARALLEL_CAL_SET(x)                          (((x) << 0) & 0x00000001)
#define PHY_BB_CL_CAL_CTRL_ENABLE_CL_CALIBRATE_MSB                                                     1
#define PHY_BB_CL_CAL_CTRL_ENABLE_CL_CALIBRATE_LSB                                                     1
#define PHY_BB_CL_CAL_CTRL_ENABLE_CL_CALIBRATE_MASK                                           0x00000002
#define PHY_BB_CL_CAL_CTRL_ENABLE_CL_CALIBRATE_GET(x)                          (((x) & 0x00000002) >> 1)
#define PHY_BB_CL_CAL_CTRL_ENABLE_CL_CALIBRATE_SET(x)                          (((x) << 1) & 0x00000002)
#define PHY_BB_CL_CAL_CTRL_CF_CLC_TEST_POINT_MSB                                                       3
#define PHY_BB_CL_CAL_CTRL_CF_CLC_TEST_POINT_LSB                                                       2
#define PHY_BB_CL_CAL_CTRL_CF_CLC_TEST_POINT_MASK                                             0x0000000c
#define PHY_BB_CL_CAL_CTRL_CF_CLC_TEST_POINT_GET(x)                            (((x) & 0x0000000c) >> 2)
#define PHY_BB_CL_CAL_CTRL_CF_CLC_TEST_POINT_SET(x)                            (((x) << 2) & 0x0000000c)
#define PHY_BB_CL_CAL_CTRL_CF_CLC_FORCED_PAGAIN_MSB                                                    7
#define PHY_BB_CL_CAL_CTRL_CF_CLC_FORCED_PAGAIN_LSB                                                    4
#define PHY_BB_CL_CAL_CTRL_CF_CLC_FORCED_PAGAIN_MASK                                          0x000000f0
#define PHY_BB_CL_CAL_CTRL_CF_CLC_FORCED_PAGAIN_GET(x)                         (((x) & 0x000000f0) >> 4)
#define PHY_BB_CL_CAL_CTRL_CF_CLC_FORCED_PAGAIN_SET(x)                         (((x) << 4) & 0x000000f0)
#define PHY_BB_CL_CAL_CTRL_CARR_LEAK_MAX_OFFSET_MSB                                                   15
#define PHY_BB_CL_CAL_CTRL_CARR_LEAK_MAX_OFFSET_LSB                                                    8
#define PHY_BB_CL_CAL_CTRL_CARR_LEAK_MAX_OFFSET_MASK                                          0x0000ff00
#define PHY_BB_CL_CAL_CTRL_CARR_LEAK_MAX_OFFSET_GET(x)                         (((x) & 0x0000ff00) >> 8)
#define PHY_BB_CL_CAL_CTRL_CARR_LEAK_MAX_OFFSET_SET(x)                         (((x) << 8) & 0x0000ff00)
#define PHY_BB_CL_CAL_CTRL_CF_CLC_INIT_BBGAIN_MSB                                                     21
#define PHY_BB_CL_CAL_CTRL_CF_CLC_INIT_BBGAIN_LSB                                                     16
#define PHY_BB_CL_CAL_CTRL_CF_CLC_INIT_BBGAIN_MASK                                            0x003f0000
#define PHY_BB_CL_CAL_CTRL_CF_CLC_INIT_BBGAIN_GET(x)                          (((x) & 0x003f0000) >> 16)
#define PHY_BB_CL_CAL_CTRL_CF_CLC_INIT_BBGAIN_SET(x)                          (((x) << 16) & 0x003f0000)
#define PHY_BB_CL_CAL_CTRL_CF_ADC_BOUND_MSB                                                           29
#define PHY_BB_CL_CAL_CTRL_CF_ADC_BOUND_LSB                                                           22
#define PHY_BB_CL_CAL_CTRL_CF_ADC_BOUND_MASK                                                  0x3fc00000
#define PHY_BB_CL_CAL_CTRL_CF_ADC_BOUND_GET(x)                                (((x) & 0x3fc00000) >> 22)
#define PHY_BB_CL_CAL_CTRL_CF_ADC_BOUND_SET(x)                                (((x) << 22) & 0x3fc00000)
#define PHY_BB_CL_CAL_CTRL_USE_DAC_CL_CORRECTION_MSB                                                  30
#define PHY_BB_CL_CAL_CTRL_USE_DAC_CL_CORRECTION_LSB                                                  30
#define PHY_BB_CL_CAL_CTRL_USE_DAC_CL_CORRECTION_MASK                                         0x40000000
#define PHY_BB_CL_CAL_CTRL_USE_DAC_CL_CORRECTION_GET(x)                       (((x) & 0x40000000) >> 30)
#define PHY_BB_CL_CAL_CTRL_USE_DAC_CL_CORRECTION_SET(x)                       (((x) << 30) & 0x40000000)
#define PHY_BB_CL_CAL_CTRL_CL_MAP_HW_GEN_MSB                                                          31
#define PHY_BB_CL_CAL_CTRL_CL_MAP_HW_GEN_LSB                                                          31
#define PHY_BB_CL_CAL_CTRL_CL_MAP_HW_GEN_MASK                                                 0x80000000
#define PHY_BB_CL_CAL_CTRL_CL_MAP_HW_GEN_GET(x)                               (((x) & 0x80000000) >> 31)
#define PHY_BB_CL_CAL_CTRL_CL_MAP_HW_GEN_SET(x)                               (((x) << 31) & 0x80000000)

/* macros for bb_sm_reg_map.BB_cl_map_0_b0 */
#define PHY_BB_CL_MAP_0_B0_ADDRESS                                                            0x0000a2dc
#define PHY_BB_CL_MAP_0_B0_OFFSET                                                             0x000000dc
#define PHY_BB_CL_MAP_0_B0_CL_MAP_0_MSB                                                               31
#define PHY_BB_CL_MAP_0_B0_CL_MAP_0_LSB                                                                0
#define PHY_BB_CL_MAP_0_B0_CL_MAP_0_MASK                                                      0xffffffff
#define PHY_BB_CL_MAP_0_B0_CL_MAP_0_GET(x)                                     (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_0_B0_CL_MAP_0_SET(x)                                     (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_cl_map_1_b0 */
#define PHY_BB_CL_MAP_1_B0_ADDRESS                                                            0x0000a2e0
#define PHY_BB_CL_MAP_1_B0_OFFSET                                                             0x000000e0
#define PHY_BB_CL_MAP_1_B0_CL_MAP_1_MSB                                                               31
#define PHY_BB_CL_MAP_1_B0_CL_MAP_1_LSB                                                                0
#define PHY_BB_CL_MAP_1_B0_CL_MAP_1_MASK                                                      0xffffffff
#define PHY_BB_CL_MAP_1_B0_CL_MAP_1_GET(x)                                     (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_1_B0_CL_MAP_1_SET(x)                                     (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_cl_map_2_b0 */
#define PHY_BB_CL_MAP_2_B0_ADDRESS                                                            0x0000a2e4
#define PHY_BB_CL_MAP_2_B0_OFFSET                                                             0x000000e4
#define PHY_BB_CL_MAP_2_B0_CL_MAP_2_MSB                                                               31
#define PHY_BB_CL_MAP_2_B0_CL_MAP_2_LSB                                                                0
#define PHY_BB_CL_MAP_2_B0_CL_MAP_2_MASK                                                      0xffffffff
#define PHY_BB_CL_MAP_2_B0_CL_MAP_2_GET(x)                                     (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_2_B0_CL_MAP_2_SET(x)                                     (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_cl_map_3_b0 */
#define PHY_BB_CL_MAP_3_B0_ADDRESS                                                            0x0000a2e8
#define PHY_BB_CL_MAP_3_B0_OFFSET                                                             0x000000e8
#define PHY_BB_CL_MAP_3_B0_CL_MAP_3_MSB                                                               31
#define PHY_BB_CL_MAP_3_B0_CL_MAP_3_LSB                                                                0
#define PHY_BB_CL_MAP_3_B0_CL_MAP_3_MASK                                                      0xffffffff
#define PHY_BB_CL_MAP_3_B0_CL_MAP_3_GET(x)                                     (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_3_B0_CL_MAP_3_SET(x)                                     (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_cl_map_pal_0_b0 */
#define PHY_BB_CL_MAP_PAL_0_B0_ADDRESS                                                        0x0000a2ec
#define PHY_BB_CL_MAP_PAL_0_B0_OFFSET                                                         0x000000ec
#define PHY_BB_CL_MAP_PAL_0_B0_CL_MAP_0_MSB                                                           31
#define PHY_BB_CL_MAP_PAL_0_B0_CL_MAP_0_LSB                                                            0
#define PHY_BB_CL_MAP_PAL_0_B0_CL_MAP_0_MASK                                                  0xffffffff
#define PHY_BB_CL_MAP_PAL_0_B0_CL_MAP_0_GET(x)                                 (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_PAL_0_B0_CL_MAP_0_SET(x)                                 (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_cl_map_pal_1_b0 */
#define PHY_BB_CL_MAP_PAL_1_B0_ADDRESS                                                        0x0000a2f0
#define PHY_BB_CL_MAP_PAL_1_B0_OFFSET                                                         0x000000f0
#define PHY_BB_CL_MAP_PAL_1_B0_CL_MAP_1_MSB                                                           31
#define PHY_BB_CL_MAP_PAL_1_B0_CL_MAP_1_LSB                                                            0
#define PHY_BB_CL_MAP_PAL_1_B0_CL_MAP_1_MASK                                                  0xffffffff
#define PHY_BB_CL_MAP_PAL_1_B0_CL_MAP_1_GET(x)                                 (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_PAL_1_B0_CL_MAP_1_SET(x)                                 (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_cl_map_pal_2_b0 */
#define PHY_BB_CL_MAP_PAL_2_B0_ADDRESS                                                        0x0000a2f4
#define PHY_BB_CL_MAP_PAL_2_B0_OFFSET                                                         0x000000f4
#define PHY_BB_CL_MAP_PAL_2_B0_CL_MAP_2_MSB                                                           31
#define PHY_BB_CL_MAP_PAL_2_B0_CL_MAP_2_LSB                                                            0
#define PHY_BB_CL_MAP_PAL_2_B0_CL_MAP_2_MASK                                                  0xffffffff
#define PHY_BB_CL_MAP_PAL_2_B0_CL_MAP_2_GET(x)                                 (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_PAL_2_B0_CL_MAP_2_SET(x)                                 (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_cl_map_pal_3_b0 */
#define PHY_BB_CL_MAP_PAL_3_B0_ADDRESS                                                        0x0000a2f8
#define PHY_BB_CL_MAP_PAL_3_B0_OFFSET                                                         0x000000f8
#define PHY_BB_CL_MAP_PAL_3_B0_CL_MAP_3_MSB                                                           31
#define PHY_BB_CL_MAP_PAL_3_B0_CL_MAP_3_LSB                                                            0
#define PHY_BB_CL_MAP_PAL_3_B0_CL_MAP_3_MASK                                                  0xffffffff
#define PHY_BB_CL_MAP_PAL_3_B0_CL_MAP_3_GET(x)                                 (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_PAL_3_B0_CL_MAP_3_SET(x)                                 (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_cl_tab_b0 */
#define PHY_BB_CL_TAB_B0_ADDRESS                                                              0x0000a300
#define PHY_BB_CL_TAB_B0_OFFSET                                                               0x00000100
#define PHY_BB_CL_TAB_B0_CL_GAIN_MOD_MSB                                                               4
#define PHY_BB_CL_TAB_B0_CL_GAIN_MOD_LSB                                                               0
#define PHY_BB_CL_TAB_B0_CL_GAIN_MOD_MASK                                                     0x0000001f
#define PHY_BB_CL_TAB_B0_CL_GAIN_MOD_GET(x)                                    (((x) & 0x0000001f) >> 0)
#define PHY_BB_CL_TAB_B0_CL_GAIN_MOD_SET(x)                                    (((x) << 0) & 0x0000001f)
#define PHY_BB_CL_TAB_B0_CARR_LK_DC_ADD_Q_MSB                                                         15
#define PHY_BB_CL_TAB_B0_CARR_LK_DC_ADD_Q_LSB                                                          5
#define PHY_BB_CL_TAB_B0_CARR_LK_DC_ADD_Q_MASK                                                0x0000ffe0
#define PHY_BB_CL_TAB_B0_CARR_LK_DC_ADD_Q_GET(x)                               (((x) & 0x0000ffe0) >> 5)
#define PHY_BB_CL_TAB_B0_CARR_LK_DC_ADD_Q_SET(x)                               (((x) << 5) & 0x0000ffe0)
#define PHY_BB_CL_TAB_B0_CARR_LK_DC_ADD_I_MSB                                                         26
#define PHY_BB_CL_TAB_B0_CARR_LK_DC_ADD_I_LSB                                                         16
#define PHY_BB_CL_TAB_B0_CARR_LK_DC_ADD_I_MASK                                                0x07ff0000
#define PHY_BB_CL_TAB_B0_CARR_LK_DC_ADD_I_GET(x)                              (((x) & 0x07ff0000) >> 16)
#define PHY_BB_CL_TAB_B0_CARR_LK_DC_ADD_I_SET(x)                              (((x) << 16) & 0x07ff0000)
#define PHY_BB_CL_TAB_B0_BB_GAIN_MSB                                                                  30
#define PHY_BB_CL_TAB_B0_BB_GAIN_LSB                                                                  27
#define PHY_BB_CL_TAB_B0_BB_GAIN_MASK                                                         0x78000000
#define PHY_BB_CL_TAB_B0_BB_GAIN_GET(x)                                       (((x) & 0x78000000) >> 27)
#define PHY_BB_CL_TAB_B0_BB_GAIN_SET(x)                                       (((x) << 27) & 0x78000000)

/* macros for bb_sm_reg_map.BB_synth_control */
#define PHY_BB_SYNTH_CONTROL_ADDRESS                                                          0x0000a340
#define PHY_BB_SYNTH_CONTROL_OFFSET                                                           0x00000140
#define PHY_BB_SYNTH_CONTROL_RFCHANFRAC_MSB                                                           16
#define PHY_BB_SYNTH_CONTROL_RFCHANFRAC_LSB                                                            0
#define PHY_BB_SYNTH_CONTROL_RFCHANFRAC_MASK                                                  0x0001ffff
#define PHY_BB_SYNTH_CONTROL_RFCHANFRAC_GET(x)                                 (((x) & 0x0001ffff) >> 0)
#define PHY_BB_SYNTH_CONTROL_RFCHANFRAC_SET(x)                                 (((x) << 0) & 0x0001ffff)
#define PHY_BB_SYNTH_CONTROL_RFCHANNEL_MSB                                                            25
#define PHY_BB_SYNTH_CONTROL_RFCHANNEL_LSB                                                            17
#define PHY_BB_SYNTH_CONTROL_RFCHANNEL_MASK                                                   0x03fe0000
#define PHY_BB_SYNTH_CONTROL_RFCHANNEL_GET(x)                                 (((x) & 0x03fe0000) >> 17)
#define PHY_BB_SYNTH_CONTROL_RFCHANNEL_SET(x)                                 (((x) << 17) & 0x03fe0000)
#define PHY_BB_SYNTH_CONTROL_RFAMODEREFSEL_MSB                                                        27
#define PHY_BB_SYNTH_CONTROL_RFAMODEREFSEL_LSB                                                        26
#define PHY_BB_SYNTH_CONTROL_RFAMODEREFSEL_MASK                                               0x0c000000
#define PHY_BB_SYNTH_CONTROL_RFAMODEREFSEL_GET(x)                             (((x) & 0x0c000000) >> 26)
#define PHY_BB_SYNTH_CONTROL_RFAMODEREFSEL_SET(x)                             (((x) << 26) & 0x0c000000)
#define PHY_BB_SYNTH_CONTROL_RFFRACMODE_MSB                                                           28
#define PHY_BB_SYNTH_CONTROL_RFFRACMODE_LSB                                                           28
#define PHY_BB_SYNTH_CONTROL_RFFRACMODE_MASK                                                  0x10000000
#define PHY_BB_SYNTH_CONTROL_RFFRACMODE_GET(x)                                (((x) & 0x10000000) >> 28)
#define PHY_BB_SYNTH_CONTROL_RFFRACMODE_SET(x)                                (((x) << 28) & 0x10000000)
#define PHY_BB_SYNTH_CONTROL_RFBMODE_MSB                                                              29
#define PHY_BB_SYNTH_CONTROL_RFBMODE_LSB                                                              29
#define PHY_BB_SYNTH_CONTROL_RFBMODE_MASK                                                     0x20000000
#define PHY_BB_SYNTH_CONTROL_RFBMODE_GET(x)                                   (((x) & 0x20000000) >> 29)
#define PHY_BB_SYNTH_CONTROL_RFBMODE_SET(x)                                   (((x) << 29) & 0x20000000)
#define PHY_BB_SYNTH_CONTROL_RFSYNTH_CTRL_SSHIFT_MSB                                                  30
#define PHY_BB_SYNTH_CONTROL_RFSYNTH_CTRL_SSHIFT_LSB                                                  30
#define PHY_BB_SYNTH_CONTROL_RFSYNTH_CTRL_SSHIFT_MASK                                         0x40000000
#define PHY_BB_SYNTH_CONTROL_RFSYNTH_CTRL_SSHIFT_GET(x)                       (((x) & 0x40000000) >> 30)
#define PHY_BB_SYNTH_CONTROL_RFSYNTH_CTRL_SSHIFT_SET(x)                       (((x) << 30) & 0x40000000)

/* macros for bb_sm_reg_map.BB_addac_clk_select */
#define PHY_BB_ADDAC_CLK_SELECT_ADDRESS                                                       0x0000a344
#define PHY_BB_ADDAC_CLK_SELECT_OFFSET                                                        0x00000144
#define PHY_BB_ADDAC_CLK_SELECT_BB_DAC_CLK_SELECT_MSB                                                  3
#define PHY_BB_ADDAC_CLK_SELECT_BB_DAC_CLK_SELECT_LSB                                                  1
#define PHY_BB_ADDAC_CLK_SELECT_BB_DAC_CLK_SELECT_MASK                                        0x0000000e
#define PHY_BB_ADDAC_CLK_SELECT_BB_DAC_CLK_SELECT_GET(x)                       (((x) & 0x0000000e) >> 1)
#define PHY_BB_ADDAC_CLK_SELECT_BB_DAC_CLK_SELECT_SET(x)                       (((x) << 1) & 0x0000000e)
#define PHY_BB_ADDAC_CLK_SELECT_BB_ADC_CLK_SELECT_MSB                                                  7
#define PHY_BB_ADDAC_CLK_SELECT_BB_ADC_CLK_SELECT_LSB                                                  4
#define PHY_BB_ADDAC_CLK_SELECT_BB_ADC_CLK_SELECT_MASK                                        0x000000f0
#define PHY_BB_ADDAC_CLK_SELECT_BB_ADC_CLK_SELECT_GET(x)                       (((x) & 0x000000f0) >> 4)
#define PHY_BB_ADDAC_CLK_SELECT_BB_ADC_CLK_SELECT_SET(x)                       (((x) << 4) & 0x000000f0)

/* macros for bb_sm_reg_map.BB_pll_cntl */
#define PHY_BB_PLL_CTL_ADDRESS                                                               0x0000a348
#define PHY_BB_PLL_CTL_OFFSET                                                                0x00000148
#define PHY_BB_PLL_CTL_BB_PLL_DIV_MSB                                                                 9
#define PHY_BB_PLL_CTL_BB_PLL_DIV_LSB                                                                 0
#define PHY_BB_PLL_CTL_BB_PLL_DIV_MASK                                                       0x000003ff
#define PHY_BB_PLL_CTL_BB_PLL_DIV_GET(x)                                      (((x) & 0x000003ff) >> 0)
#define PHY_BB_PLL_CTL_BB_PLL_DIV_SET(x)                                      (((x) << 0) & 0x000003ff)
#define PHY_BB_PLL_CTL_BB_PLL_REFDIV_MSB                                                             13
#define PHY_BB_PLL_CTL_BB_PLL_REFDIV_LSB                                                             10
#define PHY_BB_PLL_CTL_BB_PLL_REFDIV_MASK                                                    0x00003c00
#define PHY_BB_PLL_CTL_BB_PLL_REFDIV_GET(x)                                  (((x) & 0x00003c00) >> 10)
#define PHY_BB_PLL_CTL_BB_PLL_REFDIV_SET(x)                                  (((x) << 10) & 0x00003c00)
#define PHY_BB_PLL_CTL_BB_PLL_CLK_SEL_MSB                                                            15
#define PHY_BB_PLL_CTL_BB_PLL_CLK_SEL_LSB                                                            14
#define PHY_BB_PLL_CTL_BB_PLL_CLK_SEL_MASK                                                   0x0000c000
#define PHY_BB_PLL_CTL_BB_PLL_CLK_SEL_GET(x)                                 (((x) & 0x0000c000) >> 14)
#define PHY_BB_PLL_CTL_BB_PLL_CLK_SEL_SET(x)                                 (((x) << 14) & 0x0000c000)
#define PHY_BB_PLL_CTL_BB_PLLBYPASS_MSB                                                              16
#define PHY_BB_PLL_CTL_BB_PLLBYPASS_LSB                                                              16
#define PHY_BB_PLL_CTL_BB_PLLBYPASS_MASK                                                     0x00010000
#define PHY_BB_PLL_CTL_BB_PLLBYPASS_GET(x)                                   (((x) & 0x00010000) >> 16)
#define PHY_BB_PLL_CTL_BB_PLLBYPASS_SET(x)                                   (((x) << 16) & 0x00010000)
#define PHY_BB_PLL_CTL_BB_PLL_SETTLE_TIME_MSB                                                        27
#define PHY_BB_PLL_CTL_BB_PLL_SETTLE_TIME_LSB                                                        17
#define PHY_BB_PLL_CTL_BB_PLL_SETTLE_TIME_MASK                                               0x0ffe0000
#define PHY_BB_PLL_CTL_BB_PLL_SETTLE_TIME_GET(x)                             (((x) & 0x0ffe0000) >> 17)
#define PHY_BB_PLL_CTL_BB_PLL_SETTLE_TIME_SET(x)                             (((x) << 17) & 0x0ffe0000)

/* macros for bb_sm_reg_map.BB_analog_swap */
#define PHY_BB_ANALOG_SWAP_ADDRESS                                                            0x0000a34c
#define PHY_BB_ANALOG_SWAP_OFFSET                                                             0x0000014c
#define PHY_BB_ANALOG_SWAP_ANALOG_RX_SWAP_CNTL_MSB                                                     2
#define PHY_BB_ANALOG_SWAP_ANALOG_RX_SWAP_CNTL_LSB                                                     0
#define PHY_BB_ANALOG_SWAP_ANALOG_RX_SWAP_CNTL_MASK                                           0x00000007
#define PHY_BB_ANALOG_SWAP_ANALOG_RX_SWAP_CNTL_GET(x)                          (((x) & 0x00000007) >> 0)
#define PHY_BB_ANALOG_SWAP_ANALOG_RX_SWAP_CNTL_SET(x)                          (((x) << 0) & 0x00000007)
#define PHY_BB_ANALOG_SWAP_ANALOG_TX_SWAP_CNTL_MSB                                                     5
#define PHY_BB_ANALOG_SWAP_ANALOG_TX_SWAP_CNTL_LSB                                                     3
#define PHY_BB_ANALOG_SWAP_ANALOG_TX_SWAP_CNTL_MASK                                           0x00000038
#define PHY_BB_ANALOG_SWAP_ANALOG_TX_SWAP_CNTL_GET(x)                          (((x) & 0x00000038) >> 3)
#define PHY_BB_ANALOG_SWAP_ANALOG_TX_SWAP_CNTL_SET(x)                          (((x) << 3) & 0x00000038)
#define PHY_BB_ANALOG_SWAP_SWAP_ALT_CHN_MSB                                                            6
#define PHY_BB_ANALOG_SWAP_SWAP_ALT_CHN_LSB                                                            6
#define PHY_BB_ANALOG_SWAP_SWAP_ALT_CHN_MASK                                                  0x00000040
#define PHY_BB_ANALOG_SWAP_SWAP_ALT_CHN_GET(x)                                 (((x) & 0x00000040) >> 6)
#define PHY_BB_ANALOG_SWAP_SWAP_ALT_CHN_SET(x)                                 (((x) << 6) & 0x00000040)
#define PHY_BB_ANALOG_SWAP_ANALOG_DC_DAC_POLARITY_MSB                                                  7
#define PHY_BB_ANALOG_SWAP_ANALOG_DC_DAC_POLARITY_LSB                                                  7
#define PHY_BB_ANALOG_SWAP_ANALOG_DC_DAC_POLARITY_MASK                                        0x00000080
#define PHY_BB_ANALOG_SWAP_ANALOG_DC_DAC_POLARITY_GET(x)                       (((x) & 0x00000080) >> 7)
#define PHY_BB_ANALOG_SWAP_ANALOG_DC_DAC_POLARITY_SET(x)                       (((x) << 7) & 0x00000080)
#define PHY_BB_ANALOG_SWAP_ANALOG_PKDET_DAC_POLARITY_MSB                                               8
#define PHY_BB_ANALOG_SWAP_ANALOG_PKDET_DAC_POLARITY_LSB                                               8
#define PHY_BB_ANALOG_SWAP_ANALOG_PKDET_DAC_POLARITY_MASK                                     0x00000100
#define PHY_BB_ANALOG_SWAP_ANALOG_PKDET_DAC_POLARITY_GET(x)                    (((x) & 0x00000100) >> 8)
#define PHY_BB_ANALOG_SWAP_ANALOG_PKDET_DAC_POLARITY_SET(x)                    (((x) << 8) & 0x00000100)

/* macros for bb_sm_reg_map.BB_addac_parallel_control */
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ADDRESS                                                 0x0000a350
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFFSET                                                  0x00000150
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_DACLPMODE_MSB                                               12
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_DACLPMODE_LSB                                               12
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_DACLPMODE_MASK                                      0x00001000
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_DACLPMODE_GET(x)                    (((x) & 0x00001000) >> 12)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_DACLPMODE_SET(x)                    (((x) << 12) & 0x00001000)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_PWDDAC_MSB                                                  13
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_PWDDAC_LSB                                                  13
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_PWDDAC_MASK                                         0x00002000
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_PWDDAC_GET(x)                       (((x) & 0x00002000) >> 13)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_PWDDAC_SET(x)                       (((x) << 13) & 0x00002000)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_PWDADC_MSB                                                  15
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_PWDADC_LSB                                                  15
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_PWDADC_MASK                                         0x00008000
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_PWDADC_GET(x)                       (((x) & 0x00008000) >> 15)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_OFF_PWDADC_SET(x)                       (((x) << 15) & 0x00008000)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_DACLPMODE_MSB                                                28
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_DACLPMODE_LSB                                                28
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_DACLPMODE_MASK                                       0x10000000
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_DACLPMODE_GET(x)                     (((x) & 0x10000000) >> 28)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_DACLPMODE_SET(x)                     (((x) << 28) & 0x10000000)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_PWDDAC_MSB                                                   29
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_PWDDAC_LSB                                                   29
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_PWDDAC_MASK                                          0x20000000
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_PWDDAC_GET(x)                        (((x) & 0x20000000) >> 29)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_PWDDAC_SET(x)                        (((x) << 29) & 0x20000000)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_PWDADC_MSB                                                   31
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_PWDADC_LSB                                                   31
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_PWDADC_MASK                                          0x80000000
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_PWDADC_GET(x)                        (((x) & 0x80000000) >> 31)
#define PHY_BB_ADDAC_PARALLEL_CONTROL_ON_PWDADC_SET(x)                        (((x) << 31) & 0x80000000)

/* macros for bb_sm_reg_map.BB_force_analog */
#define PHY_BB_FORCE_ANALOG_ADDRESS                                                           0x0000a358
#define PHY_BB_FORCE_ANALOG_OFFSET                                                            0x00000158
#define PHY_BB_FORCE_ANALOG_FORCE_XPAON_MSB                                                            0
#define PHY_BB_FORCE_ANALOG_FORCE_XPAON_LSB                                                            0
#define PHY_BB_FORCE_ANALOG_FORCE_XPAON_MASK                                                  0x00000001
#define PHY_BB_FORCE_ANALOG_FORCE_XPAON_GET(x)                                 (((x) & 0x00000001) >> 0)
#define PHY_BB_FORCE_ANALOG_FORCE_XPAON_SET(x)                                 (((x) << 0) & 0x00000001)
#define PHY_BB_FORCE_ANALOG_FORCED_XPAON_MSB                                                           3
#define PHY_BB_FORCE_ANALOG_FORCED_XPAON_LSB                                                           1
#define PHY_BB_FORCE_ANALOG_FORCED_XPAON_MASK                                                 0x0000000e
#define PHY_BB_FORCE_ANALOG_FORCED_XPAON_GET(x)                                (((x) & 0x0000000e) >> 1)
#define PHY_BB_FORCE_ANALOG_FORCED_XPAON_SET(x)                                (((x) << 1) & 0x0000000e)
#define PHY_BB_FORCE_ANALOG_FORCE_PDADC_PWD_MSB                                                        4
#define PHY_BB_FORCE_ANALOG_FORCE_PDADC_PWD_LSB                                                        4
#define PHY_BB_FORCE_ANALOG_FORCE_PDADC_PWD_MASK                                              0x00000010
#define PHY_BB_FORCE_ANALOG_FORCE_PDADC_PWD_GET(x)                             (((x) & 0x00000010) >> 4)
#define PHY_BB_FORCE_ANALOG_FORCE_PDADC_PWD_SET(x)                             (((x) << 4) & 0x00000010)
#define PHY_BB_FORCE_ANALOG_FORCED_PDADC_PWD_MSB                                                       7
#define PHY_BB_FORCE_ANALOG_FORCED_PDADC_PWD_LSB                                                       5
#define PHY_BB_FORCE_ANALOG_FORCED_PDADC_PWD_MASK                                             0x000000e0
#define PHY_BB_FORCE_ANALOG_FORCED_PDADC_PWD_GET(x)                            (((x) & 0x000000e0) >> 5)
#define PHY_BB_FORCE_ANALOG_FORCED_PDADC_PWD_SET(x)                            (((x) << 5) & 0x000000e0)

/* macros for bb_sm_reg_map.BB_test_controls */
#define PHY_BB_TEST_CONTROLS_ADDRESS                                                          0x0000a360
#define PHY_BB_TEST_CONTROLS_OFFSET                                                           0x00000160
#define PHY_BB_TEST_CONTROLS_CF_TSTTRIG_SEL_MSB                                                        3
#define PHY_BB_TEST_CONTROLS_CF_TSTTRIG_SEL_LSB                                                        0
#define PHY_BB_TEST_CONTROLS_CF_TSTTRIG_SEL_MASK                                              0x0000000f
#define PHY_BB_TEST_CONTROLS_CF_TSTTRIG_SEL_GET(x)                             (((x) & 0x0000000f) >> 0)
#define PHY_BB_TEST_CONTROLS_CF_TSTTRIG_SEL_SET(x)                             (((x) << 0) & 0x0000000f)
#define PHY_BB_TEST_CONTROLS_CF_TSTTRIG_MSB                                                            4
#define PHY_BB_TEST_CONTROLS_CF_TSTTRIG_LSB                                                            4
#define PHY_BB_TEST_CONTROLS_CF_TSTTRIG_MASK                                                  0x00000010
#define PHY_BB_TEST_CONTROLS_CF_TSTTRIG_GET(x)                                 (((x) & 0x00000010) >> 4)
#define PHY_BB_TEST_CONTROLS_CF_TSTTRIG_SET(x)                                 (((x) << 4) & 0x00000010)
#define PHY_BB_TEST_CONTROLS_CF_RFSHIFT_SEL_MSB                                                        6
#define PHY_BB_TEST_CONTROLS_CF_RFSHIFT_SEL_LSB                                                        5
#define PHY_BB_TEST_CONTROLS_CF_RFSHIFT_SEL_MASK                                              0x00000060
#define PHY_BB_TEST_CONTROLS_CF_RFSHIFT_SEL_GET(x)                             (((x) & 0x00000060) >> 5)
#define PHY_BB_TEST_CONTROLS_CF_RFSHIFT_SEL_SET(x)                             (((x) << 5) & 0x00000060)
#define PHY_BB_TEST_CONTROLS_CARDBUS_MODE_MSB                                                          9
#define PHY_BB_TEST_CONTROLS_CARDBUS_MODE_LSB                                                          8
#define PHY_BB_TEST_CONTROLS_CARDBUS_MODE_MASK                                                0x00000300
#define PHY_BB_TEST_CONTROLS_CARDBUS_MODE_GET(x)                               (((x) & 0x00000300) >> 8)
#define PHY_BB_TEST_CONTROLS_CARDBUS_MODE_SET(x)                               (((x) << 8) & 0x00000300)
#define PHY_BB_TEST_CONTROLS_CLKOUT_IS_CLK32_MSB                                                      10
#define PHY_BB_TEST_CONTROLS_CLKOUT_IS_CLK32_LSB                                                      10
#define PHY_BB_TEST_CONTROLS_CLKOUT_IS_CLK32_MASK                                             0x00000400
#define PHY_BB_TEST_CONTROLS_CLKOUT_IS_CLK32_GET(x)                           (((x) & 0x00000400) >> 10)
#define PHY_BB_TEST_CONTROLS_CLKOUT_IS_CLK32_SET(x)                           (((x) << 10) & 0x00000400)
#define PHY_BB_TEST_CONTROLS_ENABLE_RFSILENT_BB_MSB                                                   13
#define PHY_BB_TEST_CONTROLS_ENABLE_RFSILENT_BB_LSB                                                   13
#define PHY_BB_TEST_CONTROLS_ENABLE_RFSILENT_BB_MASK                                          0x00002000
#define PHY_BB_TEST_CONTROLS_ENABLE_RFSILENT_BB_GET(x)                        (((x) & 0x00002000) >> 13)
#define PHY_BB_TEST_CONTROLS_ENABLE_RFSILENT_BB_SET(x)                        (((x) << 13) & 0x00002000)
#define PHY_BB_TEST_CONTROLS_ENABLE_MINI_OBS_MSB                                                      15
#define PHY_BB_TEST_CONTROLS_ENABLE_MINI_OBS_LSB                                                      15
#define PHY_BB_TEST_CONTROLS_ENABLE_MINI_OBS_MASK                                             0x00008000
#define PHY_BB_TEST_CONTROLS_ENABLE_MINI_OBS_GET(x)                           (((x) & 0x00008000) >> 15)
#define PHY_BB_TEST_CONTROLS_ENABLE_MINI_OBS_SET(x)                           (((x) << 15) & 0x00008000)
#define PHY_BB_TEST_CONTROLS_SLOW_CLK160_MSB                                                          17
#define PHY_BB_TEST_CONTROLS_SLOW_CLK160_LSB                                                          17
#define PHY_BB_TEST_CONTROLS_SLOW_CLK160_MASK                                                 0x00020000
#define PHY_BB_TEST_CONTROLS_SLOW_CLK160_GET(x)                               (((x) & 0x00020000) >> 17)
#define PHY_BB_TEST_CONTROLS_SLOW_CLK160_SET(x)                               (((x) << 17) & 0x00020000)
#define PHY_BB_TEST_CONTROLS_AGC_OBS_SEL_3_MSB                                                        18
#define PHY_BB_TEST_CONTROLS_AGC_OBS_SEL_3_LSB                                                        18
#define PHY_BB_TEST_CONTROLS_AGC_OBS_SEL_3_MASK                                               0x00040000
#define PHY_BB_TEST_CONTROLS_AGC_OBS_SEL_3_GET(x)                             (((x) & 0x00040000) >> 18)
#define PHY_BB_TEST_CONTROLS_AGC_OBS_SEL_3_SET(x)                             (((x) << 18) & 0x00040000)
#define PHY_BB_TEST_CONTROLS_CF_BBB_OBS_SEL_MSB                                                       22
#define PHY_BB_TEST_CONTROLS_CF_BBB_OBS_SEL_LSB                                                       19
#define PHY_BB_TEST_CONTROLS_CF_BBB_OBS_SEL_MASK                                              0x00780000
#define PHY_BB_TEST_CONTROLS_CF_BBB_OBS_SEL_GET(x)                            (((x) & 0x00780000) >> 19)
#define PHY_BB_TEST_CONTROLS_CF_BBB_OBS_SEL_SET(x)                            (((x) << 19) & 0x00780000)
#define PHY_BB_TEST_CONTROLS_RX_OBS_SEL_5TH_BIT_MSB                                                   23
#define PHY_BB_TEST_CONTROLS_RX_OBS_SEL_5TH_BIT_LSB                                                   23
#define PHY_BB_TEST_CONTROLS_RX_OBS_SEL_5TH_BIT_MASK                                          0x00800000
#define PHY_BB_TEST_CONTROLS_RX_OBS_SEL_5TH_BIT_GET(x)                        (((x) & 0x00800000) >> 23)
#define PHY_BB_TEST_CONTROLS_RX_OBS_SEL_5TH_BIT_SET(x)                        (((x) << 23) & 0x00800000)
#define PHY_BB_TEST_CONTROLS_AGC_OBS_SEL_4_MSB                                                        24
#define PHY_BB_TEST_CONTROLS_AGC_OBS_SEL_4_LSB                                                        24
#define PHY_BB_TEST_CONTROLS_AGC_OBS_SEL_4_MASK                                               0x01000000
#define PHY_BB_TEST_CONTROLS_AGC_OBS_SEL_4_GET(x)                             (((x) & 0x01000000) >> 24)
#define PHY_BB_TEST_CONTROLS_AGC_OBS_SEL_4_SET(x)                             (((x) << 24) & 0x01000000)
#define PHY_BB_TEST_CONTROLS_FORCE_AGC_CLEAR_MSB                                                      28
#define PHY_BB_TEST_CONTROLS_FORCE_AGC_CLEAR_LSB                                                      28
#define PHY_BB_TEST_CONTROLS_FORCE_AGC_CLEAR_MASK                                             0x10000000
#define PHY_BB_TEST_CONTROLS_FORCE_AGC_CLEAR_GET(x)                           (((x) & 0x10000000) >> 28)
#define PHY_BB_TEST_CONTROLS_FORCE_AGC_CLEAR_SET(x)                           (((x) << 28) & 0x10000000)
#define PHY_BB_TEST_CONTROLS_TSTDAC_OUT_SEL_MSB                                                       31
#define PHY_BB_TEST_CONTROLS_TSTDAC_OUT_SEL_LSB                                                       30
#define PHY_BB_TEST_CONTROLS_TSTDAC_OUT_SEL_MASK                                              0xc0000000
#define PHY_BB_TEST_CONTROLS_TSTDAC_OUT_SEL_GET(x)                            (((x) & 0xc0000000) >> 30)
#define PHY_BB_TEST_CONTROLS_TSTDAC_OUT_SEL_SET(x)                            (((x) << 30) & 0xc0000000)

/* macros for bb_sm_reg_map.BB_test_controls_status */
#define PHY_BB_TEST_CONTROLS_STATUS_ADDRESS                                                   0x0000a364
#define PHY_BB_TEST_CONTROLS_STATUS_OFFSET                                                    0x00000164
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TSTDAC_EN_MSB                                                   0
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TSTDAC_EN_LSB                                                   0
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TSTDAC_EN_MASK                                         0x00000001
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TSTDAC_EN_GET(x)                        (((x) & 0x00000001) >> 0)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TSTDAC_EN_SET(x)                        (((x) << 0) & 0x00000001)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_SRC_IS_TSTDAC_MSB                                            1
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_SRC_IS_TSTDAC_LSB                                            1
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_SRC_IS_TSTDAC_MASK                                  0x00000002
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_SRC_IS_TSTDAC_GET(x)                 (((x) & 0x00000002) >> 1)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_SRC_IS_TSTDAC_SET(x)                 (((x) << 1) & 0x00000002)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_OBS_SEL_MSB                                                  4
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_OBS_SEL_LSB                                                  2
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_OBS_SEL_MASK                                        0x0000001c
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_OBS_SEL_GET(x)                       (((x) & 0x0000001c) >> 2)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_OBS_SEL_SET(x)                       (((x) << 2) & 0x0000001c)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_OBS_MUX_SEL_MSB                                              6
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_OBS_MUX_SEL_LSB                                              5
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_OBS_MUX_SEL_MASK                                    0x00000060
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_OBS_MUX_SEL_GET(x)                   (((x) & 0x00000060) >> 5)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_OBS_MUX_SEL_SET(x)                   (((x) << 5) & 0x00000060)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_SRC_ALTERNATE_MSB                                            7
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_SRC_ALTERNATE_LSB                                            7
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_SRC_ALTERNATE_MASK                                  0x00000080
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_SRC_ALTERNATE_GET(x)                 (((x) & 0x00000080) >> 7)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TX_SRC_ALTERNATE_SET(x)                 (((x) << 7) & 0x00000080)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TSTADC_EN_MSB                                                   8
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TSTADC_EN_LSB                                                   8
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TSTADC_EN_MASK                                         0x00000100
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TSTADC_EN_GET(x)                        (((x) & 0x00000100) >> 8)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_TSTADC_EN_SET(x)                        (((x) << 8) & 0x00000100)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_RX_SRC_IS_TSTADC_MSB                                            9
#define PHY_BB_TEST_CONTROLS_STATUS_CF_RX_SRC_IS_TSTADC_LSB                                            9
#define PHY_BB_TEST_CONTROLS_STATUS_CF_RX_SRC_IS_TSTADC_MASK                                  0x00000200
#define PHY_BB_TEST_CONTROLS_STATUS_CF_RX_SRC_IS_TSTADC_GET(x)                 (((x) & 0x00000200) >> 9)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_RX_SRC_IS_TSTADC_SET(x)                 (((x) << 9) & 0x00000200)
#define PHY_BB_TEST_CONTROLS_STATUS_RX_OBS_SEL_MSB                                                    13
#define PHY_BB_TEST_CONTROLS_STATUS_RX_OBS_SEL_LSB                                                    10
#define PHY_BB_TEST_CONTROLS_STATUS_RX_OBS_SEL_MASK                                           0x00003c00
#define PHY_BB_TEST_CONTROLS_STATUS_RX_OBS_SEL_GET(x)                         (((x) & 0x00003c00) >> 10)
#define PHY_BB_TEST_CONTROLS_STATUS_RX_OBS_SEL_SET(x)                         (((x) << 10) & 0x00003c00)
#define PHY_BB_TEST_CONTROLS_STATUS_DISABLE_A2_WARM_RESET_MSB                                         14
#define PHY_BB_TEST_CONTROLS_STATUS_DISABLE_A2_WARM_RESET_LSB                                         14
#define PHY_BB_TEST_CONTROLS_STATUS_DISABLE_A2_WARM_RESET_MASK                                0x00004000
#define PHY_BB_TEST_CONTROLS_STATUS_DISABLE_A2_WARM_RESET_GET(x)              (((x) & 0x00004000) >> 14)
#define PHY_BB_TEST_CONTROLS_STATUS_DISABLE_A2_WARM_RESET_SET(x)              (((x) << 14) & 0x00004000)
#define PHY_BB_TEST_CONTROLS_STATUS_RESET_A2_MSB                                                      15
#define PHY_BB_TEST_CONTROLS_STATUS_RESET_A2_LSB                                                      15
#define PHY_BB_TEST_CONTROLS_STATUS_RESET_A2_MASK                                             0x00008000
#define PHY_BB_TEST_CONTROLS_STATUS_RESET_A2_GET(x)                           (((x) & 0x00008000) >> 15)
#define PHY_BB_TEST_CONTROLS_STATUS_RESET_A2_SET(x)                           (((x) << 15) & 0x00008000)
#define PHY_BB_TEST_CONTROLS_STATUS_AGC_OBS_SEL_MSB                                                   18
#define PHY_BB_TEST_CONTROLS_STATUS_AGC_OBS_SEL_LSB                                                   16
#define PHY_BB_TEST_CONTROLS_STATUS_AGC_OBS_SEL_MASK                                          0x00070000
#define PHY_BB_TEST_CONTROLS_STATUS_AGC_OBS_SEL_GET(x)                        (((x) & 0x00070000) >> 16)
#define PHY_BB_TEST_CONTROLS_STATUS_AGC_OBS_SEL_SET(x)                        (((x) << 16) & 0x00070000)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_ENABLE_FFT_DUMP_MSB                                            19
#define PHY_BB_TEST_CONTROLS_STATUS_CF_ENABLE_FFT_DUMP_LSB                                            19
#define PHY_BB_TEST_CONTROLS_STATUS_CF_ENABLE_FFT_DUMP_MASK                                   0x00080000
#define PHY_BB_TEST_CONTROLS_STATUS_CF_ENABLE_FFT_DUMP_GET(x)                 (((x) & 0x00080000) >> 19)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_ENABLE_FFT_DUMP_SET(x)                 (((x) << 19) & 0x00080000)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_IN_MSB                                               23
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_IN_LSB                                               23
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_IN_MASK                                      0x00800000
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_IN_GET(x)                    (((x) & 0x00800000) >> 23)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_IN_SET(x)                    (((x) << 23) & 0x00800000)
#define PHY_BB_TEST_CONTROLS_STATUS_DISABLE_AGC_TO_A2_MSB                                             27
#define PHY_BB_TEST_CONTROLS_STATUS_DISABLE_AGC_TO_A2_LSB                                             27
#define PHY_BB_TEST_CONTROLS_STATUS_DISABLE_AGC_TO_A2_MASK                                    0x08000000
#define PHY_BB_TEST_CONTROLS_STATUS_DISABLE_AGC_TO_A2_GET(x)                  (((x) & 0x08000000) >> 27)
#define PHY_BB_TEST_CONTROLS_STATUS_DISABLE_AGC_TO_A2_SET(x)                  (((x) << 27) & 0x08000000)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_EN_MSB                                               28
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_EN_LSB                                               28
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_EN_MASK                                      0x10000000
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_EN_GET(x)                    (((x) & 0x10000000) >> 28)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_EN_SET(x)                    (((x) << 28) & 0x10000000)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_SEL_MSB                                              31
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_SEL_LSB                                              29
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_SEL_MASK                                     0xe0000000
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_SEL_GET(x)                   (((x) & 0xe0000000) >> 29)
#define PHY_BB_TEST_CONTROLS_STATUS_CF_DEBUGPORT_SEL_SET(x)                   (((x) << 29) & 0xe0000000)

/* macros for bb_sm_reg_map.BB_tstdac */
#define PHY_BB_TSTDAC_ADDRESS                                                                 0x0000a368
#define PHY_BB_TSTDAC_OFFSET                                                                  0x00000168
#define PHY_BB_TSTDAC_TSTDAC_OUT_Q_MSB                                                                 9
#define PHY_BB_TSTDAC_TSTDAC_OUT_Q_LSB                                                                 0
#define PHY_BB_TSTDAC_TSTDAC_OUT_Q_MASK                                                       0x000003ff
#define PHY_BB_TSTDAC_TSTDAC_OUT_Q_GET(x)                                      (((x) & 0x000003ff) >> 0)
#define PHY_BB_TSTDAC_TSTDAC_OUT_I_MSB                                                                19
#define PHY_BB_TSTDAC_TSTDAC_OUT_I_LSB                                                                10
#define PHY_BB_TSTDAC_TSTDAC_OUT_I_MASK                                                       0x000ffc00
#define PHY_BB_TSTDAC_TSTDAC_OUT_I_GET(x)                                     (((x) & 0x000ffc00) >> 10)

/* macros for bb_sm_reg_map.BB_channel_status */
#define PHY_BB_CHANNEL_STATUS_ADDRESS                                                         0x0000a36c
#define PHY_BB_CHANNEL_STATUS_OFFSET                                                          0x0000016c
#define PHY_BB_CHANNEL_STATUS_BT_ACTIVE_MSB                                                            0
#define PHY_BB_CHANNEL_STATUS_BT_ACTIVE_LSB                                                            0
#define PHY_BB_CHANNEL_STATUS_BT_ACTIVE_MASK                                                  0x00000001
#define PHY_BB_CHANNEL_STATUS_BT_ACTIVE_GET(x)                                 (((x) & 0x00000001) >> 0)
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_RAW_MSB                                                         1
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_RAW_LSB                                                         1
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_RAW_MASK                                               0x00000002
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_RAW_GET(x)                              (((x) & 0x00000002) >> 1)
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_MAC_MSB                                                         2
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_MAC_LSB                                                         2
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_MAC_MASK                                               0x00000004
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_MAC_GET(x)                              (((x) & 0x00000004) >> 2)
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_PAD_MSB                                                         3
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_PAD_LSB                                                         3
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_PAD_MASK                                               0x00000008
#define PHY_BB_CHANNEL_STATUS_RX_CLEAR_PAD_GET(x)                              (((x) & 0x00000008) >> 3)
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_0_MSB                                                          5
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_0_LSB                                                          4
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_0_MASK                                                0x00000030
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_0_GET(x)                               (((x) & 0x00000030) >> 4)
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_1_MSB                                                          7
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_1_LSB                                                          6
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_1_MASK                                                0x000000c0
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_1_GET(x)                               (((x) & 0x000000c0) >> 6)
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_2_MSB                                                          9
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_2_LSB                                                          8
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_2_MASK                                                0x00000300
#define PHY_BB_CHANNEL_STATUS_BB_SW_OUT_2_GET(x)                               (((x) & 0x00000300) >> 8)
#define PHY_BB_CHANNEL_STATUS_BB_SW_COM_OUT_MSB                                                       13
#define PHY_BB_CHANNEL_STATUS_BB_SW_COM_OUT_LSB                                                       10
#define PHY_BB_CHANNEL_STATUS_BB_SW_COM_OUT_MASK                                              0x00003c00
#define PHY_BB_CHANNEL_STATUS_BB_SW_COM_OUT_GET(x)                            (((x) & 0x00003c00) >> 10)
#define PHY_BB_CHANNEL_STATUS_ANT_DIV_CFG_USED_MSB                                                    16
#define PHY_BB_CHANNEL_STATUS_ANT_DIV_CFG_USED_LSB                                                    14
#define PHY_BB_CHANNEL_STATUS_ANT_DIV_CFG_USED_MASK                                           0x0001c000
#define PHY_BB_CHANNEL_STATUS_ANT_DIV_CFG_USED_GET(x)                         (((x) & 0x0001c000) >> 14)

/* macros for bb_sm_reg_map.BB_chaninfo_ctrl */
#define PHY_BB_CHANINFO_CTRL_ADDRESS                                                          0x0000a370
#define PHY_BB_CHANINFO_CTRL_OFFSET                                                           0x00000170
#define PHY_BB_CHANINFO_CTRL_CAPTURE_CHAN_INFO_MSB                                                     0
#define PHY_BB_CHANINFO_CTRL_CAPTURE_CHAN_INFO_LSB                                                     0
#define PHY_BB_CHANINFO_CTRL_CAPTURE_CHAN_INFO_MASK                                           0x00000001
#define PHY_BB_CHANINFO_CTRL_CAPTURE_CHAN_INFO_GET(x)                          (((x) & 0x00000001) >> 0)
#define PHY_BB_CHANINFO_CTRL_CAPTURE_CHAN_INFO_SET(x)                          (((x) << 0) & 0x00000001)
#define PHY_BB_CHANINFO_CTRL_DISABLE_CHANINFOMEM_MSB                                                   1
#define PHY_BB_CHANINFO_CTRL_DISABLE_CHANINFOMEM_LSB                                                   1
#define PHY_BB_CHANINFO_CTRL_DISABLE_CHANINFOMEM_MASK                                         0x00000002
#define PHY_BB_CHANINFO_CTRL_DISABLE_CHANINFOMEM_GET(x)                        (((x) & 0x00000002) >> 1)
#define PHY_BB_CHANINFO_CTRL_DISABLE_CHANINFOMEM_SET(x)                        (((x) << 1) & 0x00000002)
#define PHY_BB_CHANINFO_CTRL_CAPTURE_SOUNDING_PACKET_MSB                                               2
#define PHY_BB_CHANINFO_CTRL_CAPTURE_SOUNDING_PACKET_LSB                                               2
#define PHY_BB_CHANINFO_CTRL_CAPTURE_SOUNDING_PACKET_MASK                                     0x00000004
#define PHY_BB_CHANINFO_CTRL_CAPTURE_SOUNDING_PACKET_GET(x)                    (((x) & 0x00000004) >> 2)
#define PHY_BB_CHANINFO_CTRL_CAPTURE_SOUNDING_PACKET_SET(x)                    (((x) << 2) & 0x00000004)
#define PHY_BB_CHANINFO_CTRL_CHANINFOMEM_S2_READ_MSB                                                   3
#define PHY_BB_CHANINFO_CTRL_CHANINFOMEM_S2_READ_LSB                                                   3
#define PHY_BB_CHANINFO_CTRL_CHANINFOMEM_S2_READ_MASK                                         0x00000008
#define PHY_BB_CHANINFO_CTRL_CHANINFOMEM_S2_READ_GET(x)                        (((x) & 0x00000008) >> 3)
#define PHY_BB_CHANINFO_CTRL_CHANINFOMEM_S2_READ_SET(x)                        (((x) << 3) & 0x00000008)

/* macros for bb_sm_reg_map.BB_chan_info_noise_pwr */
#define PHY_BB_CHAN_INFO_NOISE_PWR_ADDRESS                                                    0x0000a374
#define PHY_BB_CHAN_INFO_NOISE_PWR_OFFSET                                                     0x00000174
#define PHY_BB_CHAN_INFO_NOISE_PWR_NOISE_POWER_MSB                                                    11
#define PHY_BB_CHAN_INFO_NOISE_PWR_NOISE_POWER_LSB                                                     0
#define PHY_BB_CHAN_INFO_NOISE_PWR_NOISE_POWER_MASK                                           0x00000fff
#define PHY_BB_CHAN_INFO_NOISE_PWR_NOISE_POWER_GET(x)                          (((x) & 0x00000fff) >> 0)

/* macros for bb_sm_reg_map.BB_chan_info_gain_diff */
#define PHY_BB_CHAN_INFO_GAIN_DIFF_ADDRESS                                                    0x0000a378
#define PHY_BB_CHAN_INFO_GAIN_DIFF_OFFSET                                                     0x00000178
#define PHY_BB_CHAN_INFO_GAIN_DIFF_FINE_PPM_MSB                                                       11
#define PHY_BB_CHAN_INFO_GAIN_DIFF_FINE_PPM_LSB                                                        0
#define PHY_BB_CHAN_INFO_GAIN_DIFF_FINE_PPM_MASK                                              0x00000fff
#define PHY_BB_CHAN_INFO_GAIN_DIFF_FINE_PPM_GET(x)                             (((x) & 0x00000fff) >> 0)
#define PHY_BB_CHAN_INFO_GAIN_DIFF_ANALOG_GAIN_DIFF_01_MSB                                            18
#define PHY_BB_CHAN_INFO_GAIN_DIFF_ANALOG_GAIN_DIFF_01_LSB                                            12
#define PHY_BB_CHAN_INFO_GAIN_DIFF_ANALOG_GAIN_DIFF_01_MASK                                   0x0007f000
#define PHY_BB_CHAN_INFO_GAIN_DIFF_ANALOG_GAIN_DIFF_01_GET(x)                 (((x) & 0x0007f000) >> 12)

/* macros for bb_sm_reg_map.BB_chan_info_fine_timing */
#define PHY_BB_CHAN_INFO_FINE_TIMING_ADDRESS                                                  0x0000a37c
#define PHY_BB_CHAN_INFO_FINE_TIMING_OFFSET                                                   0x0000017c
#define PHY_BB_CHAN_INFO_FINE_TIMING_COARSE_PPM_MSB                                                   11
#define PHY_BB_CHAN_INFO_FINE_TIMING_COARSE_PPM_LSB                                                    0
#define PHY_BB_CHAN_INFO_FINE_TIMING_COARSE_PPM_MASK                                          0x00000fff
#define PHY_BB_CHAN_INFO_FINE_TIMING_COARSE_PPM_GET(x)                         (((x) & 0x00000fff) >> 0)
#define PHY_BB_CHAN_INFO_FINE_TIMING_FINE_TIMING_MSB                                                  21
#define PHY_BB_CHAN_INFO_FINE_TIMING_FINE_TIMING_LSB                                                  12
#define PHY_BB_CHAN_INFO_FINE_TIMING_FINE_TIMING_MASK                                         0x003ff000
#define PHY_BB_CHAN_INFO_FINE_TIMING_FINE_TIMING_GET(x)                       (((x) & 0x003ff000) >> 12)

/* macros for bb_sm_reg_map.BB_chan_info_gain_b0 */
#define PHY_BB_CHAN_INFO_GAIN_B0_ADDRESS                                                      0x0000a380
#define PHY_BB_CHAN_INFO_GAIN_B0_OFFSET                                                       0x00000180
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_RSSI_0_MSB                                                  7
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_RSSI_0_LSB                                                  0
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_RSSI_0_MASK                                        0x000000ff
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_RSSI_0_GET(x)                       (((x) & 0x000000ff) >> 0)
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_RF_GAIN_0_MSB                                              15
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_RF_GAIN_0_LSB                                               8
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_RF_GAIN_0_MASK                                     0x0000ff00
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_RF_GAIN_0_GET(x)                    (((x) & 0x0000ff00) >> 8)
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_MB_GAIN_0_MSB                                              22
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_MB_GAIN_0_LSB                                              16
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_MB_GAIN_0_MASK                                     0x007f0000
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_MB_GAIN_0_GET(x)                   (((x) & 0x007f0000) >> 16)
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_XATTEN1_SW_0_MSB                                           23
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_XATTEN1_SW_0_LSB                                           23
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_XATTEN1_SW_0_MASK                                  0x00800000
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_XATTEN1_SW_0_GET(x)                (((x) & 0x00800000) >> 23)
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_XATTEN2_SW_0_MSB                                           24
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_XATTEN2_SW_0_LSB                                           24
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_XATTEN2_SW_0_MASK                                  0x01000000
#define PHY_BB_CHAN_INFO_GAIN_B0_CHAN_INFO_XATTEN2_SW_0_GET(x)                (((x) & 0x01000000) >> 24)

/* macros for bb_sm_reg_map.BB_sm_hist */
#define PHY_BB_SM_HIST_ADDRESS                                                                0x0000a384
#define PHY_BB_SM_HIST_OFFSET                                                                 0x00000184
#define PHY_BB_SM_HIST_SM_REC_EN_MSB                                                                   0
#define PHY_BB_SM_HIST_SM_REC_EN_LSB                                                                   0
#define PHY_BB_SM_HIST_SM_REC_EN_MASK                                                         0x00000001
#define PHY_BB_SM_HIST_SM_REC_EN_GET(x)                                        (((x) & 0x00000001) >> 0)
#define PHY_BB_SM_HIST_SM_REC_EN_SET(x)                                        (((x) << 0) & 0x00000001)
#define PHY_BB_SM_HIST_SM_REC_MODE_MSB                                                                 1
#define PHY_BB_SM_HIST_SM_REC_MODE_LSB                                                                 1
#define PHY_BB_SM_HIST_SM_REC_MODE_MASK                                                       0x00000002
#define PHY_BB_SM_HIST_SM_REC_MODE_GET(x)                                      (((x) & 0x00000002) >> 1)
#define PHY_BB_SM_HIST_SM_REC_MODE_SET(x)                                      (((x) << 1) & 0x00000002)
#define PHY_BB_SM_HIST_SM_REC_TIME_RES_MSB                                                             3
#define PHY_BB_SM_HIST_SM_REC_TIME_RES_LSB                                                             2
#define PHY_BB_SM_HIST_SM_REC_TIME_RES_MASK                                                   0x0000000c
#define PHY_BB_SM_HIST_SM_REC_TIME_RES_GET(x)                                  (((x) & 0x0000000c) >> 2)
#define PHY_BB_SM_HIST_SM_REC_TIME_RES_SET(x)                                  (((x) << 2) & 0x0000000c)
#define PHY_BB_SM_HIST_SM_REC_PART_EN_MSB                                                             11
#define PHY_BB_SM_HIST_SM_REC_PART_EN_LSB                                                              4
#define PHY_BB_SM_HIST_SM_REC_PART_EN_MASK                                                    0x00000ff0
#define PHY_BB_SM_HIST_SM_REC_PART_EN_GET(x)                                   (((x) & 0x00000ff0) >> 4)
#define PHY_BB_SM_HIST_SM_REC_PART_EN_SET(x)                                   (((x) << 4) & 0x00000ff0)
#define PHY_BB_SM_HIST_SM_REC_CHN_EN_MSB                                                              14
#define PHY_BB_SM_HIST_SM_REC_CHN_EN_LSB                                                              12
#define PHY_BB_SM_HIST_SM_REC_CHN_EN_MASK                                                     0x00007000
#define PHY_BB_SM_HIST_SM_REC_CHN_EN_GET(x)                                   (((x) & 0x00007000) >> 12)
#define PHY_BB_SM_HIST_SM_REC_CHN_EN_SET(x)                                   (((x) << 12) & 0x00007000)
#define PHY_BB_SM_HIST_SM_REC_DATA_NUM_MSB                                                            18
#define PHY_BB_SM_HIST_SM_REC_DATA_NUM_LSB                                                            15
#define PHY_BB_SM_HIST_SM_REC_DATA_NUM_MASK                                                   0x00078000
#define PHY_BB_SM_HIST_SM_REC_DATA_NUM_GET(x)                                 (((x) & 0x00078000) >> 15)
#define PHY_BB_SM_HIST_SM_REC_DATA_NUM_SET(x)                                 (((x) << 15) & 0x00078000)
#define PHY_BB_SM_HIST_SM_REC_AGC_SEL_MSB                                                             19
#define PHY_BB_SM_HIST_SM_REC_AGC_SEL_LSB                                                             19
#define PHY_BB_SM_HIST_SM_REC_AGC_SEL_MASK                                                    0x00080000
#define PHY_BB_SM_HIST_SM_REC_AGC_SEL_GET(x)                                  (((x) & 0x00080000) >> 19)
#define PHY_BB_SM_HIST_SM_REC_AGC_SEL_SET(x)                                  (((x) << 19) & 0x00080000)
#define PHY_BB_SM_HIST_SM_REC_MAC_TRIG_MSB                                                            22
#define PHY_BB_SM_HIST_SM_REC_MAC_TRIG_LSB                                                            20
#define PHY_BB_SM_HIST_SM_REC_MAC_TRIG_MASK                                                   0x00700000
#define PHY_BB_SM_HIST_SM_REC_MAC_TRIG_GET(x)                                 (((x) & 0x00700000) >> 20)
#define PHY_BB_SM_HIST_SM_REC_MAC_TRIG_SET(x)                                 (((x) << 20) & 0x00700000)
#define PHY_BB_SM_HIST_SM_REC_LAST_ADDR_MSB                                                           29
#define PHY_BB_SM_HIST_SM_REC_LAST_ADDR_LSB                                                           24
#define PHY_BB_SM_HIST_SM_REC_LAST_ADDR_MASK                                                  0x3f000000
#define PHY_BB_SM_HIST_SM_REC_LAST_ADDR_GET(x)                                (((x) & 0x3f000000) >> 24)

/* macros for bb_sm_reg_map.BB_scrambler_seed */
#define PHY_BB_SCRAMBLER_SEED_ADDRESS                                                         0x0000a390
#define PHY_BB_SCRAMBLER_SEED_OFFSET                                                          0x00000190
#define PHY_BB_SCRAMBLER_SEED_FIXED_SCRAMBLER_SEED_MSB                                                 6
#define PHY_BB_SCRAMBLER_SEED_FIXED_SCRAMBLER_SEED_LSB                                                 0
#define PHY_BB_SCRAMBLER_SEED_FIXED_SCRAMBLER_SEED_MASK                                       0x0000007f
#define PHY_BB_SCRAMBLER_SEED_FIXED_SCRAMBLER_SEED_GET(x)                      (((x) & 0x0000007f) >> 0)
#define PHY_BB_SCRAMBLER_SEED_FIXED_SCRAMBLER_SEED_SET(x)                      (((x) << 0) & 0x0000007f)

/* macros for bb_sm_reg_map.BB_bbb_tx_ctrl */
#define PHY_BB_BBB_TX_CTRL_ADDRESS                                                            0x0000a394
#define PHY_BB_BBB_TX_CTRL_OFFSET                                                             0x00000194
#define PHY_BB_BBB_TX_CTRL_DISABLE_SCRAMBLER_MSB                                                       0
#define PHY_BB_BBB_TX_CTRL_DISABLE_SCRAMBLER_LSB                                                       0
#define PHY_BB_BBB_TX_CTRL_DISABLE_SCRAMBLER_MASK                                             0x00000001
#define PHY_BB_BBB_TX_CTRL_DISABLE_SCRAMBLER_GET(x)                            (((x) & 0x00000001) >> 0)
#define PHY_BB_BBB_TX_CTRL_DISABLE_SCRAMBLER_SET(x)                            (((x) << 0) & 0x00000001)
#define PHY_BB_BBB_TX_CTRL_USE_SCRAMBLER_SEED_MSB                                                      1
#define PHY_BB_BBB_TX_CTRL_USE_SCRAMBLER_SEED_LSB                                                      1
#define PHY_BB_BBB_TX_CTRL_USE_SCRAMBLER_SEED_MASK                                            0x00000002
#define PHY_BB_BBB_TX_CTRL_USE_SCRAMBLER_SEED_GET(x)                           (((x) & 0x00000002) >> 1)
#define PHY_BB_BBB_TX_CTRL_USE_SCRAMBLER_SEED_SET(x)                           (((x) << 1) & 0x00000002)
#define PHY_BB_BBB_TX_CTRL_TX_DAC_SCALE_CCK_MSB                                                        3
#define PHY_BB_BBB_TX_CTRL_TX_DAC_SCALE_CCK_LSB                                                        2
#define PHY_BB_BBB_TX_CTRL_TX_DAC_SCALE_CCK_MASK                                              0x0000000c
#define PHY_BB_BBB_TX_CTRL_TX_DAC_SCALE_CCK_GET(x)                             (((x) & 0x0000000c) >> 2)
#define PHY_BB_BBB_TX_CTRL_TX_DAC_SCALE_CCK_SET(x)                             (((x) << 2) & 0x0000000c)
#define PHY_BB_BBB_TX_CTRL_TXFIR_JAPAN_CCK_MSB                                                         4
#define PHY_BB_BBB_TX_CTRL_TXFIR_JAPAN_CCK_LSB                                                         4
#define PHY_BB_BBB_TX_CTRL_TXFIR_JAPAN_CCK_MASK                                               0x00000010
#define PHY_BB_BBB_TX_CTRL_TXFIR_JAPAN_CCK_GET(x)                              (((x) & 0x00000010) >> 4)
#define PHY_BB_BBB_TX_CTRL_TXFIR_JAPAN_CCK_SET(x)                              (((x) << 4) & 0x00000010)
#define PHY_BB_BBB_TX_CTRL_ALLOW_1MBPS_SHORT_MSB                                                       5
#define PHY_BB_BBB_TX_CTRL_ALLOW_1MBPS_SHORT_LSB                                                       5
#define PHY_BB_BBB_TX_CTRL_ALLOW_1MBPS_SHORT_MASK                                             0x00000020
#define PHY_BB_BBB_TX_CTRL_ALLOW_1MBPS_SHORT_GET(x)                            (((x) & 0x00000020) >> 5)
#define PHY_BB_BBB_TX_CTRL_ALLOW_1MBPS_SHORT_SET(x)                            (((x) << 5) & 0x00000020)
#define PHY_BB_BBB_TX_CTRL_TX_CCK_DELAY_1_MSB                                                          8
#define PHY_BB_BBB_TX_CTRL_TX_CCK_DELAY_1_LSB                                                          6
#define PHY_BB_BBB_TX_CTRL_TX_CCK_DELAY_1_MASK                                                0x000001c0
#define PHY_BB_BBB_TX_CTRL_TX_CCK_DELAY_1_GET(x)                               (((x) & 0x000001c0) >> 6)
#define PHY_BB_BBB_TX_CTRL_TX_CCK_DELAY_1_SET(x)                               (((x) << 6) & 0x000001c0)
#define PHY_BB_BBB_TX_CTRL_TX_CCK_DELAY_2_MSB                                                         11
#define PHY_BB_BBB_TX_CTRL_TX_CCK_DELAY_2_LSB                                                          9
#define PHY_BB_BBB_TX_CTRL_TX_CCK_DELAY_2_MASK                                                0x00000e00
#define PHY_BB_BBB_TX_CTRL_TX_CCK_DELAY_2_GET(x)                               (((x) & 0x00000e00) >> 9)
#define PHY_BB_BBB_TX_CTRL_TX_CCK_DELAY_2_SET(x)                               (((x) << 9) & 0x00000e00)

/* macros for bb_sm_reg_map.BB_bbb_txfir_0 */
#define PHY_BB_BBB_TXFIR_0_ADDRESS                                                            0x0000a398
#define PHY_BB_BBB_TXFIR_0_OFFSET                                                             0x00000198
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H0_MSB                                                          3
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H0_LSB                                                          0
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H0_MASK                                                0x0000000f
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H0_GET(x)                               (((x) & 0x0000000f) >> 0)
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H0_SET(x)                               (((x) << 0) & 0x0000000f)
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H1_MSB                                                         11
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H1_LSB                                                          8
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H1_MASK                                                0x00000f00
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H1_GET(x)                               (((x) & 0x00000f00) >> 8)
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H1_SET(x)                               (((x) << 8) & 0x00000f00)
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H2_MSB                                                         20
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H2_LSB                                                         16
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H2_MASK                                                0x001f0000
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H2_GET(x)                              (((x) & 0x001f0000) >> 16)
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H2_SET(x)                              (((x) << 16) & 0x001f0000)
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H3_MSB                                                         28
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H3_LSB                                                         24
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H3_MASK                                                0x1f000000
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H3_GET(x)                              (((x) & 0x1f000000) >> 24)
#define PHY_BB_BBB_TXFIR_0_TXFIR_COEFF_H3_SET(x)                              (((x) << 24) & 0x1f000000)

/* macros for bb_sm_reg_map.BB_bbb_txfir_1 */
#define PHY_BB_BBB_TXFIR_1_ADDRESS                                                            0x0000a39c
#define PHY_BB_BBB_TXFIR_1_OFFSET                                                             0x0000019c
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H4_MSB                                                          5
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H4_LSB                                                          0
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H4_MASK                                                0x0000003f
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H4_GET(x)                               (((x) & 0x0000003f) >> 0)
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H4_SET(x)                               (((x) << 0) & 0x0000003f)
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H5_MSB                                                         13
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H5_LSB                                                          8
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H5_MASK                                                0x00003f00
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H5_GET(x)                               (((x) & 0x00003f00) >> 8)
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H5_SET(x)                               (((x) << 8) & 0x00003f00)
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H6_MSB                                                         22
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H6_LSB                                                         16
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H6_MASK                                                0x007f0000
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H6_GET(x)                              (((x) & 0x007f0000) >> 16)
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H6_SET(x)                              (((x) << 16) & 0x007f0000)
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H7_MSB                                                         30
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H7_LSB                                                         24
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H7_MASK                                                0x7f000000
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H7_GET(x)                              (((x) & 0x7f000000) >> 24)
#define PHY_BB_BBB_TXFIR_1_TXFIR_COEFF_H7_SET(x)                              (((x) << 24) & 0x7f000000)

/* macros for bb_sm_reg_map.BB_bbb_txfir_2 */
#define PHY_BB_BBB_TXFIR_2_ADDRESS                                                            0x0000a3a0
#define PHY_BB_BBB_TXFIR_2_OFFSET                                                             0x000001a0
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H8_MSB                                                          7
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H8_LSB                                                          0
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H8_MASK                                                0x000000ff
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H8_GET(x)                               (((x) & 0x000000ff) >> 0)
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H8_SET(x)                               (((x) << 0) & 0x000000ff)
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H9_MSB                                                         15
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H9_LSB                                                          8
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H9_MASK                                                0x0000ff00
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H9_GET(x)                               (((x) & 0x0000ff00) >> 8)
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H9_SET(x)                               (((x) << 8) & 0x0000ff00)
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H10_MSB                                                        23
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H10_LSB                                                        16
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H10_MASK                                               0x00ff0000
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H10_GET(x)                             (((x) & 0x00ff0000) >> 16)
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H10_SET(x)                             (((x) << 16) & 0x00ff0000)
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H11_MSB                                                        31
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H11_LSB                                                        24
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H11_MASK                                               0xff000000
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H11_GET(x)                             (((x) & 0xff000000) >> 24)
#define PHY_BB_BBB_TXFIR_2_TXFIR_COEFF_H11_SET(x)                             (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_heavy_clip_ctrl */
#define PHY_BB_HEAVY_CLIP_CTRL_ADDRESS                                                        0x0000a3a4
#define PHY_BB_HEAVY_CLIP_CTRL_OFFSET                                                         0x000001a4
#define PHY_BB_HEAVY_CLIP_CTRL_CF_HEAVY_CLIP_ENABLE_MSB                                                8
#define PHY_BB_HEAVY_CLIP_CTRL_CF_HEAVY_CLIP_ENABLE_LSB                                                0
#define PHY_BB_HEAVY_CLIP_CTRL_CF_HEAVY_CLIP_ENABLE_MASK                                      0x000001ff
#define PHY_BB_HEAVY_CLIP_CTRL_CF_HEAVY_CLIP_ENABLE_GET(x)                     (((x) & 0x000001ff) >> 0)
#define PHY_BB_HEAVY_CLIP_CTRL_CF_HEAVY_CLIP_ENABLE_SET(x)                     (((x) << 0) & 0x000001ff)
#define PHY_BB_HEAVY_CLIP_CTRL_PRE_EMP_HT40_ENABLE_MSB                                                 9
#define PHY_BB_HEAVY_CLIP_CTRL_PRE_EMP_HT40_ENABLE_LSB                                                 9
#define PHY_BB_HEAVY_CLIP_CTRL_PRE_EMP_HT40_ENABLE_MASK                                       0x00000200
#define PHY_BB_HEAVY_CLIP_CTRL_PRE_EMP_HT40_ENABLE_GET(x)                      (((x) & 0x00000200) >> 9)
#define PHY_BB_HEAVY_CLIP_CTRL_PRE_EMP_HT40_ENABLE_SET(x)                      (((x) << 9) & 0x00000200)
#define PHY_BB_HEAVY_CLIP_CTRL_HEAVY_CLIP_FACTOR_XR_MSB                                               17
#define PHY_BB_HEAVY_CLIP_CTRL_HEAVY_CLIP_FACTOR_XR_LSB                                               10
#define PHY_BB_HEAVY_CLIP_CTRL_HEAVY_CLIP_FACTOR_XR_MASK                                      0x0003fc00
#define PHY_BB_HEAVY_CLIP_CTRL_HEAVY_CLIP_FACTOR_XR_GET(x)                    (((x) & 0x0003fc00) >> 10)
#define PHY_BB_HEAVY_CLIP_CTRL_HEAVY_CLIP_FACTOR_XR_SET(x)                    (((x) << 10) & 0x0003fc00)

/* macros for bb_sm_reg_map.BB_heavy_clip_20 */
#define PHY_BB_HEAVY_CLIP_20_ADDRESS                                                          0x0000a3a8
#define PHY_BB_HEAVY_CLIP_20_OFFSET                                                           0x000001a8
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_0_MSB                                                   7
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_0_LSB                                                   0
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_0_MASK                                         0x000000ff
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_0_GET(x)                        (((x) & 0x000000ff) >> 0)
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_0_SET(x)                        (((x) << 0) & 0x000000ff)
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_1_MSB                                                  15
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_1_LSB                                                   8
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_1_MASK                                         0x0000ff00
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_1_GET(x)                        (((x) & 0x0000ff00) >> 8)
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_1_SET(x)                        (((x) << 8) & 0x0000ff00)
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_2_MSB                                                  23
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_2_LSB                                                  16
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_2_MASK                                         0x00ff0000
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_2_GET(x)                       (((x) & 0x00ff0000) >> 16)
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_2_SET(x)                       (((x) << 16) & 0x00ff0000)
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_3_MSB                                                  31
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_3_LSB                                                  24
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_3_MASK                                         0xff000000
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_3_GET(x)                       (((x) & 0xff000000) >> 24)
#define PHY_BB_HEAVY_CLIP_20_HEAVY_CLIP_FACTOR_3_SET(x)                       (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_heavy_clip_40 */
#define PHY_BB_HEAVY_CLIP_40_ADDRESS                                                          0x0000a3ac
#define PHY_BB_HEAVY_CLIP_40_OFFSET                                                           0x000001ac
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_4_MSB                                                   7
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_4_LSB                                                   0
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_4_MASK                                         0x000000ff
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_4_GET(x)                        (((x) & 0x000000ff) >> 0)
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_4_SET(x)                        (((x) << 0) & 0x000000ff)
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_5_MSB                                                  15
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_5_LSB                                                   8
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_5_MASK                                         0x0000ff00
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_5_GET(x)                        (((x) & 0x0000ff00) >> 8)
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_5_SET(x)                        (((x) << 8) & 0x0000ff00)
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_6_MSB                                                  23
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_6_LSB                                                  16
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_6_MASK                                         0x00ff0000
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_6_GET(x)                       (((x) & 0x00ff0000) >> 16)
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_6_SET(x)                       (((x) << 16) & 0x00ff0000)
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_7_MSB                                                  31
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_7_LSB                                                  24
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_7_MASK                                         0xff000000
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_7_GET(x)                       (((x) & 0xff000000) >> 24)
#define PHY_BB_HEAVY_CLIP_40_HEAVY_CLIP_FACTOR_7_SET(x)                       (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_illegal_tx_rate */
#define PHY_BB_ILLEGAL_TX_RATE_ADDRESS                                                        0x0000a3b0
#define PHY_BB_ILLEGAL_TX_RATE_OFFSET                                                         0x000001b0
#define PHY_BB_ILLEGAL_TX_RATE_ILLEGAL_TX_RATE_MSB                                                     0
#define PHY_BB_ILLEGAL_TX_RATE_ILLEGAL_TX_RATE_LSB                                                     0
#define PHY_BB_ILLEGAL_TX_RATE_ILLEGAL_TX_RATE_MASK                                           0x00000001
#define PHY_BB_ILLEGAL_TX_RATE_ILLEGAL_TX_RATE_GET(x)                          (((x) & 0x00000001) >> 0)

/* macros for bb_sm_reg_map.BB_powertx_rate1 */
#define PHY_BB_POWERTX_RATE1_ADDRESS                                                          0x0000a3c0
#define PHY_BB_POWERTX_RATE1_OFFSET                                                           0x000001c0
#define PHY_BB_POWERTX_RATE1_POWERTX_0_MSB                                                             5
#define PHY_BB_POWERTX_RATE1_POWERTX_0_LSB                                                             0
#define PHY_BB_POWERTX_RATE1_POWERTX_0_MASK                                                   0x0000003f
#define PHY_BB_POWERTX_RATE1_POWERTX_0_GET(x)                                  (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE1_POWERTX_0_SET(x)                                  (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE1_POWERTX_1_MSB                                                            13
#define PHY_BB_POWERTX_RATE1_POWERTX_1_LSB                                                             8
#define PHY_BB_POWERTX_RATE1_POWERTX_1_MASK                                                   0x00003f00
#define PHY_BB_POWERTX_RATE1_POWERTX_1_GET(x)                                  (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE1_POWERTX_1_SET(x)                                  (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE1_POWERTX_2_MSB                                                            21
#define PHY_BB_POWERTX_RATE1_POWERTX_2_LSB                                                            16
#define PHY_BB_POWERTX_RATE1_POWERTX_2_MASK                                                   0x003f0000
#define PHY_BB_POWERTX_RATE1_POWERTX_2_GET(x)                                 (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE1_POWERTX_2_SET(x)                                 (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE1_POWERTX_3_MSB                                                            29
#define PHY_BB_POWERTX_RATE1_POWERTX_3_LSB                                                            24
#define PHY_BB_POWERTX_RATE1_POWERTX_3_MASK                                                   0x3f000000
#define PHY_BB_POWERTX_RATE1_POWERTX_3_GET(x)                                 (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE1_POWERTX_3_SET(x)                                 (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate2 */
#define PHY_BB_POWERTX_RATE2_ADDRESS                                                          0x0000a3c4
#define PHY_BB_POWERTX_RATE2_OFFSET                                                           0x000001c4
#define PHY_BB_POWERTX_RATE2_POWERTX_4_MSB                                                             5
#define PHY_BB_POWERTX_RATE2_POWERTX_4_LSB                                                             0
#define PHY_BB_POWERTX_RATE2_POWERTX_4_MASK                                                   0x0000003f
#define PHY_BB_POWERTX_RATE2_POWERTX_4_GET(x)                                  (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE2_POWERTX_4_SET(x)                                  (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE2_POWERTX_5_MSB                                                            13
#define PHY_BB_POWERTX_RATE2_POWERTX_5_LSB                                                             8
#define PHY_BB_POWERTX_RATE2_POWERTX_5_MASK                                                   0x00003f00
#define PHY_BB_POWERTX_RATE2_POWERTX_5_GET(x)                                  (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE2_POWERTX_5_SET(x)                                  (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE2_POWERTX_6_MSB                                                            21
#define PHY_BB_POWERTX_RATE2_POWERTX_6_LSB                                                            16
#define PHY_BB_POWERTX_RATE2_POWERTX_6_MASK                                                   0x003f0000
#define PHY_BB_POWERTX_RATE2_POWERTX_6_GET(x)                                 (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE2_POWERTX_6_SET(x)                                 (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE2_POWERTX_7_MSB                                                            29
#define PHY_BB_POWERTX_RATE2_POWERTX_7_LSB                                                            24
#define PHY_BB_POWERTX_RATE2_POWERTX_7_MASK                                                   0x3f000000
#define PHY_BB_POWERTX_RATE2_POWERTX_7_GET(x)                                 (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE2_POWERTX_7_SET(x)                                 (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate3 */
#define PHY_BB_POWERTX_RATE3_ADDRESS                                                          0x0000a3c8
#define PHY_BB_POWERTX_RATE3_OFFSET                                                           0x000001c8
#define PHY_BB_POWERTX_RATE3_POWERTX_1L_MSB                                                            5
#define PHY_BB_POWERTX_RATE3_POWERTX_1L_LSB                                                            0
#define PHY_BB_POWERTX_RATE3_POWERTX_1L_MASK                                                  0x0000003f
#define PHY_BB_POWERTX_RATE3_POWERTX_1L_GET(x)                                 (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE3_POWERTX_1L_SET(x)                                 (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE3_POWERTX_2L_MSB                                                           21
#define PHY_BB_POWERTX_RATE3_POWERTX_2L_LSB                                                           16
#define PHY_BB_POWERTX_RATE3_POWERTX_2L_MASK                                                  0x003f0000
#define PHY_BB_POWERTX_RATE3_POWERTX_2L_GET(x)                                (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE3_POWERTX_2L_SET(x)                                (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE3_POWERTX_2S_MSB                                                           29
#define PHY_BB_POWERTX_RATE3_POWERTX_2S_LSB                                                           24
#define PHY_BB_POWERTX_RATE3_POWERTX_2S_MASK                                                  0x3f000000
#define PHY_BB_POWERTX_RATE3_POWERTX_2S_GET(x)                                (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE3_POWERTX_2S_SET(x)                                (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate4 */
#define PHY_BB_POWERTX_RATE4_ADDRESS                                                          0x0000a3cc
#define PHY_BB_POWERTX_RATE4_OFFSET                                                           0x000001cc
#define PHY_BB_POWERTX_RATE4_POWERTX_55L_MSB                                                           5
#define PHY_BB_POWERTX_RATE4_POWERTX_55L_LSB                                                           0
#define PHY_BB_POWERTX_RATE4_POWERTX_55L_MASK                                                 0x0000003f
#define PHY_BB_POWERTX_RATE4_POWERTX_55L_GET(x)                                (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE4_POWERTX_55L_SET(x)                                (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE4_POWERTX_55S_MSB                                                          13
#define PHY_BB_POWERTX_RATE4_POWERTX_55S_LSB                                                           8
#define PHY_BB_POWERTX_RATE4_POWERTX_55S_MASK                                                 0x00003f00
#define PHY_BB_POWERTX_RATE4_POWERTX_55S_GET(x)                                (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE4_POWERTX_55S_SET(x)                                (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE4_POWERTX_11L_MSB                                                          21
#define PHY_BB_POWERTX_RATE4_POWERTX_11L_LSB                                                          16
#define PHY_BB_POWERTX_RATE4_POWERTX_11L_MASK                                                 0x003f0000
#define PHY_BB_POWERTX_RATE4_POWERTX_11L_GET(x)                               (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE4_POWERTX_11L_SET(x)                               (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE4_POWERTX_11S_MSB                                                          29
#define PHY_BB_POWERTX_RATE4_POWERTX_11S_LSB                                                          24
#define PHY_BB_POWERTX_RATE4_POWERTX_11S_MASK                                                 0x3f000000
#define PHY_BB_POWERTX_RATE4_POWERTX_11S_GET(x)                               (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE4_POWERTX_11S_SET(x)                               (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate5 */
#define PHY_BB_POWERTX_RATE5_ADDRESS                                                          0x0000a3d0
#define PHY_BB_POWERTX_RATE5_OFFSET                                                           0x000001d0
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_0_MSB                                                         5
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_0_LSB                                                         0
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_0_MASK                                               0x0000003f
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_0_GET(x)                              (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_0_SET(x)                              (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_1_MSB                                                        13
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_1_LSB                                                         8
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_1_MASK                                               0x00003f00
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_1_GET(x)                              (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_1_SET(x)                              (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_2_MSB                                                        21
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_2_LSB                                                        16
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_2_MASK                                               0x003f0000
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_2_GET(x)                             (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_2_SET(x)                             (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_3_MSB                                                        29
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_3_LSB                                                        24
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_3_MASK                                               0x3f000000
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_3_GET(x)                             (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE5_POWERTXHT20_3_SET(x)                             (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate6 */
#define PHY_BB_POWERTX_RATE6_ADDRESS                                                          0x0000a3d4
#define PHY_BB_POWERTX_RATE6_OFFSET                                                           0x000001d4
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_4_MSB                                                         5
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_4_LSB                                                         0
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_4_MASK                                               0x0000003f
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_4_GET(x)                              (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_4_SET(x)                              (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_5_MSB                                                        13
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_5_LSB                                                         8
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_5_MASK                                               0x00003f00
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_5_GET(x)                              (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_5_SET(x)                              (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_6_MSB                                                        21
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_6_LSB                                                        16
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_6_MASK                                               0x003f0000
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_6_GET(x)                             (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_6_SET(x)                             (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_7_MSB                                                        29
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_7_LSB                                                        24
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_7_MASK                                               0x3f000000
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_7_GET(x)                             (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE6_POWERTXHT20_7_SET(x)                             (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate7 */
#define PHY_BB_POWERTX_RATE7_ADDRESS                                                          0x0000a3d8
#define PHY_BB_POWERTX_RATE7_OFFSET                                                           0x000001d8
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_0_MSB                                                         5
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_0_LSB                                                         0
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_0_MASK                                               0x0000003f
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_0_GET(x)                              (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_0_SET(x)                              (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_1_MSB                                                        13
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_1_LSB                                                         8
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_1_MASK                                               0x00003f00
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_1_GET(x)                              (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_1_SET(x)                              (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_2_MSB                                                        21
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_2_LSB                                                        16
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_2_MASK                                               0x003f0000
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_2_GET(x)                             (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_2_SET(x)                             (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_3_MSB                                                        29
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_3_LSB                                                        24
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_3_MASK                                               0x3f000000
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_3_GET(x)                             (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE7_POWERTXHT40_3_SET(x)                             (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate8 */
#define PHY_BB_POWERTX_RATE8_ADDRESS                                                          0x0000a3dc
#define PHY_BB_POWERTX_RATE8_OFFSET                                                           0x000001dc
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_4_MSB                                                         5
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_4_LSB                                                         0
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_4_MASK                                               0x0000003f
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_4_GET(x)                              (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_4_SET(x)                              (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_5_MSB                                                        13
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_5_LSB                                                         8
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_5_MASK                                               0x00003f00
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_5_GET(x)                              (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_5_SET(x)                              (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_6_MSB                                                        21
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_6_LSB                                                        16
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_6_MASK                                               0x003f0000
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_6_GET(x)                             (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_6_SET(x)                             (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_7_MSB                                                        29
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_7_LSB                                                        24
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_7_MASK                                               0x3f000000
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_7_GET(x)                             (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE8_POWERTXHT40_7_SET(x)                             (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate9 */
#define PHY_BB_POWERTX_RATE9_ADDRESS                                                          0x0000a3e0
#define PHY_BB_POWERTX_RATE9_OFFSET                                                           0x000001e0
#define PHY_BB_POWERTX_RATE9_POWERTX_DUP40_CCK_MSB                                                     5
#define PHY_BB_POWERTX_RATE9_POWERTX_DUP40_CCK_LSB                                                     0
#define PHY_BB_POWERTX_RATE9_POWERTX_DUP40_CCK_MASK                                           0x0000003f
#define PHY_BB_POWERTX_RATE9_POWERTX_DUP40_CCK_GET(x)                          (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE9_POWERTX_DUP40_CCK_SET(x)                          (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE9_POWERTX_DUP40_OFDM_MSB                                                   13
#define PHY_BB_POWERTX_RATE9_POWERTX_DUP40_OFDM_LSB                                                    8
#define PHY_BB_POWERTX_RATE9_POWERTX_DUP40_OFDM_MASK                                          0x00003f00
#define PHY_BB_POWERTX_RATE9_POWERTX_DUP40_OFDM_GET(x)                         (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE9_POWERTX_DUP40_OFDM_SET(x)                         (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE9_POWERTX_EXT20_CCK_MSB                                                    21
#define PHY_BB_POWERTX_RATE9_POWERTX_EXT20_CCK_LSB                                                    16
#define PHY_BB_POWERTX_RATE9_POWERTX_EXT20_CCK_MASK                                           0x003f0000
#define PHY_BB_POWERTX_RATE9_POWERTX_EXT20_CCK_GET(x)                         (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE9_POWERTX_EXT20_CCK_SET(x)                         (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE9_POWERTX_EXT20_OFDM_MSB                                                   29
#define PHY_BB_POWERTX_RATE9_POWERTX_EXT20_OFDM_LSB                                                   24
#define PHY_BB_POWERTX_RATE9_POWERTX_EXT20_OFDM_MASK                                          0x3f000000
#define PHY_BB_POWERTX_RATE9_POWERTX_EXT20_OFDM_GET(x)                        (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE9_POWERTX_EXT20_OFDM_SET(x)                        (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate10 */
#define PHY_BB_POWERTX_RATE10_ADDRESS                                                         0x0000a3e4
#define PHY_BB_POWERTX_RATE10_OFFSET                                                          0x000001e4
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_8_MSB                                                        5
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_8_LSB                                                        0
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_8_MASK                                              0x0000003f
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_8_GET(x)                             (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_8_SET(x)                             (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_9_MSB                                                       13
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_9_LSB                                                        8
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_9_MASK                                              0x00003f00
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_9_GET(x)                             (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_9_SET(x)                             (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_10_MSB                                                      21
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_10_LSB                                                      16
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_10_MASK                                             0x003f0000
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_10_GET(x)                           (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_10_SET(x)                           (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_11_MSB                                                      29
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_11_LSB                                                      24
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_11_MASK                                             0x3f000000
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_11_GET(x)                           (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE10_POWERTXHT20_11_SET(x)                           (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate11 */
#define PHY_BB_POWERTX_RATE11_ADDRESS                                                         0x0000a3e8
#define PHY_BB_POWERTX_RATE11_OFFSET                                                          0x000001e8
#define PHY_BB_POWERTX_RATE11_POWERTXHT20_12_MSB                                                       5
#define PHY_BB_POWERTX_RATE11_POWERTXHT20_12_LSB                                                       0
#define PHY_BB_POWERTX_RATE11_POWERTXHT20_12_MASK                                             0x0000003f
#define PHY_BB_POWERTX_RATE11_POWERTXHT20_12_GET(x)                            (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE11_POWERTXHT20_12_SET(x)                            (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE11_POWERTXHT20_13_MSB                                                      13
#define PHY_BB_POWERTX_RATE11_POWERTXHT20_13_LSB                                                       8
#define PHY_BB_POWERTX_RATE11_POWERTXHT20_13_MASK                                             0x00003f00
#define PHY_BB_POWERTX_RATE11_POWERTXHT20_13_GET(x)                            (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE11_POWERTXHT20_13_SET(x)                            (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE11_POWERTXHT40_12_MSB                                                      21
#define PHY_BB_POWERTX_RATE11_POWERTXHT40_12_LSB                                                      16
#define PHY_BB_POWERTX_RATE11_POWERTXHT40_12_MASK                                             0x003f0000
#define PHY_BB_POWERTX_RATE11_POWERTXHT40_12_GET(x)                           (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE11_POWERTXHT40_12_SET(x)                           (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE11_POWERTXHT40_13_MSB                                                      29
#define PHY_BB_POWERTX_RATE11_POWERTXHT40_13_LSB                                                      24
#define PHY_BB_POWERTX_RATE11_POWERTXHT40_13_MASK                                             0x3f000000
#define PHY_BB_POWERTX_RATE11_POWERTXHT40_13_GET(x)                           (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE11_POWERTXHT40_13_SET(x)                           (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_rate12 */
#define PHY_BB_POWERTX_RATE12_ADDRESS                                                         0x0000a3ec
#define PHY_BB_POWERTX_RATE12_OFFSET                                                          0x000001ec
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_8_MSB                                                        5
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_8_LSB                                                        0
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_8_MASK                                              0x0000003f
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_8_GET(x)                             (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_8_SET(x)                             (((x) << 0) & 0x0000003f)
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_9_MSB                                                       13
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_9_LSB                                                        8
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_9_MASK                                              0x00003f00
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_9_GET(x)                             (((x) & 0x00003f00) >> 8)
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_9_SET(x)                             (((x) << 8) & 0x00003f00)
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_10_MSB                                                      21
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_10_LSB                                                      16
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_10_MASK                                             0x003f0000
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_10_GET(x)                           (((x) & 0x003f0000) >> 16)
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_10_SET(x)                           (((x) << 16) & 0x003f0000)
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_11_MSB                                                      29
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_11_LSB                                                      24
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_11_MASK                                             0x3f000000
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_11_GET(x)                           (((x) & 0x3f000000) >> 24)
#define PHY_BB_POWERTX_RATE12_POWERTXHT40_11_SET(x)                           (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_powertx_max */
#define PHY_BB_POWERTX_MAX_ADDRESS                                                            0x0000a3f0
#define PHY_BB_POWERTX_MAX_OFFSET                                                             0x000001f0
#define PHY_BB_POWERTX_MAX_USE_PER_PACKET_POWERTX_MAX_MSB                                              6
#define PHY_BB_POWERTX_MAX_USE_PER_PACKET_POWERTX_MAX_LSB                                              6
#define PHY_BB_POWERTX_MAX_USE_PER_PACKET_POWERTX_MAX_MASK                                    0x00000040
#define PHY_BB_POWERTX_MAX_USE_PER_PACKET_POWERTX_MAX_GET(x)                   (((x) & 0x00000040) >> 6)
#define PHY_BB_POWERTX_MAX_USE_PER_PACKET_POWERTX_MAX_SET(x)                   (((x) << 6) & 0x00000040)
#define PHY_BB_POWERTX_MAX_USE_PER_PACKET_OLPC_GAIN_DELTA_ADJ_MSB                                      7
#define PHY_BB_POWERTX_MAX_USE_PER_PACKET_OLPC_GAIN_DELTA_ADJ_LSB                                      7
#define PHY_BB_POWERTX_MAX_USE_PER_PACKET_OLPC_GAIN_DELTA_ADJ_MASK                            0x00000080
#define PHY_BB_POWERTX_MAX_USE_PER_PACKET_OLPC_GAIN_DELTA_ADJ_GET(x)           (((x) & 0x00000080) >> 7)
#define PHY_BB_POWERTX_MAX_USE_PER_PACKET_OLPC_GAIN_DELTA_ADJ_SET(x)           (((x) << 7) & 0x00000080)

/* macros for bb_sm_reg_map.BB_powertx_sub */
#define PHY_BB_POWERTX_SUB_ADDRESS                                                            0x0000a3f4
#define PHY_BB_POWERTX_SUB_OFFSET                                                             0x000001f4
#define PHY_BB_POWERTX_SUB_POWERTX_SUB_FOR_2CHAIN_MSB                                                  5
#define PHY_BB_POWERTX_SUB_POWERTX_SUB_FOR_2CHAIN_LSB                                                  0
#define PHY_BB_POWERTX_SUB_POWERTX_SUB_FOR_2CHAIN_MASK                                        0x0000003f
#define PHY_BB_POWERTX_SUB_POWERTX_SUB_FOR_2CHAIN_GET(x)                       (((x) & 0x0000003f) >> 0)
#define PHY_BB_POWERTX_SUB_POWERTX_SUB_FOR_2CHAIN_SET(x)                       (((x) << 0) & 0x0000003f)

/* macros for bb_sm_reg_map.BB_tpc_1 */
#define PHY_BB_TPC_1_ADDRESS                                                                  0x0000a3f8
#define PHY_BB_TPC_1_OFFSET                                                                   0x000001f8
#define PHY_BB_TPC_1_FORCE_DAC_GAIN_MSB                                                                0
#define PHY_BB_TPC_1_FORCE_DAC_GAIN_LSB                                                                0
#define PHY_BB_TPC_1_FORCE_DAC_GAIN_MASK                                                      0x00000001
#define PHY_BB_TPC_1_FORCE_DAC_GAIN_GET(x)                                     (((x) & 0x00000001) >> 0)
#define PHY_BB_TPC_1_FORCE_DAC_GAIN_SET(x)                                     (((x) << 0) & 0x00000001)
#define PHY_BB_TPC_1_FORCED_DAC_GAIN_MSB                                                               5
#define PHY_BB_TPC_1_FORCED_DAC_GAIN_LSB                                                               1
#define PHY_BB_TPC_1_FORCED_DAC_GAIN_MASK                                                     0x0000003e
#define PHY_BB_TPC_1_FORCED_DAC_GAIN_GET(x)                                    (((x) & 0x0000003e) >> 1)
#define PHY_BB_TPC_1_FORCED_DAC_GAIN_SET(x)                                    (((x) << 1) & 0x0000003e)
#define PHY_BB_TPC_1_PD_DC_OFFSET_TARGET_MSB                                                          13
#define PHY_BB_TPC_1_PD_DC_OFFSET_TARGET_LSB                                                           6
#define PHY_BB_TPC_1_PD_DC_OFFSET_TARGET_MASK                                                 0x00003fc0
#define PHY_BB_TPC_1_PD_DC_OFFSET_TARGET_GET(x)                                (((x) & 0x00003fc0) >> 6)
#define PHY_BB_TPC_1_PD_DC_OFFSET_TARGET_SET(x)                                (((x) << 6) & 0x00003fc0)
#define PHY_BB_TPC_1_NUM_PD_GAIN_MSB                                                                  15
#define PHY_BB_TPC_1_NUM_PD_GAIN_LSB                                                                  14
#define PHY_BB_TPC_1_NUM_PD_GAIN_MASK                                                         0x0000c000
#define PHY_BB_TPC_1_NUM_PD_GAIN_GET(x)                                       (((x) & 0x0000c000) >> 14)
#define PHY_BB_TPC_1_NUM_PD_GAIN_SET(x)                                       (((x) << 14) & 0x0000c000)
#define PHY_BB_TPC_1_PD_GAIN_SETTING1_MSB                                                             17
#define PHY_BB_TPC_1_PD_GAIN_SETTING1_LSB                                                             16
#define PHY_BB_TPC_1_PD_GAIN_SETTING1_MASK                                                    0x00030000
#define PHY_BB_TPC_1_PD_GAIN_SETTING1_GET(x)                                  (((x) & 0x00030000) >> 16)
#define PHY_BB_TPC_1_PD_GAIN_SETTING1_SET(x)                                  (((x) << 16) & 0x00030000)
#define PHY_BB_TPC_1_PD_GAIN_SETTING2_MSB                                                             19
#define PHY_BB_TPC_1_PD_GAIN_SETTING2_LSB                                                             18
#define PHY_BB_TPC_1_PD_GAIN_SETTING2_MASK                                                    0x000c0000
#define PHY_BB_TPC_1_PD_GAIN_SETTING2_GET(x)                                  (((x) & 0x000c0000) >> 18)
#define PHY_BB_TPC_1_PD_GAIN_SETTING2_SET(x)                                  (((x) << 18) & 0x000c0000)
#define PHY_BB_TPC_1_PD_GAIN_SETTING3_MSB                                                             21
#define PHY_BB_TPC_1_PD_GAIN_SETTING3_LSB                                                             20
#define PHY_BB_TPC_1_PD_GAIN_SETTING3_MASK                                                    0x00300000
#define PHY_BB_TPC_1_PD_GAIN_SETTING3_GET(x)                                  (((x) & 0x00300000) >> 20)
#define PHY_BB_TPC_1_PD_GAIN_SETTING3_SET(x)                                  (((x) << 20) & 0x00300000)
#define PHY_BB_TPC_1_ENABLE_PD_CALIBRATE_MSB                                                          22
#define PHY_BB_TPC_1_ENABLE_PD_CALIBRATE_LSB                                                          22
#define PHY_BB_TPC_1_ENABLE_PD_CALIBRATE_MASK                                                 0x00400000
#define PHY_BB_TPC_1_ENABLE_PD_CALIBRATE_GET(x)                               (((x) & 0x00400000) >> 22)
#define PHY_BB_TPC_1_ENABLE_PD_CALIBRATE_SET(x)                               (((x) << 22) & 0x00400000)
#define PHY_BB_TPC_1_PD_CALIBRATE_WAIT_MSB                                                            28
#define PHY_BB_TPC_1_PD_CALIBRATE_WAIT_LSB                                                            23
#define PHY_BB_TPC_1_PD_CALIBRATE_WAIT_MASK                                                   0x1f800000
#define PHY_BB_TPC_1_PD_CALIBRATE_WAIT_GET(x)                                 (((x) & 0x1f800000) >> 23)
#define PHY_BB_TPC_1_PD_CALIBRATE_WAIT_SET(x)                                 (((x) << 23) & 0x1f800000)
#define PHY_BB_TPC_1_FORCE_PDADC_GAIN_MSB                                                             29
#define PHY_BB_TPC_1_FORCE_PDADC_GAIN_LSB                                                             29
#define PHY_BB_TPC_1_FORCE_PDADC_GAIN_MASK                                                    0x20000000
#define PHY_BB_TPC_1_FORCE_PDADC_GAIN_GET(x)                                  (((x) & 0x20000000) >> 29)
#define PHY_BB_TPC_1_FORCE_PDADC_GAIN_SET(x)                                  (((x) << 29) & 0x20000000)
#define PHY_BB_TPC_1_FORCED_PDADC_GAIN_MSB                                                            31
#define PHY_BB_TPC_1_FORCED_PDADC_GAIN_LSB                                                            30
#define PHY_BB_TPC_1_FORCED_PDADC_GAIN_MASK                                                   0xc0000000
#define PHY_BB_TPC_1_FORCED_PDADC_GAIN_GET(x)                                 (((x) & 0xc0000000) >> 30)
#define PHY_BB_TPC_1_FORCED_PDADC_GAIN_SET(x)                                 (((x) << 30) & 0xc0000000)

/* macros for bb_sm_reg_map.BB_tpc_2 */
#define PHY_BB_TPC_2_ADDRESS                                                                  0x0000a3fc
#define PHY_BB_TPC_2_OFFSET                                                                   0x000001fc
#define PHY_BB_TPC_2_TX_FRAME_TO_PDADC_ON_MSB                                                          7
#define PHY_BB_TPC_2_TX_FRAME_TO_PDADC_ON_LSB                                                          0
#define PHY_BB_TPC_2_TX_FRAME_TO_PDADC_ON_MASK                                                0x000000ff
#define PHY_BB_TPC_2_TX_FRAME_TO_PDADC_ON_GET(x)                               (((x) & 0x000000ff) >> 0)
#define PHY_BB_TPC_2_TX_FRAME_TO_PDADC_ON_SET(x)                               (((x) << 0) & 0x000000ff)
#define PHY_BB_TPC_2_TX_FRAME_TO_PD_ACC_OFDM_MSB                                                      15
#define PHY_BB_TPC_2_TX_FRAME_TO_PD_ACC_OFDM_LSB                                                       8
#define PHY_BB_TPC_2_TX_FRAME_TO_PD_ACC_OFDM_MASK                                             0x0000ff00
#define PHY_BB_TPC_2_TX_FRAME_TO_PD_ACC_OFDM_GET(x)                            (((x) & 0x0000ff00) >> 8)
#define PHY_BB_TPC_2_TX_FRAME_TO_PD_ACC_OFDM_SET(x)                            (((x) << 8) & 0x0000ff00)
#define PHY_BB_TPC_2_TX_FRAME_TO_PD_ACC_CCK_MSB                                                       23
#define PHY_BB_TPC_2_TX_FRAME_TO_PD_ACC_CCK_LSB                                                       16
#define PHY_BB_TPC_2_TX_FRAME_TO_PD_ACC_CCK_MASK                                              0x00ff0000
#define PHY_BB_TPC_2_TX_FRAME_TO_PD_ACC_CCK_GET(x)                            (((x) & 0x00ff0000) >> 16)
#define PHY_BB_TPC_2_TX_FRAME_TO_PD_ACC_CCK_SET(x)                            (((x) << 16) & 0x00ff0000)

/* macros for bb_sm_reg_map.BB_tpc_3 */
#define PHY_BB_TPC_3_ADDRESS                                                                  0x0000a400
#define PHY_BB_TPC_3_OFFSET                                                                   0x00000200
#define PHY_BB_TPC_3_TX_END_TO_PDADC_ON_MSB                                                            7
#define PHY_BB_TPC_3_TX_END_TO_PDADC_ON_LSB                                                            0
#define PHY_BB_TPC_3_TX_END_TO_PDADC_ON_MASK                                                  0x000000ff
#define PHY_BB_TPC_3_TX_END_TO_PDADC_ON_GET(x)                                 (((x) & 0x000000ff) >> 0)
#define PHY_BB_TPC_3_TX_END_TO_PDADC_ON_SET(x)                                 (((x) << 0) & 0x000000ff)
#define PHY_BB_TPC_3_TX_END_TO_PD_ACC_ON_MSB                                                          15
#define PHY_BB_TPC_3_TX_END_TO_PD_ACC_ON_LSB                                                           8
#define PHY_BB_TPC_3_TX_END_TO_PD_ACC_ON_MASK                                                 0x0000ff00
#define PHY_BB_TPC_3_TX_END_TO_PD_ACC_ON_GET(x)                                (((x) & 0x0000ff00) >> 8)
#define PHY_BB_TPC_3_TX_END_TO_PD_ACC_ON_SET(x)                                (((x) << 8) & 0x0000ff00)
#define PHY_BB_TPC_3_PD_ACC_WINDOW_DC_OFF_MSB                                                         18
#define PHY_BB_TPC_3_PD_ACC_WINDOW_DC_OFF_LSB                                                         16
#define PHY_BB_TPC_3_PD_ACC_WINDOW_DC_OFF_MASK                                                0x00070000
#define PHY_BB_TPC_3_PD_ACC_WINDOW_DC_OFF_GET(x)                              (((x) & 0x00070000) >> 16)
#define PHY_BB_TPC_3_PD_ACC_WINDOW_DC_OFF_SET(x)                              (((x) << 16) & 0x00070000)
#define PHY_BB_TPC_3_PD_ACC_WINDOW_CAL_MSB                                                            21
#define PHY_BB_TPC_3_PD_ACC_WINDOW_CAL_LSB                                                            19
#define PHY_BB_TPC_3_PD_ACC_WINDOW_CAL_MASK                                                   0x00380000
#define PHY_BB_TPC_3_PD_ACC_WINDOW_CAL_GET(x)                                 (((x) & 0x00380000) >> 19)
#define PHY_BB_TPC_3_PD_ACC_WINDOW_CAL_SET(x)                                 (((x) << 19) & 0x00380000)
#define PHY_BB_TPC_3_PD_ACC_WINDOW_OFDM_MSB                                                           24
#define PHY_BB_TPC_3_PD_ACC_WINDOW_OFDM_LSB                                                           22
#define PHY_BB_TPC_3_PD_ACC_WINDOW_OFDM_MASK                                                  0x01c00000
#define PHY_BB_TPC_3_PD_ACC_WINDOW_OFDM_GET(x)                                (((x) & 0x01c00000) >> 22)
#define PHY_BB_TPC_3_PD_ACC_WINDOW_OFDM_SET(x)                                (((x) << 22) & 0x01c00000)
#define PHY_BB_TPC_3_PD_ACC_WINDOW_CCK_MSB                                                            27
#define PHY_BB_TPC_3_PD_ACC_WINDOW_CCK_LSB                                                            25
#define PHY_BB_TPC_3_PD_ACC_WINDOW_CCK_MASK                                                   0x0e000000
#define PHY_BB_TPC_3_PD_ACC_WINDOW_CCK_GET(x)                                 (((x) & 0x0e000000) >> 25)
#define PHY_BB_TPC_3_PD_ACC_WINDOW_CCK_SET(x)                                 (((x) << 25) & 0x0e000000)
#define PHY_BB_TPC_3_TPC_CLK_GATE_ENABLE_MSB                                                          31
#define PHY_BB_TPC_3_TPC_CLK_GATE_ENABLE_LSB                                                          31
#define PHY_BB_TPC_3_TPC_CLK_GATE_ENABLE_MASK                                                 0x80000000
#define PHY_BB_TPC_3_TPC_CLK_GATE_ENABLE_GET(x)                               (((x) & 0x80000000) >> 31)
#define PHY_BB_TPC_3_TPC_CLK_GATE_ENABLE_SET(x)                               (((x) << 31) & 0x80000000)

/* macros for bb_sm_reg_map.BB_tpc_4_b0 */
#define PHY_BB_TPC_4_B0_ADDRESS                                                               0x0000a404
#define PHY_BB_TPC_4_B0_OFFSET                                                                0x00000204
#define PHY_BB_TPC_4_B0_PD_AVG_VALID_0_MSB                                                             0
#define PHY_BB_TPC_4_B0_PD_AVG_VALID_0_LSB                                                             0
#define PHY_BB_TPC_4_B0_PD_AVG_VALID_0_MASK                                                   0x00000001
#define PHY_BB_TPC_4_B0_PD_AVG_VALID_0_GET(x)                                  (((x) & 0x00000001) >> 0)
#define PHY_BB_TPC_4_B0_PD_AVG_OUT_0_MSB                                                               8
#define PHY_BB_TPC_4_B0_PD_AVG_OUT_0_LSB                                                               1
#define PHY_BB_TPC_4_B0_PD_AVG_OUT_0_MASK                                                     0x000001fe
#define PHY_BB_TPC_4_B0_PD_AVG_OUT_0_GET(x)                                    (((x) & 0x000001fe) >> 1)
#define PHY_BB_TPC_4_B0_DAC_GAIN_0_MSB                                                                13
#define PHY_BB_TPC_4_B0_DAC_GAIN_0_LSB                                                                 9
#define PHY_BB_TPC_4_B0_DAC_GAIN_0_MASK                                                       0x00003e00
#define PHY_BB_TPC_4_B0_DAC_GAIN_0_GET(x)                                      (((x) & 0x00003e00) >> 9)
#define PHY_BB_TPC_4_B0_TX_GAIN_SETTING_0_MSB                                                         19
#define PHY_BB_TPC_4_B0_TX_GAIN_SETTING_0_LSB                                                         14
#define PHY_BB_TPC_4_B0_TX_GAIN_SETTING_0_MASK                                                0x000fc000
#define PHY_BB_TPC_4_B0_TX_GAIN_SETTING_0_GET(x)                              (((x) & 0x000fc000) >> 14)
#define PHY_BB_TPC_4_B0_RATE_SENT_0_MSB                                                               24
#define PHY_BB_TPC_4_B0_RATE_SENT_0_LSB                                                               20
#define PHY_BB_TPC_4_B0_RATE_SENT_0_MASK                                                      0x01f00000
#define PHY_BB_TPC_4_B0_RATE_SENT_0_GET(x)                                    (((x) & 0x01f00000) >> 20)
#define PHY_BB_TPC_4_B0_ERROR_EST_UPDATE_POWER_THRESH_MSB                                             30
#define PHY_BB_TPC_4_B0_ERROR_EST_UPDATE_POWER_THRESH_LSB                                             25
#define PHY_BB_TPC_4_B0_ERROR_EST_UPDATE_POWER_THRESH_MASK                                    0x7e000000
#define PHY_BB_TPC_4_B0_ERROR_EST_UPDATE_POWER_THRESH_GET(x)                  (((x) & 0x7e000000) >> 25)
#define PHY_BB_TPC_4_B0_ERROR_EST_UPDATE_POWER_THRESH_SET(x)                  (((x) << 25) & 0x7e000000)

/* macros for bb_sm_reg_map.BB_tpc_5_b0 */
#define PHY_BB_TPC_5_B0_ADDRESS                                                               0x0000a408
#define PHY_BB_TPC_5_B0_OFFSET                                                                0x00000208
#define PHY_BB_TPC_5_B0_PD_GAIN_OVERLAP_MSB                                                            3
#define PHY_BB_TPC_5_B0_PD_GAIN_OVERLAP_LSB                                                            0
#define PHY_BB_TPC_5_B0_PD_GAIN_OVERLAP_MASK                                                  0x0000000f
#define PHY_BB_TPC_5_B0_PD_GAIN_OVERLAP_GET(x)                                 (((x) & 0x0000000f) >> 0)
#define PHY_BB_TPC_5_B0_PD_GAIN_OVERLAP_SET(x)                                 (((x) << 0) & 0x0000000f)
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_1_0_MSB                                                       9
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_1_0_LSB                                                       4
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_1_0_MASK                                             0x000003f0
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_1_0_GET(x)                            (((x) & 0x000003f0) >> 4)
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_1_0_SET(x)                            (((x) << 4) & 0x000003f0)
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_2_0_MSB                                                      15
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_2_0_LSB                                                      10
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_2_0_MASK                                             0x0000fc00
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_2_0_GET(x)                           (((x) & 0x0000fc00) >> 10)
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_2_0_SET(x)                           (((x) << 10) & 0x0000fc00)
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_3_0_MSB                                                      21
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_3_0_LSB                                                      16
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_3_0_MASK                                             0x003f0000
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_3_0_GET(x)                           (((x) & 0x003f0000) >> 16)
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_3_0_SET(x)                           (((x) << 16) & 0x003f0000)
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_4_0_MSB                                                      27
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_4_0_LSB                                                      22
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_4_0_MASK                                             0x0fc00000
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_4_0_GET(x)                           (((x) & 0x0fc00000) >> 22)
#define PHY_BB_TPC_5_B0_PD_GAIN_BOUNDARY_4_0_SET(x)                           (((x) << 22) & 0x0fc00000)

/* macros for bb_sm_reg_map.BB_tpc_6_b0 */
#define PHY_BB_TPC_6_B0_ADDRESS                                                               0x0000a40c
#define PHY_BB_TPC_6_B0_OFFSET                                                                0x0000020c
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_1_0_MSB                                                         5
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_1_0_LSB                                                         0
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_1_0_MASK                                               0x0000003f
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_1_0_GET(x)                              (((x) & 0x0000003f) >> 0)
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_1_0_SET(x)                              (((x) << 0) & 0x0000003f)
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_2_0_MSB                                                        11
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_2_0_LSB                                                         6
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_2_0_MASK                                               0x00000fc0
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_2_0_GET(x)                              (((x) & 0x00000fc0) >> 6)
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_2_0_SET(x)                              (((x) << 6) & 0x00000fc0)
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_3_0_MSB                                                        17
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_3_0_LSB                                                        12
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_3_0_MASK                                               0x0003f000
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_3_0_GET(x)                             (((x) & 0x0003f000) >> 12)
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_3_0_SET(x)                             (((x) << 12) & 0x0003f000)
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_4_0_MSB                                                        23
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_4_0_LSB                                                        18
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_4_0_MASK                                               0x00fc0000
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_4_0_GET(x)                             (((x) & 0x00fc0000) >> 18)
#define PHY_BB_TPC_6_B0_PD_DAC_SETTING_4_0_SET(x)                             (((x) << 18) & 0x00fc0000)
#define PHY_BB_TPC_6_B0_ERROR_EST_MODE_MSB                                                            25
#define PHY_BB_TPC_6_B0_ERROR_EST_MODE_LSB                                                            24
#define PHY_BB_TPC_6_B0_ERROR_EST_MODE_MASK                                                   0x03000000
#define PHY_BB_TPC_6_B0_ERROR_EST_MODE_GET(x)                                 (((x) & 0x03000000) >> 24)
#define PHY_BB_TPC_6_B0_ERROR_EST_MODE_SET(x)                                 (((x) << 24) & 0x03000000)
#define PHY_BB_TPC_6_B0_ERROR_EST_FILTER_COEFF_MSB                                                    28
#define PHY_BB_TPC_6_B0_ERROR_EST_FILTER_COEFF_LSB                                                    26
#define PHY_BB_TPC_6_B0_ERROR_EST_FILTER_COEFF_MASK                                           0x1c000000
#define PHY_BB_TPC_6_B0_ERROR_EST_FILTER_COEFF_GET(x)                         (((x) & 0x1c000000) >> 26)
#define PHY_BB_TPC_6_B0_ERROR_EST_FILTER_COEFF_SET(x)                         (((x) << 26) & 0x1c000000)

/* macros for bb_sm_reg_map.BB_tpc_7 */
#define PHY_BB_TPC_7_ADDRESS                                                                  0x0000a410
#define PHY_BB_TPC_7_OFFSET                                                                   0x00000210
#define PHY_BB_TPC_7_TX_GAIN_TABLE_MAX_MSB                                                             5
#define PHY_BB_TPC_7_TX_GAIN_TABLE_MAX_LSB                                                             0
#define PHY_BB_TPC_7_TX_GAIN_TABLE_MAX_MASK                                                   0x0000003f
#define PHY_BB_TPC_7_TX_GAIN_TABLE_MAX_GET(x)                                  (((x) & 0x0000003f) >> 0)
#define PHY_BB_TPC_7_TX_GAIN_TABLE_MAX_SET(x)                                  (((x) << 0) & 0x0000003f)
#define PHY_BB_TPC_7_INIT_TX_GAIN_SETTING_MSB                                                         11
#define PHY_BB_TPC_7_INIT_TX_GAIN_SETTING_LSB                                                          6
#define PHY_BB_TPC_7_INIT_TX_GAIN_SETTING_MASK                                                0x00000fc0
#define PHY_BB_TPC_7_INIT_TX_GAIN_SETTING_GET(x)                               (((x) & 0x00000fc0) >> 6)
#define PHY_BB_TPC_7_INIT_TX_GAIN_SETTING_SET(x)                               (((x) << 6) & 0x00000fc0)
#define PHY_BB_TPC_7_EN_CL_GAIN_MOD_MSB                                                               12
#define PHY_BB_TPC_7_EN_CL_GAIN_MOD_LSB                                                               12
#define PHY_BB_TPC_7_EN_CL_GAIN_MOD_MASK                                                      0x00001000
#define PHY_BB_TPC_7_EN_CL_GAIN_MOD_GET(x)                                    (((x) & 0x00001000) >> 12)
#define PHY_BB_TPC_7_EN_CL_GAIN_MOD_SET(x)                                    (((x) << 12) & 0x00001000)
#define PHY_BB_TPC_7_USE_TX_PD_IN_XPA_MSB                                                             13
#define PHY_BB_TPC_7_USE_TX_PD_IN_XPA_LSB                                                             13
#define PHY_BB_TPC_7_USE_TX_PD_IN_XPA_MASK                                                    0x00002000
#define PHY_BB_TPC_7_USE_TX_PD_IN_XPA_GET(x)                                  (((x) & 0x00002000) >> 13)
#define PHY_BB_TPC_7_USE_TX_PD_IN_XPA_SET(x)                                  (((x) << 13) & 0x00002000)
#define PHY_BB_TPC_7_EXTEND_TX_FRAME_FOR_TPC_MSB                                                      14
#define PHY_BB_TPC_7_EXTEND_TX_FRAME_FOR_TPC_LSB                                                      14
#define PHY_BB_TPC_7_EXTEND_TX_FRAME_FOR_TPC_MASK                                             0x00004000
#define PHY_BB_TPC_7_EXTEND_TX_FRAME_FOR_TPC_GET(x)                           (((x) & 0x00004000) >> 14)
#define PHY_BB_TPC_7_EXTEND_TX_FRAME_FOR_TPC_SET(x)                           (((x) << 14) & 0x00004000)
#define PHY_BB_TPC_7_USE_INIT_TX_GAIN_SETTING_AFTER_WARM_RESET_MSB                                    15
#define PHY_BB_TPC_7_USE_INIT_TX_GAIN_SETTING_AFTER_WARM_RESET_LSB                                    15
#define PHY_BB_TPC_7_USE_INIT_TX_GAIN_SETTING_AFTER_WARM_RESET_MASK                           0x00008000
#define PHY_BB_TPC_7_USE_INIT_TX_GAIN_SETTING_AFTER_WARM_RESET_GET(x)         (((x) & 0x00008000) >> 15)
#define PHY_BB_TPC_7_USE_INIT_TX_GAIN_SETTING_AFTER_WARM_RESET_SET(x)         (((x) << 15) & 0x00008000)

/* macros for bb_sm_reg_map.BB_tpc_8 */
#define PHY_BB_TPC_8_ADDRESS                                                                  0x0000a414
#define PHY_BB_TPC_8_OFFSET                                                                   0x00000214
#define PHY_BB_TPC_8_DESIRED_SCALE_0_MSB                                                               4
#define PHY_BB_TPC_8_DESIRED_SCALE_0_LSB                                                               0
#define PHY_BB_TPC_8_DESIRED_SCALE_0_MASK                                                     0x0000001f
#define PHY_BB_TPC_8_DESIRED_SCALE_0_GET(x)                                    (((x) & 0x0000001f) >> 0)
#define PHY_BB_TPC_8_DESIRED_SCALE_0_SET(x)                                    (((x) << 0) & 0x0000001f)
#define PHY_BB_TPC_8_DESIRED_SCALE_1_MSB                                                               9
#define PHY_BB_TPC_8_DESIRED_SCALE_1_LSB                                                               5
#define PHY_BB_TPC_8_DESIRED_SCALE_1_MASK                                                     0x000003e0
#define PHY_BB_TPC_8_DESIRED_SCALE_1_GET(x)                                    (((x) & 0x000003e0) >> 5)
#define PHY_BB_TPC_8_DESIRED_SCALE_1_SET(x)                                    (((x) << 5) & 0x000003e0)
#define PHY_BB_TPC_8_DESIRED_SCALE_2_MSB                                                              14
#define PHY_BB_TPC_8_DESIRED_SCALE_2_LSB                                                              10
#define PHY_BB_TPC_8_DESIRED_SCALE_2_MASK                                                     0x00007c00
#define PHY_BB_TPC_8_DESIRED_SCALE_2_GET(x)                                   (((x) & 0x00007c00) >> 10)
#define PHY_BB_TPC_8_DESIRED_SCALE_2_SET(x)                                   (((x) << 10) & 0x00007c00)
#define PHY_BB_TPC_8_DESIRED_SCALE_3_MSB                                                              19
#define PHY_BB_TPC_8_DESIRED_SCALE_3_LSB                                                              15
#define PHY_BB_TPC_8_DESIRED_SCALE_3_MASK                                                     0x000f8000
#define PHY_BB_TPC_8_DESIRED_SCALE_3_GET(x)                                   (((x) & 0x000f8000) >> 15)
#define PHY_BB_TPC_8_DESIRED_SCALE_3_SET(x)                                   (((x) << 15) & 0x000f8000)
#define PHY_BB_TPC_8_DESIRED_SCALE_4_MSB                                                              24
#define PHY_BB_TPC_8_DESIRED_SCALE_4_LSB                                                              20
#define PHY_BB_TPC_8_DESIRED_SCALE_4_MASK                                                     0x01f00000
#define PHY_BB_TPC_8_DESIRED_SCALE_4_GET(x)                                   (((x) & 0x01f00000) >> 20)
#define PHY_BB_TPC_8_DESIRED_SCALE_4_SET(x)                                   (((x) << 20) & 0x01f00000)
#define PHY_BB_TPC_8_DESIRED_SCALE_5_MSB                                                              29
#define PHY_BB_TPC_8_DESIRED_SCALE_5_LSB                                                              25
#define PHY_BB_TPC_8_DESIRED_SCALE_5_MASK                                                     0x3e000000
#define PHY_BB_TPC_8_DESIRED_SCALE_5_GET(x)                                   (((x) & 0x3e000000) >> 25)
#define PHY_BB_TPC_8_DESIRED_SCALE_5_SET(x)                                   (((x) << 25) & 0x3e000000)

/* macros for bb_sm_reg_map.BB_tpc_9 */
#define PHY_BB_TPC_9_ADDRESS                                                                  0x0000a418
#define PHY_BB_TPC_9_OFFSET                                                                   0x00000218
#define PHY_BB_TPC_9_DESIRED_SCALE_6_MSB                                                               4
#define PHY_BB_TPC_9_DESIRED_SCALE_6_LSB                                                               0
#define PHY_BB_TPC_9_DESIRED_SCALE_6_MASK                                                     0x0000001f
#define PHY_BB_TPC_9_DESIRED_SCALE_6_GET(x)                                    (((x) & 0x0000001f) >> 0)
#define PHY_BB_TPC_9_DESIRED_SCALE_6_SET(x)                                    (((x) << 0) & 0x0000001f)
#define PHY_BB_TPC_9_DESIRED_SCALE_7_MSB                                                               9
#define PHY_BB_TPC_9_DESIRED_SCALE_7_LSB                                                               5
#define PHY_BB_TPC_9_DESIRED_SCALE_7_MASK                                                     0x000003e0
#define PHY_BB_TPC_9_DESIRED_SCALE_7_GET(x)                                    (((x) & 0x000003e0) >> 5)
#define PHY_BB_TPC_9_DESIRED_SCALE_7_SET(x)                                    (((x) << 5) & 0x000003e0)
#define PHY_BB_TPC_9_DESIRED_SCALE_CCK_MSB                                                            14
#define PHY_BB_TPC_9_DESIRED_SCALE_CCK_LSB                                                            10
#define PHY_BB_TPC_9_DESIRED_SCALE_CCK_MASK                                                   0x00007c00
#define PHY_BB_TPC_9_DESIRED_SCALE_CCK_GET(x)                                 (((x) & 0x00007c00) >> 10)
#define PHY_BB_TPC_9_DESIRED_SCALE_CCK_SET(x)                                 (((x) << 10) & 0x00007c00)
#define PHY_BB_TPC_9_EN_PD_DC_OFFSET_THR_MSB                                                          20
#define PHY_BB_TPC_9_EN_PD_DC_OFFSET_THR_LSB                                                          20
#define PHY_BB_TPC_9_EN_PD_DC_OFFSET_THR_MASK                                                 0x00100000
#define PHY_BB_TPC_9_EN_PD_DC_OFFSET_THR_GET(x)                               (((x) & 0x00100000) >> 20)
#define PHY_BB_TPC_9_EN_PD_DC_OFFSET_THR_SET(x)                               (((x) << 20) & 0x00100000)
#define PHY_BB_TPC_9_PD_DC_OFFSET_THR_MSB                                                             26
#define PHY_BB_TPC_9_PD_DC_OFFSET_THR_LSB                                                             21
#define PHY_BB_TPC_9_PD_DC_OFFSET_THR_MASK                                                    0x07e00000
#define PHY_BB_TPC_9_PD_DC_OFFSET_THR_GET(x)                                  (((x) & 0x07e00000) >> 21)
#define PHY_BB_TPC_9_PD_DC_OFFSET_THR_SET(x)                                  (((x) << 21) & 0x07e00000)
#define PHY_BB_TPC_9_WAIT_CALTX_SETTLE_MSB                                                            30
#define PHY_BB_TPC_9_WAIT_CALTX_SETTLE_LSB                                                            27
#define PHY_BB_TPC_9_WAIT_CALTX_SETTLE_MASK                                                   0x78000000
#define PHY_BB_TPC_9_WAIT_CALTX_SETTLE_GET(x)                                 (((x) & 0x78000000) >> 27)
#define PHY_BB_TPC_9_WAIT_CALTX_SETTLE_SET(x)                                 (((x) << 27) & 0x78000000)
#define PHY_BB_TPC_9_DISABLE_PDADC_RESIDUAL_DC_REMOVAL_MSB                                            31
#define PHY_BB_TPC_9_DISABLE_PDADC_RESIDUAL_DC_REMOVAL_LSB                                            31
#define PHY_BB_TPC_9_DISABLE_PDADC_RESIDUAL_DC_REMOVAL_MASK                                   0x80000000
#define PHY_BB_TPC_9_DISABLE_PDADC_RESIDUAL_DC_REMOVAL_GET(x)                 (((x) & 0x80000000) >> 31)
#define PHY_BB_TPC_9_DISABLE_PDADC_RESIDUAL_DC_REMOVAL_SET(x)                 (((x) << 31) & 0x80000000)

/* macros for bb_sm_reg_map.BB_tpc_10 */
#define PHY_BB_TPC_10_ADDRESS                                                                 0x0000a41c
#define PHY_BB_TPC_10_OFFSET                                                                  0x0000021c
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_0_MSB                                                         4
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_0_LSB                                                         0
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_0_MASK                                               0x0000001f
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_0_GET(x)                              (((x) & 0x0000001f) >> 0)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_0_SET(x)                              (((x) << 0) & 0x0000001f)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_1_MSB                                                         9
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_1_LSB                                                         5
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_1_MASK                                               0x000003e0
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_1_GET(x)                              (((x) & 0x000003e0) >> 5)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_1_SET(x)                              (((x) << 5) & 0x000003e0)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_2_MSB                                                        14
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_2_LSB                                                        10
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_2_MASK                                               0x00007c00
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_2_GET(x)                             (((x) & 0x00007c00) >> 10)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_2_SET(x)                             (((x) << 10) & 0x00007c00)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_3_MSB                                                        19
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_3_LSB                                                        15
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_3_MASK                                               0x000f8000
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_3_GET(x)                             (((x) & 0x000f8000) >> 15)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_3_SET(x)                             (((x) << 15) & 0x000f8000)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_4_MSB                                                        24
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_4_LSB                                                        20
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_4_MASK                                               0x01f00000
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_4_GET(x)                             (((x) & 0x01f00000) >> 20)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_4_SET(x)                             (((x) << 20) & 0x01f00000)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_5_MSB                                                        29
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_5_LSB                                                        25
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_5_MASK                                               0x3e000000
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_5_GET(x)                             (((x) & 0x3e000000) >> 25)
#define PHY_BB_TPC_10_DESIRED_SCALE_HT20_5_SET(x)                             (((x) << 25) & 0x3e000000)

/* macros for bb_sm_reg_map.BB_tpc_11_b0 */
#define PHY_BB_TPC_11_B0_ADDRESS                                                              0x0000a420
#define PHY_BB_TPC_11_B0_OFFSET                                                               0x00000220
#define PHY_BB_TPC_11_B0_DESIRED_SCALE_HT20_6_MSB                                                      4
#define PHY_BB_TPC_11_B0_DESIRED_SCALE_HT20_6_LSB                                                      0
#define PHY_BB_TPC_11_B0_DESIRED_SCALE_HT20_6_MASK                                            0x0000001f
#define PHY_BB_TPC_11_B0_DESIRED_SCALE_HT20_6_GET(x)                           (((x) & 0x0000001f) >> 0)
#define PHY_BB_TPC_11_B0_DESIRED_SCALE_HT20_6_SET(x)                           (((x) << 0) & 0x0000001f)
#define PHY_BB_TPC_11_B0_DESIRED_SCALE_HT20_7_MSB                                                      9
#define PHY_BB_TPC_11_B0_DESIRED_SCALE_HT20_7_LSB                                                      5
#define PHY_BB_TPC_11_B0_DESIRED_SCALE_HT20_7_MASK                                            0x000003e0
#define PHY_BB_TPC_11_B0_DESIRED_SCALE_HT20_7_GET(x)                           (((x) & 0x000003e0) >> 5)
#define PHY_BB_TPC_11_B0_DESIRED_SCALE_HT20_7_SET(x)                           (((x) << 5) & 0x000003e0)
#define PHY_BB_TPC_11_B0_OLPC_GAIN_DELTA_0_MSB                                                        23
#define PHY_BB_TPC_11_B0_OLPC_GAIN_DELTA_0_LSB                                                        16
#define PHY_BB_TPC_11_B0_OLPC_GAIN_DELTA_0_MASK                                               0x00ff0000
#define PHY_BB_TPC_11_B0_OLPC_GAIN_DELTA_0_GET(x)                             (((x) & 0x00ff0000) >> 16)
#define PHY_BB_TPC_11_B0_OLPC_GAIN_DELTA_0_SET(x)                             (((x) << 16) & 0x00ff0000)
#define PHY_BB_TPC_11_B0_OLPC_GAIN_DELTA_0_LSB_EXT_MSB                                                25
#define PHY_BB_TPC_11_B0_OLPC_GAIN_DELTA_0_LSB_EXT_LSB                                                24
#define PHY_BB_TPC_11_B0_OLPC_GAIN_DELTA_0_LSB_EXT_MASK                                       0x03000000
#define PHY_BB_TPC_11_B0_OLPC_GAIN_DELTA_0_LSB_EXT_GET(x)                     (((x) & 0x03000000) >> 24)
#define PHY_BB_TPC_11_B0_OLPC_GAIN_DELTA_0_LSB_EXT_SET(x)                     (((x) << 24) & 0x03000000)

/* macros for bb_sm_reg_map.BB_tpc_12 */
#define PHY_BB_TPC_12_ADDRESS                                                                 0x0000a424
#define PHY_BB_TPC_12_OFFSET                                                                  0x00000224
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_0_MSB                                                         4
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_0_LSB                                                         0
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_0_MASK                                               0x0000001f
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_0_GET(x)                              (((x) & 0x0000001f) >> 0)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_0_SET(x)                              (((x) << 0) & 0x0000001f)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_1_MSB                                                         9
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_1_LSB                                                         5
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_1_MASK                                               0x000003e0
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_1_GET(x)                              (((x) & 0x000003e0) >> 5)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_1_SET(x)                              (((x) << 5) & 0x000003e0)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_2_MSB                                                        14
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_2_LSB                                                        10
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_2_MASK                                               0x00007c00
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_2_GET(x)                             (((x) & 0x00007c00) >> 10)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_2_SET(x)                             (((x) << 10) & 0x00007c00)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_3_MSB                                                        19
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_3_LSB                                                        15
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_3_MASK                                               0x000f8000
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_3_GET(x)                             (((x) & 0x000f8000) >> 15)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_3_SET(x)                             (((x) << 15) & 0x000f8000)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_4_MSB                                                        24
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_4_LSB                                                        20
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_4_MASK                                               0x01f00000
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_4_GET(x)                             (((x) & 0x01f00000) >> 20)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_4_SET(x)                             (((x) << 20) & 0x01f00000)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_5_MSB                                                        29
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_5_LSB                                                        25
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_5_MASK                                               0x3e000000
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_5_GET(x)                             (((x) & 0x3e000000) >> 25)
#define PHY_BB_TPC_12_DESIRED_SCALE_HT40_5_SET(x)                             (((x) << 25) & 0x3e000000)

/* macros for bb_sm_reg_map.BB_tpc_13 */
#define PHY_BB_TPC_13_ADDRESS                                                                 0x0000a428
#define PHY_BB_TPC_13_OFFSET                                                                  0x00000228
#define PHY_BB_TPC_13_DESIRED_SCALE_HT40_6_MSB                                                         4
#define PHY_BB_TPC_13_DESIRED_SCALE_HT40_6_LSB                                                         0
#define PHY_BB_TPC_13_DESIRED_SCALE_HT40_6_MASK                                               0x0000001f
#define PHY_BB_TPC_13_DESIRED_SCALE_HT40_6_GET(x)                              (((x) & 0x0000001f) >> 0)
#define PHY_BB_TPC_13_DESIRED_SCALE_HT40_6_SET(x)                              (((x) << 0) & 0x0000001f)
#define PHY_BB_TPC_13_DESIRED_SCALE_HT40_7_MSB                                                         9
#define PHY_BB_TPC_13_DESIRED_SCALE_HT40_7_LSB                                                         5
#define PHY_BB_TPC_13_DESIRED_SCALE_HT40_7_MASK                                               0x000003e0
#define PHY_BB_TPC_13_DESIRED_SCALE_HT40_7_GET(x)                              (((x) & 0x000003e0) >> 5)
#define PHY_BB_TPC_13_DESIRED_SCALE_HT40_7_SET(x)                              (((x) << 5) & 0x000003e0)

/* macros for bb_sm_reg_map.BB_tpc_14 */
#define PHY_BB_TPC_14_ADDRESS                                                                 0x0000a42c
#define PHY_BB_TPC_14_OFFSET                                                                  0x0000022c
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_8_MSB                                                         4
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_8_LSB                                                         0
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_8_MASK                                               0x0000001f
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_8_GET(x)                              (((x) & 0x0000001f) >> 0)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_8_SET(x)                              (((x) << 0) & 0x0000001f)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_9_MSB                                                         9
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_9_LSB                                                         5
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_9_MASK                                               0x000003e0
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_9_GET(x)                              (((x) & 0x000003e0) >> 5)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_9_SET(x)                              (((x) << 5) & 0x000003e0)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_10_MSB                                                       14
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_10_LSB                                                       10
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_10_MASK                                              0x00007c00
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_10_GET(x)                            (((x) & 0x00007c00) >> 10)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_10_SET(x)                            (((x) << 10) & 0x00007c00)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_11_MSB                                                       19
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_11_LSB                                                       15
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_11_MASK                                              0x000f8000
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_11_GET(x)                            (((x) & 0x000f8000) >> 15)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_11_SET(x)                            (((x) << 15) & 0x000f8000)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_12_MSB                                                       24
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_12_LSB                                                       20
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_12_MASK                                              0x01f00000
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_12_GET(x)                            (((x) & 0x01f00000) >> 20)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_12_SET(x)                            (((x) << 20) & 0x01f00000)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_13_MSB                                                       29
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_13_LSB                                                       25
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_13_MASK                                              0x3e000000
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_13_GET(x)                            (((x) & 0x3e000000) >> 25)
#define PHY_BB_TPC_14_DESIRED_SCALE_HT20_13_SET(x)                            (((x) << 25) & 0x3e000000)

/* macros for bb_sm_reg_map.BB_tpc_15 */
#define PHY_BB_TPC_15_ADDRESS                                                                 0x0000a430
#define PHY_BB_TPC_15_OFFSET                                                                  0x00000230
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_8_MSB                                                         4
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_8_LSB                                                         0
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_8_MASK                                               0x0000001f
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_8_GET(x)                              (((x) & 0x0000001f) >> 0)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_8_SET(x)                              (((x) << 0) & 0x0000001f)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_9_MSB                                                         9
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_9_LSB                                                         5
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_9_MASK                                               0x000003e0
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_9_GET(x)                              (((x) & 0x000003e0) >> 5)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_9_SET(x)                              (((x) << 5) & 0x000003e0)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_10_MSB                                                       14
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_10_LSB                                                       10
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_10_MASK                                              0x00007c00
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_10_GET(x)                            (((x) & 0x00007c00) >> 10)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_10_SET(x)                            (((x) << 10) & 0x00007c00)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_11_MSB                                                       19
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_11_LSB                                                       15
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_11_MASK                                              0x000f8000
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_11_GET(x)                            (((x) & 0x000f8000) >> 15)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_11_SET(x)                            (((x) << 15) & 0x000f8000)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_12_MSB                                                       24
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_12_LSB                                                       20
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_12_MASK                                              0x01f00000
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_12_GET(x)                            (((x) & 0x01f00000) >> 20)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_12_SET(x)                            (((x) << 20) & 0x01f00000)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_13_MSB                                                       29
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_13_LSB                                                       25
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_13_MASK                                              0x3e000000
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_13_GET(x)                            (((x) & 0x3e000000) >> 25)
#define PHY_BB_TPC_15_DESIRED_SCALE_HT40_13_SET(x)                            (((x) << 25) & 0x3e000000)

/* macros for bb_sm_reg_map.BB_tpc_16 */
#define PHY_BB_TPC_16_ADDRESS                                                                 0x0000a434
#define PHY_BB_TPC_16_OFFSET                                                                  0x00000234
#define PHY_BB_TPC_16_PDADC_PAR_CORR_CCK_MSB                                                          13
#define PHY_BB_TPC_16_PDADC_PAR_CORR_CCK_LSB                                                           8
#define PHY_BB_TPC_16_PDADC_PAR_CORR_CCK_MASK                                                 0x00003f00
#define PHY_BB_TPC_16_PDADC_PAR_CORR_CCK_GET(x)                                (((x) & 0x00003f00) >> 8)
#define PHY_BB_TPC_16_PDADC_PAR_CORR_CCK_SET(x)                                (((x) << 8) & 0x00003f00)
#define PHY_BB_TPC_16_PDADC_PAR_CORR_OFDM_MSB                                                         21
#define PHY_BB_TPC_16_PDADC_PAR_CORR_OFDM_LSB                                                         16
#define PHY_BB_TPC_16_PDADC_PAR_CORR_OFDM_MASK                                                0x003f0000
#define PHY_BB_TPC_16_PDADC_PAR_CORR_OFDM_GET(x)                              (((x) & 0x003f0000) >> 16)
#define PHY_BB_TPC_16_PDADC_PAR_CORR_OFDM_SET(x)                              (((x) << 16) & 0x003f0000)
#define PHY_BB_TPC_16_PDADC_PAR_CORR_HT40_MSB                                                         29
#define PHY_BB_TPC_16_PDADC_PAR_CORR_HT40_LSB                                                         24
#define PHY_BB_TPC_16_PDADC_PAR_CORR_HT40_MASK                                                0x3f000000
#define PHY_BB_TPC_16_PDADC_PAR_CORR_HT40_GET(x)                              (((x) & 0x3f000000) >> 24)
#define PHY_BB_TPC_16_PDADC_PAR_CORR_HT40_SET(x)                              (((x) << 24) & 0x3f000000)

/* macros for bb_sm_reg_map.BB_tpc_17 */
#define PHY_BB_TPC_17_ADDRESS                                                                 0x0000a438
#define PHY_BB_TPC_17_OFFSET                                                                  0x00000238
#define PHY_BB_TPC_17_ENABLE_PAL_MSB                                                                   0
#define PHY_BB_TPC_17_ENABLE_PAL_LSB                                                                   0
#define PHY_BB_TPC_17_ENABLE_PAL_MASK                                                         0x00000001
#define PHY_BB_TPC_17_ENABLE_PAL_GET(x)                                        (((x) & 0x00000001) >> 0)
#define PHY_BB_TPC_17_ENABLE_PAL_SET(x)                                        (((x) << 0) & 0x00000001)
#define PHY_BB_TPC_17_ENABLE_PAL_CCK_MSB                                                               1
#define PHY_BB_TPC_17_ENABLE_PAL_CCK_LSB                                                               1
#define PHY_BB_TPC_17_ENABLE_PAL_CCK_MASK                                                     0x00000002
#define PHY_BB_TPC_17_ENABLE_PAL_CCK_GET(x)                                    (((x) & 0x00000002) >> 1)
#define PHY_BB_TPC_17_ENABLE_PAL_CCK_SET(x)                                    (((x) << 1) & 0x00000002)
#define PHY_BB_TPC_17_ENABLE_PAL_OFDM_20_MSB                                                           2
#define PHY_BB_TPC_17_ENABLE_PAL_OFDM_20_LSB                                                           2
#define PHY_BB_TPC_17_ENABLE_PAL_OFDM_20_MASK                                                 0x00000004
#define PHY_BB_TPC_17_ENABLE_PAL_OFDM_20_GET(x)                                (((x) & 0x00000004) >> 2)
#define PHY_BB_TPC_17_ENABLE_PAL_OFDM_20_SET(x)                                (((x) << 2) & 0x00000004)
#define PHY_BB_TPC_17_ENABLE_PAL_OFDM_40_MSB                                                           3
#define PHY_BB_TPC_17_ENABLE_PAL_OFDM_40_LSB                                                           3
#define PHY_BB_TPC_17_ENABLE_PAL_OFDM_40_MASK                                                 0x00000008
#define PHY_BB_TPC_17_ENABLE_PAL_OFDM_40_GET(x)                                (((x) & 0x00000008) >> 3)
#define PHY_BB_TPC_17_ENABLE_PAL_OFDM_40_SET(x)                                (((x) << 3) & 0x00000008)
#define PHY_BB_TPC_17_PAL_POWER_THRESHOLD_MSB                                                          9
#define PHY_BB_TPC_17_PAL_POWER_THRESHOLD_LSB                                                          4
#define PHY_BB_TPC_17_PAL_POWER_THRESHOLD_MASK                                                0x000003f0
#define PHY_BB_TPC_17_PAL_POWER_THRESHOLD_GET(x)                               (((x) & 0x000003f0) >> 4)
#define PHY_BB_TPC_17_PAL_POWER_THRESHOLD_SET(x)                               (((x) << 4) & 0x000003f0)
#define PHY_BB_TPC_17_FORCE_PAL_LOCKED_MSB                                                            10
#define PHY_BB_TPC_17_FORCE_PAL_LOCKED_LSB                                                            10
#define PHY_BB_TPC_17_FORCE_PAL_LOCKED_MASK                                                   0x00000400
#define PHY_BB_TPC_17_FORCE_PAL_LOCKED_GET(x)                                 (((x) & 0x00000400) >> 10)
#define PHY_BB_TPC_17_FORCE_PAL_LOCKED_SET(x)                                 (((x) << 10) & 0x00000400)
#define PHY_BB_TPC_17_INIT_TX_GAIN_SETTING_PAL_ON_MSB                                                 16
#define PHY_BB_TPC_17_INIT_TX_GAIN_SETTING_PAL_ON_LSB                                                 11
#define PHY_BB_TPC_17_INIT_TX_GAIN_SETTING_PAL_ON_MASK                                        0x0001f800
#define PHY_BB_TPC_17_INIT_TX_GAIN_SETTING_PAL_ON_GET(x)                      (((x) & 0x0001f800) >> 11)
#define PHY_BB_TPC_17_INIT_TX_GAIN_SETTING_PAL_ON_SET(x)                      (((x) << 11) & 0x0001f800)

/* macros for bb_sm_reg_map.BB_tpc_18 */
#define PHY_BB_TPC_18_ADDRESS                                                                 0x0000a43c
#define PHY_BB_TPC_18_OFFSET                                                                  0x0000023c
#define PHY_BB_TPC_18_THERM_CAL_VALUE_MSB                                                              7
#define PHY_BB_TPC_18_THERM_CAL_VALUE_LSB                                                              0
#define PHY_BB_TPC_18_THERM_CAL_VALUE_MASK                                                    0x000000ff
#define PHY_BB_TPC_18_THERM_CAL_VALUE_GET(x)                                   (((x) & 0x000000ff) >> 0)
#define PHY_BB_TPC_18_THERM_CAL_VALUE_SET(x)                                   (((x) << 0) & 0x000000ff)
#define PHY_BB_TPC_18_VOLT_CAL_VALUE_MSB                                                              15
#define PHY_BB_TPC_18_VOLT_CAL_VALUE_LSB                                                               8
#define PHY_BB_TPC_18_VOLT_CAL_VALUE_MASK                                                     0x0000ff00
#define PHY_BB_TPC_18_VOLT_CAL_VALUE_GET(x)                                    (((x) & 0x0000ff00) >> 8)
#define PHY_BB_TPC_18_VOLT_CAL_VALUE_SET(x)                                    (((x) << 8) & 0x0000ff00)
#define PHY_BB_TPC_18_USE_LEGACY_TPC_MSB                                                              16
#define PHY_BB_TPC_18_USE_LEGACY_TPC_LSB                                                              16
#define PHY_BB_TPC_18_USE_LEGACY_TPC_MASK                                                     0x00010000
#define PHY_BB_TPC_18_USE_LEGACY_TPC_GET(x)                                   (((x) & 0x00010000) >> 16)
#define PHY_BB_TPC_18_USE_LEGACY_TPC_SET(x)                                   (((x) << 16) & 0x00010000)
#define PHY_BB_TPC_18_MIN_POWER_THERM_VOLT_GAIN_CORR_MSB                                              22
#define PHY_BB_TPC_18_MIN_POWER_THERM_VOLT_GAIN_CORR_LSB                                              17
#define PHY_BB_TPC_18_MIN_POWER_THERM_VOLT_GAIN_CORR_MASK                                     0x007e0000
#define PHY_BB_TPC_18_MIN_POWER_THERM_VOLT_GAIN_CORR_GET(x)                   (((x) & 0x007e0000) >> 17)
#define PHY_BB_TPC_18_MIN_POWER_THERM_VOLT_GAIN_CORR_SET(x)                   (((x) << 17) & 0x007e0000)

/* macros for bb_sm_reg_map.BB_tpc_19_b0 */
#define PHY_BB_TPC_19_B0_ADDRESS                                                              0x0000a440
#define PHY_BB_TPC_19_B0_OFFSET                                                               0x00000240
#define PHY_BB_TPC_19_B0_ALPHA_THERM_0_MSB                                                             7
#define PHY_BB_TPC_19_B0_ALPHA_THERM_0_LSB                                                             0
#define PHY_BB_TPC_19_B0_ALPHA_THERM_0_MASK                                                   0x000000ff
#define PHY_BB_TPC_19_B0_ALPHA_THERM_0_GET(x)                                  (((x) & 0x000000ff) >> 0)
#define PHY_BB_TPC_19_B0_ALPHA_THERM_0_SET(x)                                  (((x) << 0) & 0x000000ff)
#define PHY_BB_TPC_19_B0_ALPHA_THERM_PAL_ON_0_MSB                                                     15
#define PHY_BB_TPC_19_B0_ALPHA_THERM_PAL_ON_0_LSB                                                      8
#define PHY_BB_TPC_19_B0_ALPHA_THERM_PAL_ON_0_MASK                                            0x0000ff00
#define PHY_BB_TPC_19_B0_ALPHA_THERM_PAL_ON_0_GET(x)                           (((x) & 0x0000ff00) >> 8)
#define PHY_BB_TPC_19_B0_ALPHA_THERM_PAL_ON_0_SET(x)                           (((x) << 8) & 0x0000ff00)
#define PHY_BB_TPC_19_B0_ALPHA_VOLT_0_MSB                                                             22
#define PHY_BB_TPC_19_B0_ALPHA_VOLT_0_LSB                                                             16
#define PHY_BB_TPC_19_B0_ALPHA_VOLT_0_MASK                                                    0x007f0000
#define PHY_BB_TPC_19_B0_ALPHA_VOLT_0_GET(x)                                  (((x) & 0x007f0000) >> 16)
#define PHY_BB_TPC_19_B0_ALPHA_VOLT_0_SET(x)                                  (((x) << 16) & 0x007f0000)
#define PHY_BB_TPC_19_B0_ALPHA_VOLT_PAL_ON_0_MSB                                                      29
#define PHY_BB_TPC_19_B0_ALPHA_VOLT_PAL_ON_0_LSB                                                      23
#define PHY_BB_TPC_19_B0_ALPHA_VOLT_PAL_ON_0_MASK                                             0x3f800000
#define PHY_BB_TPC_19_B0_ALPHA_VOLT_PAL_ON_0_GET(x)                           (((x) & 0x3f800000) >> 23)
#define PHY_BB_TPC_19_B0_ALPHA_VOLT_PAL_ON_0_SET(x)                           (((x) << 23) & 0x3f800000)

/* macros for bb_sm_reg_map.BB_tpc_20 */
#define PHY_BB_TPC_20_ADDRESS                                                                 0x0000a444
#define PHY_BB_TPC_20_OFFSET                                                                  0x00000244
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_0_MSB                                                             0
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_0_LSB                                                             0
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_0_MASK                                                   0x00000001
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_0_GET(x)                                  (((x) & 0x00000001) >> 0)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_0_SET(x)                                  (((x) << 0) & 0x00000001)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_1_MSB                                                             1
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_1_LSB                                                             1
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_1_MASK                                                   0x00000002
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_1_GET(x)                                  (((x) & 0x00000002) >> 1)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_1_SET(x)                                  (((x) << 1) & 0x00000002)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_2_MSB                                                             2
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_2_LSB                                                             2
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_2_MASK                                                   0x00000004
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_2_GET(x)                                  (((x) & 0x00000004) >> 2)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_2_SET(x)                                  (((x) << 2) & 0x00000004)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_3_MSB                                                             3
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_3_LSB                                                             3
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_3_MASK                                                   0x00000008
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_3_GET(x)                                  (((x) & 0x00000008) >> 3)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_3_SET(x)                                  (((x) << 3) & 0x00000008)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_4_MSB                                                             4
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_4_LSB                                                             4
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_4_MASK                                                   0x00000010
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_4_GET(x)                                  (((x) & 0x00000010) >> 4)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_4_SET(x)                                  (((x) << 4) & 0x00000010)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_5_MSB                                                             5
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_5_LSB                                                             5
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_5_MASK                                                   0x00000020
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_5_GET(x)                                  (((x) & 0x00000020) >> 5)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_5_SET(x)                                  (((x) << 5) & 0x00000020)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_6_MSB                                                             6
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_6_LSB                                                             6
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_6_MASK                                                   0x00000040
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_6_GET(x)                                  (((x) & 0x00000040) >> 6)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_6_SET(x)                                  (((x) << 6) & 0x00000040)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_7_MSB                                                             7
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_7_LSB                                                             7
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_7_MASK                                                   0x00000080
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_7_GET(x)                                  (((x) & 0x00000080) >> 7)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_7_SET(x)                                  (((x) << 7) & 0x00000080)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_8_MSB                                                             8
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_8_LSB                                                             8
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_8_MASK                                                   0x00000100
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_8_GET(x)                                  (((x) & 0x00000100) >> 8)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_8_SET(x)                                  (((x) << 8) & 0x00000100)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_9_MSB                                                             9
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_9_LSB                                                             9
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_9_MASK                                                   0x00000200
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_9_GET(x)                                  (((x) & 0x00000200) >> 9)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_9_SET(x)                                  (((x) << 9) & 0x00000200)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_10_MSB                                                           10
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_10_LSB                                                           10
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_10_MASK                                                  0x00000400
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_10_GET(x)                                (((x) & 0x00000400) >> 10)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_10_SET(x)                                (((x) << 10) & 0x00000400)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_11_MSB                                                           11
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_11_LSB                                                           11
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_11_MASK                                                  0x00000800
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_11_GET(x)                                (((x) & 0x00000800) >> 11)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_11_SET(x)                                (((x) << 11) & 0x00000800)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_12_MSB                                                           12
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_12_LSB                                                           12
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_12_MASK                                                  0x00001000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_12_GET(x)                                (((x) & 0x00001000) >> 12)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_12_SET(x)                                (((x) << 12) & 0x00001000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_13_MSB                                                           13
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_13_LSB                                                           13
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_13_MASK                                                  0x00002000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_13_GET(x)                                (((x) & 0x00002000) >> 13)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_13_SET(x)                                (((x) << 13) & 0x00002000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_14_MSB                                                           14
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_14_LSB                                                           14
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_14_MASK                                                  0x00004000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_14_GET(x)                                (((x) & 0x00004000) >> 14)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_14_SET(x)                                (((x) << 14) & 0x00004000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_15_MSB                                                           15
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_15_LSB                                                           15
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_15_MASK                                                  0x00008000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_15_GET(x)                                (((x) & 0x00008000) >> 15)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_15_SET(x)                                (((x) << 15) & 0x00008000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_16_MSB                                                           16
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_16_LSB                                                           16
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_16_MASK                                                  0x00010000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_16_GET(x)                                (((x) & 0x00010000) >> 16)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_16_SET(x)                                (((x) << 16) & 0x00010000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_17_MSB                                                           17
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_17_LSB                                                           17
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_17_MASK                                                  0x00020000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_17_GET(x)                                (((x) & 0x00020000) >> 17)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_17_SET(x)                                (((x) << 17) & 0x00020000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_18_MSB                                                           18
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_18_LSB                                                           18
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_18_MASK                                                  0x00040000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_18_GET(x)                                (((x) & 0x00040000) >> 18)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_18_SET(x)                                (((x) << 18) & 0x00040000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_19_MSB                                                           19
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_19_LSB                                                           19
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_19_MASK                                                  0x00080000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_19_GET(x)                                (((x) & 0x00080000) >> 19)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_19_SET(x)                                (((x) << 19) & 0x00080000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_20_MSB                                                           20
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_20_LSB                                                           20
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_20_MASK                                                  0x00100000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_20_GET(x)                                (((x) & 0x00100000) >> 20)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_20_SET(x)                                (((x) << 20) & 0x00100000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_21_MSB                                                           21
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_21_LSB                                                           21
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_21_MASK                                                  0x00200000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_21_GET(x)                                (((x) & 0x00200000) >> 21)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_21_SET(x)                                (((x) << 21) & 0x00200000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_22_MSB                                                           22
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_22_LSB                                                           22
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_22_MASK                                                  0x00400000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_22_GET(x)                                (((x) & 0x00400000) >> 22)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_22_SET(x)                                (((x) << 22) & 0x00400000)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_23_MSB                                                           23
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_23_LSB                                                           23
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_23_MASK                                                  0x00800000
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_23_GET(x)                                (((x) & 0x00800000) >> 23)
#define PHY_BB_TPC_20_ENABLE_PAL_MCS_23_SET(x)                                (((x) << 23) & 0x00800000)

/* macros for bb_sm_reg_map.BB_therm_adc_1 */
#define PHY_BB_THERM_ADC_1_ADDRESS                                                            0x0000a448
#define PHY_BB_THERM_ADC_1_OFFSET                                                             0x00000248
#define PHY_BB_THERM_ADC_1_INIT_THERM_SETTING_MSB                                                      7
#define PHY_BB_THERM_ADC_1_INIT_THERM_SETTING_LSB                                                      0
#define PHY_BB_THERM_ADC_1_INIT_THERM_SETTING_MASK                                            0x000000ff
#define PHY_BB_THERM_ADC_1_INIT_THERM_SETTING_GET(x)                           (((x) & 0x000000ff) >> 0)
#define PHY_BB_THERM_ADC_1_INIT_THERM_SETTING_SET(x)                           (((x) << 0) & 0x000000ff)
#define PHY_BB_THERM_ADC_1_INIT_VOLT_SETTING_MSB                                                      15
#define PHY_BB_THERM_ADC_1_INIT_VOLT_SETTING_LSB                                                       8
#define PHY_BB_THERM_ADC_1_INIT_VOLT_SETTING_MASK                                             0x0000ff00
#define PHY_BB_THERM_ADC_1_INIT_VOLT_SETTING_GET(x)                            (((x) & 0x0000ff00) >> 8)
#define PHY_BB_THERM_ADC_1_INIT_VOLT_SETTING_SET(x)                            (((x) << 8) & 0x0000ff00)
#define PHY_BB_THERM_ADC_1_INIT_ATB_SETTING_MSB                                                       23
#define PHY_BB_THERM_ADC_1_INIT_ATB_SETTING_LSB                                                       16
#define PHY_BB_THERM_ADC_1_INIT_ATB_SETTING_MASK                                              0x00ff0000
#define PHY_BB_THERM_ADC_1_INIT_ATB_SETTING_GET(x)                            (((x) & 0x00ff0000) >> 16)
#define PHY_BB_THERM_ADC_1_INIT_ATB_SETTING_SET(x)                            (((x) << 16) & 0x00ff0000)
#define PHY_BB_THERM_ADC_1_SAMPLES_CNT_CODING_MSB                                                     25
#define PHY_BB_THERM_ADC_1_SAMPLES_CNT_CODING_LSB                                                     24
#define PHY_BB_THERM_ADC_1_SAMPLES_CNT_CODING_MASK                                            0x03000000
#define PHY_BB_THERM_ADC_1_SAMPLES_CNT_CODING_GET(x)                          (((x) & 0x03000000) >> 24)
#define PHY_BB_THERM_ADC_1_SAMPLES_CNT_CODING_SET(x)                          (((x) << 24) & 0x03000000)
#define PHY_BB_THERM_ADC_1_USE_INIT_THERM_VOLT_ATB_AFTER_WARM_RESET_MSB                               26
#define PHY_BB_THERM_ADC_1_USE_INIT_THERM_VOLT_ATB_AFTER_WARM_RESET_LSB                               26
#define PHY_BB_THERM_ADC_1_USE_INIT_THERM_VOLT_ATB_AFTER_WARM_RESET_MASK                      0x04000000
#define PHY_BB_THERM_ADC_1_USE_INIT_THERM_VOLT_ATB_AFTER_WARM_RESET_GET(x)    (((x) & 0x04000000) >> 26)
#define PHY_BB_THERM_ADC_1_USE_INIT_THERM_VOLT_ATB_AFTER_WARM_RESET_SET(x)    (((x) << 26) & 0x04000000)
#define PHY_BB_THERM_ADC_1_FORCE_THERM_VOLT_ATB_TO_INIT_SETTINGS_MSB                                  27
#define PHY_BB_THERM_ADC_1_FORCE_THERM_VOLT_ATB_TO_INIT_SETTINGS_LSB                                  27
#define PHY_BB_THERM_ADC_1_FORCE_THERM_VOLT_ATB_TO_INIT_SETTINGS_MASK                         0x08000000
#define PHY_BB_THERM_ADC_1_FORCE_THERM_VOLT_ATB_TO_INIT_SETTINGS_GET(x)       (((x) & 0x08000000) >> 27)
#define PHY_BB_THERM_ADC_1_FORCE_THERM_VOLT_ATB_TO_INIT_SETTINGS_SET(x)       (((x) << 27) & 0x08000000)
#define PHY_BB_THERM_ADC_1_CHECK_DONE_FOR_1ST_ADC_MEAS_OF_EACH_FRAME_MSB                              28
#define PHY_BB_THERM_ADC_1_CHECK_DONE_FOR_1ST_ADC_MEAS_OF_EACH_FRAME_LSB                              28
#define PHY_BB_THERM_ADC_1_CHECK_DONE_FOR_1ST_ADC_MEAS_OF_EACH_FRAME_MASK                     0x10000000
#define PHY_BB_THERM_ADC_1_CHECK_DONE_FOR_1ST_ADC_MEAS_OF_EACH_FRAME_GET(x)   (((x) & 0x10000000) >> 28)
#define PHY_BB_THERM_ADC_1_CHECK_DONE_FOR_1ST_ADC_MEAS_OF_EACH_FRAME_SET(x)   (((x) << 28) & 0x10000000)
#define PHY_BB_THERM_ADC_1_THERM_MEASURE_RESET_MSB                                                    29
#define PHY_BB_THERM_ADC_1_THERM_MEASURE_RESET_LSB                                                    29
#define PHY_BB_THERM_ADC_1_THERM_MEASURE_RESET_MASK                                           0x20000000
#define PHY_BB_THERM_ADC_1_THERM_MEASURE_RESET_GET(x)                         (((x) & 0x20000000) >> 29)
#define PHY_BB_THERM_ADC_1_THERM_MEASURE_RESET_SET(x)                         (((x) << 29) & 0x20000000)

/* macros for bb_sm_reg_map.BB_therm_adc_2 */
#define PHY_BB_THERM_ADC_2_ADDRESS                                                            0x0000a44c
#define PHY_BB_THERM_ADC_2_OFFSET                                                             0x0000024c
#define PHY_BB_THERM_ADC_2_MEASURE_THERM_FREQ_MSB                                                     11
#define PHY_BB_THERM_ADC_2_MEASURE_THERM_FREQ_LSB                                                      0
#define PHY_BB_THERM_ADC_2_MEASURE_THERM_FREQ_MASK                                            0x00000fff
#define PHY_BB_THERM_ADC_2_MEASURE_THERM_FREQ_GET(x)                           (((x) & 0x00000fff) >> 0)
#define PHY_BB_THERM_ADC_2_MEASURE_THERM_FREQ_SET(x)                           (((x) << 0) & 0x00000fff)
#define PHY_BB_THERM_ADC_2_MEASURE_VOLT_FREQ_MSB                                                      21
#define PHY_BB_THERM_ADC_2_MEASURE_VOLT_FREQ_LSB                                                      12
#define PHY_BB_THERM_ADC_2_MEASURE_VOLT_FREQ_MASK                                             0x003ff000
#define PHY_BB_THERM_ADC_2_MEASURE_VOLT_FREQ_GET(x)                           (((x) & 0x003ff000) >> 12)
#define PHY_BB_THERM_ADC_2_MEASURE_VOLT_FREQ_SET(x)                           (((x) << 12) & 0x003ff000)
#define PHY_BB_THERM_ADC_2_MEASURE_ATB_FREQ_MSB                                                       31
#define PHY_BB_THERM_ADC_2_MEASURE_ATB_FREQ_LSB                                                       22
#define PHY_BB_THERM_ADC_2_MEASURE_ATB_FREQ_MASK                                              0xffc00000
#define PHY_BB_THERM_ADC_2_MEASURE_ATB_FREQ_GET(x)                            (((x) & 0xffc00000) >> 22)
#define PHY_BB_THERM_ADC_2_MEASURE_ATB_FREQ_SET(x)                            (((x) << 22) & 0xffc00000)

/* macros for bb_sm_reg_map.BB_therm_adc_3 */
#define PHY_BB_THERM_ADC_3_ADDRESS                                                            0x0000a450
#define PHY_BB_THERM_ADC_3_OFFSET                                                             0x00000250
#define PHY_BB_THERM_ADC_3_THERM_ADC_OFFSET_MSB                                                        7
#define PHY_BB_THERM_ADC_3_THERM_ADC_OFFSET_LSB                                                        0
#define PHY_BB_THERM_ADC_3_THERM_ADC_OFFSET_MASK                                              0x000000ff
#define PHY_BB_THERM_ADC_3_THERM_ADC_OFFSET_GET(x)                             (((x) & 0x000000ff) >> 0)
#define PHY_BB_THERM_ADC_3_THERM_ADC_OFFSET_SET(x)                             (((x) << 0) & 0x000000ff)
#define PHY_BB_THERM_ADC_3_THERM_ADC_SCALED_GAIN_MSB                                                  16
#define PHY_BB_THERM_ADC_3_THERM_ADC_SCALED_GAIN_LSB                                                   8
#define PHY_BB_THERM_ADC_3_THERM_ADC_SCALED_GAIN_MASK                                         0x0001ff00
#define PHY_BB_THERM_ADC_3_THERM_ADC_SCALED_GAIN_GET(x)                        (((x) & 0x0001ff00) >> 8)
#define PHY_BB_THERM_ADC_3_THERM_ADC_SCALED_GAIN_SET(x)                        (((x) << 8) & 0x0001ff00)
#define PHY_BB_THERM_ADC_3_ADC_INTERVAL_MSB                                                           29
#define PHY_BB_THERM_ADC_3_ADC_INTERVAL_LSB                                                           17
#define PHY_BB_THERM_ADC_3_ADC_INTERVAL_MASK                                                  0x3ffe0000
#define PHY_BB_THERM_ADC_3_ADC_INTERVAL_GET(x)                                (((x) & 0x3ffe0000) >> 17)
#define PHY_BB_THERM_ADC_3_ADC_INTERVAL_SET(x)                                (((x) << 17) & 0x3ffe0000)

/* macros for bb_sm_reg_map.BB_therm_adc_4 */
#define PHY_BB_THERM_ADC_4_ADDRESS                                                            0x0000a454
#define PHY_BB_THERM_ADC_4_OFFSET                                                             0x00000254
#define PHY_BB_THERM_ADC_4_LATEST_THERM_VALUE_MSB                                                      7
#define PHY_BB_THERM_ADC_4_LATEST_THERM_VALUE_LSB                                                      0
#define PHY_BB_THERM_ADC_4_LATEST_THERM_VALUE_MASK                                            0x000000ff
#define PHY_BB_THERM_ADC_4_LATEST_THERM_VALUE_GET(x)                           (((x) & 0x000000ff) >> 0)
#define PHY_BB_THERM_ADC_4_LATEST_VOLT_VALUE_MSB                                                      15
#define PHY_BB_THERM_ADC_4_LATEST_VOLT_VALUE_LSB                                                       8
#define PHY_BB_THERM_ADC_4_LATEST_VOLT_VALUE_MASK                                             0x0000ff00
#define PHY_BB_THERM_ADC_4_LATEST_VOLT_VALUE_GET(x)                            (((x) & 0x0000ff00) >> 8)
#define PHY_BB_THERM_ADC_4_LATEST_ATB_VALUE_MSB                                                       23
#define PHY_BB_THERM_ADC_4_LATEST_ATB_VALUE_LSB                                                       16
#define PHY_BB_THERM_ADC_4_LATEST_ATB_VALUE_MASK                                              0x00ff0000
#define PHY_BB_THERM_ADC_4_LATEST_ATB_VALUE_GET(x)                            (((x) & 0x00ff0000) >> 16)
#define PHY_BB_THERM_ADC_4_FORCE_THERM_CHAIN_MSB                                                      24
#define PHY_BB_THERM_ADC_4_FORCE_THERM_CHAIN_LSB                                                      24
#define PHY_BB_THERM_ADC_4_FORCE_THERM_CHAIN_MASK                                             0x01000000
#define PHY_BB_THERM_ADC_4_FORCE_THERM_CHAIN_GET(x)                           (((x) & 0x01000000) >> 24)
#define PHY_BB_THERM_ADC_4_FORCE_THERM_CHAIN_SET(x)                           (((x) << 24) & 0x01000000)
#define PHY_BB_THERM_ADC_4_PREFERRED_THERM_CHAIN_MSB                                                  27
#define PHY_BB_THERM_ADC_4_PREFERRED_THERM_CHAIN_LSB                                                  25
#define PHY_BB_THERM_ADC_4_PREFERRED_THERM_CHAIN_MASK                                         0x0e000000
#define PHY_BB_THERM_ADC_4_PREFERRED_THERM_CHAIN_GET(x)                       (((x) & 0x0e000000) >> 25)
#define PHY_BB_THERM_ADC_4_PREFERRED_THERM_CHAIN_SET(x)                       (((x) << 25) & 0x0e000000)

/* macros for bb_sm_reg_map.BB_tx_forced_gain */
#define PHY_BB_TX_FORCED_GAIN_ADDRESS                                                         0x0000a458
#define PHY_BB_TX_FORCED_GAIN_OFFSET                                                          0x00000258
#define PHY_BB_TX_FORCED_GAIN_FORCE_TX_GAIN_MSB                                                        0
#define PHY_BB_TX_FORCED_GAIN_FORCE_TX_GAIN_LSB                                                        0
#define PHY_BB_TX_FORCED_GAIN_FORCE_TX_GAIN_MASK                                              0x00000001
#define PHY_BB_TX_FORCED_GAIN_FORCE_TX_GAIN_GET(x)                             (((x) & 0x00000001) >> 0)
#define PHY_BB_TX_FORCED_GAIN_FORCE_TX_GAIN_SET(x)                             (((x) << 0) & 0x00000001)
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXBB1DBGAIN_MSB                                                   3
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXBB1DBGAIN_LSB                                                   1
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXBB1DBGAIN_MASK                                         0x0000000e
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXBB1DBGAIN_GET(x)                        (((x) & 0x0000000e) >> 1)
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXBB1DBGAIN_SET(x)                        (((x) << 1) & 0x0000000e)
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXBB6DBGAIN_MSB                                                   5
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXBB6DBGAIN_LSB                                                   4
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXBB6DBGAIN_MASK                                         0x00000030
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXBB6DBGAIN_GET(x)                        (((x) & 0x00000030) >> 4)
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXBB6DBGAIN_SET(x)                        (((x) << 4) & 0x00000030)
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXMXRGAIN_MSB                                                     9
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXMXRGAIN_LSB                                                     6
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXMXRGAIN_MASK                                           0x000003c0
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXMXRGAIN_GET(x)                          (((x) & 0x000003c0) >> 6)
#define PHY_BB_TX_FORCED_GAIN_FORCED_TXMXRGAIN_SET(x)                          (((x) << 6) & 0x000003c0)
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNA_MSB                                                     13
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNA_LSB                                                     10
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNA_MASK                                            0x00003c00
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNA_GET(x)                          (((x) & 0x00003c00) >> 10)
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNA_SET(x)                          (((x) << 10) & 0x00003c00)
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNB_MSB                                                     17
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNB_LSB                                                     14
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNB_MASK                                            0x0003c000
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNB_GET(x)                          (((x) & 0x0003c000) >> 14)
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNB_SET(x)                          (((x) << 14) & 0x0003c000)
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNC_MSB                                                     21
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNC_LSB                                                     18
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNC_MASK                                            0x003c0000
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNC_GET(x)                          (((x) & 0x003c0000) >> 18)
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGNC_SET(x)                          (((x) << 18) & 0x003c0000)
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGND_MSB                                                     23
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGND_LSB                                                     22
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGND_MASK                                            0x00c00000
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGND_GET(x)                          (((x) & 0x00c00000) >> 22)
#define PHY_BB_TX_FORCED_GAIN_FORCED_PADRVGND_SET(x)                          (((x) << 22) & 0x00c00000)
#define PHY_BB_TX_FORCED_GAIN_FORCED_ENABLE_PAL_MSB                                                   24
#define PHY_BB_TX_FORCED_GAIN_FORCED_ENABLE_PAL_LSB                                                   24
#define PHY_BB_TX_FORCED_GAIN_FORCED_ENABLE_PAL_MASK                                          0x01000000
#define PHY_BB_TX_FORCED_GAIN_FORCED_ENABLE_PAL_GET(x)                        (((x) & 0x01000000) >> 24)
#define PHY_BB_TX_FORCED_GAIN_FORCED_ENABLE_PAL_SET(x)                        (((x) << 24) & 0x01000000)
#define PHY_BB_TX_FORCED_GAIN_FORCED_OB_MSB                                                           27
#define PHY_BB_TX_FORCED_GAIN_FORCED_OB_LSB                                                           25
#define PHY_BB_TX_FORCED_GAIN_FORCED_OB_MASK                                                  0x0e000000
#define PHY_BB_TX_FORCED_GAIN_FORCED_OB_GET(x)                                (((x) & 0x0e000000) >> 25)
#define PHY_BB_TX_FORCED_GAIN_FORCED_OB_SET(x)                                (((x) << 25) & 0x0e000000)
#define PHY_BB_TX_FORCED_GAIN_FORCED_DB_MSB                                                           30
#define PHY_BB_TX_FORCED_GAIN_FORCED_DB_LSB                                                           28
#define PHY_BB_TX_FORCED_GAIN_FORCED_DB_MASK                                                  0x70000000
#define PHY_BB_TX_FORCED_GAIN_FORCED_DB_GET(x)                                (((x) & 0x70000000) >> 28)
#define PHY_BB_TX_FORCED_GAIN_FORCED_DB_SET(x)                                (((x) << 28) & 0x70000000)
#define PHY_BB_TX_FORCED_GAIN_FORCED_GREEN_PAPRD_ENABLE_MSB                                           31
#define PHY_BB_TX_FORCED_GAIN_FORCED_GREEN_PAPRD_ENABLE_LSB                                           31
#define PHY_BB_TX_FORCED_GAIN_FORCED_GREEN_PAPRD_ENABLE_MASK                                  0x80000000
#define PHY_BB_TX_FORCED_GAIN_FORCED_GREEN_PAPRD_ENABLE_GET(x)                (((x) & 0x80000000) >> 31)
#define PHY_BB_TX_FORCED_GAIN_FORCED_GREEN_PAPRD_ENABLE_SET(x)                (((x) << 31) & 0x80000000)

/* macros for bb_sm_reg_map.BB_pdadc_tab_b0 */
#define PHY_BB_PDADC_TAB_B0_ADDRESS                                                           0x0000a480
#define PHY_BB_PDADC_TAB_B0_OFFSET                                                            0x00000280
#define PHY_BB_PDADC_TAB_B0_TAB_ENTRY_MSB                                                             31
#define PHY_BB_PDADC_TAB_B0_TAB_ENTRY_LSB                                                              0
#define PHY_BB_PDADC_TAB_B0_TAB_ENTRY_MASK                                                    0xffffffff
#define PHY_BB_PDADC_TAB_B0_TAB_ENTRY_SET(x)                                   (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_1 */
#define PHY_BB_TX_GAIN_TAB_1_ADDRESS                                                          0x0000a500
#define PHY_BB_TX_GAIN_TAB_1_OFFSET                                                           0x00000300
#define PHY_BB_TX_GAIN_TAB_1_TG_TABLE1_MSB                                                            31
#define PHY_BB_TX_GAIN_TAB_1_TG_TABLE1_LSB                                                             0
#define PHY_BB_TX_GAIN_TAB_1_TG_TABLE1_MASK                                                   0xffffffff
#define PHY_BB_TX_GAIN_TAB_1_TG_TABLE1_GET(x)                                  (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_1_TG_TABLE1_SET(x)                                  (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_2 */
#define PHY_BB_TX_GAIN_TAB_2_ADDRESS                                                          0x0000a504
#define PHY_BB_TX_GAIN_TAB_2_OFFSET                                                           0x00000304
#define PHY_BB_TX_GAIN_TAB_2_TG_TABLE2_MSB                                                            31
#define PHY_BB_TX_GAIN_TAB_2_TG_TABLE2_LSB                                                             0
#define PHY_BB_TX_GAIN_TAB_2_TG_TABLE2_MASK                                                   0xffffffff
#define PHY_BB_TX_GAIN_TAB_2_TG_TABLE2_GET(x)                                  (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_2_TG_TABLE2_SET(x)                                  (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_3 */
#define PHY_BB_TX_GAIN_TAB_3_ADDRESS                                                          0x0000a508
#define PHY_BB_TX_GAIN_TAB_3_OFFSET                                                           0x00000308
#define PHY_BB_TX_GAIN_TAB_3_TG_TABLE3_MSB                                                            31
#define PHY_BB_TX_GAIN_TAB_3_TG_TABLE3_LSB                                                             0
#define PHY_BB_TX_GAIN_TAB_3_TG_TABLE3_MASK                                                   0xffffffff
#define PHY_BB_TX_GAIN_TAB_3_TG_TABLE3_GET(x)                                  (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_3_TG_TABLE3_SET(x)                                  (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_4 */
#define PHY_BB_TX_GAIN_TAB_4_ADDRESS                                                          0x0000a50c
#define PHY_BB_TX_GAIN_TAB_4_OFFSET                                                           0x0000030c
#define PHY_BB_TX_GAIN_TAB_4_TG_TABLE4_MSB                                                            31
#define PHY_BB_TX_GAIN_TAB_4_TG_TABLE4_LSB                                                             0
#define PHY_BB_TX_GAIN_TAB_4_TG_TABLE4_MASK                                                   0xffffffff
#define PHY_BB_TX_GAIN_TAB_4_TG_TABLE4_GET(x)                                  (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_4_TG_TABLE4_SET(x)                                  (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_5 */
#define PHY_BB_TX_GAIN_TAB_5_ADDRESS                                                          0x0000a510
#define PHY_BB_TX_GAIN_TAB_5_OFFSET                                                           0x00000310
#define PHY_BB_TX_GAIN_TAB_5_TG_TABLE5_MSB                                                            31
#define PHY_BB_TX_GAIN_TAB_5_TG_TABLE5_LSB                                                             0
#define PHY_BB_TX_GAIN_TAB_5_TG_TABLE5_MASK                                                   0xffffffff
#define PHY_BB_TX_GAIN_TAB_5_TG_TABLE5_GET(x)                                  (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_5_TG_TABLE5_SET(x)                                  (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_6 */
#define PHY_BB_TX_GAIN_TAB_6_ADDRESS                                                          0x0000a514
#define PHY_BB_TX_GAIN_TAB_6_OFFSET                                                           0x00000314
#define PHY_BB_TX_GAIN_TAB_6_TG_TABLE6_MSB                                                            31
#define PHY_BB_TX_GAIN_TAB_6_TG_TABLE6_LSB                                                             0
#define PHY_BB_TX_GAIN_TAB_6_TG_TABLE6_MASK                                                   0xffffffff
#define PHY_BB_TX_GAIN_TAB_6_TG_TABLE6_GET(x)                                  (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_6_TG_TABLE6_SET(x)                                  (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_7 */
#define PHY_BB_TX_GAIN_TAB_7_ADDRESS                                                          0x0000a518
#define PHY_BB_TX_GAIN_TAB_7_OFFSET                                                           0x00000318
#define PHY_BB_TX_GAIN_TAB_7_TG_TABLE7_MSB                                                            31
#define PHY_BB_TX_GAIN_TAB_7_TG_TABLE7_LSB                                                             0
#define PHY_BB_TX_GAIN_TAB_7_TG_TABLE7_MASK                                                   0xffffffff
#define PHY_BB_TX_GAIN_TAB_7_TG_TABLE7_GET(x)                                  (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_7_TG_TABLE7_SET(x)                                  (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_8 */
#define PHY_BB_TX_GAIN_TAB_8_ADDRESS                                                          0x0000a51c
#define PHY_BB_TX_GAIN_TAB_8_OFFSET                                                           0x0000031c
#define PHY_BB_TX_GAIN_TAB_8_TG_TABLE8_MSB                                                            31
#define PHY_BB_TX_GAIN_TAB_8_TG_TABLE8_LSB                                                             0
#define PHY_BB_TX_GAIN_TAB_8_TG_TABLE8_MASK                                                   0xffffffff
#define PHY_BB_TX_GAIN_TAB_8_TG_TABLE8_GET(x)                                  (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_8_TG_TABLE8_SET(x)                                  (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_9 */
#define PHY_BB_TX_GAIN_TAB_9_ADDRESS                                                          0x0000a520
#define PHY_BB_TX_GAIN_TAB_9_OFFSET                                                           0x00000320
#define PHY_BB_TX_GAIN_TAB_9_TG_TABLE9_MSB                                                            31
#define PHY_BB_TX_GAIN_TAB_9_TG_TABLE9_LSB                                                             0
#define PHY_BB_TX_GAIN_TAB_9_TG_TABLE9_MASK                                                   0xffffffff
#define PHY_BB_TX_GAIN_TAB_9_TG_TABLE9_GET(x)                                  (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_9_TG_TABLE9_SET(x)                                  (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_10 */
#define PHY_BB_TX_GAIN_TAB_10_ADDRESS                                                         0x0000a524
#define PHY_BB_TX_GAIN_TAB_10_OFFSET                                                          0x00000324
#define PHY_BB_TX_GAIN_TAB_10_TG_TABLE10_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_10_TG_TABLE10_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_10_TG_TABLE10_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_10_TG_TABLE10_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_10_TG_TABLE10_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_11 */
#define PHY_BB_TX_GAIN_TAB_11_ADDRESS                                                         0x0000a528
#define PHY_BB_TX_GAIN_TAB_11_OFFSET                                                          0x00000328
#define PHY_BB_TX_GAIN_TAB_11_TG_TABLE11_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_11_TG_TABLE11_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_11_TG_TABLE11_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_11_TG_TABLE11_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_11_TG_TABLE11_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_12 */
#define PHY_BB_TX_GAIN_TAB_12_ADDRESS                                                         0x0000a52c
#define PHY_BB_TX_GAIN_TAB_12_OFFSET                                                          0x0000032c
#define PHY_BB_TX_GAIN_TAB_12_TG_TABLE12_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_12_TG_TABLE12_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_12_TG_TABLE12_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_12_TG_TABLE12_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_12_TG_TABLE12_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_13 */
#define PHY_BB_TX_GAIN_TAB_13_ADDRESS                                                         0x0000a530
#define PHY_BB_TX_GAIN_TAB_13_OFFSET                                                          0x00000330
#define PHY_BB_TX_GAIN_TAB_13_TG_TABLE13_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_13_TG_TABLE13_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_13_TG_TABLE13_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_13_TG_TABLE13_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_13_TG_TABLE13_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_14 */
#define PHY_BB_TX_GAIN_TAB_14_ADDRESS                                                         0x0000a534
#define PHY_BB_TX_GAIN_TAB_14_OFFSET                                                          0x00000334
#define PHY_BB_TX_GAIN_TAB_14_TG_TABLE14_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_14_TG_TABLE14_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_14_TG_TABLE14_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_14_TG_TABLE14_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_14_TG_TABLE14_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_15 */
#define PHY_BB_TX_GAIN_TAB_15_ADDRESS                                                         0x0000a538
#define PHY_BB_TX_GAIN_TAB_15_OFFSET                                                          0x00000338
#define PHY_BB_TX_GAIN_TAB_15_TG_TABLE15_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_15_TG_TABLE15_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_15_TG_TABLE15_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_15_TG_TABLE15_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_15_TG_TABLE15_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_16 */
#define PHY_BB_TX_GAIN_TAB_16_ADDRESS                                                         0x0000a53c
#define PHY_BB_TX_GAIN_TAB_16_OFFSET                                                          0x0000033c
#define PHY_BB_TX_GAIN_TAB_16_TG_TABLE16_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_16_TG_TABLE16_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_16_TG_TABLE16_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_16_TG_TABLE16_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_16_TG_TABLE16_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_17 */
#define PHY_BB_TX_GAIN_TAB_17_ADDRESS                                                         0x0000a540
#define PHY_BB_TX_GAIN_TAB_17_OFFSET                                                          0x00000340
#define PHY_BB_TX_GAIN_TAB_17_TG_TABLE17_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_17_TG_TABLE17_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_17_TG_TABLE17_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_17_TG_TABLE17_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_17_TG_TABLE17_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_18 */
#define PHY_BB_TX_GAIN_TAB_18_ADDRESS                                                         0x0000a544
#define PHY_BB_TX_GAIN_TAB_18_OFFSET                                                          0x00000344
#define PHY_BB_TX_GAIN_TAB_18_TG_TABLE18_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_18_TG_TABLE18_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_18_TG_TABLE18_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_18_TG_TABLE18_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_18_TG_TABLE18_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_19 */
#define PHY_BB_TX_GAIN_TAB_19_ADDRESS                                                         0x0000a548
#define PHY_BB_TX_GAIN_TAB_19_OFFSET                                                          0x00000348
#define PHY_BB_TX_GAIN_TAB_19_TG_TABLE19_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_19_TG_TABLE19_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_19_TG_TABLE19_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_19_TG_TABLE19_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_19_TG_TABLE19_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_20 */
#define PHY_BB_TX_GAIN_TAB_20_ADDRESS                                                         0x0000a54c
#define PHY_BB_TX_GAIN_TAB_20_OFFSET                                                          0x0000034c
#define PHY_BB_TX_GAIN_TAB_20_TG_TABLE20_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_20_TG_TABLE20_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_20_TG_TABLE20_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_20_TG_TABLE20_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_20_TG_TABLE20_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_21 */
#define PHY_BB_TX_GAIN_TAB_21_ADDRESS                                                         0x0000a550
#define PHY_BB_TX_GAIN_TAB_21_OFFSET                                                          0x00000350
#define PHY_BB_TX_GAIN_TAB_21_TG_TABLE21_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_21_TG_TABLE21_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_21_TG_TABLE21_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_21_TG_TABLE21_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_21_TG_TABLE21_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_22 */
#define PHY_BB_TX_GAIN_TAB_22_ADDRESS                                                         0x0000a554
#define PHY_BB_TX_GAIN_TAB_22_OFFSET                                                          0x00000354
#define PHY_BB_TX_GAIN_TAB_22_TG_TABLE22_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_22_TG_TABLE22_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_22_TG_TABLE22_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_22_TG_TABLE22_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_22_TG_TABLE22_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_23 */
#define PHY_BB_TX_GAIN_TAB_23_ADDRESS                                                         0x0000a558
#define PHY_BB_TX_GAIN_TAB_23_OFFSET                                                          0x00000358
#define PHY_BB_TX_GAIN_TAB_23_TG_TABLE23_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_23_TG_TABLE23_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_23_TG_TABLE23_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_23_TG_TABLE23_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_23_TG_TABLE23_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_24 */
#define PHY_BB_TX_GAIN_TAB_24_ADDRESS                                                         0x0000a55c
#define PHY_BB_TX_GAIN_TAB_24_OFFSET                                                          0x0000035c
#define PHY_BB_TX_GAIN_TAB_24_TG_TABLE24_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_24_TG_TABLE24_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_24_TG_TABLE24_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_24_TG_TABLE24_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_24_TG_TABLE24_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_25 */
#define PHY_BB_TX_GAIN_TAB_25_ADDRESS                                                         0x0000a560
#define PHY_BB_TX_GAIN_TAB_25_OFFSET                                                          0x00000360
#define PHY_BB_TX_GAIN_TAB_25_TG_TABLE25_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_25_TG_TABLE25_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_25_TG_TABLE25_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_25_TG_TABLE25_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_25_TG_TABLE25_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_26 */
#define PHY_BB_TX_GAIN_TAB_26_ADDRESS                                                         0x0000a564
#define PHY_BB_TX_GAIN_TAB_26_OFFSET                                                          0x00000364
#define PHY_BB_TX_GAIN_TAB_26_TG_TABLE26_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_26_TG_TABLE26_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_26_TG_TABLE26_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_26_TG_TABLE26_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_26_TG_TABLE26_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_27 */
#define PHY_BB_TX_GAIN_TAB_27_ADDRESS                                                         0x0000a568
#define PHY_BB_TX_GAIN_TAB_27_OFFSET                                                          0x00000368
#define PHY_BB_TX_GAIN_TAB_27_TG_TABLE27_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_27_TG_TABLE27_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_27_TG_TABLE27_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_27_TG_TABLE27_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_27_TG_TABLE27_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_28 */
#define PHY_BB_TX_GAIN_TAB_28_ADDRESS                                                         0x0000a56c
#define PHY_BB_TX_GAIN_TAB_28_OFFSET                                                          0x0000036c
#define PHY_BB_TX_GAIN_TAB_28_TG_TABLE28_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_28_TG_TABLE28_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_28_TG_TABLE28_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_28_TG_TABLE28_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_28_TG_TABLE28_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_29 */
#define PHY_BB_TX_GAIN_TAB_29_ADDRESS                                                         0x0000a570
#define PHY_BB_TX_GAIN_TAB_29_OFFSET                                                          0x00000370
#define PHY_BB_TX_GAIN_TAB_29_TG_TABLE29_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_29_TG_TABLE29_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_29_TG_TABLE29_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_29_TG_TABLE29_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_29_TG_TABLE29_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_30 */
#define PHY_BB_TX_GAIN_TAB_30_ADDRESS                                                         0x0000a574
#define PHY_BB_TX_GAIN_TAB_30_OFFSET                                                          0x00000374
#define PHY_BB_TX_GAIN_TAB_30_TG_TABLE30_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_30_TG_TABLE30_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_30_TG_TABLE30_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_30_TG_TABLE30_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_30_TG_TABLE30_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_31 */
#define PHY_BB_TX_GAIN_TAB_31_ADDRESS                                                         0x0000a578
#define PHY_BB_TX_GAIN_TAB_31_OFFSET                                                          0x00000378
#define PHY_BB_TX_GAIN_TAB_31_TG_TABLE31_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_31_TG_TABLE31_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_31_TG_TABLE31_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_31_TG_TABLE31_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_31_TG_TABLE31_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_32 */
#define PHY_BB_TX_GAIN_TAB_32_ADDRESS                                                         0x0000a57c
#define PHY_BB_TX_GAIN_TAB_32_OFFSET                                                          0x0000037c
#define PHY_BB_TX_GAIN_TAB_32_TG_TABLE32_MSB                                                          31
#define PHY_BB_TX_GAIN_TAB_32_TG_TABLE32_LSB                                                           0
#define PHY_BB_TX_GAIN_TAB_32_TG_TABLE32_MASK                                                 0xffffffff
#define PHY_BB_TX_GAIN_TAB_32_TG_TABLE32_GET(x)                                (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_32_TG_TABLE32_SET(x)                                (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_rtt_ctrl */
#define PHY_BB_RTT_CTRL_ADDRESS                                                               0x0000a580
#define PHY_BB_RTT_CTRL_OFFSET                                                                0x00000380
#define PHY_BB_RTT_CTRL_ENA_RADIO_RETENTION_MSB                                                        0
#define PHY_BB_RTT_CTRL_ENA_RADIO_RETENTION_LSB                                                        0
#define PHY_BB_RTT_CTRL_ENA_RADIO_RETENTION_MASK                                              0x00000001
#define PHY_BB_RTT_CTRL_ENA_RADIO_RETENTION_GET(x)                             (((x) & 0x00000001) >> 0)
#define PHY_BB_RTT_CTRL_ENA_RADIO_RETENTION_SET(x)                             (((x) << 0) & 0x00000001)
#define PHY_BB_RTT_CTRL_RESTORE_MASK_MSB                                                               6
#define PHY_BB_RTT_CTRL_RESTORE_MASK_LSB                                                               1
#define PHY_BB_RTT_CTRL_RESTORE_MASK_MASK                                                     0x0000007e
#define PHY_BB_RTT_CTRL_RESTORE_MASK_GET(x)                                    (((x) & 0x0000007e) >> 1)
#define PHY_BB_RTT_CTRL_RESTORE_MASK_SET(x)                                    (((x) << 1) & 0x0000007e)
#define PHY_BB_RTT_CTRL_FORCE_RADIO_RESTORE_MSB                                                        7
#define PHY_BB_RTT_CTRL_FORCE_RADIO_RESTORE_LSB                                                        7
#define PHY_BB_RTT_CTRL_FORCE_RADIO_RESTORE_MASK                                              0x00000080
#define PHY_BB_RTT_CTRL_FORCE_RADIO_RESTORE_GET(x)                             (((x) & 0x00000080) >> 7)
#define PHY_BB_RTT_CTRL_FORCE_RADIO_RESTORE_SET(x)                             (((x) << 7) & 0x00000080)

/* macros for bb_sm_reg_map.BB_rtt_table_sw_intf_b0 */
#define PHY_BB_RTT_TABLE_SW_INTF_B0_ADDRESS                                                   0x0000a584
#define PHY_BB_RTT_TABLE_SW_INTF_B0_OFFSET                                                    0x00000384
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_ACCESS_0_MSB                                          0
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_ACCESS_0_LSB                                          0
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_ACCESS_0_MASK                                0x00000001
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_ACCESS_0_GET(x)               (((x) & 0x00000001) >> 0)
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_ACCESS_0_SET(x)               (((x) << 0) & 0x00000001)
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_WRITE_0_MSB                                           1
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_WRITE_0_LSB                                           1
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_WRITE_0_MASK                                 0x00000002
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_WRITE_0_GET(x)                (((x) & 0x00000002) >> 1)
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_WRITE_0_SET(x)                (((x) << 1) & 0x00000002)
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_ADDR_0_MSB                                            4
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_ADDR_0_LSB                                            2
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_ADDR_0_MASK                                  0x0000001c
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_ADDR_0_GET(x)                 (((x) & 0x0000001c) >> 2)
#define PHY_BB_RTT_TABLE_SW_INTF_B0_SW_RTT_TABLE_ADDR_0_SET(x)                 (((x) << 2) & 0x0000001c)

/* macros for bb_sm_reg_map.BB_rtt_table_sw_intf_1_b0 */
#define PHY_BB_RTT_TABLE_SW_INTF_1_B0_ADDRESS                                                 0x0000a588
#define PHY_BB_RTT_TABLE_SW_INTF_1_B0_OFFSET                                                  0x00000388
#define PHY_BB_RTT_TABLE_SW_INTF_1_B0_SW_RTT_TABLE_DATA_0_MSB                                         31
#define PHY_BB_RTT_TABLE_SW_INTF_1_B0_SW_RTT_TABLE_DATA_0_LSB                                          4
#define PHY_BB_RTT_TABLE_SW_INTF_1_B0_SW_RTT_TABLE_DATA_0_MASK                                0xfffffff0
#define PHY_BB_RTT_TABLE_SW_INTF_1_B0_SW_RTT_TABLE_DATA_0_GET(x)               (((x) & 0xfffffff0) >> 4)
#define PHY_BB_RTT_TABLE_SW_INTF_1_B0_SW_RTT_TABLE_DATA_0_SET(x)               (((x) << 4) & 0xfffffff0)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_1_16_lsb_ext */
#define PHY_BB_TX_GAIN_TAB_1_16_LSB_EXT_ADDRESS                                               0x0000a58c
#define PHY_BB_TX_GAIN_TAB_1_16_LSB_EXT_OFFSET                                                0x0000038c
#define PHY_BB_TX_GAIN_TAB_1_16_LSB_EXT_TG_TABLE1_16_LSB_EXT_MSB                                      31
#define PHY_BB_TX_GAIN_TAB_1_16_LSB_EXT_TG_TABLE1_16_LSB_EXT_LSB                                       0
#define PHY_BB_TX_GAIN_TAB_1_16_LSB_EXT_TG_TABLE1_16_LSB_EXT_MASK                             0xffffffff
#define PHY_BB_TX_GAIN_TAB_1_16_LSB_EXT_TG_TABLE1_16_LSB_EXT_GET(x)            (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_1_16_LSB_EXT_TG_TABLE1_16_LSB_EXT_SET(x)            (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_tx_gain_tab_17_32_lsb_ext */
#define PHY_BB_TX_GAIN_TAB_17_32_LSB_EXT_ADDRESS                                              0x0000a590
#define PHY_BB_TX_GAIN_TAB_17_32_LSB_EXT_OFFSET                                               0x00000390
#define PHY_BB_TX_GAIN_TAB_17_32_LSB_EXT_TG_TABLE17_32_LSB_EXT_MSB                                    31
#define PHY_BB_TX_GAIN_TAB_17_32_LSB_EXT_TG_TABLE17_32_LSB_EXT_LSB                                     0
#define PHY_BB_TX_GAIN_TAB_17_32_LSB_EXT_TG_TABLE17_32_LSB_EXT_MASK                           0xffffffff
#define PHY_BB_TX_GAIN_TAB_17_32_LSB_EXT_TG_TABLE17_32_LSB_EXT_GET(x)          (((x) & 0xffffffff) >> 0)
#define PHY_BB_TX_GAIN_TAB_17_32_LSB_EXT_TG_TABLE17_32_LSB_EXT_SET(x)          (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_0 */
#define PHY_BB_CALTX_GAIN_SET_0_ADDRESS                                                       0x0000a600
#define PHY_BB_CALTX_GAIN_SET_0_OFFSET                                                        0x00000400
#define PHY_BB_CALTX_GAIN_SET_0_CALTX_GAIN_SET_0_MSB                                                  13
#define PHY_BB_CALTX_GAIN_SET_0_CALTX_GAIN_SET_0_LSB                                                   0
#define PHY_BB_CALTX_GAIN_SET_0_CALTX_GAIN_SET_0_MASK                                         0x00003fff
#define PHY_BB_CALTX_GAIN_SET_0_CALTX_GAIN_SET_0_GET(x)                        (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_0_CALTX_GAIN_SET_0_SET(x)                        (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_0_CALTX_GAIN_SET_1_MSB                                                  27
#define PHY_BB_CALTX_GAIN_SET_0_CALTX_GAIN_SET_1_LSB                                                  14
#define PHY_BB_CALTX_GAIN_SET_0_CALTX_GAIN_SET_1_MASK                                         0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_0_CALTX_GAIN_SET_1_GET(x)                       (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_0_CALTX_GAIN_SET_1_SET(x)                       (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_2 */
#define PHY_BB_CALTX_GAIN_SET_2_ADDRESS                                                       0x0000a604
#define PHY_BB_CALTX_GAIN_SET_2_OFFSET                                                        0x00000404
#define PHY_BB_CALTX_GAIN_SET_2_CALTX_GAIN_SET_2_MSB                                                  13
#define PHY_BB_CALTX_GAIN_SET_2_CALTX_GAIN_SET_2_LSB                                                   0
#define PHY_BB_CALTX_GAIN_SET_2_CALTX_GAIN_SET_2_MASK                                         0x00003fff
#define PHY_BB_CALTX_GAIN_SET_2_CALTX_GAIN_SET_2_GET(x)                        (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_2_CALTX_GAIN_SET_2_SET(x)                        (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_2_CALTX_GAIN_SET_3_MSB                                                  27
#define PHY_BB_CALTX_GAIN_SET_2_CALTX_GAIN_SET_3_LSB                                                  14
#define PHY_BB_CALTX_GAIN_SET_2_CALTX_GAIN_SET_3_MASK                                         0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_2_CALTX_GAIN_SET_3_GET(x)                       (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_2_CALTX_GAIN_SET_3_SET(x)                       (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_4 */
#define PHY_BB_CALTX_GAIN_SET_4_ADDRESS                                                       0x0000a608
#define PHY_BB_CALTX_GAIN_SET_4_OFFSET                                                        0x00000408
#define PHY_BB_CALTX_GAIN_SET_4_CALTX_GAIN_SET_4_MSB                                                  13
#define PHY_BB_CALTX_GAIN_SET_4_CALTX_GAIN_SET_4_LSB                                                   0
#define PHY_BB_CALTX_GAIN_SET_4_CALTX_GAIN_SET_4_MASK                                         0x00003fff
#define PHY_BB_CALTX_GAIN_SET_4_CALTX_GAIN_SET_4_GET(x)                        (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_4_CALTX_GAIN_SET_4_SET(x)                        (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_4_CALTX_GAIN_SET_5_MSB                                                  27
#define PHY_BB_CALTX_GAIN_SET_4_CALTX_GAIN_SET_5_LSB                                                  14
#define PHY_BB_CALTX_GAIN_SET_4_CALTX_GAIN_SET_5_MASK                                         0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_4_CALTX_GAIN_SET_5_GET(x)                       (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_4_CALTX_GAIN_SET_5_SET(x)                       (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_6 */
#define PHY_BB_CALTX_GAIN_SET_6_ADDRESS                                                       0x0000a60c
#define PHY_BB_CALTX_GAIN_SET_6_OFFSET                                                        0x0000040c
#define PHY_BB_CALTX_GAIN_SET_6_CALTX_GAIN_SET_6_MSB                                                  13
#define PHY_BB_CALTX_GAIN_SET_6_CALTX_GAIN_SET_6_LSB                                                   0
#define PHY_BB_CALTX_GAIN_SET_6_CALTX_GAIN_SET_6_MASK                                         0x00003fff
#define PHY_BB_CALTX_GAIN_SET_6_CALTX_GAIN_SET_6_GET(x)                        (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_6_CALTX_GAIN_SET_6_SET(x)                        (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_6_CALTX_GAIN_SET_7_MSB                                                  27
#define PHY_BB_CALTX_GAIN_SET_6_CALTX_GAIN_SET_7_LSB                                                  14
#define PHY_BB_CALTX_GAIN_SET_6_CALTX_GAIN_SET_7_MASK                                         0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_6_CALTX_GAIN_SET_7_GET(x)                       (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_6_CALTX_GAIN_SET_7_SET(x)                       (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_8 */
#define PHY_BB_CALTX_GAIN_SET_8_ADDRESS                                                       0x0000a610
#define PHY_BB_CALTX_GAIN_SET_8_OFFSET                                                        0x00000410
#define PHY_BB_CALTX_GAIN_SET_8_CALTX_GAIN_SET_8_MSB                                                  13
#define PHY_BB_CALTX_GAIN_SET_8_CALTX_GAIN_SET_8_LSB                                                   0
#define PHY_BB_CALTX_GAIN_SET_8_CALTX_GAIN_SET_8_MASK                                         0x00003fff
#define PHY_BB_CALTX_GAIN_SET_8_CALTX_GAIN_SET_8_GET(x)                        (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_8_CALTX_GAIN_SET_8_SET(x)                        (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_8_CALTX_GAIN_SET_9_MSB                                                  27
#define PHY_BB_CALTX_GAIN_SET_8_CALTX_GAIN_SET_9_LSB                                                  14
#define PHY_BB_CALTX_GAIN_SET_8_CALTX_GAIN_SET_9_MASK                                         0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_8_CALTX_GAIN_SET_9_GET(x)                       (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_8_CALTX_GAIN_SET_9_SET(x)                       (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_10 */
#define PHY_BB_CALTX_GAIN_SET_10_ADDRESS                                                      0x0000a614
#define PHY_BB_CALTX_GAIN_SET_10_OFFSET                                                       0x00000414
#define PHY_BB_CALTX_GAIN_SET_10_CALTX_GAIN_SET_10_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_10_CALTX_GAIN_SET_10_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_10_CALTX_GAIN_SET_10_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_10_CALTX_GAIN_SET_10_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_10_CALTX_GAIN_SET_10_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_10_CALTX_GAIN_SET_11_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_10_CALTX_GAIN_SET_11_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_10_CALTX_GAIN_SET_11_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_10_CALTX_GAIN_SET_11_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_10_CALTX_GAIN_SET_11_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_12 */
#define PHY_BB_CALTX_GAIN_SET_12_ADDRESS                                                      0x0000a618
#define PHY_BB_CALTX_GAIN_SET_12_OFFSET                                                       0x00000418
#define PHY_BB_CALTX_GAIN_SET_12_CALTX_GAIN_SET_12_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_12_CALTX_GAIN_SET_12_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_12_CALTX_GAIN_SET_12_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_12_CALTX_GAIN_SET_12_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_12_CALTX_GAIN_SET_12_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_12_CALTX_GAIN_SET_13_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_12_CALTX_GAIN_SET_13_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_12_CALTX_GAIN_SET_13_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_12_CALTX_GAIN_SET_13_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_12_CALTX_GAIN_SET_13_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_14 */
#define PHY_BB_CALTX_GAIN_SET_14_ADDRESS                                                      0x0000a61c
#define PHY_BB_CALTX_GAIN_SET_14_OFFSET                                                       0x0000041c
#define PHY_BB_CALTX_GAIN_SET_14_CALTX_GAIN_SET_14_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_14_CALTX_GAIN_SET_14_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_14_CALTX_GAIN_SET_14_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_14_CALTX_GAIN_SET_14_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_14_CALTX_GAIN_SET_14_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_14_CALTX_GAIN_SET_15_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_14_CALTX_GAIN_SET_15_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_14_CALTX_GAIN_SET_15_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_14_CALTX_GAIN_SET_15_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_14_CALTX_GAIN_SET_15_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_16 */
#define PHY_BB_CALTX_GAIN_SET_16_ADDRESS                                                      0x0000a620
#define PHY_BB_CALTX_GAIN_SET_16_OFFSET                                                       0x00000420
#define PHY_BB_CALTX_GAIN_SET_16_CALTX_GAIN_SET_16_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_16_CALTX_GAIN_SET_16_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_16_CALTX_GAIN_SET_16_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_16_CALTX_GAIN_SET_16_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_16_CALTX_GAIN_SET_16_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_16_CALTX_GAIN_SET_17_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_16_CALTX_GAIN_SET_17_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_16_CALTX_GAIN_SET_17_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_16_CALTX_GAIN_SET_17_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_16_CALTX_GAIN_SET_17_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_18 */
#define PHY_BB_CALTX_GAIN_SET_18_ADDRESS                                                      0x0000a624
#define PHY_BB_CALTX_GAIN_SET_18_OFFSET                                                       0x00000424
#define PHY_BB_CALTX_GAIN_SET_18_CALTX_GAIN_SET_18_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_18_CALTX_GAIN_SET_18_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_18_CALTX_GAIN_SET_18_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_18_CALTX_GAIN_SET_18_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_18_CALTX_GAIN_SET_18_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_18_CALTX_GAIN_SET_19_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_18_CALTX_GAIN_SET_19_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_18_CALTX_GAIN_SET_19_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_18_CALTX_GAIN_SET_19_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_18_CALTX_GAIN_SET_19_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_20 */
#define PHY_BB_CALTX_GAIN_SET_20_ADDRESS                                                      0x0000a628
#define PHY_BB_CALTX_GAIN_SET_20_OFFSET                                                       0x00000428
#define PHY_BB_CALTX_GAIN_SET_20_CALTX_GAIN_SET_20_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_20_CALTX_GAIN_SET_20_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_20_CALTX_GAIN_SET_20_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_20_CALTX_GAIN_SET_20_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_20_CALTX_GAIN_SET_20_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_20_CALTX_GAIN_SET_21_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_20_CALTX_GAIN_SET_21_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_20_CALTX_GAIN_SET_21_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_20_CALTX_GAIN_SET_21_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_20_CALTX_GAIN_SET_21_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_22 */
#define PHY_BB_CALTX_GAIN_SET_22_ADDRESS                                                      0x0000a62c
#define PHY_BB_CALTX_GAIN_SET_22_OFFSET                                                       0x0000042c
#define PHY_BB_CALTX_GAIN_SET_22_CALTX_GAIN_SET_22_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_22_CALTX_GAIN_SET_22_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_22_CALTX_GAIN_SET_22_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_22_CALTX_GAIN_SET_22_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_22_CALTX_GAIN_SET_22_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_22_CALTX_GAIN_SET_23_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_22_CALTX_GAIN_SET_23_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_22_CALTX_GAIN_SET_23_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_22_CALTX_GAIN_SET_23_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_22_CALTX_GAIN_SET_23_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_24 */
#define PHY_BB_CALTX_GAIN_SET_24_ADDRESS                                                      0x0000a630
#define PHY_BB_CALTX_GAIN_SET_24_OFFSET                                                       0x00000430
#define PHY_BB_CALTX_GAIN_SET_24_CALTX_GAIN_SET_24_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_24_CALTX_GAIN_SET_24_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_24_CALTX_GAIN_SET_24_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_24_CALTX_GAIN_SET_24_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_24_CALTX_GAIN_SET_24_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_24_CALTX_GAIN_SET_25_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_24_CALTX_GAIN_SET_25_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_24_CALTX_GAIN_SET_25_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_24_CALTX_GAIN_SET_25_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_24_CALTX_GAIN_SET_25_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_26 */
#define PHY_BB_CALTX_GAIN_SET_26_ADDRESS                                                      0x0000a634
#define PHY_BB_CALTX_GAIN_SET_26_OFFSET                                                       0x00000434
#define PHY_BB_CALTX_GAIN_SET_26_CALTX_GAIN_SET_26_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_26_CALTX_GAIN_SET_26_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_26_CALTX_GAIN_SET_26_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_26_CALTX_GAIN_SET_26_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_26_CALTX_GAIN_SET_26_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_26_CALTX_GAIN_SET_27_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_26_CALTX_GAIN_SET_27_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_26_CALTX_GAIN_SET_27_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_26_CALTX_GAIN_SET_27_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_26_CALTX_GAIN_SET_27_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_28 */
#define PHY_BB_CALTX_GAIN_SET_28_ADDRESS                                                      0x0000a638
#define PHY_BB_CALTX_GAIN_SET_28_OFFSET                                                       0x00000438
#define PHY_BB_CALTX_GAIN_SET_28_CALTX_GAIN_SET_28_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_28_CALTX_GAIN_SET_28_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_28_CALTX_GAIN_SET_28_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_28_CALTX_GAIN_SET_28_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_28_CALTX_GAIN_SET_28_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_28_CALTX_GAIN_SET_29_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_28_CALTX_GAIN_SET_29_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_28_CALTX_GAIN_SET_29_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_28_CALTX_GAIN_SET_29_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_28_CALTX_GAIN_SET_29_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_caltx_gain_set_30 */
#define PHY_BB_CALTX_GAIN_SET_30_ADDRESS                                                      0x0000a63c
#define PHY_BB_CALTX_GAIN_SET_30_OFFSET                                                       0x0000043c
#define PHY_BB_CALTX_GAIN_SET_30_CALTX_GAIN_SET_30_MSB                                                13
#define PHY_BB_CALTX_GAIN_SET_30_CALTX_GAIN_SET_30_LSB                                                 0
#define PHY_BB_CALTX_GAIN_SET_30_CALTX_GAIN_SET_30_MASK                                       0x00003fff
#define PHY_BB_CALTX_GAIN_SET_30_CALTX_GAIN_SET_30_GET(x)                      (((x) & 0x00003fff) >> 0)
#define PHY_BB_CALTX_GAIN_SET_30_CALTX_GAIN_SET_30_SET(x)                      (((x) << 0) & 0x00003fff)
#define PHY_BB_CALTX_GAIN_SET_30_CALTX_GAIN_SET_31_MSB                                                27
#define PHY_BB_CALTX_GAIN_SET_30_CALTX_GAIN_SET_31_LSB                                                14
#define PHY_BB_CALTX_GAIN_SET_30_CALTX_GAIN_SET_31_MASK                                       0x0fffc000
#define PHY_BB_CALTX_GAIN_SET_30_CALTX_GAIN_SET_31_GET(x)                     (((x) & 0x0fffc000) >> 14)
#define PHY_BB_CALTX_GAIN_SET_30_CALTX_GAIN_SET_31_SET(x)                     (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_txiqcal_control_0 */
#define PHY_BB_TXIQCAL_CONTROL_0_ADDRESS                                                      0x0000a644
#define PHY_BB_TXIQCAL_CONTROL_0_OFFSET                                                       0x00000444
#define PHY_BB_TXIQCAL_CONTROL_0_IQC_TX_TABLE_SEL_MSB                                                  0
#define PHY_BB_TXIQCAL_CONTROL_0_IQC_TX_TABLE_SEL_LSB                                                  0
#define PHY_BB_TXIQCAL_CONTROL_0_IQC_TX_TABLE_SEL_MASK                                        0x00000001
#define PHY_BB_TXIQCAL_CONTROL_0_IQC_TX_TABLE_SEL_GET(x)                       (((x) & 0x00000001) >> 0)
#define PHY_BB_TXIQCAL_CONTROL_0_IQC_TX_TABLE_SEL_SET(x)                       (((x) << 0) & 0x00000001)
#define PHY_BB_TXIQCAL_CONTROL_0_BASE_TX_TONE_DB_MSB                                                   6
#define PHY_BB_TXIQCAL_CONTROL_0_BASE_TX_TONE_DB_LSB                                                   1
#define PHY_BB_TXIQCAL_CONTROL_0_BASE_TX_TONE_DB_MASK                                         0x0000007e
#define PHY_BB_TXIQCAL_CONTROL_0_BASE_TX_TONE_DB_GET(x)                        (((x) & 0x0000007e) >> 1)
#define PHY_BB_TXIQCAL_CONTROL_0_BASE_TX_TONE_DB_SET(x)                        (((x) << 1) & 0x0000007e)
#define PHY_BB_TXIQCAL_CONTROL_0_MAX_TX_TONE_GAIN_MSB                                                 12
#define PHY_BB_TXIQCAL_CONTROL_0_MAX_TX_TONE_GAIN_LSB                                                  7
#define PHY_BB_TXIQCAL_CONTROL_0_MAX_TX_TONE_GAIN_MASK                                        0x00001f80
#define PHY_BB_TXIQCAL_CONTROL_0_MAX_TX_TONE_GAIN_GET(x)                       (((x) & 0x00001f80) >> 7)
#define PHY_BB_TXIQCAL_CONTROL_0_MAX_TX_TONE_GAIN_SET(x)                       (((x) << 7) & 0x00001f80)
#define PHY_BB_TXIQCAL_CONTROL_0_MIN_TX_TONE_GAIN_MSB                                                 18
#define PHY_BB_TXIQCAL_CONTROL_0_MIN_TX_TONE_GAIN_LSB                                                 13
#define PHY_BB_TXIQCAL_CONTROL_0_MIN_TX_TONE_GAIN_MASK                                        0x0007e000
#define PHY_BB_TXIQCAL_CONTROL_0_MIN_TX_TONE_GAIN_GET(x)                      (((x) & 0x0007e000) >> 13)
#define PHY_BB_TXIQCAL_CONTROL_0_MIN_TX_TONE_GAIN_SET(x)                      (((x) << 13) & 0x0007e000)
#define PHY_BB_TXIQCAL_CONTROL_0_CALTXSHIFT_DELAY_MSB                                                 22
#define PHY_BB_TXIQCAL_CONTROL_0_CALTXSHIFT_DELAY_LSB                                                 19
#define PHY_BB_TXIQCAL_CONTROL_0_CALTXSHIFT_DELAY_MASK                                        0x00780000
#define PHY_BB_TXIQCAL_CONTROL_0_CALTXSHIFT_DELAY_GET(x)                      (((x) & 0x00780000) >> 19)
#define PHY_BB_TXIQCAL_CONTROL_0_CALTXSHIFT_DELAY_SET(x)                      (((x) << 19) & 0x00780000)
#define PHY_BB_TXIQCAL_CONTROL_0_LOOPBACK_DELAY_MSB                                                   29
#define PHY_BB_TXIQCAL_CONTROL_0_LOOPBACK_DELAY_LSB                                                   23
#define PHY_BB_TXIQCAL_CONTROL_0_LOOPBACK_DELAY_MASK                                          0x3f800000
#define PHY_BB_TXIQCAL_CONTROL_0_LOOPBACK_DELAY_GET(x)                        (((x) & 0x3f800000) >> 23)
#define PHY_BB_TXIQCAL_CONTROL_0_LOOPBACK_DELAY_SET(x)                        (((x) << 23) & 0x3f800000)
#define PHY_BB_TXIQCAL_CONTROL_0_ENABLE_COMBINED_CARR_IQ_CAL_MSB                                      30
#define PHY_BB_TXIQCAL_CONTROL_0_ENABLE_COMBINED_CARR_IQ_CAL_LSB                                      30
#define PHY_BB_TXIQCAL_CONTROL_0_ENABLE_COMBINED_CARR_IQ_CAL_MASK                             0x40000000
#define PHY_BB_TXIQCAL_CONTROL_0_ENABLE_COMBINED_CARR_IQ_CAL_GET(x)           (((x) & 0x40000000) >> 30)
#define PHY_BB_TXIQCAL_CONTROL_0_ENABLE_COMBINED_CARR_IQ_CAL_SET(x)           (((x) << 30) & 0x40000000)
#define PHY_BB_TXIQCAL_CONTROL_0_ENABLE_TXIQ_CALIBRATE_MSB                                            31
#define PHY_BB_TXIQCAL_CONTROL_0_ENABLE_TXIQ_CALIBRATE_LSB                                            31
#define PHY_BB_TXIQCAL_CONTROL_0_ENABLE_TXIQ_CALIBRATE_MASK                                   0x80000000
#define PHY_BB_TXIQCAL_CONTROL_0_ENABLE_TXIQ_CALIBRATE_GET(x)                 (((x) & 0x80000000) >> 31)
#define PHY_BB_TXIQCAL_CONTROL_0_ENABLE_TXIQ_CALIBRATE_SET(x)                 (((x) << 31) & 0x80000000)

/* macros for bb_sm_reg_map.BB_txiqcal_control_1 */
#define PHY_BB_TXIQCAL_CONTROL_1_ADDRESS                                                      0x0000a648
#define PHY_BB_TXIQCAL_CONTROL_1_OFFSET                                                       0x00000448
#define PHY_BB_TXIQCAL_CONTROL_1_RX_INIT_GAIN_DB_MSB                                                   5
#define PHY_BB_TXIQCAL_CONTROL_1_RX_INIT_GAIN_DB_LSB                                                   0
#define PHY_BB_TXIQCAL_CONTROL_1_RX_INIT_GAIN_DB_MASK                                         0x0000003f
#define PHY_BB_TXIQCAL_CONTROL_1_RX_INIT_GAIN_DB_GET(x)                        (((x) & 0x0000003f) >> 0)
#define PHY_BB_TXIQCAL_CONTROL_1_RX_INIT_GAIN_DB_SET(x)                        (((x) << 0) & 0x0000003f)
#define PHY_BB_TXIQCAL_CONTROL_1_MAX_RX_GAIN_DB_MSB                                                   11
#define PHY_BB_TXIQCAL_CONTROL_1_MAX_RX_GAIN_DB_LSB                                                    6
#define PHY_BB_TXIQCAL_CONTROL_1_MAX_RX_GAIN_DB_MASK                                          0x00000fc0
#define PHY_BB_TXIQCAL_CONTROL_1_MAX_RX_GAIN_DB_GET(x)                         (((x) & 0x00000fc0) >> 6)
#define PHY_BB_TXIQCAL_CONTROL_1_MAX_RX_GAIN_DB_SET(x)                         (((x) << 6) & 0x00000fc0)
#define PHY_BB_TXIQCAL_CONTROL_1_MIN_RX_GAIN_DB_MSB                                                   17
#define PHY_BB_TXIQCAL_CONTROL_1_MIN_RX_GAIN_DB_LSB                                                   12
#define PHY_BB_TXIQCAL_CONTROL_1_MIN_RX_GAIN_DB_MASK                                          0x0003f000
#define PHY_BB_TXIQCAL_CONTROL_1_MIN_RX_GAIN_DB_GET(x)                        (((x) & 0x0003f000) >> 12)
#define PHY_BB_TXIQCAL_CONTROL_1_MIN_RX_GAIN_DB_SET(x)                        (((x) << 12) & 0x0003f000)
#define PHY_BB_TXIQCAL_CONTROL_1_IQCORR_I_Q_COFF_DELPT_MSB                                            24
#define PHY_BB_TXIQCAL_CONTROL_1_IQCORR_I_Q_COFF_DELPT_LSB                                            18
#define PHY_BB_TXIQCAL_CONTROL_1_IQCORR_I_Q_COFF_DELPT_MASK                                   0x01fc0000
#define PHY_BB_TXIQCAL_CONTROL_1_IQCORR_I_Q_COFF_DELPT_GET(x)                 (((x) & 0x01fc0000) >> 18)
#define PHY_BB_TXIQCAL_CONTROL_1_IQCORR_I_Q_COFF_DELPT_SET(x)                 (((x) << 18) & 0x01fc0000)

/* macros for bb_sm_reg_map.BB_txiqcal_control_2 */
#define PHY_BB_TXIQCAL_CONTROL_2_ADDRESS                                                      0x0000a64c
#define PHY_BB_TXIQCAL_CONTROL_2_OFFSET                                                       0x0000044c
#define PHY_BB_TXIQCAL_CONTROL_2_IQC_FORCED_PAGAIN_MSB                                                 3
#define PHY_BB_TXIQCAL_CONTROL_2_IQC_FORCED_PAGAIN_LSB                                                 0
#define PHY_BB_TXIQCAL_CONTROL_2_IQC_FORCED_PAGAIN_MASK                                       0x0000000f
#define PHY_BB_TXIQCAL_CONTROL_2_IQC_FORCED_PAGAIN_GET(x)                      (((x) & 0x0000000f) >> 0)
#define PHY_BB_TXIQCAL_CONTROL_2_IQC_FORCED_PAGAIN_SET(x)                      (((x) << 0) & 0x0000000f)
#define PHY_BB_TXIQCAL_CONTROL_2_IQCAL_MIN_TX_GAIN_MSB                                                 8
#define PHY_BB_TXIQCAL_CONTROL_2_IQCAL_MIN_TX_GAIN_LSB                                                 4
#define PHY_BB_TXIQCAL_CONTROL_2_IQCAL_MIN_TX_GAIN_MASK                                       0x000001f0
#define PHY_BB_TXIQCAL_CONTROL_2_IQCAL_MIN_TX_GAIN_GET(x)                      (((x) & 0x000001f0) >> 4)
#define PHY_BB_TXIQCAL_CONTROL_2_IQCAL_MIN_TX_GAIN_SET(x)                      (((x) << 4) & 0x000001f0)
#define PHY_BB_TXIQCAL_CONTROL_2_IQCAL_MAX_TX_GAIN_MSB                                                13
#define PHY_BB_TXIQCAL_CONTROL_2_IQCAL_MAX_TX_GAIN_LSB                                                 9
#define PHY_BB_TXIQCAL_CONTROL_2_IQCAL_MAX_TX_GAIN_MASK                                       0x00003e00
#define PHY_BB_TXIQCAL_CONTROL_2_IQCAL_MAX_TX_GAIN_GET(x)                      (((x) & 0x00003e00) >> 9)
#define PHY_BB_TXIQCAL_CONTROL_2_IQCAL_MAX_TX_GAIN_SET(x)                      (((x) << 9) & 0x00003e00)

/* macros for bb_sm_reg_map.BB_txiq_corr_coeff_01_b0 */
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_ADDRESS                                                  0x0000a650
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_OFFSET                                                   0x00000450
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_IQC_COEFF_TABLE_0_0_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_IQC_COEFF_TABLE_0_0_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_IQC_COEFF_TABLE_0_0_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_IQC_COEFF_TABLE_0_0_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_IQC_COEFF_TABLE_0_0_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_IQC_COEFF_TABLE_1_0_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_IQC_COEFF_TABLE_1_0_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_IQC_COEFF_TABLE_1_0_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_IQC_COEFF_TABLE_1_0_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_01_B0_IQC_COEFF_TABLE_1_0_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_txiq_corr_coeff_23_b0 */
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_ADDRESS                                                  0x0000a654
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_OFFSET                                                   0x00000454
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_IQC_COEFF_TABLE_2_0_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_IQC_COEFF_TABLE_2_0_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_IQC_COEFF_TABLE_2_0_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_IQC_COEFF_TABLE_2_0_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_IQC_COEFF_TABLE_2_0_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_IQC_COEFF_TABLE_3_0_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_IQC_COEFF_TABLE_3_0_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_IQC_COEFF_TABLE_3_0_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_IQC_COEFF_TABLE_3_0_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_23_B0_IQC_COEFF_TABLE_3_0_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_txiq_corr_coeff_45_b0 */
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_ADDRESS                                                  0x0000a658
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_OFFSET                                                   0x00000458
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_IQC_COEFF_TABLE_4_0_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_IQC_COEFF_TABLE_4_0_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_IQC_COEFF_TABLE_4_0_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_IQC_COEFF_TABLE_4_0_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_IQC_COEFF_TABLE_4_0_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_IQC_COEFF_TABLE_5_0_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_IQC_COEFF_TABLE_5_0_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_IQC_COEFF_TABLE_5_0_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_IQC_COEFF_TABLE_5_0_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_45_B0_IQC_COEFF_TABLE_5_0_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_txiq_corr_coeff_67_b0 */
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_ADDRESS                                                  0x0000a65c
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_OFFSET                                                   0x0000045c
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_IQC_COEFF_TABLE_6_0_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_IQC_COEFF_TABLE_6_0_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_IQC_COEFF_TABLE_6_0_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_IQC_COEFF_TABLE_6_0_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_IQC_COEFF_TABLE_6_0_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_IQC_COEFF_TABLE_7_0_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_IQC_COEFF_TABLE_7_0_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_IQC_COEFF_TABLE_7_0_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_IQC_COEFF_TABLE_7_0_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_67_B0_IQC_COEFF_TABLE_7_0_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_txiq_corr_coeff_89_b0 */
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_ADDRESS                                                  0x0000a660
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_OFFSET                                                   0x00000460
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_IQC_COEFF_TABLE_8_0_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_IQC_COEFF_TABLE_8_0_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_IQC_COEFF_TABLE_8_0_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_IQC_COEFF_TABLE_8_0_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_IQC_COEFF_TABLE_8_0_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_IQC_COEFF_TABLE_9_0_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_IQC_COEFF_TABLE_9_0_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_IQC_COEFF_TABLE_9_0_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_IQC_COEFF_TABLE_9_0_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_89_B0_IQC_COEFF_TABLE_9_0_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_txiq_corr_coeff_ab_b0 */
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_ADDRESS                                                  0x0000a664
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_OFFSET                                                   0x00000464
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_IQC_COEFF_TABLE_A_0_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_IQC_COEFF_TABLE_A_0_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_IQC_COEFF_TABLE_A_0_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_IQC_COEFF_TABLE_A_0_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_IQC_COEFF_TABLE_A_0_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_IQC_COEFF_TABLE_B_0_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_IQC_COEFF_TABLE_B_0_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_IQC_COEFF_TABLE_B_0_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_IQC_COEFF_TABLE_B_0_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_AB_B0_IQC_COEFF_TABLE_B_0_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_txiq_corr_coeff_cd_b0 */
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_ADDRESS                                                  0x0000a668
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_OFFSET                                                   0x00000468
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_IQC_COEFF_TABLE_C_0_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_IQC_COEFF_TABLE_C_0_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_IQC_COEFF_TABLE_C_0_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_IQC_COEFF_TABLE_C_0_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_IQC_COEFF_TABLE_C_0_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_IQC_COEFF_TABLE_D_0_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_IQC_COEFF_TABLE_D_0_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_IQC_COEFF_TABLE_D_0_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_IQC_COEFF_TABLE_D_0_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_CD_B0_IQC_COEFF_TABLE_D_0_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_txiq_corr_coeff_ef_b0 */
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_ADDRESS                                                  0x0000a66c
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_OFFSET                                                   0x0000046c
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_IQC_COEFF_TABLE_E_0_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_IQC_COEFF_TABLE_E_0_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_IQC_COEFF_TABLE_E_0_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_IQC_COEFF_TABLE_E_0_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_IQC_COEFF_TABLE_E_0_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_IQC_COEFF_TABLE_F_0_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_IQC_COEFF_TABLE_F_0_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_IQC_COEFF_TABLE_F_0_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_IQC_COEFF_TABLE_F_0_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_EF_B0_IQC_COEFF_TABLE_F_0_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm_reg_map.BB_cal_rxbb_gain_tbl_0 */
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_ADDRESS                                                    0x0000a670
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_OFFSET                                                     0x00000470
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_0_MSB                                        7
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_0_LSB                                        0
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_0_MASK                              0x000000ff
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_0_GET(x)             (((x) & 0x000000ff) >> 0)
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_0_SET(x)             (((x) << 0) & 0x000000ff)
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_1_MSB                                       15
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_1_LSB                                        8
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_1_MASK                              0x0000ff00
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_1_GET(x)             (((x) & 0x0000ff00) >> 8)
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_1_SET(x)             (((x) << 8) & 0x0000ff00)
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_2_MSB                                       23
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_2_LSB                                       16
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_2_MASK                              0x00ff0000
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_2_GET(x)            (((x) & 0x00ff0000) >> 16)
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_2_SET(x)            (((x) << 16) & 0x00ff0000)
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_3_MSB                                       31
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_3_LSB                                       24
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_3_MASK                              0xff000000
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_3_GET(x)            (((x) & 0xff000000) >> 24)
#define PHY_BB_CAL_RXBB_GAIN_TBL_0_TXCAL_RX_BB_GAIN_TABLE_3_SET(x)            (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_cal_rxbb_gain_tbl_4 */
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_ADDRESS                                                    0x0000a674
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_OFFSET                                                     0x00000474
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_4_MSB                                        7
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_4_LSB                                        0
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_4_MASK                              0x000000ff
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_4_GET(x)             (((x) & 0x000000ff) >> 0)
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_4_SET(x)             (((x) << 0) & 0x000000ff)
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_5_MSB                                       15
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_5_LSB                                        8
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_5_MASK                              0x0000ff00
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_5_GET(x)             (((x) & 0x0000ff00) >> 8)
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_5_SET(x)             (((x) << 8) & 0x0000ff00)
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_6_MSB                                       23
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_6_LSB                                       16
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_6_MASK                              0x00ff0000
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_6_GET(x)            (((x) & 0x00ff0000) >> 16)
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_6_SET(x)            (((x) << 16) & 0x00ff0000)
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_7_MSB                                       31
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_7_LSB                                       24
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_7_MASK                              0xff000000
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_7_GET(x)            (((x) & 0xff000000) >> 24)
#define PHY_BB_CAL_RXBB_GAIN_TBL_4_TXCAL_RX_BB_GAIN_TABLE_7_SET(x)            (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_cal_rxbb_gain_tbl_8 */
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_ADDRESS                                                    0x0000a678
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_OFFSET                                                     0x00000478
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_8_MSB                                        7
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_8_LSB                                        0
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_8_MASK                              0x000000ff
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_8_GET(x)             (((x) & 0x000000ff) >> 0)
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_8_SET(x)             (((x) << 0) & 0x000000ff)
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_9_MSB                                       15
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_9_LSB                                        8
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_9_MASK                              0x0000ff00
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_9_GET(x)             (((x) & 0x0000ff00) >> 8)
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_9_SET(x)             (((x) << 8) & 0x0000ff00)
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_10_MSB                                      23
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_10_LSB                                      16
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_10_MASK                             0x00ff0000
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_10_GET(x)           (((x) & 0x00ff0000) >> 16)
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_10_SET(x)           (((x) << 16) & 0x00ff0000)
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_11_MSB                                      31
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_11_LSB                                      24
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_11_MASK                             0xff000000
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_11_GET(x)           (((x) & 0xff000000) >> 24)
#define PHY_BB_CAL_RXBB_GAIN_TBL_8_TXCAL_RX_BB_GAIN_TABLE_11_SET(x)           (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_cal_rxbb_gain_tbl_12 */
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_ADDRESS                                                   0x0000a67c
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_OFFSET                                                    0x0000047c
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_12_MSB                                      7
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_12_LSB                                      0
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_12_MASK                            0x000000ff
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_12_GET(x)           (((x) & 0x000000ff) >> 0)
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_12_SET(x)           (((x) << 0) & 0x000000ff)
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_13_MSB                                     15
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_13_LSB                                      8
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_13_MASK                            0x0000ff00
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_13_GET(x)           (((x) & 0x0000ff00) >> 8)
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_13_SET(x)           (((x) << 8) & 0x0000ff00)
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_14_MSB                                     23
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_14_LSB                                     16
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_14_MASK                            0x00ff0000
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_14_GET(x)          (((x) & 0x00ff0000) >> 16)
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_14_SET(x)          (((x) << 16) & 0x00ff0000)
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_15_MSB                                     31
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_15_LSB                                     24
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_15_MASK                            0xff000000
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_15_GET(x)          (((x) & 0xff000000) >> 24)
#define PHY_BB_CAL_RXBB_GAIN_TBL_12_TXCAL_RX_BB_GAIN_TABLE_15_SET(x)          (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_cal_rxbb_gain_tbl_16 */
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_ADDRESS                                                   0x0000a680
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_OFFSET                                                    0x00000480
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_16_MSB                                      7
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_16_LSB                                      0
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_16_MASK                            0x000000ff
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_16_GET(x)           (((x) & 0x000000ff) >> 0)
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_16_SET(x)           (((x) << 0) & 0x000000ff)
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_17_MSB                                     15
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_17_LSB                                      8
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_17_MASK                            0x0000ff00
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_17_GET(x)           (((x) & 0x0000ff00) >> 8)
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_17_SET(x)           (((x) << 8) & 0x0000ff00)
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_18_MSB                                     23
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_18_LSB                                     16
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_18_MASK                            0x00ff0000
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_18_GET(x)          (((x) & 0x00ff0000) >> 16)
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_18_SET(x)          (((x) << 16) & 0x00ff0000)
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_19_MSB                                     31
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_19_LSB                                     24
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_19_MASK                            0xff000000
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_19_GET(x)          (((x) & 0xff000000) >> 24)
#define PHY_BB_CAL_RXBB_GAIN_TBL_16_TXCAL_RX_BB_GAIN_TABLE_19_SET(x)          (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_cal_rxbb_gain_tbl_20 */
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_ADDRESS                                                   0x0000a684
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_OFFSET                                                    0x00000484
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_20_MSB                                      7
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_20_LSB                                      0
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_20_MASK                            0x000000ff
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_20_GET(x)           (((x) & 0x000000ff) >> 0)
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_20_SET(x)           (((x) << 0) & 0x000000ff)
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_21_MSB                                     15
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_21_LSB                                      8
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_21_MASK                            0x0000ff00
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_21_GET(x)           (((x) & 0x0000ff00) >> 8)
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_21_SET(x)           (((x) << 8) & 0x0000ff00)
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_22_MSB                                     23
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_22_LSB                                     16
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_22_MASK                            0x00ff0000
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_22_GET(x)          (((x) & 0x00ff0000) >> 16)
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_22_SET(x)          (((x) << 16) & 0x00ff0000)
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_23_MSB                                     31
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_23_LSB                                     24
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_23_MASK                            0xff000000
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_23_GET(x)          (((x) & 0xff000000) >> 24)
#define PHY_BB_CAL_RXBB_GAIN_TBL_20_TXCAL_RX_BB_GAIN_TABLE_23_SET(x)          (((x) << 24) & 0xff000000)

/* macros for bb_sm_reg_map.BB_cal_rxbb_gain_tbl_24 */
#define PHY_BB_CAL_RXBB_GAIN_TBL_24_ADDRESS                                                   0x0000a688
#define PHY_BB_CAL_RXBB_GAIN_TBL_24_OFFSET                                                    0x00000488
#define PHY_BB_CAL_RXBB_GAIN_TBL_24_TXCAL_RX_BB_GAIN_TABLE_24_MSB                                      7
#define PHY_BB_CAL_RXBB_GAIN_TBL_24_TXCAL_RX_BB_GAIN_TABLE_24_LSB                                      0
#define PHY_BB_CAL_RXBB_GAIN_TBL_24_TXCAL_RX_BB_GAIN_TABLE_24_MASK                            0x000000ff
#define PHY_BB_CAL_RXBB_GAIN_TBL_24_TXCAL_RX_BB_GAIN_TABLE_24_GET(x)           (((x) & 0x000000ff) >> 0)
#define PHY_BB_CAL_RXBB_GAIN_TBL_24_TXCAL_RX_BB_GAIN_TABLE_24_SET(x)           (((x) << 0) & 0x000000ff)

/* macros for bb_sm_reg_map.BB_txiqcal_status_b0 */
#define PHY_BB_TXIQCAL_STATUS_B0_ADDRESS                                                      0x0000a68c
#define PHY_BB_TXIQCAL_STATUS_B0_OFFSET                                                       0x0000048c
#define PHY_BB_TXIQCAL_STATUS_B0_TXIQCAL_FAILED_0_MSB                                                  0
#define PHY_BB_TXIQCAL_STATUS_B0_TXIQCAL_FAILED_0_LSB                                                  0
#define PHY_BB_TXIQCAL_STATUS_B0_TXIQCAL_FAILED_0_MASK                                        0x00000001
#define PHY_BB_TXIQCAL_STATUS_B0_TXIQCAL_FAILED_0_GET(x)                       (((x) & 0x00000001) >> 0)
#define PHY_BB_TXIQCAL_STATUS_B0_CALIBRATED_GAINS_0_MSB                                                5
#define PHY_BB_TXIQCAL_STATUS_B0_CALIBRATED_GAINS_0_LSB                                                1
#define PHY_BB_TXIQCAL_STATUS_B0_CALIBRATED_GAINS_0_MASK                                      0x0000003e
#define PHY_BB_TXIQCAL_STATUS_B0_CALIBRATED_GAINS_0_GET(x)                     (((x) & 0x0000003e) >> 1)
#define PHY_BB_TXIQCAL_STATUS_B0_TONE_GAIN_USED_0_MSB                                                 11
#define PHY_BB_TXIQCAL_STATUS_B0_TONE_GAIN_USED_0_LSB                                                  6
#define PHY_BB_TXIQCAL_STATUS_B0_TONE_GAIN_USED_0_MASK                                        0x00000fc0
#define PHY_BB_TXIQCAL_STATUS_B0_TONE_GAIN_USED_0_GET(x)                       (((x) & 0x00000fc0) >> 6)
#define PHY_BB_TXIQCAL_STATUS_B0_RX_GAIN_USED_0_MSB                                                   17
#define PHY_BB_TXIQCAL_STATUS_B0_RX_GAIN_USED_0_LSB                                                   12
#define PHY_BB_TXIQCAL_STATUS_B0_RX_GAIN_USED_0_MASK                                          0x0003f000
#define PHY_BB_TXIQCAL_STATUS_B0_RX_GAIN_USED_0_GET(x)                        (((x) & 0x0003f000) >> 12)
#define PHY_BB_TXIQCAL_STATUS_B0_LAST_MEAS_ADDR_0_MSB                                                 23
#define PHY_BB_TXIQCAL_STATUS_B0_LAST_MEAS_ADDR_0_LSB                                                 18
#define PHY_BB_TXIQCAL_STATUS_B0_LAST_MEAS_ADDR_0_MASK                                        0x00fc0000
#define PHY_BB_TXIQCAL_STATUS_B0_LAST_MEAS_ADDR_0_GET(x)                      (((x) & 0x00fc0000) >> 18)

/* macros for bb_sm_reg_map.BB_paprd_trainer_cntl1 */
#define PHY_BB_PAPRD_TRAINER_CNTL1_ADDRESS                                                    0x0000a690
#define PHY_BB_PAPRD_TRAINER_CNTL1_OFFSET                                                     0x00000490
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_TRAIN_ENABLE_MSB                                           0
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_TRAIN_ENABLE_LSB                                           0
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_TRAIN_ENABLE_MASK                                 0x00000001
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_TRAIN_ENABLE_GET(x)                (((x) & 0x00000001) >> 0)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_TRAIN_ENABLE_SET(x)                (((x) << 0) & 0x00000001)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_AGC2_SETTLING_MSB                                          7
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_AGC2_SETTLING_LSB                                          1
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_AGC2_SETTLING_MASK                                0x000000fe
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_AGC2_SETTLING_GET(x)               (((x) & 0x000000fe) >> 1)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_AGC2_SETTLING_SET(x)               (((x) << 1) & 0x000000fe)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_IQCORR_ENABLE_MSB                                          8
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_IQCORR_ENABLE_LSB                                          8
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_IQCORR_ENABLE_MASK                                0x00000100
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_IQCORR_ENABLE_GET(x)               (((x) & 0x00000100) >> 8)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_IQCORR_ENABLE_SET(x)               (((x) << 8) & 0x00000100)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_RX_BB_GAIN_FORCE_MSB                                       9
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_RX_BB_GAIN_FORCE_LSB                                       9
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_RX_BB_GAIN_FORCE_MASK                             0x00000200
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_RX_BB_GAIN_FORCE_GET(x)            (((x) & 0x00000200) >> 9)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_RX_BB_GAIN_FORCE_SET(x)            (((x) << 9) & 0x00000200)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_TX_GAIN_FORCE_MSB                                         10
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_TX_GAIN_FORCE_LSB                                         10
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_TX_GAIN_FORCE_MASK                                0x00000400
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_TX_GAIN_FORCE_GET(x)              (((x) & 0x00000400) >> 10)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_TX_GAIN_FORCE_SET(x)              (((x) << 10) & 0x00000400)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_LB_ENABLE_MSB                                             11
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_LB_ENABLE_LSB                                             11
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_LB_ENABLE_MASK                                    0x00000800
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_LB_ENABLE_GET(x)                  (((x) & 0x00000800) >> 11)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_LB_ENABLE_SET(x)                  (((x) << 11) & 0x00000800)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_LB_SKIP_MSB                                               18
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_LB_SKIP_LSB                                               12
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_LB_SKIP_MASK                                      0x0007f000
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_LB_SKIP_GET(x)                    (((x) & 0x0007f000) >> 12)
#define PHY_BB_PAPRD_TRAINER_CNTL1_CF_PAPRD_LB_SKIP_SET(x)                    (((x) << 12) & 0x0007f000)

/* macros for bb_sm_reg_map.BB_paprd_trainer_cntl2 */
#define PHY_BB_PAPRD_TRAINER_CNTL2_ADDRESS                                                    0x0000a694
#define PHY_BB_PAPRD_TRAINER_CNTL2_OFFSET                                                     0x00000494
#define PHY_BB_PAPRD_TRAINER_CNTL2_CF_PAPRD_INIT_RX_BB_GAIN_MSB                                       31
#define PHY_BB_PAPRD_TRAINER_CNTL2_CF_PAPRD_INIT_RX_BB_GAIN_LSB                                        0
#define PHY_BB_PAPRD_TRAINER_CNTL2_CF_PAPRD_INIT_RX_BB_GAIN_MASK                              0xffffffff
#define PHY_BB_PAPRD_TRAINER_CNTL2_CF_PAPRD_INIT_RX_BB_GAIN_GET(x)             (((x) & 0xffffffff) >> 0)
#define PHY_BB_PAPRD_TRAINER_CNTL2_CF_PAPRD_INIT_RX_BB_GAIN_SET(x)             (((x) << 0) & 0xffffffff)

/* macros for bb_sm_reg_map.BB_paprd_trainer_cntl3 */
#define PHY_BB_PAPRD_TRAINER_CNTL3_ADDRESS                                                    0x0000a698
#define PHY_BB_PAPRD_TRAINER_CNTL3_OFFSET                                                     0x00000498
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_ADC_DESIRED_SIZE_MSB                                       5
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_ADC_DESIRED_SIZE_LSB                                       0
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_ADC_DESIRED_SIZE_MASK                             0x0000003f
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_ADC_DESIRED_SIZE_GET(x)            (((x) & 0x0000003f) >> 0)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_ADC_DESIRED_SIZE_SET(x)            (((x) << 0) & 0x0000003f)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_QUICK_DROP_MSB                                            11
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_QUICK_DROP_LSB                                             6
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_QUICK_DROP_MASK                                   0x00000fc0
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_QUICK_DROP_GET(x)                  (((x) & 0x00000fc0) >> 6)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_QUICK_DROP_SET(x)                  (((x) << 6) & 0x00000fc0)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_MIN_LOOPBACK_DEL_MSB                                      16
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_MIN_LOOPBACK_DEL_LSB                                      12
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_MIN_LOOPBACK_DEL_MASK                             0x0001f000
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_MIN_LOOPBACK_DEL_GET(x)           (((x) & 0x0001f000) >> 12)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_MIN_LOOPBACK_DEL_SET(x)           (((x) << 12) & 0x0001f000)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_NUM_CORR_STAGES_MSB                                       19
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_NUM_CORR_STAGES_LSB                                       17
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_NUM_CORR_STAGES_MASK                              0x000e0000
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_NUM_CORR_STAGES_GET(x)            (((x) & 0x000e0000) >> 17)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_NUM_CORR_STAGES_SET(x)            (((x) << 17) & 0x000e0000)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_COARSE_CORR_LEN_MSB                                       23
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_COARSE_CORR_LEN_LSB                                       20
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_COARSE_CORR_LEN_MASK                              0x00f00000
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_COARSE_CORR_LEN_GET(x)            (((x) & 0x00f00000) >> 20)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_COARSE_CORR_LEN_SET(x)            (((x) << 20) & 0x00f00000)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_FINE_CORR_LEN_MSB                                         27
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_FINE_CORR_LEN_LSB                                         24
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_FINE_CORR_LEN_MASK                                0x0f000000
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_FINE_CORR_LEN_GET(x)              (((x) & 0x0f000000) >> 24)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_FINE_CORR_LEN_SET(x)              (((x) << 24) & 0x0f000000)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_REUSE_CORR_MSB                                            28
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_REUSE_CORR_LSB                                            28
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_REUSE_CORR_MASK                                   0x10000000
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_REUSE_CORR_GET(x)                 (((x) & 0x10000000) >> 28)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_REUSE_CORR_SET(x)                 (((x) << 28) & 0x10000000)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_BBTXMIX_DISABLE_MSB                                       29
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_BBTXMIX_DISABLE_LSB                                       29
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_BBTXMIX_DISABLE_MASK                              0x20000000
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_BBTXMIX_DISABLE_GET(x)            (((x) & 0x20000000) >> 29)
#define PHY_BB_PAPRD_TRAINER_CNTL3_CF_PAPRD_BBTXMIX_DISABLE_SET(x)            (((x) << 29) & 0x20000000)

/* macros for bb_sm_reg_map.BB_paprd_trainer_cntl4 */
#define PHY_BB_PAPRD_TRAINER_CNTL4_ADDRESS                                                    0x0000a69c
#define PHY_BB_PAPRD_TRAINER_CNTL4_OFFSET                                                     0x0000049c
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_MIN_CORR_MSB                                              11
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_MIN_CORR_LSB                                               0
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_MIN_CORR_MASK                                     0x00000fff
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_MIN_CORR_GET(x)                    (((x) & 0x00000fff) >> 0)
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_MIN_CORR_SET(x)                    (((x) << 0) & 0x00000fff)
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_SAFETY_DELTA_MSB                                          15
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_SAFETY_DELTA_LSB                                          12
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_SAFETY_DELTA_MASK                                 0x0000f000
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_SAFETY_DELTA_GET(x)               (((x) & 0x0000f000) >> 12)
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_SAFETY_DELTA_SET(x)               (((x) << 12) & 0x0000f000)
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_NUM_TRAIN_SAMPLES_MSB                                     25
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_NUM_TRAIN_SAMPLES_LSB                                     16
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_NUM_TRAIN_SAMPLES_MASK                            0x03ff0000
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_NUM_TRAIN_SAMPLES_GET(x)          (((x) & 0x03ff0000) >> 16)
#define PHY_BB_PAPRD_TRAINER_CNTL4_CF_PAPRD_NUM_TRAIN_SAMPLES_SET(x)          (((x) << 16) & 0x03ff0000)

/* macros for bb_sm_reg_map.BB_paprd_trainer_stat1 */
#define PHY_BB_PAPRD_TRAINER_STAT1_ADDRESS                                                    0x0000a6a0
#define PHY_BB_PAPRD_TRAINER_STAT1_OFFSET                                                     0x000004a0
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_DONE_MSB                                                0
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_DONE_LSB                                                0
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_DONE_MASK                                      0x00000001
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_DONE_GET(x)                     (((x) & 0x00000001) >> 0)
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_DONE_SET(x)                     (((x) << 0) & 0x00000001)
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_INCOMPLETE_MSB                                          1
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_INCOMPLETE_LSB                                          1
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_INCOMPLETE_MASK                                0x00000002
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_INCOMPLETE_GET(x)               (((x) & 0x00000002) >> 1)
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_CORR_ERR_MSB                                                  2
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_CORR_ERR_LSB                                                  2
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_CORR_ERR_MASK                                        0x00000004
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_CORR_ERR_GET(x)                       (((x) & 0x00000004) >> 2)
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_ACTIVE_MSB                                              3
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_ACTIVE_LSB                                              3
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_ACTIVE_MASK                                    0x00000008
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_TRAIN_ACTIVE_GET(x)                   (((x) & 0x00000008) >> 3)
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_RX_GAIN_IDX_MSB                                               8
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_RX_GAIN_IDX_LSB                                               4
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_RX_GAIN_IDX_MASK                                     0x000001f0
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_RX_GAIN_IDX_GET(x)                    (((x) & 0x000001f0) >> 4)
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_AGC2_PWR_MSB                                                 16
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_AGC2_PWR_LSB                                                  9
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_AGC2_PWR_MASK                                        0x0001fe00
#define PHY_BB_PAPRD_TRAINER_STAT1_PAPRD_AGC2_PWR_GET(x)                       (((x) & 0x0001fe00) >> 9)

/* macros for bb_sm_reg_map.BB_paprd_trainer_stat2 */
#define PHY_BB_PAPRD_TRAINER_STAT2_ADDRESS                                                    0x0000a6a4
#define PHY_BB_PAPRD_TRAINER_STAT2_OFFSET                                                     0x000004a4
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_FINE_VAL_MSB                                                 15
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_FINE_VAL_LSB                                                  0
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_FINE_VAL_MASK                                        0x0000ffff
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_FINE_VAL_GET(x)                       (((x) & 0x0000ffff) >> 0)
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_COARSE_IDX_MSB                                               20
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_COARSE_IDX_LSB                                               16
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_COARSE_IDX_MASK                                      0x001f0000
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_COARSE_IDX_GET(x)                    (((x) & 0x001f0000) >> 16)
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_FINE_IDX_MSB                                                 22
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_FINE_IDX_LSB                                                 21
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_FINE_IDX_MASK                                        0x00600000
#define PHY_BB_PAPRD_TRAINER_STAT2_PAPRD_FINE_IDX_GET(x)                      (((x) & 0x00600000) >> 21)

/* macros for bb_sm_reg_map.BB_paprd_trainer_stat3 */
#define PHY_BB_PAPRD_TRAINER_STAT3_ADDRESS                                                    0x0000a6a8
#define PHY_BB_PAPRD_TRAINER_STAT3_OFFSET                                                     0x000004a8
#define PHY_BB_PAPRD_TRAINER_STAT3_PAPRD_TRAIN_SAMPLES_CNT_MSB                                        19
#define PHY_BB_PAPRD_TRAINER_STAT3_PAPRD_TRAIN_SAMPLES_CNT_LSB                                         0
#define PHY_BB_PAPRD_TRAINER_STAT3_PAPRD_TRAIN_SAMPLES_CNT_MASK                               0x000fffff
#define PHY_BB_PAPRD_TRAINER_STAT3_PAPRD_TRAIN_SAMPLES_CNT_GET(x)              (((x) & 0x000fffff) >> 0)

/* macros for bb_sm_reg_map.BB_watchdog_status */
#define PHY_BB_WATCHDOG_STATUS_ADDRESS                                                        0x0000a7c0
#define PHY_BB_WATCHDOG_STATUS_OFFSET                                                         0x000005c0
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_1_MSB                                                   2
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_1_LSB                                                   0
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_1_MASK                                         0x00000007
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_1_GET(x)                        (((x) & 0x00000007) >> 0)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_1_SET(x)                        (((x) << 0) & 0x00000007)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_TIMEOUT_MSB                                                    3
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_TIMEOUT_LSB                                                    3
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_TIMEOUT_MASK                                          0x00000008
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_TIMEOUT_GET(x)                         (((x) & 0x00000008) >> 3)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_TIMEOUT_SET(x)                         (((x) << 3) & 0x00000008)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_2_MSB                                                   7
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_2_LSB                                                   4
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_2_MASK                                         0x000000f0
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_2_GET(x)                        (((x) & 0x000000f0) >> 4)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_2_SET(x)                        (((x) << 4) & 0x000000f0)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_3_MSB                                                  11
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_3_LSB                                                   8
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_3_MASK                                         0x00000f00
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_3_GET(x)                        (((x) & 0x00000f00) >> 8)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_3_SET(x)                        (((x) << 8) & 0x00000f00)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_4_MSB                                                  15
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_4_LSB                                                  12
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_4_MASK                                         0x0000f000
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_4_GET(x)                       (((x) & 0x0000f000) >> 12)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_4_SET(x)                       (((x) << 12) & 0x0000f000)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_5_MSB                                                  19
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_5_LSB                                                  16
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_5_MASK                                         0x000f0000
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_5_GET(x)                       (((x) & 0x000f0000) >> 16)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_5_SET(x)                       (((x) << 16) & 0x000f0000)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_6_MSB                                                  23
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_6_LSB                                                  20
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_6_MASK                                         0x00f00000
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_6_GET(x)                       (((x) & 0x00f00000) >> 20)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_6_SET(x)                       (((x) << 20) & 0x00f00000)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_7_MSB                                                  27
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_7_LSB                                                  24
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_7_MASK                                         0x0f000000
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_7_GET(x)                       (((x) & 0x0f000000) >> 24)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_7_SET(x)                       (((x) << 24) & 0x0f000000)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_8_MSB                                                  31
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_8_LSB                                                  28
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_8_MASK                                         0xf0000000
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_8_GET(x)                       (((x) & 0xf0000000) >> 28)
#define PHY_BB_WATCHDOG_STATUS_WATCHDOG_STATUS_8_SET(x)                       (((x) << 28) & 0xf0000000)

/* macros for bb_sm_reg_map.BB_watchdog_ctrl_1 */
#define PHY_BB_WATCHDOG_CTRL_1_ADDRESS                                                        0x0000a7c4
#define PHY_BB_WATCHDOG_CTRL_1_OFFSET                                                         0x000005c4
#define PHY_BB_WATCHDOG_CTRL_1_ENABLE_WATCHDOG_TIMEOUT_RESET_NON_IDLE_MSB                              0
#define PHY_BB_WATCHDOG_CTRL_1_ENABLE_WATCHDOG_TIMEOUT_RESET_NON_IDLE_LSB                              0
#define PHY_BB_WATCHDOG_CTRL_1_ENABLE_WATCHDOG_TIMEOUT_RESET_NON_IDLE_MASK                    0x00000001
#define PHY_BB_WATCHDOG_CTRL_1_ENABLE_WATCHDOG_TIMEOUT_RESET_NON_IDLE_GET(x)   (((x) & 0x00000001) >> 0)
#define PHY_BB_WATCHDOG_CTRL_1_ENABLE_WATCHDOG_TIMEOUT_RESET_NON_IDLE_SET(x)   (((x) << 0) & 0x00000001)
#define PHY_BB_WATCHDOG_CTRL_1_ENABLE_WATCHDOG_TIMEOUT_RESET_IDLE_MSB                                  1
#define PHY_BB_WATCHDOG_CTRL_1_ENABLE_WATCHDOG_TIMEOUT_RESET_IDLE_LSB                                  1
#define PHY_BB_WATCHDOG_CTRL_1_ENABLE_WATCHDOG_TIMEOUT_RESET_IDLE_MASK                        0x00000002
#define PHY_BB_WATCHDOG_CTRL_1_ENABLE_WATCHDOG_TIMEOUT_RESET_IDLE_GET(x)       (((x) & 0x00000002) >> 1)
#define PHY_BB_WATCHDOG_CTRL_1_ENABLE_WATCHDOG_TIMEOUT_RESET_IDLE_SET(x)       (((x) << 1) & 0x00000002)
#define PHY_BB_WATCHDOG_CTRL_1_WATCHDOG_TIMEOUT_RESET_NON_IDLE_LIMIT_MSB                              15
#define PHY_BB_WATCHDOG_CTRL_1_WATCHDOG_TIMEOUT_RESET_NON_IDLE_LIMIT_LSB                               2
#define PHY_BB_WATCHDOG_CTRL_1_WATCHDOG_TIMEOUT_RESET_NON_IDLE_LIMIT_MASK                     0x0000fffc
#define PHY_BB_WATCHDOG_CTRL_1_WATCHDOG_TIMEOUT_RESET_NON_IDLE_LIMIT_GET(x)    (((x) & 0x0000fffc) >> 2)
#define PHY_BB_WATCHDOG_CTRL_1_WATCHDOG_TIMEOUT_RESET_NON_IDLE_LIMIT_SET(x)    (((x) << 2) & 0x0000fffc)
#define PHY_BB_WATCHDOG_CTRL_1_WATCHDOG_TIMEOUT_RESET_IDLE_LIMIT_MSB                                  31
#define PHY_BB_WATCHDOG_CTRL_1_WATCHDOG_TIMEOUT_RESET_IDLE_LIMIT_LSB                                  16
#define PHY_BB_WATCHDOG_CTRL_1_WATCHDOG_TIMEOUT_RESET_IDLE_LIMIT_MASK                         0xffff0000
#define PHY_BB_WATCHDOG_CTRL_1_WATCHDOG_TIMEOUT_RESET_IDLE_LIMIT_GET(x)       (((x) & 0xffff0000) >> 16)
#define PHY_BB_WATCHDOG_CTRL_1_WATCHDOG_TIMEOUT_RESET_IDLE_LIMIT_SET(x)       (((x) << 16) & 0xffff0000)

/* macros for bb_sm_reg_map.BB_watchdog_ctrl_2 */
#define PHY_BB_WATCHDOG_CTRL_2_ADDRESS                                                        0x0000a7c8
#define PHY_BB_WATCHDOG_CTRL_2_OFFSET                                                         0x000005c8
#define PHY_BB_WATCHDOG_CTRL_2_FORCE_FAST_ADC_CLK_MSB                                                  0
#define PHY_BB_WATCHDOG_CTRL_2_FORCE_FAST_ADC_CLK_LSB                                                  0
#define PHY_BB_WATCHDOG_CTRL_2_FORCE_FAST_ADC_CLK_MASK                                        0x00000001
#define PHY_BB_WATCHDOG_CTRL_2_FORCE_FAST_ADC_CLK_GET(x)                       (((x) & 0x00000001) >> 0)
#define PHY_BB_WATCHDOG_CTRL_2_FORCE_FAST_ADC_CLK_SET(x)                       (((x) << 0) & 0x00000001)
#define PHY_BB_WATCHDOG_CTRL_2_WATCHDOG_TIMEOUT_RESET_ENA_MSB                                          1
#define PHY_BB_WATCHDOG_CTRL_2_WATCHDOG_TIMEOUT_RESET_ENA_LSB                                          1
#define PHY_BB_WATCHDOG_CTRL_2_WATCHDOG_TIMEOUT_RESET_ENA_MASK                                0x00000002
#define PHY_BB_WATCHDOG_CTRL_2_WATCHDOG_TIMEOUT_RESET_ENA_GET(x)               (((x) & 0x00000002) >> 1)
#define PHY_BB_WATCHDOG_CTRL_2_WATCHDOG_TIMEOUT_RESET_ENA_SET(x)               (((x) << 1) & 0x00000002)
#define PHY_BB_WATCHDOG_CTRL_2_WATCHDOG_IRQ_ENA_MSB                                                    2
#define PHY_BB_WATCHDOG_CTRL_2_WATCHDOG_IRQ_ENA_LSB                                                    2
#define PHY_BB_WATCHDOG_CTRL_2_WATCHDOG_IRQ_ENA_MASK                                          0x00000004
#define PHY_BB_WATCHDOG_CTRL_2_WATCHDOG_IRQ_ENA_GET(x)                         (((x) & 0x00000004) >> 2)
#define PHY_BB_WATCHDOG_CTRL_2_WATCHDOG_IRQ_ENA_SET(x)                         (((x) << 2) & 0x00000004)

/* macros for bb_sm_reg_map.BB_bluetooth_cntl */
#define PHY_BB_BLUETOOTH_CNTL_ADDRESS                                                         0x0000a7cc
#define PHY_BB_BLUETOOTH_CNTL_OFFSET                                                          0x000005cc
#define PHY_BB_BLUETOOTH_CNTL_BT_BREAK_CCK_EN_MSB                                                      0
#define PHY_BB_BLUETOOTH_CNTL_BT_BREAK_CCK_EN_LSB                                                      0
#define PHY_BB_BLUETOOTH_CNTL_BT_BREAK_CCK_EN_MASK                                            0x00000001
#define PHY_BB_BLUETOOTH_CNTL_BT_BREAK_CCK_EN_GET(x)                           (((x) & 0x00000001) >> 0)
#define PHY_BB_BLUETOOTH_CNTL_BT_BREAK_CCK_EN_SET(x)                           (((x) << 0) & 0x00000001)
#define PHY_BB_BLUETOOTH_CNTL_BT_ANT_HALT_WLAN_MSB                                                     1
#define PHY_BB_BLUETOOTH_CNTL_BT_ANT_HALT_WLAN_LSB                                                     1
#define PHY_BB_BLUETOOTH_CNTL_BT_ANT_HALT_WLAN_MASK                                           0x00000002
#define PHY_BB_BLUETOOTH_CNTL_BT_ANT_HALT_WLAN_GET(x)                          (((x) & 0x00000002) >> 1)
#define PHY_BB_BLUETOOTH_CNTL_BT_ANT_HALT_WLAN_SET(x)                          (((x) << 1) & 0x00000002)
#define PHY_BB_BLUETOOTH_CNTL_ENABLE_RFBUS_GRANT_WAKEUP_MSB                                            2
#define PHY_BB_BLUETOOTH_CNTL_ENABLE_RFBUS_GRANT_WAKEUP_LSB                                            2
#define PHY_BB_BLUETOOTH_CNTL_ENABLE_RFBUS_GRANT_WAKEUP_MASK                                  0x00000004
#define PHY_BB_BLUETOOTH_CNTL_ENABLE_RFBUS_GRANT_WAKEUP_GET(x)                 (((x) & 0x00000004) >> 2)
#define PHY_BB_BLUETOOTH_CNTL_ENABLE_RFBUS_GRANT_WAKEUP_SET(x)                 (((x) << 2) & 0x00000004)

/* macros for bb_sm_reg_map.BB_phyonly_warm_reset */
#define PHY_BB_PHYONLY_WARM_RESET_ADDRESS                                                     0x0000a7d0
#define PHY_BB_PHYONLY_WARM_RESET_OFFSET                                                      0x000005d0
#define PHY_BB_PHYONLY_WARM_RESET_PHYONLY_RST_WARM_L_MSB                                               0
#define PHY_BB_PHYONLY_WARM_RESET_PHYONLY_RST_WARM_L_LSB                                               0
#define PHY_BB_PHYONLY_WARM_RESET_PHYONLY_RST_WARM_L_MASK                                     0x00000001
#define PHY_BB_PHYONLY_WARM_RESET_PHYONLY_RST_WARM_L_GET(x)                    (((x) & 0x00000001) >> 0)
#define PHY_BB_PHYONLY_WARM_RESET_PHYONLY_RST_WARM_L_SET(x)                    (((x) << 0) & 0x00000001)

/* macros for bb_sm_reg_map.BB_phyonly_control */
#define PHY_BB_PHYONLY_CONTROL_ADDRESS                                                        0x0000a7d4
#define PHY_BB_PHYONLY_CONTROL_OFFSET                                                         0x000005d4
#define PHY_BB_PHYONLY_CONTROL_RX_DRAIN_RATE_MSB                                                       0
#define PHY_BB_PHYONLY_CONTROL_RX_DRAIN_RATE_LSB                                                       0
#define PHY_BB_PHYONLY_CONTROL_RX_DRAIN_RATE_MASK                                             0x00000001
#define PHY_BB_PHYONLY_CONTROL_RX_DRAIN_RATE_GET(x)                            (((x) & 0x00000001) >> 0)
#define PHY_BB_PHYONLY_CONTROL_RX_DRAIN_RATE_SET(x)                            (((x) << 0) & 0x00000001)
#define PHY_BB_PHYONLY_CONTROL_LATE_TX_SIGNAL_SYMBOL_MSB                                               1
#define PHY_BB_PHYONLY_CONTROL_LATE_TX_SIGNAL_SYMBOL_LSB                                               1
#define PHY_BB_PHYONLY_CONTROL_LATE_TX_SIGNAL_SYMBOL_MASK                                     0x00000002
#define PHY_BB_PHYONLY_CONTROL_LATE_TX_SIGNAL_SYMBOL_GET(x)                    (((x) & 0x00000002) >> 1)
#define PHY_BB_PHYONLY_CONTROL_LATE_TX_SIGNAL_SYMBOL_SET(x)                    (((x) << 1) & 0x00000002)
#define PHY_BB_PHYONLY_CONTROL_GENERATE_SCRAMBLER_MSB                                                  2
#define PHY_BB_PHYONLY_CONTROL_GENERATE_SCRAMBLER_LSB                                                  2
#define PHY_BB_PHYONLY_CONTROL_GENERATE_SCRAMBLER_MASK                                        0x00000004
#define PHY_BB_PHYONLY_CONTROL_GENERATE_SCRAMBLER_GET(x)                       (((x) & 0x00000004) >> 2)
#define PHY_BB_PHYONLY_CONTROL_GENERATE_SCRAMBLER_SET(x)                       (((x) << 2) & 0x00000004)
#define PHY_BB_PHYONLY_CONTROL_TX_ANTENNA_SELECT_MSB                                                   3
#define PHY_BB_PHYONLY_CONTROL_TX_ANTENNA_SELECT_LSB                                                   3
#define PHY_BB_PHYONLY_CONTROL_TX_ANTENNA_SELECT_MASK                                         0x00000008
#define PHY_BB_PHYONLY_CONTROL_TX_ANTENNA_SELECT_GET(x)                        (((x) & 0x00000008) >> 3)
#define PHY_BB_PHYONLY_CONTROL_TX_ANTENNA_SELECT_SET(x)                        (((x) << 3) & 0x00000008)
#define PHY_BB_PHYONLY_CONTROL_STATIC_TX_ANTENNA_MSB                                                   4
#define PHY_BB_PHYONLY_CONTROL_STATIC_TX_ANTENNA_LSB                                                   4
#define PHY_BB_PHYONLY_CONTROL_STATIC_TX_ANTENNA_MASK                                         0x00000010
#define PHY_BB_PHYONLY_CONTROL_STATIC_TX_ANTENNA_GET(x)                        (((x) & 0x00000010) >> 4)
#define PHY_BB_PHYONLY_CONTROL_STATIC_TX_ANTENNA_SET(x)                        (((x) << 4) & 0x00000010)
#define PHY_BB_PHYONLY_CONTROL_RX_ANTENNA_SELECT_MSB                                                   5
#define PHY_BB_PHYONLY_CONTROL_RX_ANTENNA_SELECT_LSB                                                   5
#define PHY_BB_PHYONLY_CONTROL_RX_ANTENNA_SELECT_MASK                                         0x00000020
#define PHY_BB_PHYONLY_CONTROL_RX_ANTENNA_SELECT_GET(x)                        (((x) & 0x00000020) >> 5)
#define PHY_BB_PHYONLY_CONTROL_RX_ANTENNA_SELECT_SET(x)                        (((x) << 5) & 0x00000020)
#define PHY_BB_PHYONLY_CONTROL_STATIC_RX_ANTENNA_MSB                                                   6
#define PHY_BB_PHYONLY_CONTROL_STATIC_RX_ANTENNA_LSB                                                   6
#define PHY_BB_PHYONLY_CONTROL_STATIC_RX_ANTENNA_MASK                                         0x00000040
#define PHY_BB_PHYONLY_CONTROL_STATIC_RX_ANTENNA_GET(x)                        (((x) & 0x00000040) >> 6)
#define PHY_BB_PHYONLY_CONTROL_STATIC_RX_ANTENNA_SET(x)                        (((x) << 6) & 0x00000040)
#define PHY_BB_PHYONLY_CONTROL_EN_LOW_FREQ_SLEEP_MSB                                                   7
#define PHY_BB_PHYONLY_CONTROL_EN_LOW_FREQ_SLEEP_LSB                                                   7
#define PHY_BB_PHYONLY_CONTROL_EN_LOW_FREQ_SLEEP_MASK                                         0x00000080
#define PHY_BB_PHYONLY_CONTROL_EN_LOW_FREQ_SLEEP_GET(x)                        (((x) & 0x00000080) >> 7)
#define PHY_BB_PHYONLY_CONTROL_EN_LOW_FREQ_SLEEP_SET(x)                        (((x) << 7) & 0x00000080)

/* macros for bb_sm_reg_map.BB_eco_ctrl */
#define PHY_BB_ECO_CTRL_ADDRESS                                                               0x0000a7dc
#define PHY_BB_ECO_CTRL_OFFSET                                                                0x000005dc
#define PHY_BB_ECO_CTRL_ECO_CTRL_MSB                                                                   7
#define PHY_BB_ECO_CTRL_ECO_CTRL_LSB                                                                   0
#define PHY_BB_ECO_CTRL_ECO_CTRL_MASK                                                         0x000000ff
#define PHY_BB_ECO_CTRL_ECO_CTRL_GET(x)                                        (((x) & 0x000000ff) >> 0)
#define PHY_BB_ECO_CTRL_ECO_CTRL_SET(x)                                        (((x) << 0) & 0x000000ff)

/* macros for bb_sm_reg_map.BB_tables_intf_addr_b0 */
#define PHY_BB_TABLES_INTF_ADDR_B0_ADDRESS                                                    0x0000a7f0
#define PHY_BB_TABLES_INTF_ADDR_B0_OFFSET                                                     0x000005f0
#define PHY_BB_TABLES_INTF_ADDR_B0_TABLES_ADDR_0_MSB                                                  17
#define PHY_BB_TABLES_INTF_ADDR_B0_TABLES_ADDR_0_LSB                                                   2
#define PHY_BB_TABLES_INTF_ADDR_B0_TABLES_ADDR_0_MASK                                         0x0003fffc
#define PHY_BB_TABLES_INTF_ADDR_B0_TABLES_ADDR_0_GET(x)                        (((x) & 0x0003fffc) >> 2)
#define PHY_BB_TABLES_INTF_ADDR_B0_TABLES_ADDR_0_SET(x)                        (((x) << 2) & 0x0003fffc)
#define PHY_BB_TABLES_INTF_ADDR_B0_ADDR_AUTO_INCR_0_MSB                                               31
#define PHY_BB_TABLES_INTF_ADDR_B0_ADDR_AUTO_INCR_0_LSB                                               31
#define PHY_BB_TABLES_INTF_ADDR_B0_ADDR_AUTO_INCR_0_MASK                                      0x80000000
#define PHY_BB_TABLES_INTF_ADDR_B0_ADDR_AUTO_INCR_0_GET(x)                    (((x) & 0x80000000) >> 31)
#define PHY_BB_TABLES_INTF_ADDR_B0_ADDR_AUTO_INCR_0_SET(x)                    (((x) << 31) & 0x80000000)

/* macros for bb_sm_reg_map.BB_tables_intf_data_b0 */
#define PHY_BB_TABLES_INTF_DATA_B0_ADDRESS                                                    0x0000a7f4
#define PHY_BB_TABLES_INTF_DATA_B0_OFFSET                                                     0x000005f4
#define PHY_BB_TABLES_INTF_DATA_B0_TABLES_DATA_0_MSB                                                  31
#define PHY_BB_TABLES_INTF_DATA_B0_TABLES_DATA_0_LSB                                                   0
#define PHY_BB_TABLES_INTF_DATA_B0_TABLES_DATA_0_MASK                                         0xffffffff
#define PHY_BB_TABLES_INTF_DATA_B0_TABLES_DATA_0_GET(x)                        (((x) & 0xffffffff) >> 0)
#define PHY_BB_TABLES_INTF_DATA_B0_TABLES_DATA_0_SET(x)                        (((x) << 0) & 0xffffffff)

#ifndef __ASSEMBLER__

typedef struct sm_reg_map_reg_s {
  volatile unsigned int BB_D2_chip_id;                                 /*        0x0 - 0x4        */
  volatile unsigned int BB_gen_controls;                               /*        0x4 - 0x8        */
  volatile unsigned int BB_modes_select;                               /*        0x8 - 0xc        */
  volatile unsigned int BB_active;                                     /*        0xc - 0x10       */
  volatile char pad__0[0x10];                                          /*       0x10 - 0x20       */
  volatile unsigned int BB_vit_spur_mask_A;                            /*       0x20 - 0x24       */
  volatile unsigned int BB_vit_spur_mask_B;                            /*       0x24 - 0x28       */
  volatile unsigned int BB_spectral_scan;                              /*       0x28 - 0x2c       */
  volatile unsigned int BB_radar_bw_filter;                            /*       0x2c - 0x30       */
  volatile unsigned int BB_search_start_delay;                         /*       0x30 - 0x34       */
  volatile unsigned int BB_max_rx_length;                              /*       0x34 - 0x38       */
  volatile unsigned int BB_frame_control;                              /*       0x38 - 0x3c       */
  volatile unsigned int BB_rfbus_request;                              /*       0x3c - 0x40       */
  volatile unsigned int BB_rfbus_grant;                                /*       0x40 - 0x44       */
  volatile unsigned int BB_rifs;                                       /*       0x44 - 0x48       */
  volatile unsigned int BB_spectral_scan_2;                            /*       0x48 - 0x4c       */
  volatile char pad__1[0x4];                                           /*       0x4c - 0x50       */
  volatile unsigned int BB_rx_clear_delay;                             /*       0x50 - 0x54       */
  volatile unsigned int BB_analog_power_on_time;                       /*       0x54 - 0x58       */
  volatile unsigned int BB_tx_timing_1;                                /*       0x58 - 0x5c       */
  volatile unsigned int BB_tx_timing_2;                                /*       0x5c - 0x60       */
  volatile unsigned int BB_tx_timing_3;                                /*       0x60 - 0x64       */
  volatile unsigned int BB_xpa_timing_control;                         /*       0x64 - 0x68       */
  volatile char pad__2[0x18];                                          /*       0x68 - 0x80       */
  volatile unsigned int BB_misc_pa_control;                            /*       0x80 - 0x84       */
  volatile unsigned int BB_switch_table_chn_b0;                        /*       0x84 - 0x88       */
  volatile unsigned int BB_switch_table_com1;                          /*       0x88 - 0x8c       */
  volatile unsigned int BB_switch_table_com2;                          /*       0x8c - 0x90       */
  volatile char pad__3[0x10];                                          /*       0x90 - 0xa0       */
  volatile unsigned int BB_multichain_enable;                          /*       0xa0 - 0xa4       */
  volatile char pad__4[0x1c];                                          /*       0xa4 - 0xc0       */
  volatile unsigned int BB_cal_chain_mask;                             /*       0xc0 - 0xc4       */
  volatile unsigned int BB_agc_control;                                /*       0xc4 - 0xc8       */
  volatile unsigned int BB_iq_adc_cal_mode;                            /*       0xc8 - 0xcc       */
  volatile unsigned int BB_fcal_1;                                     /*       0xcc - 0xd0       */
  volatile unsigned int BB_fcal_2_b0;                                  /*       0xd0 - 0xd4       */
  volatile unsigned int BB_dft_tone_ctrl_b0;                           /*       0xd4 - 0xd8       */
  volatile unsigned int BB_cl_cal_ctrl;                                /*       0xd8 - 0xdc       */
  volatile unsigned int BB_cl_map_0_b0;                                /*       0xdc - 0xe0       */
  volatile unsigned int BB_cl_map_1_b0;                                /*       0xe0 - 0xe4       */
  volatile unsigned int BB_cl_map_2_b0;                                /*       0xe4 - 0xe8       */
  volatile unsigned int BB_cl_map_3_b0;                                /*       0xe8 - 0xec       */
  volatile unsigned int BB_cl_map_pal_0_b0;                            /*       0xec - 0xf0       */
  volatile unsigned int BB_cl_map_pal_1_b0;                            /*       0xf0 - 0xf4       */
  volatile unsigned int BB_cl_map_pal_2_b0;                            /*       0xf4 - 0xf8       */
  volatile unsigned int BB_cl_map_pal_3_b0;                            /*       0xf8 - 0xfc       */
  volatile char pad__5[0x4];                                           /*       0xfc - 0x100      */
  volatile unsigned int BB_cl_tab_b0[16];                              /*      0x100 - 0x140      */
  volatile unsigned int BB_synth_control;                              /*      0x140 - 0x144      */
  volatile unsigned int BB_addac_clk_select;                           /*      0x144 - 0x148      */
  volatile unsigned int BB_pll_cntl;                                   /*      0x148 - 0x14c      */
  volatile unsigned int BB_analog_swap;                                /*      0x14c - 0x150      */
  volatile unsigned int BB_addac_parallel_control;                     /*      0x150 - 0x154      */
  volatile char pad__6[0x4];                                           /*      0x154 - 0x158      */
  volatile unsigned int BB_force_analog;                               /*      0x158 - 0x15c      */
  volatile char pad__7[0x4];                                           /*      0x15c - 0x160      */
  volatile unsigned int BB_test_controls;                              /*      0x160 - 0x164      */
  volatile unsigned int BB_test_controls_status;                       /*      0x164 - 0x168      */
  volatile unsigned int BB_tstdac;                                     /*      0x168 - 0x16c      */
  volatile unsigned int BB_channel_status;                             /*      0x16c - 0x170      */
  volatile unsigned int BB_chaninfo_ctrl;                              /*      0x170 - 0x174      */
  volatile unsigned int BB_chan_info_noise_pwr;                        /*      0x174 - 0x178      */
  volatile unsigned int BB_chan_info_gain_diff;                        /*      0x178 - 0x17c      */
  volatile unsigned int BB_chan_info_fine_timing;                      /*      0x17c - 0x180      */
  volatile unsigned int BB_chan_info_gain_b0;                          /*      0x180 - 0x184      */
  volatile unsigned int BB_sm_hist;                                    /*      0x184 - 0x188      */
  volatile char pad__8[0x8];                                           /*      0x188 - 0x190      */
  volatile unsigned int BB_scrambler_seed;                             /*      0x190 - 0x194      */
  volatile unsigned int BB_bbb_tx_ctrl;                                /*      0x194 - 0x198      */
  volatile unsigned int BB_bbb_txfir_0;                                /*      0x198 - 0x19c      */
  volatile unsigned int BB_bbb_txfir_1;                                /*      0x19c - 0x1a0      */
  volatile unsigned int BB_bbb_txfir_2;                                /*      0x1a0 - 0x1a4      */
  volatile unsigned int BB_heavy_clip_ctrl;                            /*      0x1a4 - 0x1a8      */
  volatile unsigned int BB_heavy_clip_20;                              /*      0x1a8 - 0x1ac      */
  volatile unsigned int BB_heavy_clip_40;                              /*      0x1ac - 0x1b0      */
  volatile unsigned int BB_illegal_tx_rate;                            /*      0x1b0 - 0x1b4      */
  volatile char pad__9[0xc];                                           /*      0x1b4 - 0x1c0      */
  volatile unsigned int BB_powertx_rate1;                              /*      0x1c0 - 0x1c4      */
  volatile unsigned int BB_powertx_rate2;                              /*      0x1c4 - 0x1c8      */
  volatile unsigned int BB_powertx_rate3;                              /*      0x1c8 - 0x1cc      */
  volatile unsigned int BB_powertx_rate4;                              /*      0x1cc - 0x1d0      */
  volatile unsigned int BB_powertx_rate5;                              /*      0x1d0 - 0x1d4      */
  volatile unsigned int BB_powertx_rate6;                              /*      0x1d4 - 0x1d8      */
  volatile unsigned int BB_powertx_rate7;                              /*      0x1d8 - 0x1dc      */
  volatile unsigned int BB_powertx_rate8;                              /*      0x1dc - 0x1e0      */
  volatile unsigned int BB_powertx_rate9;                              /*      0x1e0 - 0x1e4      */
  volatile unsigned int BB_powertx_rate10;                             /*      0x1e4 - 0x1e8      */
  volatile unsigned int BB_powertx_rate11;                             /*      0x1e8 - 0x1ec      */
  volatile unsigned int BB_powertx_rate12;                             /*      0x1ec - 0x1f0      */
  volatile unsigned int BB_powertx_max;                                /*      0x1f0 - 0x1f4      */
  volatile unsigned int BB_powertx_sub;                                /*      0x1f4 - 0x1f8      */
  volatile unsigned int BB_tpc_1;                                      /*      0x1f8 - 0x1fc      */
  volatile unsigned int BB_tpc_2;                                      /*      0x1fc - 0x200      */
  volatile unsigned int BB_tpc_3;                                      /*      0x200 - 0x204      */
  volatile unsigned int BB_tpc_4_b0;                                   /*      0x204 - 0x208      */
  volatile unsigned int BB_tpc_5_b0;                                   /*      0x208 - 0x20c      */
  volatile unsigned int BB_tpc_6_b0;                                   /*      0x20c - 0x210      */
  volatile unsigned int BB_tpc_7;                                      /*      0x210 - 0x214      */
  volatile unsigned int BB_tpc_8;                                      /*      0x214 - 0x218      */
  volatile unsigned int BB_tpc_9;                                      /*      0x218 - 0x21c      */
  volatile unsigned int BB_tpc_10;                                     /*      0x21c - 0x220      */
  volatile unsigned int BB_tpc_11_b0;                                  /*      0x220 - 0x224      */
  volatile unsigned int BB_tpc_12;                                     /*      0x224 - 0x228      */
  volatile unsigned int BB_tpc_13;                                     /*      0x228 - 0x22c      */
  volatile unsigned int BB_tpc_14;                                     /*      0x22c - 0x230      */
  volatile unsigned int BB_tpc_15;                                     /*      0x230 - 0x234      */
  volatile unsigned int BB_tpc_16;                                     /*      0x234 - 0x238      */
  volatile unsigned int BB_tpc_17;                                     /*      0x238 - 0x23c      */
  volatile unsigned int BB_tpc_18;                                     /*      0x23c - 0x240      */
  volatile unsigned int BB_tpc_19_b0;                                  /*      0x240 - 0x244      */
  volatile unsigned int BB_tpc_20;                                     /*      0x244 - 0x248      */
  volatile unsigned int BB_therm_adc_1;                                /*      0x248 - 0x24c      */
  volatile unsigned int BB_therm_adc_2;                                /*      0x24c - 0x250      */
  volatile unsigned int BB_therm_adc_3;                                /*      0x250 - 0x254      */
  volatile unsigned int BB_therm_adc_4;                                /*      0x254 - 0x258      */
  volatile unsigned int BB_tx_forced_gain;                             /*      0x258 - 0x25c      */
  volatile char pad__10[0x24];                                         /*      0x25c - 0x280      */
  volatile unsigned int BB_pdadc_tab_b0[32];                           /*      0x280 - 0x300      */
  volatile unsigned int BB_tx_gain_tab_1;                              /*      0x300 - 0x304      */
  volatile unsigned int BB_tx_gain_tab_2;                              /*      0x304 - 0x308      */
  volatile unsigned int BB_tx_gain_tab_3;                              /*      0x308 - 0x30c      */
  volatile unsigned int BB_tx_gain_tab_4;                              /*      0x30c - 0x310      */
  volatile unsigned int BB_tx_gain_tab_5;                              /*      0x310 - 0x314      */
  volatile unsigned int BB_tx_gain_tab_6;                              /*      0x314 - 0x318      */
  volatile unsigned int BB_tx_gain_tab_7;                              /*      0x318 - 0x31c      */
  volatile unsigned int BB_tx_gain_tab_8;                              /*      0x31c - 0x320      */
  volatile unsigned int BB_tx_gain_tab_9;                              /*      0x320 - 0x324      */
  volatile unsigned int BB_tx_gain_tab_10;                             /*      0x324 - 0x328      */
  volatile unsigned int BB_tx_gain_tab_11;                             /*      0x328 - 0x32c      */
  volatile unsigned int BB_tx_gain_tab_12;                             /*      0x32c - 0x330      */
  volatile unsigned int BB_tx_gain_tab_13;                             /*      0x330 - 0x334      */
  volatile unsigned int BB_tx_gain_tab_14;                             /*      0x334 - 0x338      */
  volatile unsigned int BB_tx_gain_tab_15;                             /*      0x338 - 0x33c      */
  volatile unsigned int BB_tx_gain_tab_16;                             /*      0x33c - 0x340      */
  volatile unsigned int BB_tx_gain_tab_17;                             /*      0x340 - 0x344      */
  volatile unsigned int BB_tx_gain_tab_18;                             /*      0x344 - 0x348      */
  volatile unsigned int BB_tx_gain_tab_19;                             /*      0x348 - 0x34c      */
  volatile unsigned int BB_tx_gain_tab_20;                             /*      0x34c - 0x350      */
  volatile unsigned int BB_tx_gain_tab_21;                             /*      0x350 - 0x354      */
  volatile unsigned int BB_tx_gain_tab_22;                             /*      0x354 - 0x358      */
  volatile unsigned int BB_tx_gain_tab_23;                             /*      0x358 - 0x35c      */
  volatile unsigned int BB_tx_gain_tab_24;                             /*      0x35c - 0x360      */
  volatile unsigned int BB_tx_gain_tab_25;                             /*      0x360 - 0x364      */
  volatile unsigned int BB_tx_gain_tab_26;                             /*      0x364 - 0x368      */
  volatile unsigned int BB_tx_gain_tab_27;                             /*      0x368 - 0x36c      */
  volatile unsigned int BB_tx_gain_tab_28;                             /*      0x36c - 0x370      */
  volatile unsigned int BB_tx_gain_tab_29;                             /*      0x370 - 0x374      */
  volatile unsigned int BB_tx_gain_tab_30;                             /*      0x374 - 0x378      */
  volatile unsigned int BB_tx_gain_tab_31;                             /*      0x378 - 0x37c      */
  volatile unsigned int BB_tx_gain_tab_32;                             /*      0x37c - 0x380      */
  volatile unsigned int BB_rtt_ctrl;                                   /*      0x380 - 0x384      */
  volatile unsigned int BB_rtt_table_sw_intf_b0;                       /*      0x384 - 0x388      */
  volatile unsigned int BB_rtt_table_sw_intf_1_b0;                     /*      0x388 - 0x38c      */
  volatile unsigned int BB_tx_gain_tab_1_16_lsb_ext;                   /*      0x38c - 0x390      */
  volatile unsigned int BB_tx_gain_tab_17_32_lsb_ext;                  /*      0x390 - 0x394      */
  volatile char pad__11[0x6c];                                         /*      0x394 - 0x400      */
  volatile unsigned int BB_caltx_gain_set_0;                           /*      0x400 - 0x404      */
  volatile unsigned int BB_caltx_gain_set_2;                           /*      0x404 - 0x408      */
  volatile unsigned int BB_caltx_gain_set_4;                           /*      0x408 - 0x40c      */
  volatile unsigned int BB_caltx_gain_set_6;                           /*      0x40c - 0x410      */
  volatile unsigned int BB_caltx_gain_set_8;                           /*      0x410 - 0x414      */
  volatile unsigned int BB_caltx_gain_set_10;                          /*      0x414 - 0x418      */
  volatile unsigned int BB_caltx_gain_set_12;                          /*      0x418 - 0x41c      */
  volatile unsigned int BB_caltx_gain_set_14;                          /*      0x41c - 0x420      */
  volatile unsigned int BB_caltx_gain_set_16;                          /*      0x420 - 0x424      */
  volatile unsigned int BB_caltx_gain_set_18;                          /*      0x424 - 0x428      */
  volatile unsigned int BB_caltx_gain_set_20;                          /*      0x428 - 0x42c      */
  volatile unsigned int BB_caltx_gain_set_22;                          /*      0x42c - 0x430      */
  volatile unsigned int BB_caltx_gain_set_24;                          /*      0x430 - 0x434      */
  volatile unsigned int BB_caltx_gain_set_26;                          /*      0x434 - 0x438      */
  volatile unsigned int BB_caltx_gain_set_28;                          /*      0x438 - 0x43c      */
  volatile unsigned int BB_caltx_gain_set_30;                          /*      0x43c - 0x440      */
  volatile char pad__12[0x4];                                          /*      0x440 - 0x444      */
  volatile unsigned int BB_txiqcal_control_0;                          /*      0x444 - 0x448      */
  volatile unsigned int BB_txiqcal_control_1;                          /*      0x448 - 0x44c      */
  volatile unsigned int BB_txiqcal_control_2;                          /*      0x44c - 0x450      */
  volatile unsigned int BB_txiq_corr_coeff_01_b0;                      /*      0x450 - 0x454      */
  volatile unsigned int BB_txiq_corr_coeff_23_b0;                      /*      0x454 - 0x458      */
  volatile unsigned int BB_txiq_corr_coeff_45_b0;                      /*      0x458 - 0x45c      */
  volatile unsigned int BB_txiq_corr_coeff_67_b0;                      /*      0x45c - 0x460      */
  volatile unsigned int BB_txiq_corr_coeff_89_b0;                      /*      0x460 - 0x464      */
  volatile unsigned int BB_txiq_corr_coeff_ab_b0;                      /*      0x464 - 0x468      */
  volatile unsigned int BB_txiq_corr_coeff_cd_b0;                      /*      0x468 - 0x46c      */
  volatile unsigned int BB_txiq_corr_coeff_ef_b0;                      /*      0x46c - 0x470      */
  volatile unsigned int BB_cal_rxbb_gain_tbl_0;                        /*      0x470 - 0x474      */
  volatile unsigned int BB_cal_rxbb_gain_tbl_4;                        /*      0x474 - 0x478      */
  volatile unsigned int BB_cal_rxbb_gain_tbl_8;                        /*      0x478 - 0x47c      */
  volatile unsigned int BB_cal_rxbb_gain_tbl_12;                       /*      0x47c - 0x480      */
  volatile unsigned int BB_cal_rxbb_gain_tbl_16;                       /*      0x480 - 0x484      */
  volatile unsigned int BB_cal_rxbb_gain_tbl_20;                       /*      0x484 - 0x488      */
  volatile unsigned int BB_cal_rxbb_gain_tbl_24;                       /*      0x488 - 0x48c      */
  volatile unsigned int BB_txiqcal_status_b0;                          /*      0x48c - 0x490      */
  volatile unsigned int BB_paprd_trainer_cntl1;                        /*      0x490 - 0x494      */
  volatile unsigned int BB_paprd_trainer_cntl2;                        /*      0x494 - 0x498      */
  volatile unsigned int BB_paprd_trainer_cntl3;                        /*      0x498 - 0x49c      */
  volatile unsigned int BB_paprd_trainer_cntl4;                        /*      0x49c - 0x4a0      */
  volatile unsigned int BB_paprd_trainer_stat1;                        /*      0x4a0 - 0x4a4      */
  volatile unsigned int BB_paprd_trainer_stat2;                        /*      0x4a4 - 0x4a8      */
  volatile unsigned int BB_paprd_trainer_stat3;                        /*      0x4a8 - 0x4ac      */
  volatile char pad__13[0x114];                                        /*      0x4ac - 0x5c0      */
  volatile unsigned int BB_watchdog_status;                            /*      0x5c0 - 0x5c4      */
  volatile unsigned int BB_watchdog_ctrl_1;                            /*      0x5c4 - 0x5c8      */
  volatile unsigned int BB_watchdog_ctrl_2;                            /*      0x5c8 - 0x5cc      */
  volatile unsigned int BB_bluetooth_cntl;                             /*      0x5cc - 0x5d0      */
  volatile unsigned int BB_phyonly_warm_reset;                         /*      0x5d0 - 0x5d4      */
  volatile unsigned int BB_phyonly_control;                            /*      0x5d4 - 0x5d8      */
  volatile char pad__14[0x4];                                          /*      0x5d8 - 0x5dc      */
  volatile unsigned int BB_eco_ctrl;                                   /*      0x5dc - 0x5e0      */
  volatile char pad__15[0x10];                                         /*      0x5e0 - 0x5f0      */
  volatile unsigned int BB_tables_intf_addr_b0;                        /*      0x5f0 - 0x5f4      */
  volatile unsigned int BB_tables_intf_data_b0;                        /*      0x5f4 - 0x5f8      */
} sm_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_chn1_reg_map.BB_ext_chan_pwr_thr_2_b1 */
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_ADDRESS                                                  0x0000a830
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_OFFSET                                                   0x00000030
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_CF_MAXCCAPWR_EXT_1_MSB                                            8
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_CF_MAXCCAPWR_EXT_1_LSB                                            0
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_CF_MAXCCAPWR_EXT_1_MASK                                  0x000001ff
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_CF_MAXCCAPWR_EXT_1_GET(x)                 (((x) & 0x000001ff) >> 0)
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_CF_MAXCCAPWR_EXT_1_SET(x)                 (((x) << 0) & 0x000001ff)
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_MINCCAPWR_EXT_1_MSB                                              24
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_MINCCAPWR_EXT_1_LSB                                              16
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_MINCCAPWR_EXT_1_MASK                                     0x01ff0000
#define PHY_BB_EXT_CHAN_PWR_THR_2_B1_MINCCAPWR_EXT_1_GET(x)                   (((x) & 0x01ff0000) >> 16)

/* macros for bb_chn1_reg_map.BB_spur_report_b1 */
#define PHY_BB_SPUR_REPORT_B1_ADDRESS                                                         0x0000a8a8
#define PHY_BB_SPUR_REPORT_B1_OFFSET                                                          0x000000a8
#define PHY_BB_SPUR_REPORT_B1_SPUR_EST_I_1_MSB                                                         7
#define PHY_BB_SPUR_REPORT_B1_SPUR_EST_I_1_LSB                                                         0
#define PHY_BB_SPUR_REPORT_B1_SPUR_EST_I_1_MASK                                               0x000000ff
#define PHY_BB_SPUR_REPORT_B1_SPUR_EST_I_1_GET(x)                              (((x) & 0x000000ff) >> 0)
#define PHY_BB_SPUR_REPORT_B1_SPUR_EST_Q_1_MSB                                                        15
#define PHY_BB_SPUR_REPORT_B1_SPUR_EST_Q_1_LSB                                                         8
#define PHY_BB_SPUR_REPORT_B1_SPUR_EST_Q_1_MASK                                               0x0000ff00
#define PHY_BB_SPUR_REPORT_B1_SPUR_EST_Q_1_GET(x)                              (((x) & 0x0000ff00) >> 8)
#define PHY_BB_SPUR_REPORT_B1_POWER_WITH_SPUR_REMOVED_1_MSB                                           31
#define PHY_BB_SPUR_REPORT_B1_POWER_WITH_SPUR_REMOVED_1_LSB                                           16
#define PHY_BB_SPUR_REPORT_B1_POWER_WITH_SPUR_REMOVED_1_MASK                                  0xffff0000
#define PHY_BB_SPUR_REPORT_B1_POWER_WITH_SPUR_REMOVED_1_GET(x)                (((x) & 0xffff0000) >> 16)

/* macros for bb_chn1_reg_map.BB_iq_adc_meas_0_b1 */
#define PHY_BB_IQ_ADC_MEAS_0_B1_ADDRESS                                                       0x0000a8c0
#define PHY_BB_IQ_ADC_MEAS_0_B1_OFFSET                                                        0x000000c0
#define PHY_BB_IQ_ADC_MEAS_0_B1_GAIN_DC_IQ_CAL_MEAS_0_1_MSB                                           31
#define PHY_BB_IQ_ADC_MEAS_0_B1_GAIN_DC_IQ_CAL_MEAS_0_1_LSB                                            0
#define PHY_BB_IQ_ADC_MEAS_0_B1_GAIN_DC_IQ_CAL_MEAS_0_1_MASK                                  0xffffffff
#define PHY_BB_IQ_ADC_MEAS_0_B1_GAIN_DC_IQ_CAL_MEAS_0_1_GET(x)                 (((x) & 0xffffffff) >> 0)

/* macros for bb_chn1_reg_map.BB_iq_adc_meas_1_b1 */
#define PHY_BB_IQ_ADC_MEAS_1_B1_ADDRESS                                                       0x0000a8c4
#define PHY_BB_IQ_ADC_MEAS_1_B1_OFFSET                                                        0x000000c4
#define PHY_BB_IQ_ADC_MEAS_1_B1_GAIN_DC_IQ_CAL_MEAS_1_1_MSB                                           31
#define PHY_BB_IQ_ADC_MEAS_1_B1_GAIN_DC_IQ_CAL_MEAS_1_1_LSB                                            0
#define PHY_BB_IQ_ADC_MEAS_1_B1_GAIN_DC_IQ_CAL_MEAS_1_1_MASK                                  0xffffffff
#define PHY_BB_IQ_ADC_MEAS_1_B1_GAIN_DC_IQ_CAL_MEAS_1_1_GET(x)                 (((x) & 0xffffffff) >> 0)

/* macros for bb_chn1_reg_map.BB_iq_adc_meas_2_b1 */
#define PHY_BB_IQ_ADC_MEAS_2_B1_ADDRESS                                                       0x0000a8c8
#define PHY_BB_IQ_ADC_MEAS_2_B1_OFFSET                                                        0x000000c8
#define PHY_BB_IQ_ADC_MEAS_2_B1_GAIN_DC_IQ_CAL_MEAS_2_1_MSB                                           31
#define PHY_BB_IQ_ADC_MEAS_2_B1_GAIN_DC_IQ_CAL_MEAS_2_1_LSB                                            0
#define PHY_BB_IQ_ADC_MEAS_2_B1_GAIN_DC_IQ_CAL_MEAS_2_1_MASK                                  0xffffffff
#define PHY_BB_IQ_ADC_MEAS_2_B1_GAIN_DC_IQ_CAL_MEAS_2_1_GET(x)                 (((x) & 0xffffffff) >> 0)

/* macros for bb_chn1_reg_map.BB_iq_adc_meas_3_b1 */
#define PHY_BB_IQ_ADC_MEAS_3_B1_ADDRESS                                                       0x0000a8cc
#define PHY_BB_IQ_ADC_MEAS_3_B1_OFFSET                                                        0x000000cc
#define PHY_BB_IQ_ADC_MEAS_3_B1_GAIN_DC_IQ_CAL_MEAS_3_1_MSB                                           31
#define PHY_BB_IQ_ADC_MEAS_3_B1_GAIN_DC_IQ_CAL_MEAS_3_1_LSB                                            0
#define PHY_BB_IQ_ADC_MEAS_3_B1_GAIN_DC_IQ_CAL_MEAS_3_1_MASK                                  0xffffffff
#define PHY_BB_IQ_ADC_MEAS_3_B1_GAIN_DC_IQ_CAL_MEAS_3_1_GET(x)                 (((x) & 0xffffffff) >> 0)

/* macros for bb_chn1_reg_map.BB_tx_phase_ramp_b1 */
#define PHY_BB_TX_PHASE_RAMP_B1_ADDRESS                                                       0x0000a8d0
#define PHY_BB_TX_PHASE_RAMP_B1_OFFSET                                                        0x000000d0
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_ENABLE_1_MSB                                             0
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_ENABLE_1_LSB                                             0
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_ENABLE_1_MASK                                   0x00000001
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_ENABLE_1_GET(x)                  (((x) & 0x00000001) >> 0)
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_ENABLE_1_SET(x)                  (((x) << 0) & 0x00000001)
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_BIAS_1_MSB                                               6
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_BIAS_1_LSB                                               1
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_BIAS_1_MASK                                     0x0000007e
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_BIAS_1_GET(x)                    (((x) & 0x0000007e) >> 1)
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_BIAS_1_SET(x)                    (((x) << 1) & 0x0000007e)
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_INIT_1_MSB                                              16
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_INIT_1_LSB                                               7
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_INIT_1_MASK                                     0x0001ff80
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_INIT_1_GET(x)                    (((x) & 0x0001ff80) >> 7)
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_INIT_1_SET(x)                    (((x) << 7) & 0x0001ff80)
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_ALPHA_1_MSB                                             24
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_ALPHA_1_LSB                                             17
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_ALPHA_1_MASK                                    0x01fe0000
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_ALPHA_1_GET(x)                  (((x) & 0x01fe0000) >> 17)
#define PHY_BB_TX_PHASE_RAMP_B1_CF_PHASE_RAMP_ALPHA_1_SET(x)                  (((x) << 17) & 0x01fe0000)

/* macros for bb_chn1_reg_map.BB_adc_gain_dc_corr_b1 */
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADDRESS                                                    0x0000a8d4
#define PHY_BB_ADC_GAIN_DC_CORR_B1_OFFSET                                                     0x000000d4
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_GAIN_CORR_Q_COEFF_1_MSB                                         5
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_GAIN_CORR_Q_COEFF_1_LSB                                         0
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_GAIN_CORR_Q_COEFF_1_MASK                               0x0000003f
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_GAIN_CORR_Q_COEFF_1_GET(x)              (((x) & 0x0000003f) >> 0)
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_GAIN_CORR_Q_COEFF_1_SET(x)              (((x) << 0) & 0x0000003f)
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_GAIN_CORR_I_COEFF_1_MSB                                        11
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_GAIN_CORR_I_COEFF_1_LSB                                         6
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_GAIN_CORR_I_COEFF_1_MASK                               0x00000fc0
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_GAIN_CORR_I_COEFF_1_GET(x)              (((x) & 0x00000fc0) >> 6)
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_GAIN_CORR_I_COEFF_1_SET(x)              (((x) << 6) & 0x00000fc0)
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_DC_CORR_Q_COEFF_1_MSB                                          20
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_DC_CORR_Q_COEFF_1_LSB                                          12
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_DC_CORR_Q_COEFF_1_MASK                                 0x001ff000
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_DC_CORR_Q_COEFF_1_GET(x)               (((x) & 0x001ff000) >> 12)
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_DC_CORR_Q_COEFF_1_SET(x)               (((x) << 12) & 0x001ff000)
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_DC_CORR_I_COEFF_1_MSB                                          29
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_DC_CORR_I_COEFF_1_LSB                                          21
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_DC_CORR_I_COEFF_1_MASK                                 0x3fe00000
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_DC_CORR_I_COEFF_1_GET(x)               (((x) & 0x3fe00000) >> 21)
#define PHY_BB_ADC_GAIN_DC_CORR_B1_ADC_DC_CORR_I_COEFF_1_SET(x)               (((x) << 21) & 0x3fe00000)

/* macros for bb_chn1_reg_map.BB_rx_iq_corr_b1 */
#define PHY_BB_RX_IQ_CORR_B1_ADDRESS                                                          0x0000a8dc
#define PHY_BB_RX_IQ_CORR_B1_OFFSET                                                           0x000000dc
#define PHY_BB_RX_IQ_CORR_B1_RX_IQCORR_Q_Q_COFF_1_MSB                                                  6
#define PHY_BB_RX_IQ_CORR_B1_RX_IQCORR_Q_Q_COFF_1_LSB                                                  0
#define PHY_BB_RX_IQ_CORR_B1_RX_IQCORR_Q_Q_COFF_1_MASK                                        0x0000007f
#define PHY_BB_RX_IQ_CORR_B1_RX_IQCORR_Q_Q_COFF_1_GET(x)                       (((x) & 0x0000007f) >> 0)
#define PHY_BB_RX_IQ_CORR_B1_RX_IQCORR_Q_Q_COFF_1_SET(x)                       (((x) << 0) & 0x0000007f)
#define PHY_BB_RX_IQ_CORR_B1_RX_IQCORR_Q_I_COFF_1_MSB                                                 13
#define PHY_BB_RX_IQ_CORR_B1_RX_IQCORR_Q_I_COFF_1_LSB                                                  7
#define PHY_BB_RX_IQ_CORR_B1_RX_IQCORR_Q_I_COFF_1_MASK                                        0x00003f80
#define PHY_BB_RX_IQ_CORR_B1_RX_IQCORR_Q_I_COFF_1_GET(x)                       (((x) & 0x00003f80) >> 7)
#define PHY_BB_RX_IQ_CORR_B1_RX_IQCORR_Q_I_COFF_1_SET(x)                       (((x) << 7) & 0x00003f80)
#define PHY_BB_RX_IQ_CORR_B1_LOOPBACK_IQCORR_Q_Q_COFF_1_MSB                                           21
#define PHY_BB_RX_IQ_CORR_B1_LOOPBACK_IQCORR_Q_Q_COFF_1_LSB                                           15
#define PHY_BB_RX_IQ_CORR_B1_LOOPBACK_IQCORR_Q_Q_COFF_1_MASK                                  0x003f8000
#define PHY_BB_RX_IQ_CORR_B1_LOOPBACK_IQCORR_Q_Q_COFF_1_GET(x)                (((x) & 0x003f8000) >> 15)
#define PHY_BB_RX_IQ_CORR_B1_LOOPBACK_IQCORR_Q_Q_COFF_1_SET(x)                (((x) << 15) & 0x003f8000)
#define PHY_BB_RX_IQ_CORR_B1_LOOPBACK_IQCORR_Q_I_COFF_1_MSB                                           28
#define PHY_BB_RX_IQ_CORR_B1_LOOPBACK_IQCORR_Q_I_COFF_1_LSB                                           22
#define PHY_BB_RX_IQ_CORR_B1_LOOPBACK_IQCORR_Q_I_COFF_1_MASK                                  0x1fc00000
#define PHY_BB_RX_IQ_CORR_B1_LOOPBACK_IQCORR_Q_I_COFF_1_GET(x)                (((x) & 0x1fc00000) >> 22)
#define PHY_BB_RX_IQ_CORR_B1_LOOPBACK_IQCORR_Q_I_COFF_1_SET(x)                (((x) << 22) & 0x1fc00000)

/* macros for bb_chn1_reg_map.BB_paprd_ctrl0_b1 */
#define PHY_BB_PAPRD_CTRL0_B1_ADDRESS                                                         0x0000a8f0
#define PHY_BB_PAPRD_CTRL0_B1_OFFSET                                                          0x000000f0
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_ENABLE_1_MSB                                                       0
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_ENABLE_1_LSB                                                       0
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_ENABLE_1_MASK                                             0x00000001
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_ENABLE_1_GET(x)                            (((x) & 0x00000001) >> 0)
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_ENABLE_1_SET(x)                            (((x) << 0) & 0x00000001)
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_ADAPTIVE_USE_SINGLE_TABLE_1_MSB                                    1
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_ADAPTIVE_USE_SINGLE_TABLE_1_LSB                                    1
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_ADAPTIVE_USE_SINGLE_TABLE_1_MASK                          0x00000002
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_ADAPTIVE_USE_SINGLE_TABLE_1_GET(x)         (((x) & 0x00000002) >> 1)
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_ADAPTIVE_USE_SINGLE_TABLE_1_SET(x)         (((x) << 1) & 0x00000002)
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_VALID_GAIN_1_MSB                                                  26
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_VALID_GAIN_1_LSB                                                   2
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_VALID_GAIN_1_MASK                                         0x07fffffc
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_VALID_GAIN_1_GET(x)                        (((x) & 0x07fffffc) >> 2)
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_VALID_GAIN_1_SET(x)                        (((x) << 2) & 0x07fffffc)
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_MAG_THRSH_1_MSB                                                   31
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_MAG_THRSH_1_LSB                                                   27
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_MAG_THRSH_1_MASK                                          0xf8000000
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_MAG_THRSH_1_GET(x)                        (((x) & 0xf8000000) >> 27)
#define PHY_BB_PAPRD_CTRL0_B1_PAPRD_MAG_THRSH_1_SET(x)                        (((x) << 27) & 0xf8000000)

/* macros for bb_chn1_reg_map.BB_paprd_ctrl1_b1 */
#define PHY_BB_PAPRD_CTRL1_B1_ADDRESS                                                         0x0000a8f4
#define PHY_BB_PAPRD_CTRL1_B1_OFFSET                                                          0x000000f4
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_SCALING_ENABLE_1_MSB                                      0
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_SCALING_ENABLE_1_LSB                                      0
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_SCALING_ENABLE_1_MASK                            0x00000001
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_SCALING_ENABLE_1_GET(x)           (((x) & 0x00000001) >> 0)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_SCALING_ENABLE_1_SET(x)           (((x) << 0) & 0x00000001)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_AM2AM_ENABLE_1_MSB                                        1
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_AM2AM_ENABLE_1_LSB                                        1
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_AM2AM_ENABLE_1_MASK                              0x00000002
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_AM2AM_ENABLE_1_GET(x)             (((x) & 0x00000002) >> 1)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_AM2AM_ENABLE_1_SET(x)             (((x) << 1) & 0x00000002)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_AM2PM_ENABLE_1_MSB                                        2
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_AM2PM_ENABLE_1_LSB                                        2
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_AM2PM_ENABLE_1_MASK                              0x00000004
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_AM2PM_ENABLE_1_GET(x)             (((x) & 0x00000004) >> 2)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_ADAPTIVE_AM2PM_ENABLE_1_SET(x)             (((x) << 2) & 0x00000004)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_POWER_AT_AM2AM_CAL_1_MSB                                           8
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_POWER_AT_AM2AM_CAL_1_LSB                                           3
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_POWER_AT_AM2AM_CAL_1_MASK                                 0x000001f8
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_POWER_AT_AM2AM_CAL_1_GET(x)                (((x) & 0x000001f8) >> 3)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_POWER_AT_AM2AM_CAL_1_SET(x)                (((x) << 3) & 0x000001f8)
#define PHY_BB_PAPRD_CTRL1_B1_PA_GAIN_SCALE_FACTOR_1_MSB                                              16
#define PHY_BB_PAPRD_CTRL1_B1_PA_GAIN_SCALE_FACTOR_1_LSB                                               9
#define PHY_BB_PAPRD_CTRL1_B1_PA_GAIN_SCALE_FACTOR_1_MASK                                     0x0001fe00
#define PHY_BB_PAPRD_CTRL1_B1_PA_GAIN_SCALE_FACTOR_1_GET(x)                    (((x) & 0x0001fe00) >> 9)
#define PHY_BB_PAPRD_CTRL1_B1_PA_GAIN_SCALE_FACTOR_1_SET(x)                    (((x) << 9) & 0x0001fe00)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_MAG_SCALE_FACTOR_1_MSB                                            26
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_MAG_SCALE_FACTOR_1_LSB                                            17
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_MAG_SCALE_FACTOR_1_MASK                                   0x07fe0000
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_MAG_SCALE_FACTOR_1_GET(x)                 (((x) & 0x07fe0000) >> 17)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_MAG_SCALE_FACTOR_1_SET(x)                 (((x) << 17) & 0x07fe0000)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_TRAINER_IANDQ_SEL_1_MSB                                           27
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_TRAINER_IANDQ_SEL_1_LSB                                           27
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_TRAINER_IANDQ_SEL_1_MASK                                  0x08000000
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_TRAINER_IANDQ_SEL_1_GET(x)                (((x) & 0x08000000) >> 27)
#define PHY_BB_PAPRD_CTRL1_B1_PAPRD_TRAINER_IANDQ_SEL_1_SET(x)                (((x) << 27) & 0x08000000)

/* macros for bb_chn1_reg_map.BB_pa_gain123_b1 */
#define PHY_BB_PA_GAIN123_B1_ADDRESS                                                          0x0000a8f8
#define PHY_BB_PA_GAIN123_B1_OFFSET                                                           0x000000f8
#define PHY_BB_PA_GAIN123_B1_PA_GAIN1_1_MSB                                                            9
#define PHY_BB_PA_GAIN123_B1_PA_GAIN1_1_LSB                                                            0
#define PHY_BB_PA_GAIN123_B1_PA_GAIN1_1_MASK                                                  0x000003ff
#define PHY_BB_PA_GAIN123_B1_PA_GAIN1_1_GET(x)                                 (((x) & 0x000003ff) >> 0)
#define PHY_BB_PA_GAIN123_B1_PA_GAIN1_1_SET(x)                                 (((x) << 0) & 0x000003ff)
#define PHY_BB_PA_GAIN123_B1_PA_GAIN2_1_MSB                                                           19
#define PHY_BB_PA_GAIN123_B1_PA_GAIN2_1_LSB                                                           10
#define PHY_BB_PA_GAIN123_B1_PA_GAIN2_1_MASK                                                  0x000ffc00
#define PHY_BB_PA_GAIN123_B1_PA_GAIN2_1_GET(x)                                (((x) & 0x000ffc00) >> 10)
#define PHY_BB_PA_GAIN123_B1_PA_GAIN2_1_SET(x)                                (((x) << 10) & 0x000ffc00)
#define PHY_BB_PA_GAIN123_B1_PA_GAIN3_1_MSB                                                           29
#define PHY_BB_PA_GAIN123_B1_PA_GAIN3_1_LSB                                                           20
#define PHY_BB_PA_GAIN123_B1_PA_GAIN3_1_MASK                                                  0x3ff00000
#define PHY_BB_PA_GAIN123_B1_PA_GAIN3_1_GET(x)                                (((x) & 0x3ff00000) >> 20)
#define PHY_BB_PA_GAIN123_B1_PA_GAIN3_1_SET(x)                                (((x) << 20) & 0x3ff00000)

/* macros for bb_chn1_reg_map.BB_pa_gain45_b1 */
#define PHY_BB_PA_GAIN45_B1_ADDRESS                                                           0x0000a8fc
#define PHY_BB_PA_GAIN45_B1_OFFSET                                                            0x000000fc
#define PHY_BB_PA_GAIN45_B1_PA_GAIN4_1_MSB                                                             9
#define PHY_BB_PA_GAIN45_B1_PA_GAIN4_1_LSB                                                             0
#define PHY_BB_PA_GAIN45_B1_PA_GAIN4_1_MASK                                                   0x000003ff
#define PHY_BB_PA_GAIN45_B1_PA_GAIN4_1_GET(x)                                  (((x) & 0x000003ff) >> 0)
#define PHY_BB_PA_GAIN45_B1_PA_GAIN4_1_SET(x)                                  (((x) << 0) & 0x000003ff)
#define PHY_BB_PA_GAIN45_B1_PA_GAIN5_1_MSB                                                            19
#define PHY_BB_PA_GAIN45_B1_PA_GAIN5_1_LSB                                                            10
#define PHY_BB_PA_GAIN45_B1_PA_GAIN5_1_MASK                                                   0x000ffc00
#define PHY_BB_PA_GAIN45_B1_PA_GAIN5_1_GET(x)                                 (((x) & 0x000ffc00) >> 10)
#define PHY_BB_PA_GAIN45_B1_PA_GAIN5_1_SET(x)                                 (((x) << 10) & 0x000ffc00)
#define PHY_BB_PA_GAIN45_B1_PAPRD_ADAPTIVE_TABLE_VALID_1_MSB                                          24
#define PHY_BB_PA_GAIN45_B1_PAPRD_ADAPTIVE_TABLE_VALID_1_LSB                                          20
#define PHY_BB_PA_GAIN45_B1_PAPRD_ADAPTIVE_TABLE_VALID_1_MASK                                 0x01f00000
#define PHY_BB_PA_GAIN45_B1_PAPRD_ADAPTIVE_TABLE_VALID_1_GET(x)               (((x) & 0x01f00000) >> 20)
#define PHY_BB_PA_GAIN45_B1_PAPRD_ADAPTIVE_TABLE_VALID_1_SET(x)               (((x) << 20) & 0x01f00000)

/* macros for bb_chn1_reg_map.BB_paprd_pre_post_scale_0_b1 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B1_ADDRESS                                              0x0000a900
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B1_OFFSET                                               0x00000100
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B1_PAPRD_PRE_POST_SCALING_0_1_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B1_PAPRD_PRE_POST_SCALING_0_1_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B1_PAPRD_PRE_POST_SCALING_0_1_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B1_PAPRD_PRE_POST_SCALING_0_1_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_0_B1_PAPRD_PRE_POST_SCALING_0_1_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn1_reg_map.BB_paprd_pre_post_scale_1_b1 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B1_ADDRESS                                              0x0000a904
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B1_OFFSET                                               0x00000104
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B1_PAPRD_PRE_POST_SCALING_1_1_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B1_PAPRD_PRE_POST_SCALING_1_1_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B1_PAPRD_PRE_POST_SCALING_1_1_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B1_PAPRD_PRE_POST_SCALING_1_1_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_1_B1_PAPRD_PRE_POST_SCALING_1_1_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn1_reg_map.BB_paprd_pre_post_scale_2_b1 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B1_ADDRESS                                              0x0000a908
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B1_OFFSET                                               0x00000108
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B1_PAPRD_PRE_POST_SCALING_2_1_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B1_PAPRD_PRE_POST_SCALING_2_1_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B1_PAPRD_PRE_POST_SCALING_2_1_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B1_PAPRD_PRE_POST_SCALING_2_1_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_2_B1_PAPRD_PRE_POST_SCALING_2_1_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn1_reg_map.BB_paprd_pre_post_scale_3_b1 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B1_ADDRESS                                              0x0000a90c
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B1_OFFSET                                               0x0000010c
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B1_PAPRD_PRE_POST_SCALING_3_1_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B1_PAPRD_PRE_POST_SCALING_3_1_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B1_PAPRD_PRE_POST_SCALING_3_1_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B1_PAPRD_PRE_POST_SCALING_3_1_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_3_B1_PAPRD_PRE_POST_SCALING_3_1_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn1_reg_map.BB_paprd_pre_post_scale_4_b1 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B1_ADDRESS                                              0x0000a910
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B1_OFFSET                                               0x00000110
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B1_PAPRD_PRE_POST_SCALING_4_1_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B1_PAPRD_PRE_POST_SCALING_4_1_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B1_PAPRD_PRE_POST_SCALING_4_1_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B1_PAPRD_PRE_POST_SCALING_4_1_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_4_B1_PAPRD_PRE_POST_SCALING_4_1_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn1_reg_map.BB_paprd_pre_post_scale_5_b1 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B1_ADDRESS                                              0x0000a914
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B1_OFFSET                                               0x00000114
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B1_PAPRD_PRE_POST_SCALING_5_1_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B1_PAPRD_PRE_POST_SCALING_5_1_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B1_PAPRD_PRE_POST_SCALING_5_1_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B1_PAPRD_PRE_POST_SCALING_5_1_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_5_B1_PAPRD_PRE_POST_SCALING_5_1_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn1_reg_map.BB_paprd_pre_post_scale_6_b1 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B1_ADDRESS                                              0x0000a918
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B1_OFFSET                                               0x00000118
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B1_PAPRD_PRE_POST_SCALING_6_1_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B1_PAPRD_PRE_POST_SCALING_6_1_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B1_PAPRD_PRE_POST_SCALING_6_1_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B1_PAPRD_PRE_POST_SCALING_6_1_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_6_B1_PAPRD_PRE_POST_SCALING_6_1_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn1_reg_map.BB_paprd_pre_post_scale_7_b1 */
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B1_ADDRESS                                              0x0000a91c
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B1_OFFSET                                               0x0000011c
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B1_PAPRD_PRE_POST_SCALING_7_1_MSB                               17
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B1_PAPRD_PRE_POST_SCALING_7_1_LSB                                0
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B1_PAPRD_PRE_POST_SCALING_7_1_MASK                      0x0003ffff
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B1_PAPRD_PRE_POST_SCALING_7_1_GET(x)     (((x) & 0x0003ffff) >> 0)
#define PHY_BB_PAPRD_PRE_POST_SCALE_7_B1_PAPRD_PRE_POST_SCALING_7_1_SET(x)     (((x) << 0) & 0x0003ffff)

/* macros for bb_chn1_reg_map.BB_paprd_mem_tab_b1 */
#define PHY_BB_PAPRD_MEM_TAB_B1_ADDRESS                                                       0x0000a920
#define PHY_BB_PAPRD_MEM_TAB_B1_OFFSET                                                        0x00000120
#define PHY_BB_PAPRD_MEM_TAB_B1_PAPRD_MEM_MSB                                                         21
#define PHY_BB_PAPRD_MEM_TAB_B1_PAPRD_MEM_LSB                                                          0
#define PHY_BB_PAPRD_MEM_TAB_B1_PAPRD_MEM_MASK                                                0x003fffff
#define PHY_BB_PAPRD_MEM_TAB_B1_PAPRD_MEM_GET(x)                               (((x) & 0x003fffff) >> 0)
#define PHY_BB_PAPRD_MEM_TAB_B1_PAPRD_MEM_SET(x)                               (((x) << 0) & 0x003fffff)

/* macros for bb_chn1_reg_map.BB_chan_info_chan_tab_b1 */
#define PHY_BB_CHAN_INFO_CHAN_TAB_B1_ADDRESS                                                  0x0000ab00
#define PHY_BB_CHAN_INFO_CHAN_TAB_B1_OFFSET                                                   0x00000300
#define PHY_BB_CHAN_INFO_CHAN_TAB_B1_CHANINFO_WORD_MSB                                                31
#define PHY_BB_CHAN_INFO_CHAN_TAB_B1_CHANINFO_WORD_LSB                                                 0
#define PHY_BB_CHAN_INFO_CHAN_TAB_B1_CHANINFO_WORD_MASK                                       0xffffffff
#define PHY_BB_CHAN_INFO_CHAN_TAB_B1_CHANINFO_WORD_GET(x)                      (((x) & 0xffffffff) >> 0)

/* macros for bb_chn1_reg_map.BB_chn1_tables_intf_addr */
#define PHY_BB_CHN1_TABLES_INTF_ADDR_ADDRESS                                                  0x0000abf0
#define PHY_BB_CHN1_TABLES_INTF_ADDR_OFFSET                                                   0x000003f0
#define PHY_BB_CHN1_TABLES_INTF_ADDR_CHN1_TABLES_ADDR_MSB                                             17
#define PHY_BB_CHN1_TABLES_INTF_ADDR_CHN1_TABLES_ADDR_LSB                                              2
#define PHY_BB_CHN1_TABLES_INTF_ADDR_CHN1_TABLES_ADDR_MASK                                    0x0003fffc
#define PHY_BB_CHN1_TABLES_INTF_ADDR_CHN1_TABLES_ADDR_GET(x)                   (((x) & 0x0003fffc) >> 2)
#define PHY_BB_CHN1_TABLES_INTF_ADDR_CHN1_TABLES_ADDR_SET(x)                   (((x) << 2) & 0x0003fffc)
#define PHY_BB_CHN1_TABLES_INTF_ADDR_CHN1_ADDR_AUTO_INCR_MSB                                          31
#define PHY_BB_CHN1_TABLES_INTF_ADDR_CHN1_ADDR_AUTO_INCR_LSB                                          31
#define PHY_BB_CHN1_TABLES_INTF_ADDR_CHN1_ADDR_AUTO_INCR_MASK                                 0x80000000
#define PHY_BB_CHN1_TABLES_INTF_ADDR_CHN1_ADDR_AUTO_INCR_GET(x)               (((x) & 0x80000000) >> 31)
#define PHY_BB_CHN1_TABLES_INTF_ADDR_CHN1_ADDR_AUTO_INCR_SET(x)               (((x) << 31) & 0x80000000)

/* macros for bb_chn1_reg_map.BB_chn1_tables_intf_data */
#define PHY_BB_CHN1_TABLES_INTF_DATA_ADDRESS                                                  0x0000abf4
#define PHY_BB_CHN1_TABLES_INTF_DATA_OFFSET                                                   0x000003f4
#define PHY_BB_CHN1_TABLES_INTF_DATA_CHN1_TABLES_DATA_MSB                                             31
#define PHY_BB_CHN1_TABLES_INTF_DATA_CHN1_TABLES_DATA_LSB                                              0
#define PHY_BB_CHN1_TABLES_INTF_DATA_CHN1_TABLES_DATA_MASK                                    0xffffffff
#define PHY_BB_CHN1_TABLES_INTF_DATA_CHN1_TABLES_DATA_GET(x)                   (((x) & 0xffffffff) >> 0)
#define PHY_BB_CHN1_TABLES_INTF_DATA_CHN1_TABLES_DATA_SET(x)                   (((x) << 0) & 0xffffffff)

#ifndef __ASSEMBLER__

typedef struct chn1_reg_map_reg_s {
  volatile char pad__0[0x30];                                          /*        0x0 - 0x30       */
  volatile unsigned int BB_ext_chan_pwr_thr_2_b1;                      /*       0x30 - 0x34       */
  volatile char pad__1[0x74];                                          /*       0x34 - 0xa8       */
  volatile unsigned int BB_spur_report_b1;                             /*       0xa8 - 0xac       */
  volatile char pad__2[0x14];                                          /*       0xac - 0xc0       */
  volatile unsigned int BB_iq_adc_meas_0_b1;                           /*       0xc0 - 0xc4       */
  volatile unsigned int BB_iq_adc_meas_1_b1;                           /*       0xc4 - 0xc8       */
  volatile unsigned int BB_iq_adc_meas_2_b1;                           /*       0xc8 - 0xcc       */
  volatile unsigned int BB_iq_adc_meas_3_b1;                           /*       0xcc - 0xd0       */
  volatile unsigned int BB_tx_phase_ramp_b1;                           /*       0xd0 - 0xd4       */
  volatile unsigned int BB_adc_gain_dc_corr_b1;                        /*       0xd4 - 0xd8       */
  volatile char pad__3[0x4];                                           /*       0xd8 - 0xdc       */
  volatile unsigned int BB_rx_iq_corr_b1;                              /*       0xdc - 0xe0       */
  volatile char pad__4[0x10];                                          /*       0xe0 - 0xf0       */
  volatile unsigned int BB_paprd_ctrl0_b1;                             /*       0xf0 - 0xf4       */
  volatile unsigned int BB_paprd_ctrl1_b1;                             /*       0xf4 - 0xf8       */
  volatile unsigned int BB_pa_gain123_b1;                              /*       0xf8 - 0xfc       */
  volatile unsigned int BB_pa_gain45_b1;                               /*       0xfc - 0x100      */
  volatile unsigned int BB_paprd_pre_post_scale_0_b1;                  /*      0x100 - 0x104      */
  volatile unsigned int BB_paprd_pre_post_scale_1_b1;                  /*      0x104 - 0x108      */
  volatile unsigned int BB_paprd_pre_post_scale_2_b1;                  /*      0x108 - 0x10c      */
  volatile unsigned int BB_paprd_pre_post_scale_3_b1;                  /*      0x10c - 0x110      */
  volatile unsigned int BB_paprd_pre_post_scale_4_b1;                  /*      0x110 - 0x114      */
  volatile unsigned int BB_paprd_pre_post_scale_5_b1;                  /*      0x114 - 0x118      */
  volatile unsigned int BB_paprd_pre_post_scale_6_b1;                  /*      0x118 - 0x11c      */
  volatile unsigned int BB_paprd_pre_post_scale_7_b1;                  /*      0x11c - 0x120      */
  volatile unsigned int BB_paprd_mem_tab_b1[120];                      /*      0x120 - 0x300      */
  volatile unsigned int BB_chan_info_chan_tab_b1[60];                  /*      0x300 - 0x3f0      */
  volatile unsigned int BB_chn1_tables_intf_addr;                      /*      0x3f0 - 0x3f4      */
  volatile unsigned int BB_chn1_tables_intf_data;                      /*      0x3f4 - 0x3f8      */
} chn1_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_agc1_reg_map.BB_gain_force_max_gains_b1 */
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_ADDRESS                                                0x0000ae04
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_OFFSET                                                 0x00000004
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_RF_GAIN_F_1_MSB                                                 7
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_RF_GAIN_F_1_LSB                                                 0
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_RF_GAIN_F_1_MASK                                       0x000000ff
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_RF_GAIN_F_1_GET(x)                      (((x) & 0x000000ff) >> 0)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_RF_GAIN_F_1_SET(x)                      (((x) << 0) & 0x000000ff)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_MB_GAIN_F_1_MSB                                                15
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_MB_GAIN_F_1_LSB                                                 8
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_MB_GAIN_F_1_MASK                                       0x0000ff00
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_MB_GAIN_F_1_GET(x)                      (((x) & 0x0000ff00) >> 8)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_MB_GAIN_F_1_SET(x)                      (((x) << 8) & 0x0000ff00)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN1_SW_F_1_MSB                                             16
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN1_SW_F_1_LSB                                             16
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN1_SW_F_1_MASK                                    0x00010000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN1_SW_F_1_GET(x)                  (((x) & 0x00010000) >> 16)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN1_SW_F_1_SET(x)                  (((x) << 16) & 0x00010000)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN2_SW_F_1_MSB                                             17
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN2_SW_F_1_LSB                                             17
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN2_SW_F_1_MASK                                    0x00020000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN2_SW_F_1_GET(x)                  (((x) & 0x00020000) >> 17)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN2_SW_F_1_SET(x)                  (((x) << 17) & 0x00020000)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN1_HYST_MARGIN_1_MSB                                      24
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN1_HYST_MARGIN_1_LSB                                      18
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN1_HYST_MARGIN_1_MASK                             0x01fc0000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN1_HYST_MARGIN_1_GET(x)           (((x) & 0x01fc0000) >> 18)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN1_HYST_MARGIN_1_SET(x)           (((x) << 18) & 0x01fc0000)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN2_HYST_MARGIN_1_MSB                                      31
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN2_HYST_MARGIN_1_LSB                                      25
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN2_HYST_MARGIN_1_MASK                             0xfe000000
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN2_HYST_MARGIN_1_GET(x)           (((x) & 0xfe000000) >> 25)
#define PHY_BB_GAIN_FORCE_MAX_GAINS_B1_XATTEN2_HYST_MARGIN_1_SET(x)           (((x) << 25) & 0xfe000000)

/* macros for bb_agc1_reg_map.BB_ext_atten_switch_ctl_b1 */
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_ADDRESS                                                0x0000ae18
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_OFFSET                                                 0x00000018
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN1_DB_1_MSB                                                5
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN1_DB_1_LSB                                                0
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN1_DB_1_MASK                                      0x0000003f
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN1_DB_1_GET(x)                     (((x) & 0x0000003f) >> 0)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN1_DB_1_SET(x)                     (((x) << 0) & 0x0000003f)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN2_DB_1_MSB                                               11
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN2_DB_1_LSB                                                6
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN2_DB_1_MASK                                      0x00000fc0
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN2_DB_1_GET(x)                     (((x) & 0x00000fc0) >> 6)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN2_DB_1_SET(x)                     (((x) << 6) & 0x00000fc0)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN1_MARGIN_1_MSB                                           16
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN1_MARGIN_1_LSB                                           12
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN1_MARGIN_1_MASK                                  0x0001f000
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN1_MARGIN_1_GET(x)                (((x) & 0x0001f000) >> 12)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN1_MARGIN_1_SET(x)                (((x) << 12) & 0x0001f000)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN2_MARGIN_1_MSB                                           21
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN2_MARGIN_1_LSB                                           17
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN2_MARGIN_1_MASK                                  0x003e0000
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN2_MARGIN_1_GET(x)                (((x) & 0x003e0000) >> 17)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XATTEN2_MARGIN_1_SET(x)                (((x) << 17) & 0x003e0000)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XLNA_GAIN_DB_1_MSB                                             26
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XLNA_GAIN_DB_1_LSB                                             22
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XLNA_GAIN_DB_1_MASK                                    0x07c00000
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XLNA_GAIN_DB_1_GET(x)                  (((x) & 0x07c00000) >> 22)
#define PHY_BB_EXT_ATTEN_SWITCH_CTL_B1_XLNA_GAIN_DB_1_SET(x)                  (((x) << 22) & 0x07c00000)

/* macros for bb_agc1_reg_map.BB_cca_b1 */
#define PHY_BB_CCA_B1_ADDRESS                                                                 0x0000ae1c
#define PHY_BB_CCA_B1_OFFSET                                                                  0x0000001c
#define PHY_BB_CCA_B1_CF_MAXCCAPWR_1_MSB                                                               8
#define PHY_BB_CCA_B1_CF_MAXCCAPWR_1_LSB                                                               0
#define PHY_BB_CCA_B1_CF_MAXCCAPWR_1_MASK                                                     0x000001ff
#define PHY_BB_CCA_B1_CF_MAXCCAPWR_1_GET(x)                                    (((x) & 0x000001ff) >> 0)
#define PHY_BB_CCA_B1_CF_MAXCCAPWR_1_SET(x)                                    (((x) << 0) & 0x000001ff)
#define PHY_BB_CCA_B1_MINCCAPWR_1_MSB                                                                 28
#define PHY_BB_CCA_B1_MINCCAPWR_1_LSB                                                                 20
#define PHY_BB_CCA_B1_MINCCAPWR_1_MASK                                                        0x1ff00000
#define PHY_BB_CCA_B1_MINCCAPWR_1_GET(x)                                      (((x) & 0x1ff00000) >> 20)

/* macros for bb_agc1_reg_map.BB_cca_ctrl_2_b1 */
#define PHY_BB_CCA_CTRL_2_B1_ADDRESS                                                          0x0000ae20
#define PHY_BB_CCA_CTRL_2_B1_OFFSET                                                           0x00000020
#define PHY_BB_CCA_CTRL_2_B1_MINCCAPWR_THR_1_MSB                                                       8
#define PHY_BB_CCA_CTRL_2_B1_MINCCAPWR_THR_1_LSB                                                       0
#define PHY_BB_CCA_CTRL_2_B1_MINCCAPWR_THR_1_MASK                                             0x000001ff
#define PHY_BB_CCA_CTRL_2_B1_MINCCAPWR_THR_1_GET(x)                            (((x) & 0x000001ff) >> 0)
#define PHY_BB_CCA_CTRL_2_B1_MINCCAPWR_THR_1_SET(x)                            (((x) << 0) & 0x000001ff)
#define PHY_BB_CCA_CTRL_2_B1_NF_GAIN_COMP_1_MSB                                                       17
#define PHY_BB_CCA_CTRL_2_B1_NF_GAIN_COMP_1_LSB                                                       10
#define PHY_BB_CCA_CTRL_2_B1_NF_GAIN_COMP_1_MASK                                              0x0003fc00
#define PHY_BB_CCA_CTRL_2_B1_NF_GAIN_COMP_1_GET(x)                            (((x) & 0x0003fc00) >> 10)
#define PHY_BB_CCA_CTRL_2_B1_NF_GAIN_COMP_1_SET(x)                            (((x) << 10) & 0x0003fc00)

/* macros for bb_agc1_reg_map.BB_rssi_b1 */
#define PHY_BB_RSSI_B1_ADDRESS                                                                0x0000af80
#define PHY_BB_RSSI_B1_OFFSET                                                                 0x00000180
#define PHY_BB_RSSI_B1_RSSI_1_MSB                                                                      7
#define PHY_BB_RSSI_B1_RSSI_1_LSB                                                                      0
#define PHY_BB_RSSI_B1_RSSI_1_MASK                                                            0x000000ff
#define PHY_BB_RSSI_B1_RSSI_1_GET(x)                                           (((x) & 0x000000ff) >> 0)
#define PHY_BB_RSSI_B1_RSSI_EXT_1_MSB                                                                 15
#define PHY_BB_RSSI_B1_RSSI_EXT_1_LSB                                                                  8
#define PHY_BB_RSSI_B1_RSSI_EXT_1_MASK                                                        0x0000ff00
#define PHY_BB_RSSI_B1_RSSI_EXT_1_GET(x)                                       (((x) & 0x0000ff00) >> 8)

/* macros for bb_agc1_reg_map.BB_spur_est_cck_report_b1 */
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_ADDRESS                                                 0x0000af84
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_OFFSET                                                  0x00000184
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_SD_I_1_CCK_MSB                                          7
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_SD_I_1_CCK_LSB                                          0
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_SD_I_1_CCK_MASK                                0x000000ff
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_SD_I_1_CCK_GET(x)               (((x) & 0x000000ff) >> 0)
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_SD_Q_1_CCK_MSB                                         15
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_SD_Q_1_CCK_LSB                                          8
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_SD_Q_1_CCK_MASK                                0x0000ff00
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_SD_Q_1_CCK_GET(x)               (((x) & 0x0000ff00) >> 8)
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_I_1_CCK_MSB                                            23
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_I_1_CCK_LSB                                            16
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_I_1_CCK_MASK                                   0x00ff0000
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_I_1_CCK_GET(x)                 (((x) & 0x00ff0000) >> 16)
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_Q_1_CCK_MSB                                            31
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_Q_1_CCK_LSB                                            24
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_Q_1_CCK_MASK                                   0xff000000
#define PHY_BB_SPUR_EST_CCK_REPORT_B1_SPUR_EST_Q_1_CCK_GET(x)                 (((x) & 0xff000000) >> 24)

/* macros for bb_agc1_reg_map.BB_agc_dig_dc_status_i_b1 */
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_ADDRESS                                                 0x0000af88
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_OFFSET                                                  0x00000188
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C1_RES_I_1_MSB                                            8
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C1_RES_I_1_LSB                                            0
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C1_RES_I_1_MASK                                  0x000001ff
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C1_RES_I_1_GET(x)                 (((x) & 0x000001ff) >> 0)
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C2_RES_I_1_MSB                                           17
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C2_RES_I_1_LSB                                            9
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C2_RES_I_1_MASK                                  0x0003fe00
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C2_RES_I_1_GET(x)                 (((x) & 0x0003fe00) >> 9)
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C3_RES_I_1_MSB                                           26
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C3_RES_I_1_LSB                                           18
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C3_RES_I_1_MASK                                  0x07fc0000
#define PHY_BB_AGC_DIG_DC_STATUS_I_B1_DIG_DC_C3_RES_I_1_GET(x)                (((x) & 0x07fc0000) >> 18)

/* macros for bb_agc1_reg_map.BB_agc_dig_dc_status_q_b1 */
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_ADDRESS                                                 0x0000af8c
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_OFFSET                                                  0x0000018c
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C1_RES_Q_1_MSB                                            8
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C1_RES_Q_1_LSB                                            0
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C1_RES_Q_1_MASK                                  0x000001ff
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C1_RES_Q_1_GET(x)                 (((x) & 0x000001ff) >> 0)
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C2_RES_Q_1_MSB                                           17
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C2_RES_Q_1_LSB                                            9
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C2_RES_Q_1_MASK                                  0x0003fe00
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C2_RES_Q_1_GET(x)                 (((x) & 0x0003fe00) >> 9)
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C3_RES_Q_1_MSB                                           26
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C3_RES_Q_1_LSB                                           18
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C3_RES_Q_1_MASK                                  0x07fc0000
#define PHY_BB_AGC_DIG_DC_STATUS_Q_B1_DIG_DC_C3_RES_Q_1_GET(x)                (((x) & 0x07fc0000) >> 18)

/* macros for bb_agc1_reg_map.BB_dc_cal_status_b1 */
#define PHY_BB_DC_CAL_STATUS_B1_ADDRESS                                                       0x0000af90
#define PHY_BB_DC_CAL_STATUS_B1_OFFSET                                                        0x00000190
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC1I_1_MSB                                                        4
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC1I_1_LSB                                                        0
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC1I_1_MASK                                              0x0000001f
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC1I_1_GET(x)                             (((x) & 0x0000001f) >> 0)
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC1Q_1_MSB                                                        9
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC1Q_1_LSB                                                        5
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC1Q_1_MASK                                              0x000003e0
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC1Q_1_GET(x)                             (((x) & 0x000003e0) >> 5)
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC2I_1_MSB                                                       14
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC2I_1_LSB                                                       10
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC2I_1_MASK                                              0x00007c00
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC2I_1_GET(x)                            (((x) & 0x00007c00) >> 10)
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC2Q_1_MSB                                                       19
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC2Q_1_LSB                                                       15
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC2Q_1_MASK                                              0x000f8000
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC2Q_1_GET(x)                            (((x) & 0x000f8000) >> 15)
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC3I_1_MSB                                                       24
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC3I_1_LSB                                                       20
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC3I_1_MASK                                              0x01f00000
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC3I_1_GET(x)                            (((x) & 0x01f00000) >> 20)
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC3Q_1_MSB                                                       29
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC3Q_1_LSB                                                       25
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC3Q_1_MASK                                              0x3e000000
#define PHY_BB_DC_CAL_STATUS_B1_OFFSETC3Q_1_GET(x)                            (((x) & 0x3e000000) >> 25)

/* macros for bb_agc1_reg_map.BB_rx_ocgain2 */
#define PHY_BB_RX_OCGAIN2_ADDRESS                                                             0x0000b000
#define PHY_BB_RX_OCGAIN2_OFFSET                                                              0x00000200
#define PHY_BB_RX_OCGAIN2_GAIN_ENTRY2_MSB                                                             31
#define PHY_BB_RX_OCGAIN2_GAIN_ENTRY2_LSB                                                              0
#define PHY_BB_RX_OCGAIN2_GAIN_ENTRY2_MASK                                                    0xffffffff
#define PHY_BB_RX_OCGAIN2_GAIN_ENTRY2_GET(x)                                   (((x) & 0xffffffff) >> 0)
#define PHY_BB_RX_OCGAIN2_GAIN_ENTRY2_SET(x)                                   (((x) << 0) & 0xffffffff)

#ifndef __ASSEMBLER__

typedef struct agc1_reg_map_reg_s {
  volatile char pad__0[0x4];                                           /*        0x0 - 0x4        */
  volatile unsigned int BB_gain_force_max_gains_b1;                    /*        0x4 - 0x8        */
  volatile char pad__1[0x10];                                          /*        0x8 - 0x18       */
  volatile unsigned int BB_ext_atten_switch_ctl_b1;                    /*       0x18 - 0x1c       */
  volatile unsigned int BB_cca_b1;                                     /*       0x1c - 0x20       */
  volatile unsigned int BB_cca_ctrl_2_b1;                              /*       0x20 - 0x24       */
  volatile char pad__2[0x15c];                                         /*       0x24 - 0x180      */
  volatile unsigned int BB_rssi_b1;                                    /*      0x180 - 0x184      */
  volatile unsigned int BB_spur_est_cck_report_b1;                     /*      0x184 - 0x188      */
  volatile unsigned int BB_agc_dig_dc_status_i_b1;                     /*      0x188 - 0x18c      */
  volatile unsigned int BB_agc_dig_dc_status_q_b1;                     /*      0x18c - 0x190      */
  volatile unsigned int BB_dc_cal_status_b1;                           /*      0x190 - 0x194      */
  volatile char pad__3[0x6c];                                          /*      0x194 - 0x200      */
  volatile unsigned int BB_rx_ocgain2[128];                            /*      0x200 - 0x400      */
} agc1_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_sm1_reg_map.BB_switch_table_chn_b1 */
#define PHY_BB_SWITCH_TABLE_CHN_B1_ADDRESS                                                    0x00000084
#define PHY_BB_SWITCH_TABLE_CHN_B1_OFFSET                                                     0x00000084
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_IDLE_1_MSB                                             1
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_IDLE_1_LSB                                             0
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_IDLE_1_MASK                                   0x00000003
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_IDLE_1_GET(x)                  (((x) & 0x00000003) >> 0)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_IDLE_1_SET(x)                  (((x) << 0) & 0x00000003)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_T_1_MSB                                                3
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_T_1_LSB                                                2
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_T_1_MASK                                      0x0000000c
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_T_1_GET(x)                     (((x) & 0x0000000c) >> 2)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_T_1_SET(x)                     (((x) << 2) & 0x0000000c)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_R_1_MSB                                                5
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_R_1_LSB                                                4
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_R_1_MASK                                      0x00000030
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_R_1_GET(x)                     (((x) & 0x00000030) >> 4)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_R_1_SET(x)                     (((x) << 4) & 0x00000030)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_RX1_1_MSB                                              7
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_RX1_1_LSB                                              6
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_RX1_1_MASK                                    0x000000c0
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_RX1_1_GET(x)                   (((x) & 0x000000c0) >> 6)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_RX1_1_SET(x)                   (((x) << 6) & 0x000000c0)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_RX12_1_MSB                                             9
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_RX12_1_LSB                                             8
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_RX12_1_MASK                                   0x00000300
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_RX12_1_GET(x)                  (((x) & 0x00000300) >> 8)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_RX12_1_SET(x)                  (((x) << 8) & 0x00000300)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_B_1_MSB                                               11
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_B_1_LSB                                               10
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_B_1_MASK                                      0x00000c00
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_B_1_GET(x)                    (((x) & 0x00000c00) >> 10)
#define PHY_BB_SWITCH_TABLE_CHN_B1_SWITCH_TABLE_B_1_SET(x)                    (((x) << 10) & 0x00000c00)

/* macros for bb_sm1_reg_map.BB_fcal_2_b1 */
#define PHY_BB_FCAL_2_B1_ADDRESS                                                              0x000000d0
#define PHY_BB_FCAL_2_B1_OFFSET                                                               0x000000d0
#define PHY_BB_FCAL_2_B1_FLC_SW_CAP_VAL_1_MSB                                                          7
#define PHY_BB_FCAL_2_B1_FLC_SW_CAP_VAL_1_LSB                                                          3
#define PHY_BB_FCAL_2_B1_FLC_SW_CAP_VAL_1_MASK                                                0x000000f8
#define PHY_BB_FCAL_2_B1_FLC_SW_CAP_VAL_1_GET(x)                               (((x) & 0x000000f8) >> 3)
#define PHY_BB_FCAL_2_B1_FLC_SW_CAP_VAL_1_SET(x)                               (((x) << 3) & 0x000000f8)
#define PHY_BB_FCAL_2_B1_FLC_CAP_VAL_STATUS_1_MSB                                                     24
#define PHY_BB_FCAL_2_B1_FLC_CAP_VAL_STATUS_1_LSB                                                     20
#define PHY_BB_FCAL_2_B1_FLC_CAP_VAL_STATUS_1_MASK                                            0x01f00000
#define PHY_BB_FCAL_2_B1_FLC_CAP_VAL_STATUS_1_GET(x)                          (((x) & 0x01f00000) >> 20)

/* macros for bb_sm1_reg_map.BB_dft_tone_ctrl_b1 */
#define PHY_BB_DFT_TONE_CTRL_B1_ADDRESS                                                       0x000000d4
#define PHY_BB_DFT_TONE_CTRL_B1_OFFSET                                                        0x000000d4
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_EN_1_MSB                                                      0
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_EN_1_LSB                                                      0
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_EN_1_MASK                                            0x00000001
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_EN_1_GET(x)                           (((x) & 0x00000001) >> 0)
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_EN_1_SET(x)                           (((x) << 0) & 0x00000001)
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_AMP_SEL_1_MSB                                                 3
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_AMP_SEL_1_LSB                                                 2
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_AMP_SEL_1_MASK                                       0x0000000c
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_AMP_SEL_1_GET(x)                      (((x) & 0x0000000c) >> 2)
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_AMP_SEL_1_SET(x)                      (((x) << 2) & 0x0000000c)
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_FREQ_ANG_1_MSB                                               12
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_FREQ_ANG_1_LSB                                                4
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_FREQ_ANG_1_MASK                                      0x00001ff0
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_FREQ_ANG_1_GET(x)                     (((x) & 0x00001ff0) >> 4)
#define PHY_BB_DFT_TONE_CTRL_B1_DFT_TONE_FREQ_ANG_1_SET(x)                     (((x) << 4) & 0x00001ff0)

/* macros for bb_sm1_reg_map.BB_cl_map_0_b1 */
#define PHY_BB_CL_MAP_0_B1_ADDRESS                                                            0x000000dc
#define PHY_BB_CL_MAP_0_B1_OFFSET                                                             0x000000dc
#define PHY_BB_CL_MAP_0_B1_CL_MAP_0_MSB                                                               31
#define PHY_BB_CL_MAP_0_B1_CL_MAP_0_LSB                                                                0
#define PHY_BB_CL_MAP_0_B1_CL_MAP_0_MASK                                                      0xffffffff
#define PHY_BB_CL_MAP_0_B1_CL_MAP_0_GET(x)                                     (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_0_B1_CL_MAP_0_SET(x)                                     (((x) << 0) & 0xffffffff)

/* macros for bb_sm1_reg_map.BB_cl_map_1_b1 */
#define PHY_BB_CL_MAP_1_B1_ADDRESS                                                            0x000000e0
#define PHY_BB_CL_MAP_1_B1_OFFSET                                                             0x000000e0
#define PHY_BB_CL_MAP_1_B1_CL_MAP_1_MSB                                                               31
#define PHY_BB_CL_MAP_1_B1_CL_MAP_1_LSB                                                                0
#define PHY_BB_CL_MAP_1_B1_CL_MAP_1_MASK                                                      0xffffffff
#define PHY_BB_CL_MAP_1_B1_CL_MAP_1_GET(x)                                     (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_1_B1_CL_MAP_1_SET(x)                                     (((x) << 0) & 0xffffffff)

/* macros for bb_sm1_reg_map.BB_cl_map_2_b1 */
#define PHY_BB_CL_MAP_2_B1_ADDRESS                                                            0x000000e4
#define PHY_BB_CL_MAP_2_B1_OFFSET                                                             0x000000e4
#define PHY_BB_CL_MAP_2_B1_CL_MAP_2_MSB                                                               31
#define PHY_BB_CL_MAP_2_B1_CL_MAP_2_LSB                                                                0
#define PHY_BB_CL_MAP_2_B1_CL_MAP_2_MASK                                                      0xffffffff
#define PHY_BB_CL_MAP_2_B1_CL_MAP_2_GET(x)                                     (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_2_B1_CL_MAP_2_SET(x)                                     (((x) << 0) & 0xffffffff)

/* macros for bb_sm1_reg_map.BB_cl_map_3_b1 */
#define PHY_BB_CL_MAP_3_B1_ADDRESS                                                            0x000000e8
#define PHY_BB_CL_MAP_3_B1_OFFSET                                                             0x000000e8
#define PHY_BB_CL_MAP_3_B1_CL_MAP_3_MSB                                                               31
#define PHY_BB_CL_MAP_3_B1_CL_MAP_3_LSB                                                                0
#define PHY_BB_CL_MAP_3_B1_CL_MAP_3_MASK                                                      0xffffffff
#define PHY_BB_CL_MAP_3_B1_CL_MAP_3_GET(x)                                     (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_3_B1_CL_MAP_3_SET(x)                                     (((x) << 0) & 0xffffffff)

/* macros for bb_sm1_reg_map.BB_cl_map_pal_0_b1 */
#define PHY_BB_CL_MAP_PAL_0_B1_ADDRESS                                                        0x000000ec
#define PHY_BB_CL_MAP_PAL_0_B1_OFFSET                                                         0x000000ec
#define PHY_BB_CL_MAP_PAL_0_B1_CL_MAP_0_MSB                                                           31
#define PHY_BB_CL_MAP_PAL_0_B1_CL_MAP_0_LSB                                                            0
#define PHY_BB_CL_MAP_PAL_0_B1_CL_MAP_0_MASK                                                  0xffffffff
#define PHY_BB_CL_MAP_PAL_0_B1_CL_MAP_0_GET(x)                                 (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_PAL_0_B1_CL_MAP_0_SET(x)                                 (((x) << 0) & 0xffffffff)

/* macros for bb_sm1_reg_map.BB_cl_map_pal_1_b1 */
#define PHY_BB_CL_MAP_PAL_1_B1_ADDRESS                                                        0x000000f0
#define PHY_BB_CL_MAP_PAL_1_B1_OFFSET                                                         0x000000f0
#define PHY_BB_CL_MAP_PAL_1_B1_CL_MAP_1_MSB                                                           31
#define PHY_BB_CL_MAP_PAL_1_B1_CL_MAP_1_LSB                                                            0
#define PHY_BB_CL_MAP_PAL_1_B1_CL_MAP_1_MASK                                                  0xffffffff
#define PHY_BB_CL_MAP_PAL_1_B1_CL_MAP_1_GET(x)                                 (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_PAL_1_B1_CL_MAP_1_SET(x)                                 (((x) << 0) & 0xffffffff)

/* macros for bb_sm1_reg_map.BB_cl_map_pal_2_b1 */
#define PHY_BB_CL_MAP_PAL_2_B1_ADDRESS                                                        0x000000f4
#define PHY_BB_CL_MAP_PAL_2_B1_OFFSET                                                         0x000000f4
#define PHY_BB_CL_MAP_PAL_2_B1_CL_MAP_2_MSB                                                           31
#define PHY_BB_CL_MAP_PAL_2_B1_CL_MAP_2_LSB                                                            0
#define PHY_BB_CL_MAP_PAL_2_B1_CL_MAP_2_MASK                                                  0xffffffff
#define PHY_BB_CL_MAP_PAL_2_B1_CL_MAP_2_GET(x)                                 (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_PAL_2_B1_CL_MAP_2_SET(x)                                 (((x) << 0) & 0xffffffff)

/* macros for bb_sm1_reg_map.BB_cl_map_pal_3_b1 */
#define PHY_BB_CL_MAP_PAL_3_B1_ADDRESS                                                        0x000000f8
#define PHY_BB_CL_MAP_PAL_3_B1_OFFSET                                                         0x000000f8
#define PHY_BB_CL_MAP_PAL_3_B1_CL_MAP_3_MSB                                                           31
#define PHY_BB_CL_MAP_PAL_3_B1_CL_MAP_3_LSB                                                            0
#define PHY_BB_CL_MAP_PAL_3_B1_CL_MAP_3_MASK                                                  0xffffffff
#define PHY_BB_CL_MAP_PAL_3_B1_CL_MAP_3_GET(x)                                 (((x) & 0xffffffff) >> 0)
#define PHY_BB_CL_MAP_PAL_3_B1_CL_MAP_3_SET(x)                                 (((x) << 0) & 0xffffffff)

/* macros for bb_sm1_reg_map.BB_cl_tab_b1 */
#define PHY_BB_CL_TAB_B1_ADDRESS                                                              0x00000100
#define PHY_BB_CL_TAB_B1_OFFSET                                                               0x00000100
#define PHY_BB_CL_TAB_B1_CL_GAIN_MOD_MSB                                                               4
#define PHY_BB_CL_TAB_B1_CL_GAIN_MOD_LSB                                                               0
#define PHY_BB_CL_TAB_B1_CL_GAIN_MOD_MASK                                                     0x0000001f
#define PHY_BB_CL_TAB_B1_CL_GAIN_MOD_GET(x)                                    (((x) & 0x0000001f) >> 0)
#define PHY_BB_CL_TAB_B1_CL_GAIN_MOD_SET(x)                                    (((x) << 0) & 0x0000001f)
#define PHY_BB_CL_TAB_B1_CARR_LK_DC_ADD_Q_MSB                                                         15
#define PHY_BB_CL_TAB_B1_CARR_LK_DC_ADD_Q_LSB                                                          5
#define PHY_BB_CL_TAB_B1_CARR_LK_DC_ADD_Q_MASK                                                0x0000ffe0
#define PHY_BB_CL_TAB_B1_CARR_LK_DC_ADD_Q_GET(x)                               (((x) & 0x0000ffe0) >> 5)
#define PHY_BB_CL_TAB_B1_CARR_LK_DC_ADD_Q_SET(x)                               (((x) << 5) & 0x0000ffe0)
#define PHY_BB_CL_TAB_B1_CARR_LK_DC_ADD_I_MSB                                                         26
#define PHY_BB_CL_TAB_B1_CARR_LK_DC_ADD_I_LSB                                                         16
#define PHY_BB_CL_TAB_B1_CARR_LK_DC_ADD_I_MASK                                                0x07ff0000
#define PHY_BB_CL_TAB_B1_CARR_LK_DC_ADD_I_GET(x)                              (((x) & 0x07ff0000) >> 16)
#define PHY_BB_CL_TAB_B1_CARR_LK_DC_ADD_I_SET(x)                              (((x) << 16) & 0x07ff0000)
#define PHY_BB_CL_TAB_B1_BB_GAIN_MSB                                                                  30
#define PHY_BB_CL_TAB_B1_BB_GAIN_LSB                                                                  27
#define PHY_BB_CL_TAB_B1_BB_GAIN_MASK                                                         0x78000000
#define PHY_BB_CL_TAB_B1_BB_GAIN_GET(x)                                       (((x) & 0x78000000) >> 27)
#define PHY_BB_CL_TAB_B1_BB_GAIN_SET(x)                                       (((x) << 27) & 0x78000000)

/* macros for bb_sm1_reg_map.BB_chan_info_gain_b1 */
#define PHY_BB_CHAN_INFO_GAIN_B1_ADDRESS                                                      0x00000180
#define PHY_BB_CHAN_INFO_GAIN_B1_OFFSET                                                       0x00000180
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_RSSI_1_MSB                                                  7
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_RSSI_1_LSB                                                  0
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_RSSI_1_MASK                                        0x000000ff
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_RSSI_1_GET(x)                       (((x) & 0x000000ff) >> 0)
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_RF_GAIN_1_MSB                                              15
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_RF_GAIN_1_LSB                                               8
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_RF_GAIN_1_MASK                                     0x0000ff00
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_RF_GAIN_1_GET(x)                    (((x) & 0x0000ff00) >> 8)
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_MB_GAIN_1_MSB                                              22
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_MB_GAIN_1_LSB                                              16
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_MB_GAIN_1_MASK                                     0x007f0000
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_MB_GAIN_1_GET(x)                   (((x) & 0x007f0000) >> 16)
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_XATTEN1_SW_1_MSB                                           23
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_XATTEN1_SW_1_LSB                                           23
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_XATTEN1_SW_1_MASK                                  0x00800000
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_XATTEN1_SW_1_GET(x)                (((x) & 0x00800000) >> 23)
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_XATTEN2_SW_1_MSB                                           24
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_XATTEN2_SW_1_LSB                                           24
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_XATTEN2_SW_1_MASK                                  0x01000000
#define PHY_BB_CHAN_INFO_GAIN_B1_CHAN_INFO_XATTEN2_SW_1_GET(x)                (((x) & 0x01000000) >> 24)

/* macros for bb_sm1_reg_map.BB_tpc_4_b1 */
#define PHY_BB_TPC_4_B1_ADDRESS                                                               0x00000204
#define PHY_BB_TPC_4_B1_OFFSET                                                                0x00000204
#define PHY_BB_TPC_4_B1_PD_AVG_VALID_1_MSB                                                             0
#define PHY_BB_TPC_4_B1_PD_AVG_VALID_1_LSB                                                             0
#define PHY_BB_TPC_4_B1_PD_AVG_VALID_1_MASK                                                   0x00000001
#define PHY_BB_TPC_4_B1_PD_AVG_VALID_1_GET(x)                                  (((x) & 0x00000001) >> 0)
#define PHY_BB_TPC_4_B1_PD_AVG_OUT_1_MSB                                                               8
#define PHY_BB_TPC_4_B1_PD_AVG_OUT_1_LSB                                                               1
#define PHY_BB_TPC_4_B1_PD_AVG_OUT_1_MASK                                                     0x000001fe
#define PHY_BB_TPC_4_B1_PD_AVG_OUT_1_GET(x)                                    (((x) & 0x000001fe) >> 1)
#define PHY_BB_TPC_4_B1_DAC_GAIN_1_MSB                                                                13
#define PHY_BB_TPC_4_B1_DAC_GAIN_1_LSB                                                                 9
#define PHY_BB_TPC_4_B1_DAC_GAIN_1_MASK                                                       0x00003e00
#define PHY_BB_TPC_4_B1_DAC_GAIN_1_GET(x)                                      (((x) & 0x00003e00) >> 9)
#define PHY_BB_TPC_4_B1_TX_GAIN_SETTING_1_MSB                                                         19
#define PHY_BB_TPC_4_B1_TX_GAIN_SETTING_1_LSB                                                         14
#define PHY_BB_TPC_4_B1_TX_GAIN_SETTING_1_MASK                                                0x000fc000
#define PHY_BB_TPC_4_B1_TX_GAIN_SETTING_1_GET(x)                              (((x) & 0x000fc000) >> 14)
#define PHY_BB_TPC_4_B1_RATE_SENT_1_MSB                                                               24
#define PHY_BB_TPC_4_B1_RATE_SENT_1_LSB                                                               20
#define PHY_BB_TPC_4_B1_RATE_SENT_1_MASK                                                      0x01f00000
#define PHY_BB_TPC_4_B1_RATE_SENT_1_GET(x)                                    (((x) & 0x01f00000) >> 20)

/* macros for bb_sm1_reg_map.BB_tpc_5_b1 */
#define PHY_BB_TPC_5_B1_ADDRESS                                                               0x00000208
#define PHY_BB_TPC_5_B1_OFFSET                                                                0x00000208
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_1_1_MSB                                                       9
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_1_1_LSB                                                       4
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_1_1_MASK                                             0x000003f0
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_1_1_GET(x)                            (((x) & 0x000003f0) >> 4)
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_1_1_SET(x)                            (((x) << 4) & 0x000003f0)
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_2_1_MSB                                                      15
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_2_1_LSB                                                      10
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_2_1_MASK                                             0x0000fc00
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_2_1_GET(x)                           (((x) & 0x0000fc00) >> 10)
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_2_1_SET(x)                           (((x) << 10) & 0x0000fc00)
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_3_1_MSB                                                      21
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_3_1_LSB                                                      16
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_3_1_MASK                                             0x003f0000
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_3_1_GET(x)                           (((x) & 0x003f0000) >> 16)
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_3_1_SET(x)                           (((x) << 16) & 0x003f0000)
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_4_1_MSB                                                      27
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_4_1_LSB                                                      22
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_4_1_MASK                                             0x0fc00000
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_4_1_GET(x)                           (((x) & 0x0fc00000) >> 22)
#define PHY_BB_TPC_5_B1_PD_GAIN_BOUNDARY_4_1_SET(x)                           (((x) << 22) & 0x0fc00000)

/* macros for bb_sm1_reg_map.BB_tpc_6_b1 */
#define PHY_BB_TPC_6_B1_ADDRESS                                                               0x0000020c
#define PHY_BB_TPC_6_B1_OFFSET                                                                0x0000020c
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_1_1_MSB                                                         5
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_1_1_LSB                                                         0
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_1_1_MASK                                               0x0000003f
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_1_1_GET(x)                              (((x) & 0x0000003f) >> 0)
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_1_1_SET(x)                              (((x) << 0) & 0x0000003f)
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_2_1_MSB                                                        11
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_2_1_LSB                                                         6
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_2_1_MASK                                               0x00000fc0
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_2_1_GET(x)                              (((x) & 0x00000fc0) >> 6)
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_2_1_SET(x)                              (((x) << 6) & 0x00000fc0)
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_3_1_MSB                                                        17
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_3_1_LSB                                                        12
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_3_1_MASK                                               0x0003f000
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_3_1_GET(x)                             (((x) & 0x0003f000) >> 12)
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_3_1_SET(x)                             (((x) << 12) & 0x0003f000)
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_4_1_MSB                                                        23
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_4_1_LSB                                                        18
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_4_1_MASK                                               0x00fc0000
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_4_1_GET(x)                             (((x) & 0x00fc0000) >> 18)
#define PHY_BB_TPC_6_B1_PD_DAC_SETTING_4_1_SET(x)                             (((x) << 18) & 0x00fc0000)
#define PHY_BB_TPC_6_B1_ERROR_EST_MODE_MSB                                                            25
#define PHY_BB_TPC_6_B1_ERROR_EST_MODE_LSB                                                            24
#define PHY_BB_TPC_6_B1_ERROR_EST_MODE_MASK                                                   0x03000000
#define PHY_BB_TPC_6_B1_ERROR_EST_MODE_GET(x)                                 (((x) & 0x03000000) >> 24)
#define PHY_BB_TPC_6_B1_ERROR_EST_MODE_SET(x)                                 (((x) << 24) & 0x03000000)
#define PHY_BB_TPC_6_B1_ERROR_EST_FILTER_COEFF_MSB                                                    28
#define PHY_BB_TPC_6_B1_ERROR_EST_FILTER_COEFF_LSB                                                    26
#define PHY_BB_TPC_6_B1_ERROR_EST_FILTER_COEFF_MASK                                           0x1c000000
#define PHY_BB_TPC_6_B1_ERROR_EST_FILTER_COEFF_GET(x)                         (((x) & 0x1c000000) >> 26)
#define PHY_BB_TPC_6_B1_ERROR_EST_FILTER_COEFF_SET(x)                         (((x) << 26) & 0x1c000000)

/* macros for bb_sm1_reg_map.BB_tpc_11_b1 */
#define PHY_BB_TPC_11_B1_ADDRESS                                                              0x00000220
#define PHY_BB_TPC_11_B1_OFFSET                                                               0x00000220
#define PHY_BB_TPC_11_B1_OLPC_GAIN_DELTA_1_MSB                                                        23
#define PHY_BB_TPC_11_B1_OLPC_GAIN_DELTA_1_LSB                                                        16
#define PHY_BB_TPC_11_B1_OLPC_GAIN_DELTA_1_MASK                                               0x00ff0000
#define PHY_BB_TPC_11_B1_OLPC_GAIN_DELTA_1_GET(x)                             (((x) & 0x00ff0000) >> 16)
#define PHY_BB_TPC_11_B1_OLPC_GAIN_DELTA_1_SET(x)                             (((x) << 16) & 0x00ff0000)
#define PHY_BB_TPC_11_B1_OLPC_GAIN_DELTA_1_LSB_EXT_MSB                                                25
#define PHY_BB_TPC_11_B1_OLPC_GAIN_DELTA_1_LSB_EXT_LSB                                                24
#define PHY_BB_TPC_11_B1_OLPC_GAIN_DELTA_1_LSB_EXT_MASK                                       0x03000000
#define PHY_BB_TPC_11_B1_OLPC_GAIN_DELTA_1_LSB_EXT_GET(x)                     (((x) & 0x03000000) >> 24)
#define PHY_BB_TPC_11_B1_OLPC_GAIN_DELTA_1_LSB_EXT_SET(x)                     (((x) << 24) & 0x03000000)

/* macros for bb_sm1_reg_map.BB_tpc_19_b1 */
#define PHY_BB_TPC_19_B1_ADDRESS                                                              0x00000240
#define PHY_BB_TPC_19_B1_OFFSET                                                               0x00000240
#define PHY_BB_TPC_19_B1_ALPHA_THERM_1_MSB                                                             7
#define PHY_BB_TPC_19_B1_ALPHA_THERM_1_LSB                                                             0
#define PHY_BB_TPC_19_B1_ALPHA_THERM_1_MASK                                                   0x000000ff
#define PHY_BB_TPC_19_B1_ALPHA_THERM_1_GET(x)                                  (((x) & 0x000000ff) >> 0)
#define PHY_BB_TPC_19_B1_ALPHA_THERM_1_SET(x)                                  (((x) << 0) & 0x000000ff)
#define PHY_BB_TPC_19_B1_ALPHA_THERM_PAL_ON_1_MSB                                                     15
#define PHY_BB_TPC_19_B1_ALPHA_THERM_PAL_ON_1_LSB                                                      8
#define PHY_BB_TPC_19_B1_ALPHA_THERM_PAL_ON_1_MASK                                            0x0000ff00
#define PHY_BB_TPC_19_B1_ALPHA_THERM_PAL_ON_1_GET(x)                           (((x) & 0x0000ff00) >> 8)
#define PHY_BB_TPC_19_B1_ALPHA_THERM_PAL_ON_1_SET(x)                           (((x) << 8) & 0x0000ff00)
#define PHY_BB_TPC_19_B1_ALPHA_VOLT_1_MSB                                                             22
#define PHY_BB_TPC_19_B1_ALPHA_VOLT_1_LSB                                                             16
#define PHY_BB_TPC_19_B1_ALPHA_VOLT_1_MASK                                                    0x007f0000
#define PHY_BB_TPC_19_B1_ALPHA_VOLT_1_GET(x)                                  (((x) & 0x007f0000) >> 16)
#define PHY_BB_TPC_19_B1_ALPHA_VOLT_1_SET(x)                                  (((x) << 16) & 0x007f0000)
#define PHY_BB_TPC_19_B1_ALPHA_VOLT_PAL_ON_1_MSB                                                      29
#define PHY_BB_TPC_19_B1_ALPHA_VOLT_PAL_ON_1_LSB                                                      23
#define PHY_BB_TPC_19_B1_ALPHA_VOLT_PAL_ON_1_MASK                                             0x3f800000
#define PHY_BB_TPC_19_B1_ALPHA_VOLT_PAL_ON_1_GET(x)                           (((x) & 0x3f800000) >> 23)
#define PHY_BB_TPC_19_B1_ALPHA_VOLT_PAL_ON_1_SET(x)                           (((x) << 23) & 0x3f800000)

/* macros for bb_sm1_reg_map.BB_pdadc_tab_b1 */
#define PHY_BB_PDADC_TAB_B1_ADDRESS                                                           0x00000280
#define PHY_BB_PDADC_TAB_B1_OFFSET                                                            0x00000280
#define PHY_BB_PDADC_TAB_B1_TAB_ENTRY_MSB                                                             31
#define PHY_BB_PDADC_TAB_B1_TAB_ENTRY_LSB                                                              0
#define PHY_BB_PDADC_TAB_B1_TAB_ENTRY_MASK                                                    0xffffffff
#define PHY_BB_PDADC_TAB_B1_TAB_ENTRY_SET(x)                                   (((x) << 0) & 0xffffffff)

/* macros for bb_sm1_reg_map.BB_rtt_table_sw_intf_b1 */
#define PHY_BB_RTT_TABLE_SW_INTF_B1_ADDRESS                                                   0x00000384
#define PHY_BB_RTT_TABLE_SW_INTF_B1_OFFSET                                                    0x00000384
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_ACCESS_1_MSB                                          0
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_ACCESS_1_LSB                                          0
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_ACCESS_1_MASK                                0x00000001
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_ACCESS_1_GET(x)               (((x) & 0x00000001) >> 0)
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_ACCESS_1_SET(x)               (((x) << 0) & 0x00000001)
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_WRITE_1_MSB                                           1
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_WRITE_1_LSB                                           1
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_WRITE_1_MASK                                 0x00000002
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_WRITE_1_GET(x)                (((x) & 0x00000002) >> 1)
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_WRITE_1_SET(x)                (((x) << 1) & 0x00000002)
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_ADDR_1_MSB                                            4
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_ADDR_1_LSB                                            2
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_ADDR_1_MASK                                  0x0000001c
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_ADDR_1_GET(x)                 (((x) & 0x0000001c) >> 2)
#define PHY_BB_RTT_TABLE_SW_INTF_B1_SW_RTT_TABLE_ADDR_1_SET(x)                 (((x) << 2) & 0x0000001c)

/* macros for bb_sm1_reg_map.BB_rtt_table_sw_intf_1_b1 */
#define PHY_BB_RTT_TABLE_SW_INTF_1_B1_ADDRESS                                                 0x00000388
#define PHY_BB_RTT_TABLE_SW_INTF_1_B1_OFFSET                                                  0x00000388
#define PHY_BB_RTT_TABLE_SW_INTF_1_B1_SW_RTT_TABLE_DATA_1_MSB                                         31
#define PHY_BB_RTT_TABLE_SW_INTF_1_B1_SW_RTT_TABLE_DATA_1_LSB                                          4
#define PHY_BB_RTT_TABLE_SW_INTF_1_B1_SW_RTT_TABLE_DATA_1_MASK                                0xfffffff0
#define PHY_BB_RTT_TABLE_SW_INTF_1_B1_SW_RTT_TABLE_DATA_1_GET(x)               (((x) & 0xfffffff0) >> 4)
#define PHY_BB_RTT_TABLE_SW_INTF_1_B1_SW_RTT_TABLE_DATA_1_SET(x)               (((x) << 4) & 0xfffffff0)

/* macros for bb_sm1_reg_map.BB_txiq_corr_coeff_01_b1 */
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_ADDRESS                                                  0x00000450
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_OFFSET                                                   0x00000450
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_IQC_COEFF_TABLE_0_1_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_IQC_COEFF_TABLE_0_1_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_IQC_COEFF_TABLE_0_1_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_IQC_COEFF_TABLE_0_1_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_IQC_COEFF_TABLE_0_1_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_IQC_COEFF_TABLE_1_1_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_IQC_COEFF_TABLE_1_1_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_IQC_COEFF_TABLE_1_1_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_IQC_COEFF_TABLE_1_1_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_01_B1_IQC_COEFF_TABLE_1_1_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm1_reg_map.BB_txiq_corr_coeff_23_b1 */
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_ADDRESS                                                  0x00000454
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_OFFSET                                                   0x00000454
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_IQC_COEFF_TABLE_2_1_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_IQC_COEFF_TABLE_2_1_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_IQC_COEFF_TABLE_2_1_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_IQC_COEFF_TABLE_2_1_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_IQC_COEFF_TABLE_2_1_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_IQC_COEFF_TABLE_3_1_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_IQC_COEFF_TABLE_3_1_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_IQC_COEFF_TABLE_3_1_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_IQC_COEFF_TABLE_3_1_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_23_B1_IQC_COEFF_TABLE_3_1_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm1_reg_map.BB_txiq_corr_coeff_45_b1 */
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_ADDRESS                                                  0x00000458
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_OFFSET                                                   0x00000458
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_IQC_COEFF_TABLE_4_1_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_IQC_COEFF_TABLE_4_1_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_IQC_COEFF_TABLE_4_1_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_IQC_COEFF_TABLE_4_1_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_IQC_COEFF_TABLE_4_1_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_IQC_COEFF_TABLE_5_1_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_IQC_COEFF_TABLE_5_1_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_IQC_COEFF_TABLE_5_1_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_IQC_COEFF_TABLE_5_1_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_45_B1_IQC_COEFF_TABLE_5_1_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm1_reg_map.BB_txiq_corr_coeff_67_b1 */
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_ADDRESS                                                  0x0000045c
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_OFFSET                                                   0x0000045c
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_IQC_COEFF_TABLE_6_1_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_IQC_COEFF_TABLE_6_1_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_IQC_COEFF_TABLE_6_1_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_IQC_COEFF_TABLE_6_1_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_IQC_COEFF_TABLE_6_1_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_IQC_COEFF_TABLE_7_1_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_IQC_COEFF_TABLE_7_1_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_IQC_COEFF_TABLE_7_1_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_IQC_COEFF_TABLE_7_1_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_67_B1_IQC_COEFF_TABLE_7_1_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm1_reg_map.BB_txiq_corr_coeff_89_b1 */
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_ADDRESS                                                  0x00000460
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_OFFSET                                                   0x00000460
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_IQC_COEFF_TABLE_8_1_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_IQC_COEFF_TABLE_8_1_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_IQC_COEFF_TABLE_8_1_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_IQC_COEFF_TABLE_8_1_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_IQC_COEFF_TABLE_8_1_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_IQC_COEFF_TABLE_9_1_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_IQC_COEFF_TABLE_9_1_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_IQC_COEFF_TABLE_9_1_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_IQC_COEFF_TABLE_9_1_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_89_B1_IQC_COEFF_TABLE_9_1_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm1_reg_map.BB_txiq_corr_coeff_ab_b1 */
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_ADDRESS                                                  0x00000464
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_OFFSET                                                   0x00000464
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_IQC_COEFF_TABLE_A_1_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_IQC_COEFF_TABLE_A_1_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_IQC_COEFF_TABLE_A_1_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_IQC_COEFF_TABLE_A_1_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_IQC_COEFF_TABLE_A_1_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_IQC_COEFF_TABLE_B_1_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_IQC_COEFF_TABLE_B_1_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_IQC_COEFF_TABLE_B_1_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_IQC_COEFF_TABLE_B_1_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_AB_B1_IQC_COEFF_TABLE_B_1_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm1_reg_map.BB_txiq_corr_coeff_cd_b1 */
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_ADDRESS                                                  0x00000468
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_OFFSET                                                   0x00000468
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_IQC_COEFF_TABLE_C_1_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_IQC_COEFF_TABLE_C_1_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_IQC_COEFF_TABLE_C_1_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_IQC_COEFF_TABLE_C_1_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_IQC_COEFF_TABLE_C_1_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_IQC_COEFF_TABLE_D_1_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_IQC_COEFF_TABLE_D_1_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_IQC_COEFF_TABLE_D_1_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_IQC_COEFF_TABLE_D_1_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_CD_B1_IQC_COEFF_TABLE_D_1_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm1_reg_map.BB_txiq_corr_coeff_ef_b1 */
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_ADDRESS                                                  0x0000046c
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_OFFSET                                                   0x0000046c
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_IQC_COEFF_TABLE_E_1_MSB                                          13
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_IQC_COEFF_TABLE_E_1_LSB                                           0
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_IQC_COEFF_TABLE_E_1_MASK                                 0x00003fff
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_IQC_COEFF_TABLE_E_1_GET(x)                (((x) & 0x00003fff) >> 0)
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_IQC_COEFF_TABLE_E_1_SET(x)                (((x) << 0) & 0x00003fff)
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_IQC_COEFF_TABLE_F_1_MSB                                          27
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_IQC_COEFF_TABLE_F_1_LSB                                          14
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_IQC_COEFF_TABLE_F_1_MASK                                 0x0fffc000
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_IQC_COEFF_TABLE_F_1_GET(x)               (((x) & 0x0fffc000) >> 14)
#define PHY_BB_TXIQ_CORR_COEFF_EF_B1_IQC_COEFF_TABLE_F_1_SET(x)               (((x) << 14) & 0x0fffc000)

/* macros for bb_sm1_reg_map.BB_txiqcal_status_b1 */
#define PHY_BB_TXIQCAL_STATUS_B1_ADDRESS                                                      0x0000048c
#define PHY_BB_TXIQCAL_STATUS_B1_OFFSET                                                       0x0000048c
#define PHY_BB_TXIQCAL_STATUS_B1_TXIQCAL_FAILED_1_MSB                                                  0
#define PHY_BB_TXIQCAL_STATUS_B1_TXIQCAL_FAILED_1_LSB                                                  0
#define PHY_BB_TXIQCAL_STATUS_B1_TXIQCAL_FAILED_1_MASK                                        0x00000001
#define PHY_BB_TXIQCAL_STATUS_B1_TXIQCAL_FAILED_1_GET(x)                       (((x) & 0x00000001) >> 0)
#define PHY_BB_TXIQCAL_STATUS_B1_CALIBRATED_GAINS_1_MSB                                                5
#define PHY_BB_TXIQCAL_STATUS_B1_CALIBRATED_GAINS_1_LSB                                                1
#define PHY_BB_TXIQCAL_STATUS_B1_CALIBRATED_GAINS_1_MASK                                      0x0000003e
#define PHY_BB_TXIQCAL_STATUS_B1_CALIBRATED_GAINS_1_GET(x)                     (((x) & 0x0000003e) >> 1)
#define PHY_BB_TXIQCAL_STATUS_B1_TONE_GAIN_USED_1_MSB                                                 11
#define PHY_BB_TXIQCAL_STATUS_B1_TONE_GAIN_USED_1_LSB                                                  6
#define PHY_BB_TXIQCAL_STATUS_B1_TONE_GAIN_USED_1_MASK                                        0x00000fc0
#define PHY_BB_TXIQCAL_STATUS_B1_TONE_GAIN_USED_1_GET(x)                       (((x) & 0x00000fc0) >> 6)
#define PHY_BB_TXIQCAL_STATUS_B1_RX_GAIN_USED_1_MSB                                                   17
#define PHY_BB_TXIQCAL_STATUS_B1_RX_GAIN_USED_1_LSB                                                   12
#define PHY_BB_TXIQCAL_STATUS_B1_RX_GAIN_USED_1_MASK                                          0x0003f000
#define PHY_BB_TXIQCAL_STATUS_B1_RX_GAIN_USED_1_GET(x)                        (((x) & 0x0003f000) >> 12)
#define PHY_BB_TXIQCAL_STATUS_B1_LAST_MEAS_ADDR_1_MSB                                                 23
#define PHY_BB_TXIQCAL_STATUS_B1_LAST_MEAS_ADDR_1_LSB                                                 18
#define PHY_BB_TXIQCAL_STATUS_B1_LAST_MEAS_ADDR_1_MASK                                        0x00fc0000
#define PHY_BB_TXIQCAL_STATUS_B1_LAST_MEAS_ADDR_1_GET(x)                      (((x) & 0x00fc0000) >> 18)

/* macros for bb_sm1_reg_map.BB_tables_intf_addr_b1 */
#define PHY_BB_TABLES_INTF_ADDR_B1_ADDRESS                                                    0x000005f0
#define PHY_BB_TABLES_INTF_ADDR_B1_OFFSET                                                     0x000005f0
#define PHY_BB_TABLES_INTF_ADDR_B1_TABLES_ADDR_1_MSB                                                  17
#define PHY_BB_TABLES_INTF_ADDR_B1_TABLES_ADDR_1_LSB                                                   2
#define PHY_BB_TABLES_INTF_ADDR_B1_TABLES_ADDR_1_MASK                                         0x0003fffc
#define PHY_BB_TABLES_INTF_ADDR_B1_TABLES_ADDR_1_GET(x)                        (((x) & 0x0003fffc) >> 2)
#define PHY_BB_TABLES_INTF_ADDR_B1_TABLES_ADDR_1_SET(x)                        (((x) << 2) & 0x0003fffc)
#define PHY_BB_TABLES_INTF_ADDR_B1_ADDR_AUTO_INCR_1_MSB                                               31
#define PHY_BB_TABLES_INTF_ADDR_B1_ADDR_AUTO_INCR_1_LSB                                               31
#define PHY_BB_TABLES_INTF_ADDR_B1_ADDR_AUTO_INCR_1_MASK                                      0x80000000
#define PHY_BB_TABLES_INTF_ADDR_B1_ADDR_AUTO_INCR_1_GET(x)                    (((x) & 0x80000000) >> 31)
#define PHY_BB_TABLES_INTF_ADDR_B1_ADDR_AUTO_INCR_1_SET(x)                    (((x) << 31) & 0x80000000)

/* macros for bb_sm1_reg_map.BB_tables_intf_data_b1 */
#define PHY_BB_TABLES_INTF_DATA_B1_ADDRESS                                                    0x000005f4
#define PHY_BB_TABLES_INTF_DATA_B1_OFFSET                                                     0x000005f4
#define PHY_BB_TABLES_INTF_DATA_B1_TABLES_DATA_1_MSB                                                  31
#define PHY_BB_TABLES_INTF_DATA_B1_TABLES_DATA_1_LSB                                                   0
#define PHY_BB_TABLES_INTF_DATA_B1_TABLES_DATA_1_MASK                                         0xffffffff
#define PHY_BB_TABLES_INTF_DATA_B1_TABLES_DATA_1_GET(x)                        (((x) & 0xffffffff) >> 0)
#define PHY_BB_TABLES_INTF_DATA_B1_TABLES_DATA_1_SET(x)                        (((x) << 0) & 0xffffffff)

#ifndef __ASSEMBLER__

typedef struct sm1_reg_map_reg_s {
  volatile char pad__0[0x84];                                          /*        0x0 - 0x84       */
  volatile unsigned int BB_switch_table_chn_b1;                        /*       0x84 - 0x88       */
  volatile char pad__1[0x48];                                          /*       0x88 - 0xd0       */
  volatile unsigned int BB_fcal_2_b1;                                  /*       0xd0 - 0xd4       */
  volatile unsigned int BB_dft_tone_ctrl_b1;                           /*       0xd4 - 0xd8       */
  volatile char pad__2[0x4];                                           /*       0xd8 - 0xdc       */
  volatile unsigned int BB_cl_map_0_b1;                                /*       0xdc - 0xe0       */
  volatile unsigned int BB_cl_map_1_b1;                                /*       0xe0 - 0xe4       */
  volatile unsigned int BB_cl_map_2_b1;                                /*       0xe4 - 0xe8       */
  volatile unsigned int BB_cl_map_3_b1;                                /*       0xe8 - 0xec       */
  volatile unsigned int BB_cl_map_pal_0_b1;                            /*       0xec - 0xf0       */
  volatile unsigned int BB_cl_map_pal_1_b1;                            /*       0xf0 - 0xf4       */
  volatile unsigned int BB_cl_map_pal_2_b1;                            /*       0xf4 - 0xf8       */
  volatile unsigned int BB_cl_map_pal_3_b1;                            /*       0xf8 - 0xfc       */
  volatile char pad__3[0x4];                                           /*       0xfc - 0x100      */
  volatile unsigned int BB_cl_tab_b1[16];                              /*      0x100 - 0x140      */
  volatile char pad__4[0x40];                                          /*      0x140 - 0x180      */
  volatile unsigned int BB_chan_info_gain_b1;                          /*      0x180 - 0x184      */
  volatile char pad__5[0x80];                                          /*      0x184 - 0x204      */
  volatile unsigned int BB_tpc_4_b1;                                   /*      0x204 - 0x208      */
  volatile unsigned int BB_tpc_5_b1;                                   /*      0x208 - 0x20c      */
  volatile unsigned int BB_tpc_6_b1;                                   /*      0x20c - 0x210      */
  volatile char pad__6[0x10];                                          /*      0x210 - 0x220      */
  volatile unsigned int BB_tpc_11_b1;                                  /*      0x220 - 0x224      */
  volatile char pad__7[0x1c];                                          /*      0x224 - 0x240      */
  volatile unsigned int BB_tpc_19_b1;                                  /*      0x240 - 0x244      */
  volatile char pad__8[0x3c];                                          /*      0x244 - 0x280      */
  volatile unsigned int BB_pdadc_tab_b1[32];                           /*      0x280 - 0x300      */
  volatile char pad__9[0x84];                                          /*      0x300 - 0x384      */
  volatile unsigned int BB_rtt_table_sw_intf_b1;                       /*      0x384 - 0x388      */
  volatile unsigned int BB_rtt_table_sw_intf_1_b1;                     /*      0x388 - 0x38c      */
  volatile char pad__10[0xc4];                                         /*      0x38c - 0x450      */
  volatile unsigned int BB_txiq_corr_coeff_01_b1;                      /*      0x450 - 0x454      */
  volatile unsigned int BB_txiq_corr_coeff_23_b1;                      /*      0x454 - 0x458      */
  volatile unsigned int BB_txiq_corr_coeff_45_b1;                      /*      0x458 - 0x45c      */
  volatile unsigned int BB_txiq_corr_coeff_67_b1;                      /*      0x45c - 0x460      */
  volatile unsigned int BB_txiq_corr_coeff_89_b1;                      /*      0x460 - 0x464      */
  volatile unsigned int BB_txiq_corr_coeff_ab_b1;                      /*      0x464 - 0x468      */
  volatile unsigned int BB_txiq_corr_coeff_cd_b1;                      /*      0x468 - 0x46c      */
  volatile unsigned int BB_txiq_corr_coeff_ef_b1;                      /*      0x46c - 0x470      */
  volatile char pad__11[0x1c];                                         /*      0x470 - 0x48c      */
  volatile unsigned int BB_txiqcal_status_b1;                          /*      0x48c - 0x490      */
  volatile char pad__12[0x160];                                        /*      0x490 - 0x5f0      */
  volatile unsigned int BB_tables_intf_addr_b1;                        /*      0x5f0 - 0x5f4      */
  volatile unsigned int BB_tables_intf_data_b1;                        /*      0x5f4 - 0x5f8      */
} sm1_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_chn3_reg_map.BB_dummy1 */
#define PHY_BB_DUMMY1_ADDRESS                                                                 0x0000c800
#define PHY_BB_DUMMY1_OFFSET                                                                  0x00000000
#define PHY_BB_DUMMY1_DUMMY_MSB                                                                        0
#define PHY_BB_DUMMY1_DUMMY_LSB                                                                        0
#define PHY_BB_DUMMY1_DUMMY_MASK                                                              0x00000001
#define PHY_BB_DUMMY1_DUMMY_GET(x)                                             (((x) & 0x00000001) >> 0)

#ifndef __ASSEMBLER__

typedef struct chn3_reg_map_reg_s {
  volatile unsigned int BB_dummy1[256];                                /*        0x0 - 0x400      */
} chn3_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_agc3_reg_map.BB_dummy */
#define PHY_BB_DUMMY_ADDRESS                                                                  0x0000ce00
#define PHY_BB_DUMMY_OFFSET                                                                   0x00000000
#define PHY_BB_DUMMY_DUMMY_MSB                                                                         0
#define PHY_BB_DUMMY_DUMMY_LSB                                                                         0
#define PHY_BB_DUMMY_DUMMY_MASK                                                               0x00000001
#define PHY_BB_DUMMY_DUMMY_GET(x)                                              (((x) & 0x00000001) >> 0)

/* macros for bb_agc3_reg_map.BB_rssi_b3 */
#define PHY_BB_RSSI_B3_ADDRESS                                                                0x0000cf80
#define PHY_BB_RSSI_B3_OFFSET                                                                 0x00000180
#define PHY_BB_RSSI_B3_RSSI_3_MSB                                                                      7
#define PHY_BB_RSSI_B3_RSSI_3_LSB                                                                      0
#define PHY_BB_RSSI_B3_RSSI_3_MASK                                                            0x000000ff
#define PHY_BB_RSSI_B3_RSSI_3_GET(x)                                           (((x) & 0x000000ff) >> 0)
#define PHY_BB_RSSI_B3_RSSI_EXT_3_MSB                                                                 15
#define PHY_BB_RSSI_B3_RSSI_EXT_3_LSB                                                                  8
#define PHY_BB_RSSI_B3_RSSI_EXT_3_MASK                                                        0x0000ff00
#define PHY_BB_RSSI_B3_RSSI_EXT_3_GET(x)                                       (((x) & 0x0000ff00) >> 8)

#ifndef __ASSEMBLER__

typedef struct agc3_reg_map_reg_s {
  volatile unsigned int BB_dummy;                                      /*        0x0 - 0x4        */
  volatile char pad__0[0x17c];                                         /*        0x4 - 0x180      */
  volatile unsigned int BB_rssi_b3;                                    /*      0x180 - 0x184      */
} agc3_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_sm3_reg_map.BB_dummy2 */
#define PHY_BB_DUMMY2_ADDRESS                                                                 0x0000d200
#define PHY_BB_DUMMY2_OFFSET                                                                  0x00000000
#define PHY_BB_DUMMY2_DUMMY_MSB                                                                        0
#define PHY_BB_DUMMY2_DUMMY_LSB                                                                        0
#define PHY_BB_DUMMY2_DUMMY_MASK                                                              0x00000001
#define PHY_BB_DUMMY2_DUMMY_GET(x)                                             (((x) & 0x00000001) >> 0)

#ifndef __ASSEMBLER__

typedef struct sm3_reg_map_reg_s {
  volatile unsigned int BB_dummy2[384];                                /*        0x0 - 0x600      */
} sm3_reg_map_reg_t;

#endif /* __ASSEMBLER__ */


/* macros for bb_mit_reg_map.BB_mit_rf_cntl */
#define PHY_BB_MIT_RF_CNTL_ADDRESS                                                            0x0000d800
#define PHY_BB_MIT_RF_CNTL_OFFSET                                                             0x00000000
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_SYNTH_ON_MSB                                                      0
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_SYNTH_ON_LSB                                                      0
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_SYNTH_ON_MASK                                            0x00000001
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_SYNTH_ON_GET(x)                           (((x) & 0x00000001) >> 0)
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_SYNTH_ON_SET(x)                           (((x) << 0) & 0x00000001)
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_SYNTH_ON_EN_MSB                                                   1
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_SYNTH_ON_EN_LSB                                                   1
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_SYNTH_ON_EN_MASK                                         0x00000002
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_SYNTH_ON_EN_GET(x)                        (((x) & 0x00000002) >> 1)
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_SYNTH_ON_EN_SET(x)                        (((x) << 1) & 0x00000002)
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_ACTIVE_ON_MSB                                                     2
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_ACTIVE_ON_LSB                                                     2
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_ACTIVE_ON_MASK                                           0x00000004
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_ACTIVE_ON_GET(x)                          (((x) & 0x00000004) >> 2)
#define PHY_BB_MIT_RF_CNTL_MIT_FORCE_ACTIVE_ON_SET(x)                          (((x) << 2) & 0x00000004)

/* macros for bb_mit_reg_map.BB_mit_cca_cntl */
#define PHY_BB_MIT_CCA_CNTL_ADDRESS                                                           0x0000d804
#define PHY_BB_MIT_CCA_CNTL_OFFSET                                                            0x00000004
#define PHY_BB_MIT_CCA_CNTL_MIT_CCA_MODE_SEL_MSB                                                       2
#define PHY_BB_MIT_CCA_CNTL_MIT_CCA_MODE_SEL_LSB                                                       0
#define PHY_BB_MIT_CCA_CNTL_MIT_CCA_MODE_SEL_MASK                                             0x00000007
#define PHY_BB_MIT_CCA_CNTL_MIT_CCA_MODE_SEL_GET(x)                            (((x) & 0x00000007) >> 0)
#define PHY_BB_MIT_CCA_CNTL_MIT_CCA_MODE_SEL_SET(x)                            (((x) << 0) & 0x00000007)
#define PHY_BB_MIT_CCA_CNTL_MIT_CCA_COUNT_MSB                                                         20
#define PHY_BB_MIT_CCA_CNTL_MIT_CCA_COUNT_LSB                                                          3
#define PHY_BB_MIT_CCA_CNTL_MIT_CCA_COUNT_MASK                                                0x001ffff8
#define PHY_BB_MIT_CCA_CNTL_MIT_CCA_COUNT_GET(x)                               (((x) & 0x001ffff8) >> 3)
#define PHY_BB_MIT_CCA_CNTL_MIT_CCA_COUNT_SET(x)                               (((x) << 3) & 0x001ffff8)

/* macros for bb_mit_reg_map.BB_mit_rssi_cntl_1 */
#define PHY_BB_MIT_RSSI_CNTL_1_ADDRESS                                                        0x0000d808
#define PHY_BB_MIT_RSSI_CNTL_1_OFFSET                                                         0x00000008
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RSSI_TH_MSB                                                         5
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RSSI_TH_LSB                                                         0
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RSSI_TH_MASK                                               0x0000003f
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RSSI_TH_GET(x)                              (((x) & 0x0000003f) >> 0)
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RSSI_TH_SET(x)                              (((x) << 0) & 0x0000003f)
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_TH_H_MSB                                                 11
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_TH_H_LSB                                                  6
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_TH_H_MASK                                        0x00000fc0
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_TH_H_GET(x)                       (((x) & 0x00000fc0) >> 6)
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_TH_H_SET(x)                       (((x) << 6) & 0x00000fc0)
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_TH_L_MSB                                                 17
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_TH_L_LSB                                                 12
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_TH_L_MASK                                        0x0003f000
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_TH_L_GET(x)                      (((x) & 0x0003f000) >> 12)
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_TH_L_SET(x)                      (((x) << 12) & 0x0003f000)
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_OFFSET_MSB                                               23
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_OFFSET_LSB                                               18
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_OFFSET_MASK                                      0x00fc0000
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_OFFSET_GET(x)                    (((x) & 0x00fc0000) >> 18)
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_RX_RF_ATT_OFFSET_SET(x)                    (((x) << 18) & 0x00fc0000)
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_AGC_LIMIT_MSB                                                      29
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_AGC_LIMIT_LSB                                                      24
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_AGC_LIMIT_MASK                                             0x3f000000
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_AGC_LIMIT_GET(x)                           (((x) & 0x3f000000) >> 24)
#define PHY_BB_MIT_RSSI_CNTL_1_MIT_AGC_LIMIT_SET(x)                           (((x) << 24) & 0x3f000000)

/* macros for bb_mit_reg_map.BB_mit_rssi_cntl_2 */
#define PHY_BB_MIT_RSSI_CNTL_2_ADDRESS                                                        0x0000d80c
#define PHY_BB_MIT_RSSI_CNTL_2_OFFSET                                                         0x0000000c
#define PHY_BB_MIT_RSSI_CNTL_2_MIT_AGC_SEL_MSB                                                         0
#define PHY_BB_MIT_RSSI_CNTL_2_MIT_AGC_SEL_LSB                                                         0
#define PHY_BB_MIT_RSSI_CNTL_2_MIT_AGC_SEL_MASK                                               0x00000001
#define PHY_BB_MIT_RSSI_CNTL_2_MIT_AGC_SEL_GET(x)                              (((x) & 0x00000001) >> 0)
#define PHY_BB_MIT_RSSI_CNTL_2_MIT_AGC_SEL_SET(x)                              (((x) << 0) & 0x00000001)
#define PHY_BB_MIT_RSSI_CNTL_2_MIT_RSSI_BASE_MSB                                                      11
#define PHY_BB_MIT_RSSI_CNTL_2_MIT_RSSI_BASE_LSB                                                       1
#define PHY_BB_MIT_RSSI_CNTL_2_MIT_RSSI_BASE_MASK                                             0x00000ffe
#define PHY_BB_MIT_RSSI_CNTL_2_MIT_RSSI_BASE_GET(x)                            (((x) & 0x00000ffe) >> 1)
#define PHY_BB_MIT_RSSI_CNTL_2_MIT_RSSI_BASE_SET(x)                            (((x) << 1) & 0x00000ffe)

/* macros for bb_mit_reg_map.BB_mit_tx_cntl */
#define PHY_BB_MIT_TX_CNTL_ADDRESS                                                            0x0000d810
#define PHY_BB_MIT_TX_CNTL_OFFSET                                                             0x00000010
#define PHY_BB_MIT_TX_CNTL_MIT_TX_STA_CNT_MSB                                                          7
#define PHY_BB_MIT_TX_CNTL_MIT_TX_STA_CNT_LSB                                                          0
#define PHY_BB_MIT_TX_CNTL_MIT_TX_STA_CNT_MASK                                                0x000000ff
#define PHY_BB_MIT_TX_CNTL_MIT_TX_STA_CNT_GET(x)                               (((x) & 0x000000ff) >> 0)
#define PHY_BB_MIT_TX_CNTL_MIT_TX_STA_CNT_SET(x)                               (((x) << 0) & 0x000000ff)
#define PHY_BB_MIT_TX_CNTL_MIT_TX_END_DLY_CNT_MSB                                                     21
#define PHY_BB_MIT_TX_CNTL_MIT_TX_END_DLY_CNT_LSB                                                      8
#define PHY_BB_MIT_TX_CNTL_MIT_TX_END_DLY_CNT_MASK                                            0x003fff00
#define PHY_BB_MIT_TX_CNTL_MIT_TX_END_DLY_CNT_GET(x)                           (((x) & 0x003fff00) >> 8)
#define PHY_BB_MIT_TX_CNTL_MIT_TX_END_DLY_CNT_SET(x)                           (((x) << 8) & 0x003fff00)
#define PHY_BB_MIT_TX_CNTL_MIT_TX_THROUGH_ENA_MSB                                                     22
#define PHY_BB_MIT_TX_CNTL_MIT_TX_THROUGH_ENA_LSB                                                     22
#define PHY_BB_MIT_TX_CNTL_MIT_TX_THROUGH_ENA_MASK                                            0x00400000
#define PHY_BB_MIT_TX_CNTL_MIT_TX_THROUGH_ENA_GET(x)                          (((x) & 0x00400000) >> 22)
#define PHY_BB_MIT_TX_CNTL_MIT_TX_THROUGH_ENA_SET(x)                          (((x) << 22) & 0x00400000)
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_CHAIN_MASK_CCK_MSB                                               25
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_CHAIN_MASK_CCK_LSB                                               23
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_CHAIN_MASK_CCK_MASK                                      0x03800000
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_CHAIN_MASK_CCK_GET(x)                    (((x) & 0x03800000) >> 23)
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_CHAIN_MASK_CCK_SET(x)                    (((x) << 23) & 0x03800000)
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_PAPRD_TRAIN_MASK_CCK_MSB                                         28
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_PAPRD_TRAIN_MASK_CCK_LSB                                         26
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_PAPRD_TRAIN_MASK_CCK_MASK                                0x1c000000
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_PAPRD_TRAIN_MASK_CCK_GET(x)              (((x) & 0x1c000000) >> 26)
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_PAPRD_TRAIN_MASK_CCK_SET(x)              (((x) << 26) & 0x1c000000)
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_CHAN_MODE_CCK_MSB                                                30
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_CHAN_MODE_CCK_LSB                                                29
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_CHAN_MODE_CCK_MASK                                       0x60000000
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_CHAN_MODE_CCK_GET(x)                     (((x) & 0x60000000) >> 29)
#define PHY_BB_MIT_TX_CNTL_MIT_TXHDR_CHAN_MODE_CCK_SET(x)                     (((x) << 29) & 0x60000000)

/* macros for bb_mit_reg_map.BB_mit_rx_cntl */
#define PHY_BB_MIT_RX_CNTL_ADDRESS                                                            0x0000d814
#define PHY_BB_MIT_RX_CNTL_OFFSET                                                             0x00000014
#define PHY_BB_MIT_RX_CNTL_MIT_RX_END_DLY_CNT_MSB                                                      7
#define PHY_BB_MIT_RX_CNTL_MIT_RX_END_DLY_CNT_LSB                                                      0
#define PHY_BB_MIT_RX_CNTL_MIT_RX_END_DLY_CNT_MASK                                            0x000000ff
#define PHY_BB_MIT_RX_CNTL_MIT_RX_END_DLY_CNT_GET(x)                           (((x) & 0x000000ff) >> 0)
#define PHY_BB_MIT_RX_CNTL_MIT_RX_END_DLY_CNT_SET(x)                           (((x) << 0) & 0x000000ff)
#define PHY_BB_MIT_RX_CNTL_MIT_RX_THROUGH_ENA_MSB                                                      8
#define PHY_BB_MIT_RX_CNTL_MIT_RX_THROUGH_ENA_LSB                                                      8
#define PHY_BB_MIT_RX_CNTL_MIT_RX_THROUGH_ENA_MASK                                            0x00000100
#define PHY_BB_MIT_RX_CNTL_MIT_RX_THROUGH_ENA_GET(x)                           (((x) & 0x00000100) >> 8)
#define PHY_BB_MIT_RX_CNTL_MIT_RX_THROUGH_ENA_SET(x)                           (((x) << 8) & 0x00000100)

/* macros for bb_mit_reg_map.BB_mit_out_cntl */
#define PHY_BB_MIT_OUT_CNTL_ADDRESS                                                           0x0000d818
#define PHY_BB_MIT_OUT_CNTL_OFFSET                                                            0x00000018
#define PHY_BB_MIT_OUT_CNTL_MIT_CLK_TUNE_MOD_MSB                                                       1
#define PHY_BB_MIT_OUT_CNTL_MIT_CLK_TUNE_MOD_LSB                                                       0
#define PHY_BB_MIT_OUT_CNTL_MIT_CLK_TUNE_MOD_MASK                                             0x00000003
#define PHY_BB_MIT_OUT_CNTL_MIT_CLK_TUNE_MOD_GET(x)                            (((x) & 0x00000003) >> 0)
#define PHY_BB_MIT_OUT_CNTL_MIT_CLK_TUNE_MOD_SET(x)                            (((x) << 0) & 0x00000003)
#define PHY_BB_MIT_OUT_CNTL_MIT_NO_DATA_TO_ATH_MSB                                                     2
#define PHY_BB_MIT_OUT_CNTL_MIT_NO_DATA_TO_ATH_LSB                                                     2
#define PHY_BB_MIT_OUT_CNTL_MIT_NO_DATA_TO_ATH_MASK                                           0x00000004
#define PHY_BB_MIT_OUT_CNTL_MIT_NO_DATA_TO_ATH_GET(x)                          (((x) & 0x00000004) >> 2)
#define PHY_BB_MIT_OUT_CNTL_MIT_NO_DATA_TO_ATH_SET(x)                          (((x) << 2) & 0x00000004)

/* macros for bb_mit_reg_map.BB_mit_spare_cntl */
#define PHY_BB_MIT_SPARE_CNTL_ADDRESS                                                         0x0000d81c
#define PHY_BB_MIT_SPARE_CNTL_OFFSET                                                          0x0000001c
#define PHY_BB_MIT_SPARE_CNTL_MIT_SPARE_IN_MSB                                                        30
#define PHY_BB_MIT_SPARE_CNTL_MIT_SPARE_IN_LSB                                                         0
#define PHY_BB_MIT_SPARE_CNTL_MIT_SPARE_IN_MASK                                               0x7fffffff
#define PHY_BB_MIT_SPARE_CNTL_MIT_SPARE_IN_GET(x)                              (((x) & 0x7fffffff) >> 0)
#define PHY_BB_MIT_SPARE_CNTL_MIT_SPARE_IN_SET(x)                              (((x) << 0) & 0x7fffffff)
#define PHY_BB_MIT_SPARE_CNTL_MIT_SPARE_OUT_MSB                                                       31
#define PHY_BB_MIT_SPARE_CNTL_MIT_SPARE_OUT_LSB                                                       31
#define PHY_BB_MIT_SPARE_CNTL_MIT_SPARE_OUT_MASK                                              0x80000000
#define PHY_BB_MIT_SPARE_CNTL_MIT_SPARE_OUT_GET(x)                            (((x) & 0x80000000) >> 31)

#ifndef __ASSEMBLER__

typedef struct mit_local_reg_map_reg_s {
  volatile unsigned int BB_mit_rf_cntl;                                /*        0x0 - 0x4        */
  volatile unsigned int BB_mit_cca_cntl;                               /*        0x4 - 0x8        */
  volatile unsigned int BB_mit_rssi_cntl_1;                            /*        0x8 - 0xc        */
  volatile unsigned int BB_mit_rssi_cntl_2;                            /*        0xc - 0x10       */
  volatile unsigned int BB_mit_tx_cntl;                                /*       0x10 - 0x14       */
  volatile unsigned int BB_mit_rx_cntl;                                /*       0x14 - 0x18       */
  volatile unsigned int BB_mit_out_cntl;                               /*       0x18 - 0x1c       */
  volatile unsigned int BB_mit_spare_cntl;                             /*       0x1c - 0x20       */
} mit_local_reg_map_reg_t;

#endif /* __ASSEMBLER__ */

#define RFILE_INST_BB_CHN_REG_MAP__NUM                                                             1
#define RFILE_INST_BB_MRC_REG_MAP__NUM                                                             1
#define RFILE_INST_BB_BBB_REG_MAP__NUM                                                             1
#define RFILE_INST_BB_AGC_REG_MAP__NUM                                                             1
#define RFILE_INST_BB_SM_REG_MAP__NUM                                                              1
#define RFILE_INST_BB_CHN1_REG_MAP__NUM                                                            1
#define RFILE_INST_BB_AGC1_REG_MAP__NUM                                                            1
#define RFILE_INST_BB_SM1_REG_MAP__NUM                                                             1
#define RFILE_INST_BB_CHN3_REG_MAP__NUM                                                            1
#define RFILE_INST_BB_AGC3_REG_MAP__NUM                                                            1
#define RFILE_INST_BB_SM3_REG_MAP__NUM                                                             1
#define RFILE_INST_BB_MIT_REG_MAP__NUM                                                             1


#ifndef __ASSEMBLER__

typedef struct bb_reg_map_reg_s {
  volatile char pad__0[0x9800];                                        /*        0x0 - 0x9800     */
  struct chn_reg_map_reg_s bb_chn_reg_map;                             /*     0x9800 - 0x9bf8     */
  volatile char pad__1[0x8];                                           /*     0x9bf8 - 0x9c00     */
  struct mrc_reg_map_reg_s bb_mrc_reg_map;                             /*     0x9c00 - 0x9c24     */
  volatile char pad__2[0xdc];                                          /*     0x9c24 - 0x9d00     */
  struct bbb_reg_map_reg_s bb_bbb_reg_map;                             /*     0x9d00 - 0x9d1c     */
  volatile char pad__3[0xe4];                                          /*     0x9d1c - 0x9e00     */
  struct agc_reg_map_reg_s bb_agc_reg_map;                             /*     0x9e00 - 0xa200     */
  struct sm_reg_map_reg_s bb_sm_reg_map;                               /*     0xa200 - 0xa7f8     */
  volatile char pad__4[0x8];                                           /*     0xa7f8 - 0xa800     */
  struct chn1_reg_map_reg_s bb_chn1_reg_map;                           /*     0xa800 - 0xabc8     */
  volatile char pad__5[0x238];                                         /*     0xabc8 - 0xae00     */
  struct agc1_reg_map_reg_s bb_agc1_reg_map;                           /*     0xae00 - 0xb1fc     */
  volatile char pad__6[0x4];                                           /*     0xb1fc - 0xb200     */
  struct sm1_reg_map_reg_s bb_sm1_reg_map;                             /*     0xb200 - 0xb774     */
  volatile char pad__7[0x108c];                                        /*     0xb774 - 0xc800     */
  struct chn3_reg_map_reg_s bb_chn3_reg_map;                           /*     0xc800 - 0xcc00     */
  volatile char pad__8[0x200];                                         /*     0xcc00 - 0xce00     */
  struct agc3_reg_map_reg_s bb_agc3_reg_map;                           /*     0xce00 - 0xcf84     */
  volatile char pad__9[0x27c];                                         /*     0xcf84 - 0xd200     */
  struct sm3_reg_map_reg_s bb_sm3_reg_map;                             /*     0xd200 - 0xd800     */
  struct mit_local_reg_map_reg_s bb_mit_reg_map;                       /*     0xd800 - 0xd820     */
} bb_reg_map_reg_t;

#endif /* __ASSEMBLER__ */

#endif /* _BB_LC_REG_REG_H_ */
