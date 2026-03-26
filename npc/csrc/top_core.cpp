#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"

#include <svdpi.h>
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <time.h>
#include <signal.h>

#include "device.h"
#include "difftest.h"

using namespace std;

static const uint32_t PMEM_BASE = 0x80000000u;
static const uint32_t PMEM_ALIAS_BASE = 0x30000000u;  // Keep compatibility with current reset PC.
static const uint32_t PMEM_SIZE = 128u * 1024u * 1024u;
static const uint32_t PMEM_PRINT_BYTES = 256u;

static bool sim_exit_flag = false;
static bool g_skip_ref_next = false;
static char *img_file = nullptr;
static long long cnt = 0;
static long long inst_cnt = 0;
static int maxn = 1000000000;

static Vtop *top = nullptr;
static VerilatedVcdC *tfp = nullptr;
static vluint64_t sim_time = 0;

static uint8_t *mem = nullptr;
static size_t img_size = 0;

extern "C" int get_pc();
extern "C" int get_inst();
extern "C" int get_difftest_valid();
extern "C" int get_non_inst();
extern "C" int get_hit_count();
extern "C" int get_miss_count();
extern "C" int get_gpr(int idx);

static const char *DPI_SCOPE_CANDIDATES[] = {
  "TOP.top.difftest_dpi",
  "TOP.difftest_dpi",
};
static svScope dpi_scope = nullptr;

struct AxiReadState {
  bool active = false;
  uint32_t addr = 0;
  uint8_t id = 0;
  uint8_t len = 0;
  uint8_t beat = 0;
  uint8_t size = 2;
  bool incr = true;
};

struct AxiWriteState {
  bool aw_captured = false;
  uint32_t addr = 0;
  uint8_t id = 0;
  uint8_t len = 0;
  uint8_t beat = 0;
  uint8_t size = 2;
  bool incr = true;
  bool b_pending = false;
  uint8_t b_id = 0;
};

static AxiReadState rd_state;
static AxiWriteState wr_state;

static inline uint64_t time_get_us() {
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return (uint64_t)ts.tv_sec * 1000000ull + (uint64_t)(ts.tv_nsec / 1000ull);
}

extern "C" void ebreak() {
  printf("[DPI-C] ebreak detected, simulation exit.\n");
  sim_exit_flag = true;
}

static void handle_sigint(int) {
  if (tfp) tfp->close();
  fflush(stdout);
  exit(130);
}

static inline bool addr_to_offset(uint32_t addr, uint32_t &offset) {
  if (addr >= PMEM_BASE && addr < PMEM_BASE + PMEM_SIZE) {
    offset = addr - PMEM_BASE;
    return true;
  }
  if (addr >= PMEM_ALIAS_BASE && addr < PMEM_ALIAS_BASE + PMEM_SIZE) {
    offset = addr - PMEM_ALIAS_BASE;
    return true;
  }
  return false;
}

static uint32_t pmem_read32(uint32_t addr) {
  uint32_t offset = 0;
  if (!addr_to_offset(addr, offset)) return 0;
  uint32_t base = offset & ~0x3u;
  if (base + 3 >= PMEM_SIZE) return 0;
  return (uint32_t)mem[base + 0] |
         ((uint32_t)mem[base + 1] << 8) |
         ((uint32_t)mem[base + 2] << 16) |
         ((uint32_t)mem[base + 3] << 24);
}

static void pmem_write32(uint32_t addr, uint32_t data, uint8_t wstrb) {
  uint32_t offset = 0;
  if (!addr_to_offset(addr, offset)) return;
  uint32_t base = offset & ~0x3u;
  if (base + 3 >= PMEM_SIZE) return;
  if (wstrb & 0x1) mem[base + 0] = (uint8_t)(data & 0xff);
  if (wstrb & 0x2) mem[base + 1] = (uint8_t)((data >> 8) & 0xff);
  if (wstrb & 0x4) mem[base + 2] = (uint8_t)((data >> 16) & 0xff);
  if (wstrb & 0x8) mem[base + 3] = (uint8_t)((data >> 24) & 0xff);
}

static uint32_t bus_read32(uint32_t addr) {
  if (addr == TIMER_ADDR) {
    g_skip_ref_next = true;
    uint64_t t = time_get_us();
    return (uint32_t)(t & 0xffffffffu);
  }
  if (addr == TIMER_ADDR + 4) {
    g_skip_ref_next = true;
    uint64_t t = time_get_us();
    return (uint32_t)((t >> 32) & 0xffffffffu);
  }
  return pmem_read32(addr);
}

static void bus_write32(uint32_t addr, uint32_t data, uint8_t wstrb) {
  if (addr == SERIAL_ADDR) {
    g_skip_ref_next = true;
    putchar((char)(data & 0xff));
    fflush(stdout);
    return;
  }
  pmem_write32(addr, data, wstrb);
}

static uint32_t calc_burst_addr(uint32_t base, uint8_t beat, uint8_t size, bool incr) {
  if (!incr) return base;
  uint32_t step = 1u << (size <= 2 ? size : 2);
  return base + (uint32_t)beat * step;
}

static void drive_default_slave_inputs() {
  top->io_interrupt = 0;

  top->io_slave_awvalid = 0;
  top->io_slave_awaddr = 0;
  top->io_slave_awid = 0;
  top->io_slave_awlen = 0;
  top->io_slave_awsize = 0;
  top->io_slave_awburst = 0;

  top->io_slave_wvalid = 0;
  top->io_slave_wdata = 0;
  top->io_slave_wstrb = 0;
  top->io_slave_wlast = 0;
  top->io_slave_bready = 0;

  top->io_slave_arvalid = 0;
  top->io_slave_araddr = 0;
  top->io_slave_arid = 0;
  top->io_slave_arlen = 0;
  top->io_slave_arsize = 0;
  top->io_slave_arburst = 0;
  top->io_slave_rready = 0;
}

static void drive_axi_responses() {
  top->io_master_arready = rd_state.active ? 0 : 1;
  top->io_master_rvalid = rd_state.active ? 1 : 0;
  top->io_master_rresp = 0;
  top->io_master_rdata =
    rd_state.active ? bus_read32(calc_burst_addr(rd_state.addr, rd_state.beat, rd_state.size, rd_state.incr)) : 0;
  top->io_master_rlast = rd_state.active ? (rd_state.beat == rd_state.len) : 0;
  top->io_master_rid = rd_state.id;

  top->io_master_awready = (wr_state.aw_captured || wr_state.b_pending) ? 0 : 1;
  top->io_master_wready = (wr_state.aw_captured && !wr_state.b_pending) ? 1 : 0;
  top->io_master_bvalid = wr_state.b_pending ? 1 : 0;
  top->io_master_bresp = 0;
  top->io_master_bid = wr_state.b_id;
}

static void update_axi_states() {
  bool ar_fire = top->io_master_arvalid && top->io_master_arready;
  bool r_fire = top->io_master_rvalid && top->io_master_rready;
  bool aw_fire = top->io_master_awvalid && top->io_master_awready;
  bool w_fire = top->io_master_wvalid && top->io_master_wready;
  bool b_fire = top->io_master_bvalid && top->io_master_bready;

  if (ar_fire) {
    rd_state.active = true;
    rd_state.addr = top->io_master_araddr;
    rd_state.id = top->io_master_arid & 0xf;
    rd_state.len = top->io_master_arlen & 0xff;
    rd_state.beat = 0;
    rd_state.size = top->io_master_arsize & 0x7;
    rd_state.incr = (top->io_master_arburst & 0x3) == 1;
  }

  if (r_fire && rd_state.active) {
    if (rd_state.beat == rd_state.len) {
      rd_state = AxiReadState{};
    } else {
      rd_state.beat++;
    }
  }

  if (aw_fire) {
    wr_state.aw_captured = true;
    wr_state.addr = top->io_master_awaddr;
    wr_state.id = top->io_master_awid & 0xf;
    wr_state.len = top->io_master_awlen & 0xff;
    wr_state.beat = 0;
    wr_state.size = top->io_master_awsize & 0x7;
    wr_state.incr = (top->io_master_awburst & 0x3) == 1;
  }

  if (w_fire && wr_state.aw_captured) {
    uint32_t waddr = calc_burst_addr(wr_state.addr, wr_state.beat, wr_state.size, wr_state.incr);
    bus_write32(waddr, top->io_master_wdata, top->io_master_wstrb & 0xf);
    bool write_done = top->io_master_wlast || (wr_state.beat == wr_state.len);
    if (write_done) {
      wr_state.b_pending = true;
      wr_state.b_id = wr_state.id;
      wr_state.aw_captured = false;
      wr_state.beat = 0;
    } else {
      wr_state.beat++;
    }
  }

  if (b_fire) {
    wr_state.b_pending = false;
    wr_state.b_id = 0;
  }
}

static inline void set_dpi_scope() {
  if (!dpi_scope) {
    for (const char *name : DPI_SCOPE_CANDIDATES) {
      dpi_scope = svGetScopeFromName(name);
      if (dpi_scope) {
        break;
      }
    }
    if (!dpi_scope) {
      fprintf(stderr, "DPI scope not found for core mode\n");
    }
  }
  if (dpi_scope) {
    svSetScope(dpi_scope);
  }
}

static inline uint32_t rf_read(int idx) {
  if (idx == 0) return 0;
  set_dpi_scope();
  if (idx < 0 || idx > 31) return 0;
  return (uint32_t)get_gpr(idx);
}

static uint32_t difftest_get_pc() {
  set_dpi_scope();
  return (uint32_t)get_pc();
}

static uint32_t difftest_get_inst() {
  set_dpi_scope();
  return (uint32_t)get_inst();
}

static uint32_t difftest_get_difftest_valid() {
  set_dpi_scope();
  return (uint32_t)get_difftest_valid();
}

static uint32_t difftest_get_non_inst() {
  set_dpi_scope();
  return (uint32_t)get_non_inst();
}

static double ptrace_get_miss_rate() {
  set_dpi_scope();
  uint32_t hit = (uint32_t)get_hit_count();
  uint32_t miss = (uint32_t)get_miss_count();
  uint32_t total = hit + miss;
  return total == 0 ? 0.0 : (double)miss / (double)total;
}

static void parse_args(int argc, char **argv) {
  for (int i = 1; i < argc; i++) {
    img_file = argv[i];
    printf("Image file: %s\n", img_file);
  }
}

static void load_img() {
  if (img_file == nullptr) return;
  FILE *fp = fopen(img_file, "rb");
  if (!fp) {
    printf("Error: cannot open image file '%s'\n", img_file);
    exit(-1);
  }
  img_size = fread(mem, 1, PMEM_SIZE, fp);
  fclose(fp);
  if (img_size == 0) {
    printf("Error: cannot read image file '%s'\n", img_file);
    exit(-1);
  }
  printf("Loaded image file '%s', %zu bytes\n", img_file, img_size);
}

static void eval_once() {
  drive_default_slave_inputs();
  drive_axi_responses();

  top->clock = 0;
  top->eval();
  if (tfp) tfp->dump(sim_time++);
  update_axi_states();

  drive_default_slave_inputs();
  drive_axi_responses();

  top->clock = 1;
  top->eval();
  if (tfp) tfp->dump(sim_time++);
  update_axi_states();

  if (cnt == 20) {
    top->reset = 0;
  }

  if (difftest_get_difftest_valid()) {
    inst_cnt++;
    printf("Cycle %lld: PC = 0x%08x, inst = 0x%08x\n", cnt, difftest_get_pc(), difftest_get_inst());
  }
  cnt++;

#ifdef CONFIG_DIFFTEST
  if (!sim_exit_flag && cnt > 3) {
    if (g_skip_ref_next) {
      CPU_state dut_s{};
      for (int i = 0; i < 32; i++) dut_s.gpr[i] = rf_read(i);
      dut_s.pc = difftest_get_pc();
      difftest_sync(dut_s.gpr, dut_s.pc);
      difftest_skip();
      g_skip_ref_next = false;
    }

    if (difftest_get_difftest_valid()) {
      difftest_step(1);
      CPU_state dut_s{};
      for (int i = 0; i < 32; i++) dut_s.gpr[i] = rf_read(i);
      dut_s.pc = difftest_get_pc();
      uint32_t dut_inst = difftest_get_inst();
      bool ok = difftest_check_reg(dut_s.gpr, dut_s.pc);
      if (!ok) {
        printf("Difftest failed at cycle %lld, pc = 0x%08x, inst = 0x%08x\n",
               cnt, dut_s.pc, dut_inst);
        if (difftest_get_non_inst()) {
          printf("The non-inst instruction detected! inst = 0x%08x, pc = 0x%08x\n",
                 dut_inst, dut_s.pc);
        }
        exit(1);
      }
    }
  }
#endif
}

static void init_sim() {
  top = new Vtop;
  Verilated::traceEverOn(true);
  tfp = new VerilatedVcdC;
  top->trace(tfp, 99);

#ifdef CONFIG_WAVE
  tfp->open("wave.vcd");
#endif

  top->reset = 1;
  top->clock = 0;
  drive_default_slave_inputs();
  drive_axi_responses();
  top->eval();
}

static void cmd_c() {
  while (!sim_exit_flag) {
    eval_once();
  }
}

static void cmd_si(int n) {
  if (n < 1) n = 1;
  while (n-- > 0 && !sim_exit_flag && cnt < maxn) {
    eval_once();
  }
}

static void cmd_m() {
  uint32_t bytes = PMEM_PRINT_BYTES;
  for (uint32_t i = 0; i < bytes; i++) {
    if (i % 16 == 0) {
      if (i != 0) printf("\n");
      printf("0x%08x: ", PMEM_BASE + i);
    }
    printf("%02x ", mem[i]);
  }
  printf("\n");
}

static void cmd_r() {
  printf("pc: 0x%08x\n", difftest_get_pc());
  for (int i = 0; i < 32; i++) {
    printf("x%02d: 0x%08x\n", i, rf_read(i));
  }
}

static void sdb_mainloop() {
  string cmd;
  while (true) {
    printf("\n\033[1;34m(npc.sdb)\033[0m ");
#ifndef CONFIG_PATCH
    if (!getline(cin, cmd)) break;
#else
    cmd = "c";
#endif
    if (cmd == "c") {
      cmd_c();
      break;
    } else if (cmd.rfind("si", 0) == 0) {
      int num = 1;
      if (cmd.size() > 2) {
        const char *p = cmd.c_str() + 2;
        while (*p == ' ' || *p == '\t') p++;
        if (*p != '\0') num = atoi(p);
      }
      cmd_si(num);
      if (sim_exit_flag) break;
    } else if (cmd == "q") {
      printf("Exit NPC\n");
      break;
    } else if (cmd == "help") {
      printf("c - continue the execution of the program\n");
      printf("si [N] - step N instruction\n");
      printf("q - exit simulation\n");
      printf("m - dump first 256 bytes of PMEM\n");
      printf("r - print registers\n");
      printf("help - display this information\n");
    } else if (cmd == "m") {
      cmd_m();
    } else if (cmd == "r") {
      cmd_r();
    } else {
      printf("Unknown command\n");
    }
  }
}

int main(int argc, char **argv) {
  setvbuf(stdout, nullptr, _IONBF, 0);

  Verilated::commandArgs(argc, argv);
  signal(SIGINT, handle_sigint);
  parse_args(argc, argv);

  mem = (uint8_t *)malloc(PMEM_SIZE);
  if (!mem) {
    printf("Error: cannot allocate PMEM\n");
    return -1;
  }
  memset(mem, 0, PMEM_SIZE);
  load_img();

  init_sim();

#ifdef CONFIG_DIFFTEST
  difftest_init(PMEM_BASE, mem, img_size);
#endif

  sdb_mainloop();

  if (!sim_exit_flag) {
    printf("\n=== Simulation completed without ebreak ===\n");
  } else {
    printf("\033[1;32m===== HIT GOOD TRAP =====\033[0m\n");
  }

  printf("====== Total cycles = %lld =======\n", cnt);
  printf("======  Total inst  = %lld =======\n", inst_cnt);
  printf("======      IPC  = %08lf     =======\n", cnt ? (double)inst_cnt / cnt : 0.0);
  printf("======   Miss Rate  = %08lf     =======\n", ptrace_get_miss_rate());

  if (tfp) {
    tfp->close();
    delete tfp;
    tfp = nullptr;
  }
  delete top;
  free(mem);
  return 0;
}
