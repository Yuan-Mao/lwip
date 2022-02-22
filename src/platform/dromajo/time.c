#include <sys/time.h>
#include "arch/cc.h"

/* Unit: ms */
u32_t sys_now(void)
{
/*    unsigned long tmp, cnt;
    asm volatile ("li %0, 0x30bff8\n" : "=r"(tmp)); // mtime
    asm volatile ("ld %0, 0(%1)\n" : "=r"(cnt) : "r"(tmp));
    return (u32_t) (cnt / 2500); // 11: ~~ 20MHZ, 1 mtime == 8 mcycle*/
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (u32_t)tv.tv_sec * 1000 + (u32_t)tv.tv_usec / 1000;
}
