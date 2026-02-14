/*
package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class ImemBlackBox extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val clock     = Input(Clock())
    val reset     = Input(Bool())
    val pc_valid  = Input(Bool())
    val pc        = Input(UInt(32.W))
    val inst_valid= Output(Bool())
    val inst      = Output(UInt(32.W))
  })
  addResource("/vsrc/Inst_fetch.v")
}

// 改AXI总线
class ISRAM extends Module {
  val io = IO(new Bundle {
    val I_bus = new bus.AxiLiteSlaveIO()
  })

  // 需要接AR（ARADDR，ARVALID，ARREADY）
  // 和R（RDATA，RRESP，RVALID，RREADY）信号

  val imem = Module(new ImemBlackBox())
  imem.io.clock := clock
  imem.io.reset := reset

  // 状态机
  val sIdle :: sWaitValid :: sResp :: Nil = Enum(3)
  val state = RegInit(sIdle)

  // 锁存 PC 和指令
  val pc_lat    = RegInit(0.U(32.W))
  val mem_inst  = RegInit(0.U(32.W))

  // 默认值
  io.I_bus.AWREADY := false.B
  io.I_bus.WREADY   := false.B
  io.I_bus.BVALID   := false.B
  io.I_bus.BRESP    := 0.U

  io.I_bus.ARREADY := false.B
  io.I_bus.RVALID := false.B
  io.I_bus.RDATA  := mem_inst
  io.I_bus.RRESP  := 0.U

  // pc_valid 只打一拍
  val req_pc = WireDefault(pc_lat)
  val pc_valid_pulse = WireDefault(false.B)
  imem.io.pc       := req_pc
  imem.io.pc_valid := pc_valid_pulse


  switch(state) {
    is(sIdle) {
      io.I_bus.ARREADY := true.B
      when(io.I_bus.ARVALID &&  io.I_bus.ARREADY) {
        req_pc          := io.I_bus.ARADDR    // 当拍直接驱动黑盒
        pc_lat          := io.I_bus.ARADDR    // 同时锁存
        pc_valid_pulse  := true.B                 // 当拍发请求
        state := sWaitValid
      }
    }

    is(sWaitValid) {
      when(imem.io.inst_valid) {
        mem_inst := imem.io.inst
        state    := sResp
      }
    }

    is(sResp) {
      io.I_bus.RVALID := true.B
      when(io.I_bus.RREADY && io.I_bus.RVALID) {
        state := sIdle
      }
    }
  }
}

*/