// IF2负责从ICache接收指令
package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class IF2ID extends Bundle {
    val pc    = UInt(32.W)
    val inst  = UInt(32.W)
}

class ICacheFetchResp extends Bundle {
    val inst = UInt(32.W)
    val pc   = UInt(32.W)
    val miss = Bool()
}

class IFU2 extends Module {
    val io = IO(new Bundle {
        val in = Flipped(Decoupled(new IF12IF2))
        val out = Decoupled(new IF2ID)

        val inst_resp = Flipped(Decoupled(new ICacheFetchResp))
        val stall = Input(Bool())
        val flush = Input(Bool())

        val i_cnt = Output(UInt(32.W)) // 性能计数器：记录取指访存周期总数
    })

    // 性能计数器：记录访存周期数（从请求发出到收到响应）
    val waiting = RegInit(false.B)
    val wait_pc_reg = RegInit(0.U(32.W))
    val i_cnt = RegInit(0.U(32.W))
    when(io.flush) {
      waiting := false.B
    }.elsewhen(io.in.fire) {
      waiting := true.B
      wait_pc_reg := io.in.bits.pc
    }.elsewhen(io.inst_resp.fire) {
      waiting := false.B
    }
    val perfPcInAmText = wait_pc_reg >= "ha0010000".U
    val perfPcInNpcPmem = wait_pc_reg(31, 28) === "h8".U
    when(waiting && !io.flush && (perfPcInAmText || perfPcInNpcPmem)) {
      i_cnt := i_cnt + 1.U
    }

    io.i_cnt := i_cnt

    // IFU1->IFU2 请求通道
    io.in.ready := !io.stall && !io.flush

    // 直通模式：inst_resp 直接驱动 out
    io.inst_resp.ready := io.out.ready && !io.stall && !io.flush
    io.out.valid := io.inst_resp.valid && !io.flush
    io.out.bits.pc := io.inst_resp.bits.pc
    io.out.bits.inst := io.inst_resp.bits.inst
}
