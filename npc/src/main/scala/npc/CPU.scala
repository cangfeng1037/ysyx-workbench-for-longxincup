
// 写出一个伪代码

package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._
import bus.AXI_IFU_Master
import bus.AXI_MEM_Master
import bus.AXI_ARB2TO1

// 五个步骤：取指，译码，执行，访存，写回

class CPU extends Module {
    val io = IO(new Bundle {
        // 把寄存器导出给top
        val regs_out = Output(Vec(32, UInt(32.W)))
        val pc_out   = Output(UInt(32.W))
        val inst_out = Output(UInt(32.W))
    })

    val ifu = Module(new IFU())
    val idu = Module(new IDU())
    val exu = Module(new EXU())
    val mem = Module(new MEM())
    val wb  = Module(new WB())

    // 处理模块间的通信,用Decoupled接口实现总线
    ifu.io.out <> idu.io.in
    idu.io.out <> exu.io.in
    exu.io.out <> mem.io.in
    mem.io.out <> wb.io.in

    // 顶层定义寄存器堆
    val regfile = Module(new Regfile())

    // 连接寄存器堆读端口
    regfile.io.rs1_addr := idu.io.reg_rs1_addr
    regfile.io.rs2_addr := idu.io.reg_rs2_addr
    idu.io.reg_rs1_data := regfile.io.rs1_data
    idu.io.reg_rs2_data := regfile.io.rs2_data

    // 连接寄存器堆写端口
    regfile.io.rd_addr := wb.io.rd_addr
    regfile.io.rd_data := wb.io.rd_data
    regfile.io.rd_en   := wb.io.rd_en

    // 实例化总线
    val axi_ifu_master = Module(new AXI_IFU_Master())
    val axi_mem_master = Module(new AXI_MEM_Master())

    ifu.io.inst_req <> axi_ifu_master.io.inst_req
    ifu.io.inst_resp<> axi_ifu_master.io.inst_resp
    axi_ifu_master.io.flush := ifu.io.flush

    mem.io.mem_req  <> axi_mem_master.io.mem_req
    mem.io.mem_resp <> axi_mem_master.io.mem_resp

    // 实例化SRAM模块
    val DSRAM = Module(new DSRAM())
    val ISRAM = Module(new ISRAM())

    // 实例化仲裁器
    val axi_arbiter = Module(new AXI_ARB2TO1())
    
    // 连接AXI主接口到仲裁器
    axi_arbiter.io.i_master <> axi_ifu_master.io.I_bus
    axi_arbiter.io.m_master <> axi_mem_master.io.M_bus
    

    // 实例化选择器
    val slave_selector = Module(new bus.slaveSel())
    slave_selector.io.slave_in <> axi_arbiter.io.slave
    slave_selector.io.is_inst := axi_arbiter.io.is_inst

    DSRAM.io.M_bus <> slave_selector.io.slave_m
    ISRAM.io.I_bus <> slave_selector.io.slave_i


    // 连接分支和跳转反馈到IFU
    ifu.io.in <> exu.io.branch
    
    // 实例化CSR寄存器
    val csr = Module(new CSR())

    // 连接CSR寄存器读接口
    csr.io.csr_raddr := idu.io.csr_raddr
    idu.io.csr_rdata := csr.io.csr_rdata
    csr.io.is_ecall  := idu.io.is_ecall
    csr.io.is_mret   := idu.io.is_mret

    // 连接CSR寄存器写接口
    csr.io.csr_waddr := wb.io.csr_waddr
    csr.io.csr_wdata := wb.io.csr_wdata
    csr.io.csr_wen   := wb.io.csr_wen

    // 导出寄存器堆的值到顶层IO
    io.regs_out := regfile.io.regs_out
    io.pc_out   := ifu.io.out.bits.pc
    io.inst_out := ifu.io.out.bits.inst

    val busy = RegInit(false.B)
    idu.io.busy := busy

    when(idu.io.in.fire) { busy := true.B }
    when(wb.io.commit) { busy := false.B }

    
}
