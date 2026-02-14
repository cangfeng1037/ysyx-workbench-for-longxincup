// 完整的axi4总线，按照接口定义

package bus 
import chisel3._
import chisel3.util._

class Axi4MasterIO extends Bundle {
    // 写地址通道
    val awready = Input(Bool())
    val awvalid = Output(Bool())
    val awaddr  = Output(UInt(32.W))
    val awid    = Output(UInt(4.W))
    val awlen   = Output(UInt(8.W))
    val awsize  = Output(UInt(3.W))
    val awburst = Output(UInt(2.W))

    // 写数据通道
    val wready  = Input(Bool())
    val wvalid  = Output(Bool())
    val wdata   = Output(UInt(32.W))
    val wstrb   = Output(UInt(4.W))
    val wlast   = Output(Bool())

    // 写响应通道
    val bready  = Output(Bool())
    val bvalid  = Input(Bool())
    val bresp   = Input(UInt(2.W))
    val bid     = Input(UInt(4.W))

    // 读地址通道
    val arready = Input(Bool())
    val arvalid = Output(Bool())
    val araddr  = Output(UInt(32.W))
    val arid    = Output(UInt(4.W))
    val arlen   = Output(UInt(8.W))
    val arsize  = Output(UInt(3.W))
    val arburst = Output(UInt(2.W))

    // 读数据通道
    val rready  = Output(Bool())
    val rvalid  = Input(Bool())
    val rresp   = Input(UInt(2.W))
    val rdata   = Input(UInt(32.W))
    val rlast   = Input(Bool())
    val rid     = Input(UInt(4.W))
}

class Axi4SlaveIO extends Bundle {
    // 写地址通道
    val awready = Output(Bool())
    val awvalid = Input(Bool())
    val awaddr  = Input(UInt(32.W))
    val awid    = Input(UInt(4.W))
    val awlen   = Input(UInt(8.W))
    val awsize  = Input(UInt(3.W))
    val awburst = Input(UInt(2.W))

    // 写数据通道
    val wready  = Output(Bool())
    val wvalid  = Input(Bool())
    val wdata   = Input(UInt(32.W))
    val wstrb   = Input(UInt(4.W))
    val wlast   = Input(Bool())

    // 写响应通道
    val bready  = Input(Bool())
    val bvalid  = Output(Bool())
    val bresp   = Output(UInt(2.W))
    val bid     = Output(UInt(4.W))

    // 读地址通道
    val arready = Output(Bool())
    val arvalid = Input(Bool())
    val araddr  = Input(UInt(32.W))
    val arid    = Input(UInt(4.W))
    val arlen   = Input(UInt(8.W))
    val arsize  = Input(UInt(3.W))
    val arburst = Input(UInt(2.W))

    // 读数据通道
    val rready  = Input(Bool())
    val rvalid  = Output(Bool())
    val rresp   = Output(UInt(2.W))
    val rdata   = Output(UInt(32.W))
    val rlast   = Output(Bool())
    val rid     = Output(UInt(4.W))
    
}

