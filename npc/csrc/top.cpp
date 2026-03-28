#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VysyxSoCFull.h"
#include <iostream>
#include <cstdint>
#include <string.h>

#include <svdpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <signal.h>
#include "device.h"
#include "difftest.h"


using namespace std;

const uint32_t MAX_SIZE = 400000000;// 定义最大内存40MB

bool sim_exit_flag = false;
char* img_file = NULL;
long long cnt = 0;
int maxn = 1000000000;
long long inst_cnt = 0;
long long cycle_cnt = 0;
 
VysyxSoCFull* top;
VerilatedVcdC* tfp = NULL;
static vluint64_t sim_time = 0;
static bool wave_started = false;
static const uint32_t WAVE_START_PC = 0xa0010000;

const uint32_t START_ADDR = 0x20000000;
const uint32_t Flash_start_addr = 0x30000000;
const uint32_t Flash_end_addr = 0x3fffffff;
const uint32_t flash_size = Flash_end_addr - Flash_start_addr + 1;

uint8_t* mem = NULL;
uint8_t* flash_mem = NULL;

static uint32_t cache_addr = 0;
static uint32_t cache_data = 0;

static inline uint64_t time_get_us() {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);  // 或 CLOCK_REALTIME
    return (uint64_t)ts.tv_sec * 1000000ull + (uint64_t)(ts.tv_nsec / 1000ull);
}

extern "C" void ebreak() {
    printf("[DPI-C] ebreak detected, simulation exit.\n");
    sim_exit_flag = true; // 设置退出标志
}

extern "C" uint32_t pmem_read_inst(uint32_t pc);

extern "C" void flash_read(int32_t addr, int32_t *data) { 
    //uint32_t offset = (uint32_t)(addr - Flash_start_addr);
    uint32_t offset = (uint32_t)(addr);
    if(offset + 3 >= flash_size) {
        printf("Flash read error: out of range\n addr = %08x\n", addr);
        assert(0);
    }

    uint32_t b0 = (uint32_t)flash_mem[offset + 0];
    uint32_t b1 = (uint32_t)flash_mem[offset + 1];
    uint32_t b2 = (uint32_t)flash_mem[offset + 2];
    uint32_t b3 = (uint32_t)flash_mem[offset + 3];

    *data = b0 | (b1 << 8) | (b2 << 16) | (b3 << 24);
}

const int mrom_start_addr = 0x20000000;

extern "C" void mrom_read(int32_t addr, int32_t *data) { 
    *data = pmem_read_inst(addr);
}

int current_circle = 0;
static bool g_skip_ref_next = false; 

static void handle_sigint(int) {
    if (tfp) {
        tfp->close();
    }
    fflush(stdout);
    exit(130);
}

extern "C" int pmem_read(int raddr) {

    uint64_t time_us = time_get_us();

    if(raddr == TIMER_ADDR) {
        g_skip_ref_next = true;
        uint32_t time_low = (uint32_t)(time_us & 0xffffffff);
        current_circle = cnt;
        return time_low;
    } else if(raddr == TIMER_ADDR + 4) {
        g_skip_ref_next = true;
        uint32_t time_high = (uint32_t)((time_us >> 32) & 0xffffffff);
        current_circle = cnt;
        return time_high;
    }

    if(current_circle == cnt) {
        return cache_data;
    }   
   
    uint32_t addr = (uint32_t) raddr;

    if(addr == cache_addr) 
        return cache_data;

    addr -= START_ADDR;
    if(addr >= MAX_SIZE || addr + 3 >= MAX_SIZE) {    
        return cache_data;
    }

    uint32_t base = addr & ~0x3u;
    uint32_t data = (uint32_t)mem[base + 0]
                  | ((uint32_t)mem[base + 1] << 8)
                  | ((uint32_t)mem[base + 2] << 16)
                  | ((uint32_t)mem[base + 3] << 24);

    cache_addr = addr + START_ADDR;
    cache_data = data;
    current_circle = cnt;

    return data;
}

extern "C" void pmem_write(int waddr, int wdata, int wmask) {
    
    if(waddr == SERIAL_ADDR) {
        g_skip_ref_next = true;
        putchar((char)wdata);
        fflush(stdout);
        return;
    }

    cache_addr = 0x7fffffff;

    uint32_t addr = (uint32_t) waddr;

    if(addr <= START_ADDR) {;}
    else if(addr >= START_ADDR && addr < START_ADDR + MAX_SIZE) {
        addr -= START_ADDR;
    }
    else {
        printf("P WRITE Error: PMEM write out of range: addr=0x%08x\n", addr);
        assert(0);
    }

    uint32_t base = addr & ~0x3u;

    if (wmask & 0x1) mem[base + 0] = (uint8_t)(wdata & 0xff);
    if (wmask & 0x2) mem[base + 1] = (uint8_t)((wdata >> 8) & 0xff);
    if (wmask & 0x4) mem[base + 2] = (uint8_t)((wdata >> 16) & 0xff);
    if (wmask & 0x8) mem[base + 3] = (uint8_t)((wdata >> 24) & 0xff);
}

// ---------------- DPI 导出函数声明 ----------------
// 这些函数由 top.scala 里的 DifftestDPI 模块 export 出来
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
extern "C" int get_gpr(int idx);

// 注意：这里需要设置 DPI scope 到 DifftestDPI 模块实例
static const char* DPI_SCOPE_NAME = "TOP.ysyxSoCFull.asic.cpu.cpu.difftest_dpi";

static svScope dpi_scope = nullptr;

static inline void set_dpi_scope() {
    if (!dpi_scope) {
        dpi_scope = svGetScopeFromName(DPI_SCOPE_NAME);
        if (!dpi_scope) {
            fprintf(stderr, "DPI scope not found: %s\n", DPI_SCOPE_NAME);
        }
    }
    if (dpi_scope) {
        svSetScope(dpi_scope);
    }
}

static inline uint32_t rf_read(int idx) {
    if (idx == 0) return 0;
    set_dpi_scope();
    if (idx < 0 || idx > 31) {
        printf("rf_read: invalid register index %d\n", idx);
        return 0;
    }
    return (uint32_t)get_gpr(idx);
}

static void parse_args(int argc, char** argv) {
    for (int i = 1; i < argc; i++) {
        if(0) {}
        else {
            img_file = argv[i];
            printf("Image file: %s\n", img_file);
        }
    }
}

size_t n = 0;

static void load_img() {
    // 修改为load到flash中

    if(img_file == NULL) return;

    //mem = (uint8_t*)malloc(MAX_SIZE);
    //flash_mem = (uint8_t*)malloc(flash_size);

    if(flash_mem == NULL) {
        printf("Error: cannot allocate flash memory\n");
        exit(-1);
    }

    FILE* fp = fopen(img_file, "rb");
    if(fp == NULL) {
        printf("Error: cannot open image file '%s'\n", img_file);
        exit(-1);
    }

    //n = fread(mem, 1, MAX_SIZE, fp);
    n = fread(flash_mem, 1, flash_size, fp);

    if(n == 0) {
        printf("Error: cannot read image file '%s'\n", img_file);
        exit(-1);
    }

    fclose(fp);
    printf("Loaded image file '%s', %lu bytes\n", img_file, n);
}

uint32_t pmem_read_inst(uint32_t pc) {
    uint32_t addr = pc - mrom_start_addr;
    if(addr >= MAX_SIZE){
        printf("Pmem_read_inst error: out of range\n pc = %08x\n", pc);
        printf("addr = %08x\n", addr);
        assert(0);
    }

    if(addr >= MAX_SIZE || addr + 3 >= MAX_SIZE) {
        printf("Error: PC out of range: pc=0x%08x, addr=0x%08x\n", pc, addr);
        assert(0);
    }

    uint32_t b0 = (uint32_t)mem[addr + 0];
    uint32_t b1 = (uint32_t)mem[addr + 1];
    uint32_t b2 = (uint32_t)mem[addr + 2];
    uint32_t b3 = (uint32_t)mem[addr + 3];

    uint32_t inst = b0 | (b1 << 8) | (b2 << 16) | (b3 << 24);

    return inst;
}

uint32_t difftest_get_pc() {
    set_dpi_scope();
    return (uint32_t)get_pc();
}

uint32_t difftest_get_inst() {
    set_dpi_scope();
    return (uint32_t)get_inst();
}

uint32_t difftest_get_difftest_valid() {
    set_dpi_scope();
    return (uint32_t)get_difftest_valid();
}

uint32_t difftest_get_non_inst() {
    set_dpi_scope();
    return (uint32_t)get_non_inst();
}

double ptrace_get_miss_rate() {
    set_dpi_scope();
    uint32_t hit = get_hit_count();
    uint32_t miss = get_miss_count();
    uint32_t total = hit + miss;
    return total == 0 ? 0.0 : (double)miss / (double)total;
}

double ptrace_get_dcache_miss_rate() {
    set_dpi_scope();
    uint32_t hit = get_dcache_hit_count();
    uint32_t miss = get_dcache_miss_count();
    uint32_t total = hit + miss;
    return total == 0 ? 0.0 : (double)miss / (double)total;
}

uint32_t ptrace_get_i_cnt() {
    set_dpi_scope();
    return (uint32_t)get_i_cnt();
}

uint32_t ptrace_get_d_cnt() {
    set_dpi_scope();
    return (uint32_t)get_d_cnt();
}

uint32_t ptrace_get_stall_cnt() {
    set_dpi_scope();
    return (uint32_t)get_stall_cnt();
}

uint32_t ptrace_get_flush_cnt() {
    set_dpi_scope();
    return (uint32_t)get_flush_cnt();
}

static inline void start_wave_recording() {
    if (tfp && !wave_started) {
        wave_started = true;
        sim_time = 0;
        printf("[Wave] Recording started at cycle %lld\n", cnt);
    }
}

void eval() {
    // 组合阶段
    top -> clock = 0;
    top -> eval();
    if(tfp && wave_started) tfp -> dump(sim_time ++);

    // 上升沿：写回，更新pc
    top -> clock = 1;
    top -> eval();
    if (tfp && wave_started) tfp -> dump(sim_time ++);

    if(cnt == 20) {
        top -> reset = 0;
    }

    // 检查是否需要开始波形记录
    if (!wave_started && difftest_get_difftest_valid() && difftest_get_pc() >= WAVE_START_PC) {
        start_wave_recording();
    }

    // 打印具体的指令信息

    if(difftest_get_difftest_valid()) {
        if(difftest_get_pc() >= 0xa0010000)
        {
            inst_cnt ++ ;
            //printf("Cycle %lld: PC = 0x%08x, inst = 0x%08x\n", cnt, difftest_get_pc(), difftest_get_inst());
        }
    }

    //if(difftest_get_pc() == 0xa00155b0) printf("before putch a0 reg= %08x\n", rf_read(10));

    if(difftest_get_pc() >= 0xa0010000) cycle_cnt ++ ;
    cnt ++ ;
#ifdef CONFIG_DIFFTEST
    if (!sim_exit_flag && cnt > 3) {

        if (g_skip_ref_next) {
            CPU_state dut_s;
            for (int i = 0; i < 32; i ++ ) dut_s.gpr[i] = rf_read(i);
            dut_s.pc = difftest_get_pc();
            difftest_sync(dut_s.gpr, dut_s.pc);
            difftest_skip();
            g_skip_ref_next = false;
        }

        if (difftest_get_difftest_valid()) {
            difftest_step(1);
        
            CPU_state dut_s;
            for (int i = 0; i < 32; i ++ ) dut_s.gpr[i] = rf_read(i);
            dut_s.pc = difftest_get_pc();
            uint32_t difftest_inst = difftest_get_inst();
            bool check = difftest_check_reg(dut_s.gpr, dut_s.pc);
            if (!check) {
                printf("Difftest failed at cycle %d, pc = 0x%08x\n, inst = 0x%08x\n", cnt, dut_s.pc, difftest_inst);
                if(difftest_get_non_inst()) {
                    printf("The non-inst instruction detected! : inst = 0x%08x\n, pc = 0x%08x\n", difftest_inst, dut_s.pc);
                }
                exit(1);
            }
            else {
                //printf("Difftest passed at cycle %d, pc = 0x%08x, inst = 0x%08x\n", cnt, dut_s.pc, difftest_inst);
            }
        }
    } 
#endif
}

void init_sim() {

    top = new VysyxSoCFull;
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);

#ifndef CONFIG_WAVE
    tfp->open("wave.vcd");
#endif


    top -> reset = 1;
    top -> clock = 0;
    top -> eval();
    
    top->clock = 1;
    top->eval();

    top->clock = 0;
    top->eval();
}

void cmd_c() {
    while (!sim_exit_flag) {
        eval();
    }
}

void cmd_si(int n) {
    if (n < 1) n = 1;
    while(n -- > 0 && !sim_exit_flag && cnt < maxn) eval();
}

void cmd_m() {
    for (int i = 0;  i < MAX_SIZE; i ++ ) {
        if (i % 16 == 0) {
            if (i != 0) printf("\n");
        }
        printf("%02x ", mem[i]);
    }
    printf("\n");
}

void cmd_r() {
    printf("pc: 0x%08x\n", difftest_get_pc());
    for (int i = 0; i < 32; i++) {
        uint32_t val = rf_read(i);
        printf("x%02d: 0x%08x\n", i, val);
    }
}

void sdb_mainloop() {
    string cmd;

    while(true) {
        printf("\n\033[1;34m(npc.sdb)\033[0m ");
#ifdef CONFIG_PATCH
        if(!getline(cin, cmd)) break;
#else   
        cmd = "c";
#endif
        if(cmd == "c") {
            cmd_c();
            break;
        } else if(cmd[0] == 's' && cmd[1] == 'i' && cmd.size() >= 2) {
            char num_str[16];
            int num = 1;
            if (cmd.size() > 2) {
                const char* p = cmd.c_str() + 2;
                while (*p == ' ' || *p == '\t') p++;
                if (*p != '\0') num = atoi(p);
            }
            cmd_si(num);
            if(sim_exit_flag) break;
        } else if(cmd == "q") {
            printf("Exit NEMU\n");
            break;
        } else if(cmd == "help") {
            printf("c - continue the execution of the program\n");
            printf("si [N] - step N instruction\n");
            printf("q - exit NEMU\n");
            printf("help - display this information\n");
        } else if(cmd == "m") {
            cmd_m();
        } else if(cmd == "r") {
            cmd_r();
        } else {
            printf("Unknown command \n");
        }
    }
}

void init_flash() {
    flash_mem = (uint8_t*)malloc(flash_size);
    if(flash_mem == NULL) {
        printf("Error: cannot allocate flash memory\n");
        exit(-1);
    }
    memset(flash_mem, 0, flash_size);

}

int main(int argc, char** argv) {

    setvbuf(stdout, NULL, _IONBF, 0);
    
    Verilated::commandArgs(argc, argv);
    signal(SIGINT, handle_sigint);
    
    parse_args(argc, argv);
    
    init_flash();
    
    load_img();

    init_sim();

#ifdef CONFIG_DIFFTEST
    difftest_init(mrom_start_addr, mem, n);
#endif
    sdb_mainloop();

    if(!sim_exit_flag)printf("\n=== Simulation completed without ebreak ===\n");

    uint32_t halt_ret = 0;
    if (sim_exit_flag) {
        // AM passes program return code in a0 (x10) before ebreak.
        halt_ret = rf_read(10);
    }
    if (!sim_exit_flag) {
        printf("\n=== Simulation completed without ebreak ===\n");
    } else if (halt_ret == 0) {
        printf("\033[1;32m===== HIT GOOD TRAP =====\033[0m\n");
    } else {
        printf("halt_ret (a0/x10) = %u (0x%08x)\n", halt_ret, halt_ret);
        printf("\033[1;31m===== HIT BAD TRAP =====\033[0m\n");
    }

    printf("====== Total cycles = %lld =======\n", cycle_cnt);
    printf("======  Total inst  = %lld =======\n", inst_cnt);
    printf("======      IPC  = %08lf     =======\n", (double)inst_cnt / cycle_cnt);
    double icache_miss_rate = ptrace_get_miss_rate();
    double dcache_miss_rate = ptrace_get_dcache_miss_rate();
    printf("======  ICache Miss Rate = %08lf =======\n", icache_miss_rate);
    printf("======  DCache Miss Rate = %08lf =======\n", dcache_miss_rate);
    uint32_t ifu_cnt = ptrace_get_i_cnt();
    uint32_t lsu_cnt = ptrace_get_d_cnt();
    uint32_t total_mem_cnt = ptrace_get_i_cnt() + ptrace_get_d_cnt();
    printf("======   IFU Count  = %u     =======\n", ifu_cnt);
    printf("======   LSU Count  = %u     =======\n", lsu_cnt);
    printf("======    Mem Cycle Ratio = %08lf     =======\n", (double)total_mem_cnt / cycle_cnt);
    printf("====== Stall Count = %u     =======\n", ptrace_get_stall_cnt());
    printf("====== Flush Count = %u     =======\n", ptrace_get_flush_cnt());

    int exit_code = 0;
    if (!sim_exit_flag || halt_ret != 0) {
        exit_code = 1;
    }

    delete top;
    free(mem);

    return exit_code;
}