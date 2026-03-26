#include <am.h>
#include <klib-macros.h>
#include <stdio.h>
#include <stdint.h>
#include <riscv/riscv.h>

extern char _heap_start;
int main(const char *args);

extern char _ssbl_lma_start, _ssbl_vma_start, _ssbl_vma_end;
extern char _app_lma_start, _app_vma_start, _app_vma_end;
extern char _bss_start, _bss_end;
#define UART_BASE 0x10000000
#define UART_LSR     (*((volatile uint8_t *)(UART_BASE + 0x05)))  // 线路状态寄存器（只读）

extern void uart_init(uint32_t baud);
extern int uart_tx_empty();
extern void uart_flush();
extern void test_bitrev();
extern void spi_init();
extern void flash_test();
extern void _psram_entry(void);

#define SERIALS_ADDR 0x10000000

Area heap = RANGE(&_heap_start, 0xa2000000);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

/* Runs from PSRAM (copied by FSBL). Copies APP to PSRAM and jumps. */
__attribute__((section(".ssbl.entry"), noreturn))
void _ssbl_main() {
  uint8_t *src8 = (uint8_t *)&_app_lma_start;
  uint8_t *dst8 = (uint8_t *)&_app_vma_start;
  uintptr_t len = (uintptr_t)(&_app_vma_end - &_app_vma_start);
  if ((((uintptr_t)src8 | (uintptr_t)dst8) & 0x3u) == 0) {
    while (len >= sizeof(uint32_t)) {
      uint32_t w;
      asm volatile("lw %0, 0(%1)" : "=r"(w) : "r"(src8));
      asm volatile("sw %0, 0(%1)" :: "r"(w), "r"(dst8) : "memory");
      src8 += sizeof(uint32_t);
      dst8 += sizeof(uint32_t);
      len -= sizeof(uint32_t);
    }
  }

  while (len > 0) {
    *dst8++ = *src8++;
    len--;
  }
  for (uint8_t *p = (uint8_t *)&_bss_start; p < (uint8_t *)&_bss_end; p++) {
    *p = 0;
  }

  asm volatile("fence.i" ::: "memory");
  _psram_entry();
  while (1) {}
}

__attribute__((section(".fsbl.text"), noreturn))
void _fsbl_main() {
  // FSBL: 将 SSBL 程序从 flash 复制到 PSRAM，并跳转到 SSBL
  uint8_t *src8 = (uint8_t *)&_ssbl_lma_start;
  uint8_t *dst8 = (uint8_t *)&_ssbl_vma_start;
  uintptr_t len = (uintptr_t)(&_ssbl_vma_end - &_ssbl_vma_start);
  if ((((uintptr_t)src8 | (uintptr_t)dst8) & 0x3u) == 0) {
    while (len >= sizeof(uint32_t)) {
      uint32_t w;
      asm volatile("lw %0, 0(%1)" : "=r"(w) : "r"(src8));
      asm volatile("sw %0, 0(%1)" :: "r"(w), "r"(dst8) : "memory");
      src8 += sizeof(uint32_t);
      dst8 += sizeof(uint32_t);
      len -= sizeof(uint32_t);
    }
  }

  while(len > 0) {
    *dst8++ = *src8++;
    len--;
  }

  for (uint8_t *p = (uint8_t *)&_bss_start; p < (uint8_t *)&_bss_end; p++) {
    *p = 0;
  }

  asm volatile("fence.i" ::: "memory");

  _ssbl_main();
  while (1) {}
}


void putch(char ch) {
  // 发送前判断发送队列是否为空
  //while (!uart_tx_empty());
  while(!(UART_LSR & (1 << 5)));
  outb(SERIALS_ADDR, (uint8_t)ch);
  //for(volatile int i = 0; i < 2; i++);
  //uart_flush();
}

void halt(int code) {
  // Keep AM/NEMU convention: pass trap code in a0 (x10) before ebreak.
  asm volatile("mv a0, %0; ebreak" :: "r"(code) : "a0");
  while (1);\
}

// 读出mvendorid和marchid,从CSR寄存器中读取
void student_id_read() {
  uint32_t mvendorid, marchid;
  asm volatile("csrr %0, mvendorid" : "=r"(mvendorid));
  asm volatile("csrr %0, marchid"   : "=r"(marchid));
  printf("mvendorid: 0x%08x\n", mvendorid);
  printf("marchid:   0x%08x\n", marchid);
}

void _trm_init() {
  // 初始化uart
  uint32_t baud = 115200;
  uart_init(baud);
  // 测试bitrev
  spi_init();
  int ret = main(mainargs);
  halt(ret);
}

/* Runs from PSRAM after _boot_main copies image. */
__attribute__((section(".text.app_entry"), noreturn))
void _psram_entry(void) {
  _trm_init();
  while (1) {}
}
