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
        val busy = Input(Bool())

        val inst_resp = Flipped(Decoupled(new ICacheFetchResp))
    })

    val pc_reg = RegInit(0.U(32.W))
    val inst_reg = RegInit(0.U(32.W))
    val kill_reg = RegInit(false.B)
    val resp_valid_reg = RegInit(false.B)

    // 元数据通道：记录这次返回是否应被kill
    io.in.ready := (!resp_valid_reg || io.out.ready) && !io.busy
    when(io.in.fire) {
        kill_reg := io.in.bits.kill
    }

    // 返回通道：只在输出可接收时接收新返回，避免丢拍
    io.inst_resp.ready := (!resp_valid_reg || io.out.ready) && !io.busy
    when(io.inst_resp.fire) {
        pc_reg := io.inst_resp.bits.pc
        inst_reg := io.inst_resp.bits.inst
        resp_valid_reg := !kill_reg
    }.elsewhen(io.out.fire) {
        resp_valid_reg := false.B
    }

    io.out.valid := resp_valid_reg
    io.out.bits.pc := pc_reg
    io.out.bits.inst := inst_reg
}
