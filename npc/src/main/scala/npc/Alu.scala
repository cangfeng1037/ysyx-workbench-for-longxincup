package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

object AluOp {
    val ADD  = "b0000".U
    val SUB  = "b0001".U
    val AND  = "b0010".U
    val OR   = "b0011".U
    val XOR  = "b0100".U
    val SLL  = "b0101".U
    val SRL  = "b0110".U
    val SRA  = "b0111".U
    val MUL  = "b1000".U
    val DIV  = "b1001".U
    val DIVU = "b1010".U
    val REM  = "b1011".U // signed remainder
    val REMU = "b1100".U // unsigned remainder
    val SLT  = "b1101".U
    val SLTU = "b1110".U
}

class ALU extends Module {
    val io = IO(new Bundle {
        val a = Input(UInt(32.W))
        val b = Input(UInt(32.W))
        val aluOp = Input(UInt(4.W))
        val out = Output(UInt(32.W))
    })

    io.out := 0.U
    
    switch(io.aluOp) {
        is(AluOp.ADD)  { io.out := io.a + io.b }
        is(AluOp.SUB)  { io.out := io.a - io.b }
        is(AluOp.AND)  { io.out := io.a & io.b }
        is(AluOp.OR)   { io.out := io.a | io.b }
        is(AluOp.XOR)  { io.out := io.a ^ io.b }
        is(AluOp.SLL)  { io.out := io.a << io.b(4,0) }
        is(AluOp.SRL)  { io.out := io.a >> io.b(4,0) }
        is(AluOp.SRA)  { io.out := (io.a.asSInt >> io.b(4,0)).asUInt }
        is(AluOp.MUL)  { io.out := (io.a * io.b)(31,0) }
        is(AluOp.DIV)  { io.out := (io.a.asSInt / io.b.asSInt).asUInt }
        is(AluOp.DIVU) { io.out := io.a / io.b }
        is(AluOp.REM)  { io.out := (io.a.asSInt % io.b.asSInt).asUInt }
        is(AluOp.REMU) { io.out := io.a % io.b }
        is(AluOp.SLT)  { io.out := Mux(io.a.asSInt < io.b.asSInt, 1.U, 0.U) }
        is(AluOp.SLTU) { io.out := Mux(io.a < io.b, 1.U, 0.U) }
    }
}