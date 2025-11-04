#include <am.h>
#include <klib-macros.h>
#include <stdio.h>
#include <riscv/riscv.h>

extern char _heap_start;
int main(const char *args);

#define SERIALS_ADDR 0xa00003f8

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {
  outb(SERIALS_ADDR, (uint8_t)ch);
}

void halt(int code) {
  //printf("---------In halt---------\n");
  asm volatile("ebreak");
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
