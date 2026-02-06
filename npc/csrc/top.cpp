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
int cnt = 0;
int maxn = 1000000000;

VysyxSoCFull* top;
VerilatedVcdC* tfp = NULL;
static vluint64_t sim_time = 0;


const uint32_t START_ADDR = 0x20000000;

uint8_t* mem = NULL;

static svScope regfile_scope = nullptr;

static uint32_t cache_addr = 0;
static uint32_t cache_data = 0;

static inline uint64_t time_get_us() {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);  // 或 CLOCK_REALTIME
    return (uint64_t)ts.tv_sec * 1000000ull + (uint64_t)(ts.tv_nsec / 1000ull);
}


// extern “C” 将函数转化为C类型函数，不然verilator链接错误
extern "C" void ebreak() {
    printf("[DPI-C] ebreak detected, simulation exit.\n");
    //exit(0);  
    sim_exit_flag = true; // 设置退出标志
}

extern "C" uint32_t pmem_read_inst(uint32_t pc);

extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }

const int mrom_start_addr = 0x20000000;

extern "C" void mrom_read(int32_t addr, int32_t *data) { 
    // 目前读到mrom区域时，返回ebreak指令
    // 根据addr读mem中的地址，数据作为*data
    //printf("mrom_read addr: 0x%08x, data 0x%08x\n", addr - mrom_start_addr, mem[addr - mrom_start_addr]);
    
    
    *data = pmem_read_inst(addr);
}

// extern "C" uint32_t rf_read(uint32_t idx);

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
        //printf("timelow: %u\n", time_low);
        return time_low;
    } else if(raddr == TIMER_ADDR + 4) {
        g_skip_ref_next = true;
        uint32_t time_high = (uint32_t)((time_us >> 32) & 0xffffffff);
        current_circle = cnt;
        //printf("timehigh: %u\n", time_high);
        return time_high;
    }

    if(current_circle == cnt) {
        //printf("reuse : cache cache_data: %ld\n", cache_data);
        return cache_data;
    }   
   
 
    uint32_t addr = (uint32_t) raddr;
    
    
        if(addr == cache_addr) 
        return cache_data;
    

    addr -= START_ADDR;
    if(addr >= MAX_SIZE || addr + 3 >= MAX_SIZE) {    

        //printf("P READ Error: PMEM read out of range: addr=0x%08x, addr + START_ADDR=0x%08x, cache data = %08x\n", addr, addr + START_ADDR, cache_data);
        return cache_data;
    }

    // 把低2位清零，保证地址4字节对齐
    // 如0x8000，当传入地址为0x8001时，将1清零，以保证四字节对齐，返回依然是0x8000 ～ 0x8003四字节
    
    uint32_t base = addr & ~0x3u;
    // 按小段序拼接32位值
    uint32_t data = (uint32_t)mem[base + 0]
                  | ((uint32_t)mem[base + 1] << 8)
                  | ((uint32_t)mem[base + 2] << 16)
                  | ((uint32_t)mem[base + 3] << 24);

    cache_addr = addr + START_ADDR;
    cache_data = data;
    current_circle = cnt;

#ifdef CONFIG_MTRACE
    //printf("MEM read: addr=0x%08x, data=0x%08x\n", addr, data);
#endif
    return data;
}

extern "C" void pmem_write(int waddr, int wdata, int wmask) {
    
    if(waddr == SERIAL_ADDR) {
        g_skip_ref_next = true;
        putchar((char)wdata);
        fflush(stdout);
        return;
    }

    //bool trace;
    cache_addr = 0x7fffffff;

    uint32_t addr = (uint32_t) waddr;

    if(addr <= START_ADDR) {;}
    else if(addr >= START_ADDR && addr < START_ADDR + MAX_SIZE) {
        
        addr -= START_ADDR;
        //if(trace) printf("\n2:: addr:0x%08x\n", addr);
    }
    else {
        printf("P WRITE Error: PMEM write out of range: addr=0x%08x\n", addr);
        assert(0);
    }
    //if(addr == 0x00000260 || addr == 0x80000260) {printf("\n\n\nHERE WRITE:0x260 addr = 0x%08x waddr = 0x%08x \n\n\n\n", addr, waddr);}
    // 把低2位清零，保证地址4字节对齐
    uint32_t base = addr & ~0x3u;

#ifdef CONFIG_MTRACE
    //printf("MEM write: addr=0x%08x, wdata=0x%08x, wmask=0x%01x\n", addr, wdata, wmask);
#endif

    if (wmask & 0x1) mem[base + 0] = (uint8_t)(wdata & 0xff);
    if (wmask & 0x2) mem[base + 1] = (uint8_t)((wdata >> 8) & 0xff);
    if (wmask & 0x4) mem[base + 2] = (uint8_t)((wdata >> 16) & 0xff);
    if (wmask & 0x8) mem[base + 3] = (uint8_t)((wdata >> 24) & 0xff);
}


/*
static void init_dpi_scope() {
    regfile_scope = svGetScopeFromName("TOP.top.cpu.regfile");
    if (!regfile_scope) {
        fprintf(stderr, "Error: DPI scope 'TOP.top.cpu.regfile' not found. 请检查实例名与层次路径。\n");
        // 可在此打印或查看 obj_dir/Vtop__Syms.h 中的实例层次来确认
    }
}

static inline void ensure_regfile_scope() {
    if (!regfile_scope) init_dpi_scope();
    if (regfile_scope) svSetScope(regfile_scope);
}

//InstMem g_imem;
*/


static inline uint32_t rf_read(int idx) {
    /*
    switch (idx) {
        case 0: return 0;
        case 1: return top -> io_gpr_1;
        case 2: return top -> io_gpr_2;
        case 3: return top -> io_gpr_3;
        case 4: return top -> io_gpr_4;
        case 5: return top -> io_gpr_5;
        case 6: return top -> io_gpr_6;
        case 7: return top -> io_gpr_7;
        case 8: return top -> io_gpr_8;
        case 9: return top -> io_gpr_9;
        case 10: return top -> io_gpr_10;
        case 11: return top -> io_gpr_11;
        case 12: return top -> io_gpr_12;
        case 13: return top -> io_gpr_13;
        case 14: return top -> io_gpr_14;
        case 15: return top -> io_gpr_15;
        case 16: return top -> io_gpr_16;
        case 17: return top -> io_gpr_17;
        case 18: return top -> io_gpr_18;
        case 19: return top -> io_gpr_19;
        case 20: return top -> io_gpr_20;
        case 21: return top -> io_gpr_21;
        case 22: return top -> io_gpr_22;
        case 23: return top -> io_gpr_23;
        case 24: return top -> io_gpr_24;
        case 25: return top -> io_gpr_25;
        case 26: return top -> io_gpr_26;
        case 27: return top -> io_gpr_27;
        case 28: return top -> io_gpr_28;
        case 29: return top -> io_gpr_29;
        case 30: return top -> io_gpr_30;
        case 31: return top -> io_gpr_31;
        default: 
            printf("rf_read: invalid register index %d\n", idx);
            return 0;
    }

    */
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

    if(img_file == NULL) return;

    mem = (uint8_t*)malloc(MAX_SIZE);

    if(mem == NULL) {
        printf("Error: cannot allocate memory\n");
        exit(-1);
    }

    
    FILE* fp = fopen(img_file, "rb");
    if(fp == NULL) {
        printf("Error: cannot open image file '%s'\n", img_file);
        exit(-1);
    }

    n = fread(mem, 1, MAX_SIZE, fp);

    // 把mem打印出来
    printf("Memory content:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", mem[i]);
        if ((i + 1) % 16 == 0) printf("\n");
    }
    printf("\n");

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

    //printf("pmem_read_inst: pc=0x%08x, inst=0x%08x\n", pc, inst);

    return inst;
}

void eval() {
    // 组合阶段
    top -> clock = 0;
    top -> eval();
    if(tfp) tfp -> dump(sim_time ++);

    // 上升沿：写回，更新pc
    top -> clock = 1;
    top -> eval();
    if (tfp) tfp -> dump(sim_time ++);

    // 日志在时序稳定后读取输出指令
    //printf("Inst 0x%08x at pc = 0x%08x, cycle = %d\n", top->io_inst, top->io_pc, cnt);

    //printf("\n========circle %d=========\n", cnt);
    
    if(cnt == 20) { // 在第三个周期释放复位
        top -> reset = 0;
    }

    cnt ++ ;
#ifdef CONFIG_DIFFTEST
    // difftest 根据多周期 CPU 修改，仅在difftest_valid有效时才进行对比，使用difftest_pc
    if (!sim_exit_flag && cnt > 3) { // 复位后开始差分测试

        if (g_skip_ref_next) {
            CPU_state dut_s;
            for (int i = 0; i < 32; i ++ ) dut_s.gpr[i] = rf_read(i);
            dut_s.pc = top -> io_pc;
            difftest_sync(dut_s.gpr, dut_s.pc);
            difftest_skip();
            g_skip_ref_next = false;
        }

        if (top -> io_difftest_valid) {
            difftest_step(1);
        
            CPU_state dut_s;
            for (int i = 0; i < 32; i ++ ) dut_s.gpr[i] = rf_read(i);
            dut_s.pc = top -> io_pc;
            bool check = difftest_check_reg(dut_s.gpr, dut_s.pc);
            if (!check) {
                printf("Difftest failed at cycle %d, pc = 0x%08x\n, inst = 0x%08x\n", cnt, dut_s.pc, top->io_inst);
                if(top -> io_non_inst) {
                    printf("The non-inst instruction detected! : inst = 0x%08x\n, pc = 0x%08x\n", top->io_inst, top->io_pc);
                }
                exit(1);
            } else {
                //printf("Difftest passed at cycle %d, pc = 0x%08x\n", cnt, dut_s.pc - 4);
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
    tfp->open("wave.vcd");
    top -> reset = 1;
    top -> clock = 0;
    //top -> pc = START_ADDR;
    top -> eval();          // 让 pc 输出 0x80000000
    
    top->clock = 1;
    top->eval();          // 同步复位：pc <= 0x80000000

    top->clock = 0;
    top->eval();

    //init_dpi_scope();
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
           // printf("0x%08lx: ", START_ADDR + i);
        }
        printf("%02x ", mem[i]);
    }
    printf("\n");
    //fflush(stdout);  // 强制刷新输出
}

void cmd_r() {

    for (int i = 0; i < 31; i++) {
        uint32_t val = rf_read(i);
        printf("x%02d: 0x%08x\n", i, val);
    }
    printf("Register read not available (rf_read DPI-C function not defined)\n");
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
                const char* p = cmd.c_str() + 2;   // 跳过"si"
                while (*p == ' ' || *p == '\t') p++; // 跳过空白
                if (*p != '\0') num = atoi(p);      // 无参数则保持为1
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

int main(int argc, char** argv) {

    // 去除帧缓冲
    setvbuf(stdout, NULL, _IONBF, 0);
    
    Verilated::commandArgs(argc, argv);
    signal(SIGINT, handle_sigint);
    
    parse_args(argc, argv);

    load_img();

    init_sim();

#ifdef CONFIG_DIFFTEST
    difftest_init(START_ADDR, mem, n);
#endif
    sdb_mainloop();

    if(!sim_exit_flag)printf("\n=== Simulation completed without ebreak ===\n");

    uint32_t halt_ret = 0;
    if (!sim_exit_flag) {
        printf("\n=== Simulation completed without ebreak ===\n");
    } else if (halt_ret == 0) {
        printf("\033[1;32m===== HIT GOOD TRAP =====\033[0m\n");
    } else {
        printf("\033[1;31m===== HIT BAD TRAP =====\033[0m\n");
    }

    // 结束时输出周期数
    printf("====== Total cycles = %d =======\n", cnt);
    
    delete top;

    free(mem);
    
    return 0;
}