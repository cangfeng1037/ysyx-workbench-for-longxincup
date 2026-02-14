/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;

#define CONFIG_DEVICE 1

#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

void mtrace (paddr_t addr, int len, char type) {
  printf("Memory trace: %c addr = " FMT_PADDR ", len = %d at pc = " FMT_WORD "\n",
      type, addr, len, cpu.pc);
}

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  #ifdef CONFIG_MTRACE
    mtrace(addr, len, 'R');
  #endif
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  #ifdef CONFIG_MTRACE
    mtrace(addr, len, 'W');
  #endif
  host_write(guest_to_host(addr), len, data);
}

// 为 mrom 和 sram 分配内存
static uint8_t mrom[MROM_SIZE] PG_ALIGN = {};
static uint8_t sram[SRAM_SIZE] PG_ALIGN = {};

static word_t mrom_read(paddr_t addr, int len) {
  uint32_t offset = addr - MROM_BASE;
  word_t ret = region_read(mrom, offset, len);
  #ifdef CONFIG_MTRACE
    mtrace(addr, len, 'R');
  #endif
  return ret;
}

__attribute__((visibility("default")))
void init_mrom(const void* buf, size_t size) {
  size_t copy_size = size < MROM_SIZE ? size : MROM_SIZE;
  memcpy(mrom, buf, copy_size);
  // 打印 mrom 的具体内容
  
  printf("=======[NEMU]: MROM content at init_mrom======\n");
  for (size_t i = 0; i < copy_size; i += 16) {
    printf("0x%08lx: ", MROM_BASE + i);
    for (size_t j = 0; j < 16 && (i + j) < copy_size; j++) {
      printf("%02x ", mrom[i + j]);
    }
    printf("\n");
  }
  printf("=======MROM content end======\n\n");
  
}

static word_t sram_read(paddr_t addr, int len) {
  uint32_t offset = addr - SRAM_BASE;
  word_t ret = region_read(sram, offset, len);
  #ifdef CONFIG_MTRACE
    mtrace(addr, len, 'R');
  #endif
  return ret;
}

static void sram_write(paddr_t addr, int len, word_t data) {
  uint32_t offset = addr - SRAM_BASE;
  #ifdef CONFIG_MTRACE
    mtrace(addr, len, 'W');
  #endif
  region_write(sram, offset, len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}


// 在这里，添加对 mrom 和 sram 的支持，镜像写入 mrom 中，栈区在 sram 中 

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  // 处理csr寄存器读取
  if (likely(in_csr(addr))) return csr_read(addr - 0xa0000000);
  // 添加mrom读取支持
  if (likely(in_mrom(addr))) return mrom_read(addr, len);
  // 添加sram读取支持
  if (likely(in_sram(addr))) return sram_read(addr, len); 
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  if (likely(in_csr(addr))) { csr_write(addr - 0xa0000000, data); return; }

  // 添加sram写入支持
  if (likely(in_sram(addr))) { sram_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}