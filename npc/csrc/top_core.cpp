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
static const uint32_t SKIP_PENDING_WARN_THRESHOLD = 256u;

static bool sim_exit_flag = false;
static uint32_t g_skip_serial_pending = 0;
static uint32_t g_skip_timer_pending = 0;
static uint32_t g_skip_pending_age = 0;
static bool g_skip_pending_warned = false;
static char *img_file = nullptr;
static long long cnt = 0;
static long long inst_cnt = 0;
static int maxn = 1000000000;

static Vtop *top = nullptr;
static VerilatedVcdC *tfp = nullptr;
static vluint64_t sim_time = 0;

static uint8_t *mem = nullptr;
static size_t img_size = 0;
static bool axi_debug = true;
static const long long AXI_DEBUG_MAX_CYCLE = 200;
static bool difftest_trace = false;
static bool fail_snapshot = false;
static bool ret_snapshot_debug = false;
static int ret_snapshot_left = 0;

static inline bool difftest_trace_enabled() {
  static int cached = -1;
  if (cached == -1) {
    const char *e = getenv("NPC_DIFFTEST_TRACE");
    cached = (e && *e && strcmp(e, "0") != 0) ? 1 : 0;
  }
  return cached == 1;
}

static inline bool fail_snapshot_enabled() {
  static int cached = -1;
  if (cached == -1) {
    const char *e = getenv("NPC_FAIL_SNAPSHOT");
    cached = (e && *e && strcmp(e, "0") != 0) ? 1 : 0;
  }
  return cached == 1;
}

static inline void mark_skip_serial_pending() {
  if (g_skip_serial_pending != 0xffffffffu) {
    g_skip_serial_pending++;
  }
}

static inline void mark_skip_timer_pending() {
  if (g_skip_timer_pending != 0xffffffffu) {
    g_skip_timer_pending++;
  }
}

static inline bool is_load_or_store_inst(uint32_t inst) {
  uint32_t opcode = inst & 0x7fu;
  return opcode == 0x03u || opcode == 0x23u;
}

static inline bool in_focus_trace_window(uint32_t pc) {
  return pc >= 0x800059e0u && pc <= 0x80005a10u;
}

static inline bool in_ioe_read_window(uint32_t pc) {
  return pc >= 0x800056d0u && pc <= 0x800056e8u;
}

extern "C" int get_pc();
extern "C" int get_inst();
extern "C" int get_difftest_valid();
extern "C" int get_non_inst();
extern "C" int get_hit_count();
extern "C" int get_miss_count();
extern "C" int get_dcache_hit_count();
extern "C" int get_dcache_miss_count();
extern "C" int get_i_cnt();
extern "C" int get_d_cnt();
extern "C" int get_stall_cnt();
extern "C" int get_flush_cnt();
extern "C" int get_bp_total_count();
extern "C" int get_bp_hit_count();
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

struct AxiSample {
  bool ar_fire = false;
  bool r_fire = false;
  bool aw_fire = false;
  bool w_fire = false;
  bool b_fire = false;

  uint32_t araddr = 0;
  uint8_t arid = 0;
  uint8_t arlen = 0;
  uint8_t arsize = 0;
  uint8_t arburst = 0;

  uint32_t awaddr = 0;
  uint8_t awid = 0;
  uint8_t awlen = 0;
  uint8_t awsize = 0;
  uint8_t awburst = 0;

  uint32_t wdata = 0;
  uint8_t wstrb = 0;
  bool wlast = false;
  bool reset = false;
};

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
    uint64_t t = time_get_us();
    return (uint32_t)(t & 0xffffffffu);
  }
  if (addr == TIMER_ADDR + 4) {
    uint64_t t = time_get_us();
    return (uint32_t)((t >> 32) & 0xffffffffu);
  }
  return pmem_read32(addr);
}

static void bus_write32(uint32_t addr, uint32_t data, uint8_t wstrb) {
  if (addr == SERIAL_ADDR) {
    mark_skip_serial_pending();
    putchar((char)(data & 0xff));
    fflush(stdout);
    return;
  }
  pmem_write32(addr, data, wstrb);
}

static inline bool is_timer_mmio_addr(uint32_t addr) {
  return addr == TIMER_ADDR || addr == (TIMER_ADDR + 4);
}

static inline bool is_stack_watch_addr(uint32_t addr) {
  uint32_t word = addr & ~0x3u;
  return word == 0x8004ffd8u || word == 0x8004ffd4u || word == 0x8004ffd0u ||
         word == 0x8004ffc0u || word == 0x8004ffbcu || word == 0x8004ffc4u;
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
  if (top->reset) {
    // During reset, do not accept/return any AXI transaction.
    top->io_master_arready = 0;
    top->io_master_rvalid = 0;
    top->io_master_rresp = 0;
    top->io_master_rdata = 0;
    top->io_master_rlast = 0;
    top->io_master_rid = 0;

    top->io_master_awready = 0;
    top->io_master_wready = 0;
    top->io_master_bvalid = 0;
    top->io_master_bresp = 0;
    top->io_master_bid = 0;
    return;
  }

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

static AxiSample sample_axi_handshake_pre_posedge() {
  AxiSample s{};
  s.reset = top->reset;
  if (s.reset) return s;

  s.ar_fire = top->io_master_arvalid && top->io_master_arready;
  s.r_fire = top->io_master_rvalid && top->io_master_rready;
  s.aw_fire = top->io_master_awvalid && top->io_master_awready;
  s.w_fire = top->io_master_wvalid && top->io_master_wready;
  s.b_fire = top->io_master_bvalid && top->io_master_bready;

  s.araddr = (uint32_t)top->io_master_araddr;
  s.arid = (uint8_t)(top->io_master_arid & 0xf);
  s.arlen = (uint8_t)(top->io_master_arlen & 0xff);
  s.arsize = (uint8_t)(top->io_master_arsize & 0x7);
  s.arburst = (uint8_t)(top->io_master_arburst & 0x3);

  s.awaddr = (uint32_t)top->io_master_awaddr;
  s.awid = (uint8_t)(top->io_master_awid & 0xf);
  s.awlen = (uint8_t)(top->io_master_awlen & 0xff);
  s.awsize = (uint8_t)(top->io_master_awsize & 0x7);
  s.awburst = (uint8_t)(top->io_master_awburst & 0x3);

  s.wdata = (uint32_t)top->io_master_wdata;
  s.wstrb = (uint8_t)(top->io_master_wstrb & 0xf);
  s.wlast = top->io_master_wlast;
  return s;
}

static void update_axi_states(const AxiSample &s) {
  if (s.reset) {
    rd_state = AxiReadState{};
    wr_state = AxiWriteState{};
    return;
  }

  if (s.ar_fire) {
    rd_state.active = true;
    rd_state.addr = s.araddr;
    rd_state.id = s.arid;
    rd_state.len = s.arlen;
    rd_state.beat = 0;
    rd_state.size = s.arsize;
    rd_state.incr = s.arburst == 1;
  }

  if (s.r_fire && rd_state.active) {
    uint32_t raddr = calc_burst_addr(rd_state.addr, rd_state.beat, rd_state.size, rd_state.incr);
    if (is_timer_mmio_addr(raddr)) {
      // Mark skip only when a read response beat is actually consumed.
      mark_skip_timer_pending();
    }
    if (rd_state.beat == rd_state.len) {
      rd_state = AxiReadState{};
    } else {
      rd_state.beat++;
    }
  }

  if (s.aw_fire) {
    wr_state.aw_captured = true;
    wr_state.addr = s.awaddr;
    wr_state.id = s.awid;
    wr_state.len = s.awlen;
    wr_state.beat = 0;
    wr_state.size = s.awsize;
    wr_state.incr = s.awburst == 1;
  }

  if (s.w_fire && wr_state.aw_captured) {
    uint32_t waddr = calc_burst_addr(wr_state.addr, wr_state.beat, wr_state.size, wr_state.incr);
    if (is_stack_watch_addr(waddr)) {
      //printf("[AXI-WATCH][%lld] awaddr=0x%08x waddr=0x%08x word=0x%08x wdata=0x%08x wstrb=0x%x awsize=%u beat=%u\n",
        //     cnt, wr_state.addr, waddr, (waddr & ~0x3u), s.wdata, s.wstrb & 0xfu, (unsigned)wr_state.size, (unsigned)wr_state.beat);
    }
    bus_write32(waddr, s.wdata, s.wstrb);
    bool write_done = s.wlast || (wr_state.beat == wr_state.len);
    if (write_done) {
      wr_state.b_pending = true;
      wr_state.b_id = wr_state.id;
      wr_state.aw_captured = false;
      wr_state.beat = 0;
    } else {
      wr_state.beat++;
    }
  }

  if (s.b_fire) {
    wr_state.b_pending = false;
    wr_state.b_id = 0;
  }
/*
  if (axi_debug && cnt <= AXI_DEBUG_MAX_CYCLE) {
    if (top->io_master_arvalid || s.ar_fire || rd_state.active || top->io_master_rvalid || s.r_fire) {
      printf("[AXI][%lld] rst=%d arv=%d arr=%d arf=%d araddr=0x%08x len=%u | active=%d rv=%d rr=%d rf=%d rlast=%d rdata=0x%08x\n",
             cnt, (int)top->reset,
             (int)top->io_master_arvalid, (int)top->io_master_arready, (int)s.ar_fire,
             (uint32_t)top->io_master_araddr, (unsigned)(top->io_master_arlen & 0xff),
             (int)rd_state.active, (int)top->io_master_rvalid, (int)top->io_master_rready, (int)s.r_fire,
             (int)top->io_master_rlast, (uint32_t)top->io_master_rdata);
    }
  }
    */
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
  if (!top || idx < 0 || idx > 31) return 0;
  switch (idx) {
    case 0:  return 0;
    case 1:  return (uint32_t)top->io_gpr_1;
    case 2:  return (uint32_t)top->io_gpr_2;
    case 3:  return (uint32_t)top->io_gpr_3;
    case 4:  return (uint32_t)top->io_gpr_4;
    case 5:  return (uint32_t)top->io_gpr_5;
    case 6:  return (uint32_t)top->io_gpr_6;
    case 7:  return (uint32_t)top->io_gpr_7;
    case 8:  return (uint32_t)top->io_gpr_8;
    case 9:  return (uint32_t)top->io_gpr_9;
    case 10: return (uint32_t)top->io_gpr_10;
    case 11: return (uint32_t)top->io_gpr_11;
    case 12: return (uint32_t)top->io_gpr_12;
    case 13: return (uint32_t)top->io_gpr_13;
    case 14: return (uint32_t)top->io_gpr_14;
    case 15: return (uint32_t)top->io_gpr_15;
    case 16: return (uint32_t)top->io_gpr_16;
    case 17: return (uint32_t)top->io_gpr_17;
    case 18: return (uint32_t)top->io_gpr_18;
    case 19: return (uint32_t)top->io_gpr_19;
    case 20: return (uint32_t)top->io_gpr_20;
    case 21: return (uint32_t)top->io_gpr_21;
    case 22: return (uint32_t)top->io_gpr_22;
    case 23: return (uint32_t)top->io_gpr_23;
    case 24: return (uint32_t)top->io_gpr_24;
    case 25: return (uint32_t)top->io_gpr_25;
    case 26: return (uint32_t)top->io_gpr_26;
    case 27: return (uint32_t)top->io_gpr_27;
    case 28: return (uint32_t)top->io_gpr_28;
    case 29: return (uint32_t)top->io_gpr_29;
    case 30: return (uint32_t)top->io_gpr_30;
    case 31: return (uint32_t)top->io_gpr_31;
    default: return 0;
  }
}

static uint32_t difftest_get_pc() {
  return top ? (uint32_t)top->io_pc : 0;
}

static uint32_t difftest_get_inst() {
  return top ? (uint32_t)top->io_inst : 0;
}

static uint32_t difftest_get_addr() {
  return top ? (uint32_t)top->io_commit_addr : 0;
}

static uint32_t difftest_get_difftest_valid() {
  return top ? (uint32_t)top->io_difftest_valid : 0;
}

static uint32_t difftest_get_non_inst() {
  return top ? (uint32_t)top->io_non_inst : 0;
}

static double ptrace_get_miss_rate() {
  set_dpi_scope();
  uint32_t hit = (uint32_t)get_hit_count();
  uint32_t miss = (uint32_t)get_miss_count();
  uint32_t total = hit + miss;
  return total == 0 ? 0.0 : (double)miss / (double)total;
}

static double ptrace_get_dcache_miss_rate() {
  set_dpi_scope();
  uint32_t hit = (uint32_t)get_dcache_hit_count();
  uint32_t miss = (uint32_t)get_dcache_miss_count();
  uint32_t total = hit + miss;
  return total == 0 ? 0.0 : (double)miss / (double)total;
}

static uint32_t ptrace_get_i_cnt() {
  set_dpi_scope();
  return (uint32_t)get_i_cnt();
}

static uint32_t ptrace_get_d_cnt() {
  set_dpi_scope();
  return (uint32_t)get_d_cnt();
}

static uint32_t ptrace_get_stall_cnt() {
  set_dpi_scope();
  return (uint32_t)get_stall_cnt();
}

static uint32_t ptrace_get_flush_cnt() {
  set_dpi_scope();
  return (uint32_t)get_flush_cnt();
}

static uint32_t ptrace_get_bp_total_count() {
  set_dpi_scope();
  return (uint32_t)get_bp_total_count();
}

static uint32_t ptrace_get_bp_hit_count() {
  set_dpi_scope();
  return (uint32_t)get_bp_hit_count();
}

static void dump_difftest_fail_debug(long long cycle, uint32_t pc, uint32_t inst) {
  printf("\n\033[1;31m");
  printf("############################################################\n");
  printf("#                  !!! DIFFTEST FAIL !!!                   #\n");
  printf("############################################################\n");
  printf("\033[0m");
  printf("[FAIL-SNAPSHOT] cycle=%lld pc=0x%08x inst=0x%08x valid=%u\n",
         cycle, pc, inst, difftest_get_difftest_valid());
  printf("[FAIL-SNAPSHOT] x1(ra)=0x%08x x2(sp)=0x%08x x8(s0)=0x%08x x9(s1)=0x%08x x10(a0)=0x%08x\n",
         rf_read(1), rf_read(2), rf_read(8), rf_read(9), rf_read(10));
  printf("[FAIL-SNAPSHOT] stall_cnt=%u flush_cnt=%u ifu_cnt=%u lsu_cnt=%u\n",
         ptrace_get_stall_cnt(), ptrace_get_flush_cnt(), ptrace_get_i_cnt(), ptrace_get_d_cnt());
  printf("[FAIL-SNAPSHOT] ic_miss_rate=%.6f dc_miss_rate=%.6f bp_hit_rate=%.6f\n",
         ptrace_get_miss_rate(), ptrace_get_dcache_miss_rate(),
         (ptrace_get_bp_total_count() == 0) ? 0.0 :
         (double)ptrace_get_bp_hit_count() / (double)ptrace_get_bp_total_count());
  printf("[FAIL-SNAPSHOT] GPR DUMP BEGIN\n");
  for (int i = 0; i < 32; i++) {
    printf("x%02d=0x%08x%s", i, rf_read(i), (i % 4 == 3) ? "\n" : "  ");
  }
  printf("[FAIL-SNAPSHOT] GPR DUMP END\n");
  printf("\033[1;31m############################################################\033[0m\n");
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
  AxiSample sample = sample_axi_handshake_pre_posedge();

  drive_default_slave_inputs();
  drive_axi_responses();

  top->clock = 1;
  top->eval();
  if (tfp) tfp->dump(sim_time++);
  update_axi_states(sample);

  if (cnt == 20) {
    top->reset = 0;
  }

  if (difftest_get_difftest_valid()) {
    inst_cnt++;
    uint32_t cpc = difftest_get_pc();
    uint32_t cinst = difftest_get_inst();
    //if(cnt >= 1490000)printf("Cycle %lld: PC = 0x%08x, inst = 0x%08x, x1=0x%08x, x2=0x%08x\n",cnt, cpc, cinst, rf_read(1), rf_read(2));
    if (ret_snapshot_debug && cpc == 0x80005c18u) {
      ret_snapshot_left = 16;
      printf("============================================================\n");
      printf("==================== RET-SNAPSHOT BEGIN ====================\n");
      printf("============================================================\n");
    }
    /*
    if (in_ioe_read_window(cpc)) {
      uint32_t cinst = difftest_get_inst();
      uint32_t caddr = difftest_get_addr();
      uint32_t slot_data = pmem_read32(caddr);
      printf("[IOE-A5][%lld] pc=0x%08x inst=0x%08x a5=0x%08x a0=0x%08x a1=0x%08x t0=0x%08x addr=0x%08x slot=0x%08x\n",
             cnt, cpc, cinst, rf_read(15), rf_read(10), rf_read(11), rf_read(5), caddr, slot_data);
    }
    */
  }
  cnt++;

  if (ret_snapshot_debug && ret_snapshot_left > 0) {
    printf("[RET-SNAPSHOT][%lld] valid=%u pc=0x%08x inst=0x%08x x1=0x%08x x2=0x%08x\n",
           cnt, difftest_get_difftest_valid(), difftest_get_pc(), difftest_get_inst(), rf_read(1), rf_read(2));
    ret_snapshot_left--;
    if (ret_snapshot_left == 0) {
      printf("============================================================\n");
      printf("===================== RET-SNAPSHOT END =====================\n");
      printf("============================================================\n");
    }
  }

  //if(cnt <= 100)printf("Cycle %lld: PC = 0x%08x, inst = 0x%08x\n", cnt, difftest_get_pc(), difftest_get_inst());


#ifdef CONFIG_DIFFTEST
  if (!sim_exit_flag && cnt > 3) {
    bool commit_valid = difftest_get_difftest_valid();
    if (commit_valid) {
      uint32_t dut_pc_before = difftest_get_pc();
      uint32_t dut_inst = difftest_get_inst();
      uint32_t dut_addr = difftest_get_addr();
      CPU_state dut_s{};
      for (int i = 0; i < 32; i++) dut_s.gpr[i] = rf_read(i);
      dut_s.pc = dut_pc_before;
      const uint32_t opcode = dut_inst & 0x7fu;
      const bool is_load_commit = opcode == 0x03u;
      const bool is_store_commit = opcode == 0x23u;
      const bool consume_serial = (g_skip_serial_pending > 0) && is_store_commit && (dut_addr == SERIAL_ADDR);
      const bool consume_timer = (g_skip_timer_pending > 0) && is_load_commit && is_timer_mmio_addr(dut_addr);
      const bool should_consume_skip = consume_serial || consume_timer;
      const uint32_t total_skip_pending = g_skip_serial_pending + g_skip_timer_pending;

      if (difftest_trace && in_focus_trace_window(dut_pc_before)) {
        printf("[DIFF-WIN][%lld] pc=0x%08x inst=0x%08x addr=0x%08x a0=0x%08x t0=0x%08x sp=0x%08x skip(serial/timer)=%u/%u consume=%d\n",
               cnt, dut_pc_before, dut_inst, dut_addr, dut_s.gpr[10], dut_s.gpr[5], dut_s.gpr[2],
               g_skip_serial_pending, g_skip_timer_pending, should_consume_skip ? 1 : 0);
      }

      if (should_consume_skip) {
        uint32_t sync_pc = dut_s.pc + 4u;
        if (difftest_trace) {
          printf("[DIFF][%lld] skip-sync(commit-mmio) pc_from=0x%08x pc_to=0x%08x inst=0x%08x a0=0x%08x\n",
                 cnt, dut_s.pc, sync_pc, dut_inst, dut_s.gpr[10]);
        }
        difftest_sync(dut_s.gpr, sync_pc);
        if (consume_serial && g_skip_serial_pending > 0) g_skip_serial_pending--;
        if (consume_timer && g_skip_timer_pending > 0) g_skip_timer_pending--;
        g_skip_pending_age = 0;
        g_skip_pending_warned = false;
      } else {
        if (difftest_trace) {
          printf("[DIFF][%lld] step pc_before=0x%08x inst=0x%08x\n", cnt, dut_pc_before, dut_inst);
        }
        difftest_step(1);
        uint32_t dut_pc_after = difftest_get_pc();
        dut_s.pc = dut_pc_after;
        bool ok = difftest_check_reg(dut_s.gpr, dut_s.pc);
        if (!ok) {
          printf("Difftest failed at cycle %lld: commit_before(pc=0x%08x, inst=0x%08x, addr=0x%08x) check_after(pc=0x%08x)\n",
                 cnt, dut_pc_before, dut_inst, dut_addr, dut_pc_after);
          printf("  regs: x1(ra)=0x%08x x2(sp)=0x%08x x9(s1)=0x%08x\n",
                 dut_s.gpr[1], dut_s.gpr[2], dut_s.gpr[9]);
          if (difftest_get_non_inst()) {
            printf("The non-inst instruction detected! commit_before(inst=0x%08x) check_after(pc=0x%08x)\n",
                   dut_inst, dut_pc_after);
          }
          if (fail_snapshot) {
            dump_difftest_fail_debug(cnt, dut_pc_after, dut_inst);
          }
          exit(1);
        } else if (difftest_trace) {
          printf("[DIFF][%lld] check pass pc_after=0x%08x\n", cnt, dut_pc_after);
        }
      }

      if (total_skip_pending > 0) {
        if (g_skip_pending_age != 0xffffffffu) g_skip_pending_age++;
        if (difftest_trace && !g_skip_pending_warned && g_skip_pending_age >= SKIP_PENDING_WARN_THRESHOLD) {
          printf("[DIFF-WARN] skip pending too long: serial=%u timer=%u age=%u last_commit_pc=0x%08x inst=0x%08x addr=0x%08x\n",
                 g_skip_serial_pending, g_skip_timer_pending, g_skip_pending_age, dut_pc_before, dut_inst, dut_addr);
          g_skip_pending_warned = true;
        }
      }
    }
  }
#endif
}


static void init_sim() {
  top = new Vtop;
  difftest_trace = difftest_trace_enabled();
  fail_snapshot = fail_snapshot_enabled();
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
  double icache_miss_rate = ptrace_get_miss_rate();
  double dcache_miss_rate = ptrace_get_dcache_miss_rate();
  printf("======  ICache Miss Rate = %08lf =======\n", icache_miss_rate);
  printf("======  DCache Miss Rate = %08lf =======\n", dcache_miss_rate);
  uint32_t ifu_cnt = ptrace_get_i_cnt();
  uint32_t lsu_cnt = ptrace_get_d_cnt();
  uint32_t total_mem_cnt = ifu_cnt + lsu_cnt;
  printf("======   IFU Count  = %u     =======\n", ifu_cnt);
  printf("======   LSU Count  = %u     =======\n", lsu_cnt);
  printf("======    Mem Cycle Ratio = %08lf     =======\n", cnt ? (double)total_mem_cnt / cnt : 0.0);
  printf("====== Stall Count = %u     =======\n", ptrace_get_stall_cnt());
  printf("====== Flush Count = %u     =======\n", ptrace_get_flush_cnt());
  uint32_t bp_total_count = ptrace_get_bp_total_count();
  uint32_t bp_hit_count = ptrace_get_bp_hit_count();
  double bp_hit_rate = (bp_total_count == 0) ? 0.0 : (double)bp_hit_count / (double)bp_total_count;
  printf("====== BP Hit Rate = %08lf     =======\n", bp_hit_rate);

  if (tfp) {
    tfp->close();
    delete tfp;
    tfp = nullptr;
  }
  delete top;
  free(mem);
  return 0;
}
