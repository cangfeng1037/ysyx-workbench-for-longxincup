package bus

import chisel3._
import chisel3.util._

// 总线选择：将仲裁器给出的slave根据is_inst信号分配

class slaveSel extends Module {
    val io = IO(new Bundle {
        // 来自仲裁器的“下游主设备口”
        val slave_in = Flipped(new AxiLiteMasterIO())
        // 连接到具体从设备：在本模块视角需要能驱动 AW/AR/W 等，因此使用 Flipped(SlaveIO)
        val slave_m = Flipped(new AxiLiteSlaveIO())
        val slave_i = Flipped(new AxiLiteSlaveIO())
        val is_inst  = Input(Bool()) // 来自仲裁器的选择信号
    })

    val selI = io.is_inst

    // 默认：不选中的从设备不接收请求
    // AW/W/AR valid 置 0，READY 置 0，R/B 置 0
    io.slave_i.AWADDR  := 0.U; io.slave_i.AWPROT := 0.U; io.slave_i.AWVALID := false.B
    io.slave_i.WDATA   := 0.U; io.slave_i.WSTRB  := 0.U; io.slave_i.WVALID  := false.B
    io.slave_i.BREADY  := false.B
    io.slave_i.ARADDR  := 0.U; io.slave_i.ARPROT := 0.U; io.slave_i.ARVALID := false.B
    io.slave_i.RREADY  := false.B

    io.slave_m.AWADDR  := 0.U; io.slave_m.AWPROT := 0.U; io.slave_m.AWVALID := false.B
    io.slave_m.WDATA   := 0.U; io.slave_m.WSTRB  := 0.U; io.slave_m.WVALID  := false.B
    io.slave_m.BREADY  := false.B
    io.slave_m.ARADDR  := 0.U; io.slave_m.ARPROT := 0.U; io.slave_m.ARVALID := false.B
    io.slave_m.RREADY  := false.B

    when(selI) {
        // 选择ISRAM
        io.slave_i.AWADDR  := io.slave_in.AWADDR
        io.slave_i.AWPROT  := io.slave_in.AWPROT
        io.slave_i.AWVALID := io.slave_in.AWVALID

        io.slave_i.WDATA   := io.slave_in.WDATA
        io.slave_i.WSTRB   := io.slave_in.WSTRB
        io.slave_i.WVALID  := io.slave_in.WVALID

        io.slave_i.BREADY  := io.slave_in.BREADY

        io.slave_i.ARADDR  := io.slave_in.ARADDR
        io.slave_i.ARPROT  := io.slave_in.ARPROT
        io.slave_i.ARVALID := io.slave_in.ARVALID

        io.slave_i.RREADY  := io.slave_in.RREADY
    }.otherwise {
        // 选择DSRAM
        io.slave_m.AWADDR  := io.slave_in.AWADDR
        io.slave_m.AWPROT  := io.slave_in.AWPROT
        io.slave_m.AWVALID := io.slave_in.AWVALID

        io.slave_m.WDATA   := io.slave_in.WDATA
        io.slave_m.WSTRB   := io.slave_in.WSTRB
        io.slave_m.WVALID  := io.slave_in.WVALID

        io.slave_m.BREADY  := io.slave_in.BREADY

        io.slave_m.ARADDR  := io.slave_in.ARADDR
        io.slave_m.ARPROT  := io.slave_in.ARPROT
        io.slave_m.ARVALID := io.slave_in.ARVALID

        io.slave_m.RREADY  := io.slave_in.RREADY
    }

    // 把选中设备的响应返还给仲裁器
    io.slave_in.AWREADY := Mux(selI, io.slave_i.AWREADY, io.slave_m.AWREADY)
    io.slave_in.WREADY  := Mux(selI, io.slave_i.WREADY, io.slave_m.WREADY)
    
    io.slave_in.BVALID  := Mux(selI, io.slave_i.BVALID, io.slave_m.BVALID)
    io.slave_in.BRESP   := Mux(selI, io.slave_i.BRESP, io.slave_m.BRESP)
    
    io.slave_in.ARREADY := Mux(selI, io.slave_i.ARREADY, io.slave_m.ARREADY)

    io.slave_in.RDATA   := Mux(selI, io.slave_i.RDATA, io.slave_m.RDATA)
    io.slave_in.RVALID  := Mux(selI, io.slave_i.RVALID, io.slave_m.RVALID)
    io.slave_in.RRESP   := Mux(selI, io.slave_i.RRESP, io.slave_m.RRESP)

}
