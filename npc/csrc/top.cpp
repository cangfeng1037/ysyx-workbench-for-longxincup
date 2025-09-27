#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"
#include <iostream>
#include <cstdint>
#include <string.h>

#include <svdpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

#define MAX_SIZE (1024 * 1024 * 4) // 定义最大内存4MB

using namespace std;

bool sim_exit_flag = false;

// extern “C” 将函数转化为C类型函数，不然verilator链接错误
extern "C" void ebreak() {
    printf("[DPI-C] ebreak detected, simulation exit.\n");
    //exit(0);  
    sim_exit_flag = true; // 设置退出标志
}

extern "C" uint32_t rf_read(uint32_t idx);

char* img_file = NULL;
int cnt = 0;
int maxn = 1000;

Vtop* top;
VerilatedVcdC* tfp = NULL;


const uint32_t START_ADDR = 0x80000000;

uint8_t* mem = NULL;

static svScope regfile_scope = nullptr;

static void init_dpi_scope() {
    regfile_scope = svGetScopeFromName("TOP.top.cpu.regfile");
}

//InstMem g_imem;


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
    if(n == 0) {
        printf("Error: cannot read image file '%s'\n", img_file);
        exit(-1);
    }

    fclose(fp);
    printf("Loaded image file '%s', %lu bytes\n", img_file, n);
}

uint32_t pmem_read_inst(uint32_t pc) {
    uint32_t addr = pc - START_ADDR;
    if(addr >= MAX_SIZE){
        printf("pc = %08x\n", pc);
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

void eval() {
    top -> inst = pmem_read_inst(top -> pc);
    top -> clk = 1;
    
    printf("Inst 0x%08x at pc = 0x%08x\n", top->inst, top->pc);
    top -> eval();

    if(tfp) tfp -> dump(10 * cnt + 5);

    top -> clk = 0;
    top -> eval();

    if (tfp) tfp -> dump(10 * cnt + 10);

    if(cnt == 2) { // 在第三个周期释放复位
        top -> rst = 0;
    }

    cnt ++ ;
}

void init_sim() {

    top = new Vtop;
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("wave.vcd");
    

    top -> rst = 1;
    top -> clk = 0;
    //top -> pc = START_ADDR;
    top -> eval();          // 让 pc 输出 0x80000000
    
    top->clk = 1;
    top->eval();          // 同步复位：pc <= 0x80000000

    top->clk = 0;
    top->eval();

    init_dpi_scope();
}

void cmd_c() {
    while (!sim_exit_flag && cnt < maxn) {
        eval();
    }
}

void cmd_si() {
    if (!sim_exit_flag && cnt < maxn) eval();
    
}

void cmd_m() {
    for (size_t i = 0; i < n && i < 128; i++) {
        if (i % 16 == 0) {
            if (i != 0) printf("\n");
            printf("0x%08lx: ", START_ADDR + i);
        }
        printf("%02x ", mem[i]);
    }
    printf("\n");
}

void cmd_r() {
    svSetScope(regfile_scope);
    printf("\nRegister state:\n");
    for (int i = 0; i < 16; i++) {
        uint32_t val = rf_read(i);
        printf("x%02d: 0x%08x\n", i, val);
    }
}

void sdb_mainloop() {
    string cmd;

    while(true) {
        printf("\n\033[1;34m(npc.sdb)\033[0m ");
        if(!getline(cin, cmd)) break;
        if(cmd == "c") {
            cmd_c();
            break;
        } else if(cmd == "si") {
            cmd_si();
            if(sim_exit_flag) break;
        } else if(cmd == "q") {
            printf("Exit NEMU\n");
            break;
        } else if(cmd == "help") {
            printf("c - continue the execution of the program\n");
            printf("si - step one instruction\n");
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
    Verilated::commandArgs(argc, argv);
    
    parse_args(argc, argv);

    load_img();

    init_sim();

    sdb_mainloop();

    if(!sim_exit_flag)printf("\n=== Simulation completed without ebreak ===\n");

    uint32_t halt_ret = top -> halt_ret;
    if (!sim_exit_flag) {
        printf("\n=== Simulation completed without ebreak ===\n");
    } else if (halt_ret == 0) {
        printf("\033[1;32m===== HIT GOOD TRAP =====\033[0m\n");
    } else {
        printf("\033[1;31m===== HIT BAD TRAP =====\033[0m\n");
    }

    delete top;

    free(mem);
    
    return 0;
}