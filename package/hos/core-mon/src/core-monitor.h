#ifndef CORE_MONITOR_H
#define CORE_MONITOR_H

enum {
    CORE_TIMER_REAVEL_APP = 0,
    CORE_TIMER_REBOOT_DELAY,
    CORE_TIMER_CHECK_MEM,
    CORE_TIMER_CHECK_WAM,
    CORE_TIMER_CHECK_WEB_LOGIN,
    CORE_TIMER_CHECK_ONLINE_USR_ALIVE,

    CORE_TIMER_MAX
};

enum {
    CORE_DATA_APP_EXIT = 0,

    CORE_DATA_MAX
};

#endif // CORE_MONITOR_H