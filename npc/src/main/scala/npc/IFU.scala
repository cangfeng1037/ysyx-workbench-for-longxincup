package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class IF2ID extends Bundle {
    val pc    = UInt(32.W)
    val inst  = UInt(32.W)
}

class IFU extends Module {
    val io = IO(new Bundle{
        val out = Decoupled(new IF2ID)
        val in  = new Bundle{
            // EXU来的分支和跳转
            val pc_branch = Input(UInt(32.W))
            val pc_jal    = Input(UInt(32.W))
            val pc_jalr   = Input(UInt(32.W))
            val is_branch_taken = Input(Bool())
            val is_jal   = Input(Bool())
            val is_jalr  = Input(Bool())
            val is_ecall = Input(Bool())
            val is_mret  = Input(Bool())
            val pc_csr   = Input(UInt(32.W)) 
        }

        // 往顶层传PC，从顶层传inst
        val pc_out = Output(UInt(32.W))
        val inst_in = Input(UInt(32.W))
    })

    val pc = RegInit("h80000000".U(32.W))

    io.pc_out := pc 
    io.out.valid := true.B
    io.out.bits.pc := pc
    // 利用DPIC和黑盒机制实现指令储存器
    io.out.bits.inst := io.inst_in

    /*
    printf("IFU: pc=0x%x, inst=0x%x, valid=%d, ready=%d, fire=%d\n", 
        pc, io.inst_in, io.out.valid, io.out.ready, io.out.fire)
    */

    when (io.out.fire) {
        val pc_next = MuxCase(pc + 4.U, Seq(
            io.in.is_jal    -> io.in.pc_jal,
            io.in.is_jalr   -> io.in.pc_jalr,
            io.in.is_branch_taken -> io.in.pc_branch,
            io.in.is_ecall -> io.in.pc_csr,
            io.in.is_mret  -> io.in.pc_csr
        ))
        pc := pc_next
        //printf("PC updated: 0x%x -> 0x%x\n", pc, pc_next)
    }
}


