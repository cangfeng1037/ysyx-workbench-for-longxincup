// 延迟一拍写IFU
// 把黑盒机制也放到这里，连接顶层
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

class MemReq extends Bundle {
    val wen   = Bool()
    val raddr = UInt(32.W)
    val waddr = UInt(32.W)
    val wdata = UInt(32.W)
    val wmask = UInt(4.W)
}

class MemResp extends Bundle {
    val rdata = UInt(32.W)
}

// 在SRAM中实现取指和访存，实现仲裁
// IFU用is_stall的状态机
class DSRAM extends Module {
  val io = IO(new Bundle {
    // 仅 MEM 侧：req (slave)，resp (master)
    val M_bus = new bus.AxiLiteSlaveIO()
  })

  val mem_blackbox = Module(new MemBlackBox())

  // 状态机：空闲 / 读响应 / 写响应
  val s_idle :: sReadResp :: sWriteResp :: Nil = Enum(3)
  val state = RegInit(s_idle)

  // 锁存读数据
  val rdata_reg = RegInit(0.U(32.W))

  // 默认信号（只在这一处给默认，避免覆盖）
  io.M_bus.AWREADY := false.B
  io.M_bus.WREADY  := false.B
  io.M_bus.BVALID  := false.B
  io.M_bus.BRESP   := 0.U

  io.M_bus.ARREADY := false.B
  io.M_bus.RVALID  := false.B
  io.M_bus.RDATA   := rdata_reg
  io.M_bus.RRESP   := 0.U

  mem_blackbox.io.clk   := clock
  mem_blackbox.io.valid := false.B
  mem_blackbox.io.wen   := false.B
  mem_blackbox.io.raddr := 0.U
  mem_blackbox.io.waddr := 0.U
  mem_blackbox.io.wdata := 0.U
  mem_blackbox.io.wmask := 0.U

  val idle      = (state === s_idle)
  val write_req = io.M_bus.AWVALID && io.M_bus.WVALID

  // 写优先：idle 时如果有写请求，就不给 ARREADY
  io.M_bus.AWREADY := idle && write_req
  io.M_bus.WREADY  := idle && write_req
  io.M_bus.ARREADY := idle && !write_req

  val aw_fire = io.M_bus.AWVALID && io.M_bus.AWREADY
  val w_fire  = io.M_bus.WVALID  && io.M_bus.WREADY
  val ar_fire = io.M_bus.ARVALID && io.M_bus.ARREADY

  switch(state) {
    is(s_idle) {
      // 写：AW/W 同拍握手成功才算接收一次写事物
      when(aw_fire && w_fire) {
        mem_blackbox.io.valid := true.B
        mem_blackbox.io.wen   := true.B
        mem_blackbox.io.waddr := io.M_bus.AWADDR
        mem_blackbox.io.wdata := io.M_bus.WDATA
        mem_blackbox.io.wmask := io.M_bus.WSTRB

        state := sWriteResp
      }.elsewhen(ar_fire) {
        // 读：AR 握手成功，发起一次读并锁存 rdata
        mem_blackbox.io.valid := true.B
        mem_blackbox.io.wen   := false.B
        mem_blackbox.io.raddr := io.M_bus.ARADDR
        
        rdata_reg := mem_blackbox.io.rdata
        state := sReadResp
      }
    }

    is(sReadResp) {
      io.M_bus.RVALID := true.B
      when(io.M_bus.RVALID && io.M_bus.RREADY) {
        state := s_idle
      }
    }

    is(sWriteResp) {
      io.M_bus.BVALID := true.B
      io.M_bus.BRESP  := 0.U
      when(io.M_bus.BVALID && io.M_bus.BREADY) {
        state := s_idle
      }
    }
  }
}