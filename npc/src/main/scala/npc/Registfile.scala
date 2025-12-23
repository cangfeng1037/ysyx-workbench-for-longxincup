package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class Regfile extends Module {
    val io = IO(new Bundle {
        val rs1_addr = Input(UInt(5.W))
        val rs2_addr = Input(UInt(5.W))
        val rd_addr  = Input(UInt(5.W))
        val rd_data  = Input(UInt(32.W))
        val rd_en    = Input(Bool())
        val rs1_data = Output(UInt(32.W))
        val rs2_data = Output(UInt(32.W))

        val regs_out  = Output(Vec(32, UInt(32.W)))
    })

    val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

    // 同步写
    when (io.rd_en && (io.rd_addr =/= 0.U)) {
        regs(io.rd_addr) := io.rd_data
    }

    // 异步读
    io.rs1_data := Mux(io.rs1_addr === 0.U, 0.U, regs(io.rs1_addr))
    io.rs2_data := Mux(io.rs2_addr === 0.U, 0.U, regs(io.rs2_addr))

    // 导出寄存器的值
    io.regs_out := regs
    io.regs_out(0) := 0.U // x0 永远是0
}