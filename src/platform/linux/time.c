#include <time.h>
#include "arch/cc.h"

/* Unit: ms */
u32_t sys_now(void)
{
    unsigned ms;
    time_t s;
    struct timespec spec;
    clock_gettime(CLOCK_MONOTONIC, &spec);
    s  = spec.tv_sec;
    ms = spec.tv_nsec / 1.0e6;
    return ms + s * 1000;
}
