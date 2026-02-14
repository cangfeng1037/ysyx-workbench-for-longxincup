package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class CSR extends Module {
    val io = IO(new Bundle {
        val csr_raddr = Input(UInt(12.W))
        val csr_rdata = Output(UInt(32.W))
        val csr_waddr = Input(UInt(12.W))
        val csr_wdata = Input(UInt(32.W))
        val csr_wen = Input(Bool())
        
        val is_ecall  = Input(Bool())
        val is_mret   = Input(Bool())
    })

    val mtvec = RegInit(0.U(32.W))  // Machine Trap-Vector Base Address Register
    val mepc  = RegInit(0.U(32.W))  // Machine Exception
    val mcause= RegInit(0.U(32.W))  // Machine Cause Register
    val mstatus=RegInit(0.U(32.W))  // Machine Status Register
    val mvendorid = 0x79737978.U(32.W) // 'ysyx' 项目码
    val marchid   = 0x25080212.U(32.W) // 0x25080212 我的学号

    // 同步写
    when (io.is_ecall) {
        mcause := 11.U
    }

    when(io.is_mret) {
        mstatus := Cat(
            mstatus(31, 8),
            1.U(1.W),
            mstatus(6, 4),
            mstatus(7),
            mstatus(2, 0)
        )
    }

    when (io.csr_wen) {
        switch(io.csr_waddr) {
            is("h305".U) { mtvec   := io.csr_wdata }
            is("h341".U) { mepc    := io.csr_wdata }
            is("h342".U) { mcause  := io.csr_wdata }
            is("h300".U) { mstatus := io.csr_wdata }
            is("hF11".U){ /* mvendorid 只读 */ }
            is("hF12".U){ /* marchid    只读 */ }
        }
    }

    // 异步读逻辑
    // MuxLookup,io.csr_rdata是key值，0.U是default，Seq是键值对
    io.csr_rdata := MuxLookup(io.csr_raddr, 0.U)(Seq(
        "h305".U -> mtvec,
        "h341".U -> mepc,
        "h342".U -> mcause,
        "h300".U -> mstatus,
        "hF11".U -> mvendorid,
        "hF12".U -> marchid
    ))

}
