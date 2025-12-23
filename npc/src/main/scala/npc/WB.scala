package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._


class WB extends Module {
    val io = IO(new Bundle {
        val in = Flipped(Decoupled(new MEM2WB()))
        // 不需要给IFU，从CPU中推给Regfile的写接口
        val rd_addr = Output(UInt(5.W))
        val rd_data = Output(UInt(32.W))
        val rd_en   = Output(Bool())
        // CSR写接口
        val csr_waddr = Output(UInt(12.W))
        val csr_wdata = Output(UInt(32.W))
        val csr_wen   = Output(Bool())
    })
    //状态机
    io.in.ready := true.B

    // 连接regfile
    io.rd_addr := io.in.bits.rd_addr
    // sw不需要写使能
    io.rd_en   := io.in.bits.rd_en
    io.rd_data := MuxCase(io.in.bits.alu_result, Seq(
        // CSR read/write instructions write the *old* CSR value to rd
        (io.in.bits.is_csrrw || io.in.bits.is_csrrs) -> io.in.bits.csr_rdata,
        io.in.bits.is_load -> io.in.bits.mem_data,
        (io.in.bits.is_jal || io.in.bits.is_jalr) -> (io.in.bits.pc + 4.U)
    )) // 所有load指令都已经在MEM阶段处理好了

    // 连接CSR写端口
    io.csr_waddr := io.in.bits.csr_waddr
    io.csr_wdata := io.in.bits.csr_wdata
    io.csr_wen   := io.in.bits.csr_wen
}
