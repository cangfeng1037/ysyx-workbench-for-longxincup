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

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include "../monitor/sdb/sdb.h"

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

#ifdef CONFIG_FTRACE
extern bool ftrace_enabled;  // 声明ftrace_enabled变量
extern int nr_symbols;

#define MAX_SYMBOLS 1024
typedef struct {
  char name[64];
  uint32_t addr;
  uint32_t size;
} Func_Info;

extern Func_Info symbols[];

Func_Info* find_func(uint32_t addr);
#endif

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

#define N 16
char *buffering[N];
bool buffer_full = false;

#define MAX_CALL_DEPTH 256
static int call_depth = 0;
static vaddr_t ra_stack[MAX_CALL_DEPTH]; // 保存返回地址的栈

int cnt = 0 ;

void iringbuf(Decode *s) {
  if (buffering[cnt] != NULL) {
    free(buffering[cnt]);
  }

  buffering[cnt] = (char *)malloc(128 * sizeof(char));
  strcpy(buffering[cnt], s -> logbuf);

  cnt ++ ;
  if (cnt >= N) {cnt = 0; buffer_full = true;}
}

void iringbuf_output() {
  int total = buffer_full ? N : cnt;
  printf("Recent %d instructions:\n", total);
  for (int j = 0; j < N; j ++ ) {
    if (buffering[j] != NULL) 
      puts(buffering[j]);
  }
}

// ftrace函数调用检测
void ftrace_check(vaddr_t pc, uint32_t inst) {
  if (!ftrace_enabled) return;  // 如果没有启用ftrace，直接返回

  // 检测jal和jalr指令
  uint32_t opcode = inst & 0x7f;
  uint32_t rd = (inst >> 7) & 0x1f;

  if (opcode == 0x6f && rd == 1) {
    // 计算跳转地址，找立即数
    uint32_t imm = ((inst & 0x80000000) ? 0xfff00000 : 0) |  // bit[20]
                  ((inst & 0xff000) >> 0) |                  // bit[19:12]
                  ((inst & 0x100000) >> 9) |                 // bit[11]
                  ((inst & 0x7fe00000) >> 20);

    uint32_t target = pc + imm;
    
    Func_Info *func = find_func(target);
    if (func) {
      // 找到函数，打印调用信息
      printf("0x%08x: call  [%s@0x%08x]\n", pc, func->name, target);

      if (call_depth < MAX_CALL_DEPTH) {
        ra_stack[call_depth++] = pc + 4; // 保存返回地址
      }
    }
  }

  else if (opcode == 0x67) {
    // jalr指令，打印调用信息
    uint32_t rs1 = (inst >> 15) & 0x1f;

    if (rd == 0 && rs1 == 1) {
      if (call_depth > 0) {
        vaddr_t ret_addr = ra_stack[--call_depth];
        Func_Info *func = find_func(pc);
        if (func) {
          printf("0x%08x: return [%s@x%08x]\n", pc, func->name, ret_addr - 4);
        }
      }
    }
  }
}

void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

  //  启动ftrace
  #ifdef CONFIG_FTRACE 
    ftrace_check(_this->pc, _this->isa.inst);
  #endif

  #ifdef CONFIG_WATCHPOINT
  // 检查监视点
  if (check_watchpoints()) {
    nemu_state.state = NEMU_STOP;
    iringbuf_output();
  }
  #endif
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
  // 上面是执行指令的内容，记录pc，snpc，调用指令集执行，更新pc

  // 下面开始是 itrace
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst;
#ifdef CONFIG_ISA_x86
  for (i = 0; i < ilen; i ++) {
#else
  for (i = ilen - 1; i >= 0; i --) {
#endif
    p += snprintf(p, 4, " %02x", inst[i]); // 循环打印指令，以二进制输出指令
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  iringbuf(s);

  // 调用反汇编接口
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst, ilen);
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();

  iringbuf_output();
  
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT: case NEMU_QUIT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      iringbuf_output();
      // fall through
    case NEMU_QUIT: statistic();
  }
}
