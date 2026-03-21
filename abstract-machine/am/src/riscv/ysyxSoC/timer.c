#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

#define RTC_TIME 0x0200BFF8

void __am_timer_init() {
}

// 读取 CLINT 里的mtime，地址：low：0x0200bff8, high：0x0200bffc
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t hi1, lo, hi2;
  int cnt = 0;
  int retry = 1000;
do {
  hi1 = inl(RTC_TIME + 4);
  lo  = inl(RTC_TIME + 0);
  hi2 = inl(RTC_TIME + 4);
  
} while (hi1 != hi2 && cnt < retry);

uint64_t ticks = ((uint64_t)hi1 << 32) | lo;
uptime->us = ticks * 1000000ull / 500000000ull;
//printf("uptime: %d us\n", uptime->us);
}


void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
