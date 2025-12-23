
// 写出一个伪代码

package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class MemBlackBox extends BlackBox with HasBlackBoxResource {
    val io = IO(new Bundle {
        val clk      = Input(Clock())
        val valid    = Input(Bool())
        val wen      = Input(Bool())
        val raddr    = Input(UInt(32.W))
        val waddr    = Input(UInt(32.W))
        val wdata    = Input(UInt(32.W))
        val wmask    = Input(UInt(4.W))
        val rdata    = Output(UInt(32.W))
    })

    addResource("/vsrc/Mem.v")
}

// 五个步骤：取指，译码，执行，访存，写回

class CPU extends Module {
    val io = IO(new Bundle {
        // 暂时没有IO接口
        val pc_out   = Output(UInt(32.W))
        val inst_in  = Input(UInt(32.W))

        // 把寄存器导出给top
        val regs_out = Output(Vec(32, UInt(32.W)))
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

    // 导出寄存器堆的值到顶层IO
    io.regs_out := regfile.io.regs_out

    // 连接分支和跳转反馈到IFU
    ifu.io.in.pc_branch := exu.io.branch.pc_branch
    ifu.io.in.pc_jal    := exu.io.branch.pc_jal
    ifu.io.in.pc_jalr   := exu.io.branch.pc_jalr
    ifu.io.in.is_branch_taken := exu.io.branch.is_branch_taken
    ifu.io.in.is_jal   := exu.io.branch.is_jal
    ifu.io.in.is_jalr  := exu.io.branch.is_jalr
    ifu.io.in.is_ecall := exu.io.branch.is_ecall
    ifu.io.in.is_mret  := exu.io.branch.is_mret
    ifu.io.in.pc_csr   := exu.io.branch.pc_csr

    // 实例化BlackBox
    val mem_blackbox = Module(new MemBlackBox())

    // 连接MEM模块到BlackBox
    mem_blackbox.io.clk   := clock
    mem_blackbox.io.valid := mem.io.mem.valid
    mem_blackbox.io.wen   := mem.io.mem.wen
    mem_blackbox.io.raddr := mem.io.mem.raddr
    mem_blackbox.io.waddr := mem.io.mem.waddr
    mem_blackbox.io.wdata := mem.io.mem.wdata
    mem_blackbox.io.wmask := mem.io.mem.wmask
    mem.io.mem.rdata      := mem_blackbox.io.rdata


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

    // 连接顶层IO
    io.pc_out := ifu.io.out.bits.pc
    ifu.io.inst_in := io.inst_in
}
