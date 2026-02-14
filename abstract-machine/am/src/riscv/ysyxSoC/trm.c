#include <am.h>
#include <klib-macros.h>
#include <stdio.h>
#include <riscv/riscv.h>

extern char _heap_start;
int main(const char *args);

extern char _sidata, _sdata, _edata;
extern char _bss_start, _bss_end;
#define UART_BASE 0x10000000
#define UART_LSR     (*((volatile uint8_t *)(UART_BASE + 0x05)))  // 线路状态寄存器（只读）

extern void uart_init(uint32_t baud);
extern int uart_tx_empty();
extern void uart_flush();
extern void test_bitrev();
extern void spi_init();
extern void flash_test();

#define SERIALS_ADDR 0x10000000

// flash 用来存放 镜像中的指令信息，地址为 0x30000000 到 0x3fffffff
extern char _flash_start;
#define FLASH_SIZE (16 * 1024 * 1024)
#define FLASH_END  ((uintptr_t)&_flash_start + FLASH_SIZE)

Area heap = RANGE(&_heap_start, 0x0f001000);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS
// sram用来存放栈区，地址为0x0f00_0000~0x0f00_1fff

static void init_data_bss() {
  // 将.data 段从 flash 拷贝到 sram
  char *src = &_sidata;
  char *dst = &_sdata;
  while (dst < &_edata) *dst++ = *src++;

  // 将.bss 段清零
  for (char *p = &_bss_start; p < &_bss_end; p++) 
    *p = 0;
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
  //printf("---------In halt---------\n");
  asm volatile("ebreak");
  while (1);
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
  init_data_bss();
  // 初始化uart
  uint32_t baud = 115200;
  uart_init(baud);
  // 测试bitrev
  spi_init();
  int ret = main(mainargs);
  halt(ret);
}

