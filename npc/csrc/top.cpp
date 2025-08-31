#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"
#include <iostream>
#include <cstdint>

#include <svdpi.h>
#include <stdio.h>
#include <stdlib.h>

bool sim_exit_flag = false;

// extern “C” 将函数转化为C类型函数，不然verilator链接错误
extern "C" void ebreak() {
    printf("[DPI-C] ebreak detected, simulation exit.\n");
    //exit(0);  // 直接退出仿真
    sim_exit_flag = true; // 设置退出标志
}


Vtop* top;

class InstMem {
    private:
        uint32_t mem[32];
    public:
        InstMem() {
            for (int i = 0; i < 32; i ++ )
                mem[i] = 0x00000000;
            
            mem[0] = 0x00a00093; // addi x1, x0, 10
            mem[1] = 0x01400113; // addi x2, x0, 20
            mem[2] = 0x00208193; // addi x3, x1, 2
            mem[3] = 0xffe10213; // addi x4, x2, -2
            mem[4] = 0x00000293; // addi x5, x0, 0
            mem[5] = 0x00100313; // addi x6, x0, 1
            mem[6] = 0xfff00393; // addi x7, x0, -1
            mem[7] = 0x00100073; // ebreak
        }

    // 转化为
    uint32_t read(uint32_t addr) {
        uint32_t word_addr = (addr - 0x80000000) >> 2;
        if(word_addr < 32) 
            return mem[word_addr];
        return 0;
    }
};

InstMem g_imem;

uint32_t pmem_read(uint32_t addr) {
    return g_imem.read(addr);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    top = new Vtop;
    
    VerilatedVcdC* tfp = nullptr;
    Verilated:: traceEverOn(true);
    tfp = new VerilatedVcdC;
    top -> trace(tfp, 99);
    tfp -> open("wave.vcd");
    printf("VCD trace enabled: wave.vcd\n");

    int cnt = 0;
    int maxn = 100;
    
    top -> rst = 1;
    top -> clk = 0;

    while(cnt < maxn && !sim_exit_flag) {
        top -> inst = pmem_read(top -> pc);
        top -> clk = 1;
        
        top -> eval();

        if(tfp) tfp -> dump(10 * cnt + 5);


        top -> clk = 0;
        top -> eval();

        if (tfp) tfp -> dump(10 * cnt + 10);

        if(cnt == 2) { // 在第三个周期释放复位
            top -> rst = 0;
        }

        if (!top -> rst && cnt > 2) {
            printf("Cycle %d: PC=0x%08x, Inst=0x%08x\n", 
                   cnt-2, top->pc - 0x4, top->inst);
        }
        cnt ++ ;
        
    }

    if(!sim_exit_flag)printf("\n=== Simulation completed without ebreak ===\n");


    if(tfp) {
        tfp -> close();
        delete tfp;
    }

    delete top;

    return 0;
}