package bus

import chisel3._
import chisel3.util._

// 总线选择：将仲裁器给出的slave根据is_inst信号分配
// 将slaveSel改为根据地址选择的crossbar

class slaveSel extends Module {
    val io = IO(new Bundle {
        // 来自仲裁器的“下游主设备口”
        val slave_in = Flipped(new AxiLiteMasterIO())
        // 连接到具体从设备：在本模块视角需要能驱动 AW/AR/W 等，因此使用 Flipped(SlaveIO)
        val slave_m = Flipped(new AxiLiteSlaveIO())
        val slave_i = Flipped(new AxiLiteSlaveIO())
        val uart_slave = Flipped(new AxiLiteSlaveIO())
        val timer_slave = Flipped(new AxiLiteSlaveIO())
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

    io.uart_slave.AWADDR  := 0.U; io.uart_slave.AWPROT := 0.U; io.uart_slave.AWVALID := false.B
    io.uart_slave.WDATA   := 0.U; io.uart_slave.WSTRB  := 0.U; io.uart_slave.WVALID  := false.B
    io.uart_slave.BREADY  := false.B
    io.uart_slave.ARADDR  := 0.U; io.uart_slave.ARPROT := 0.U; io.uart_slave.ARVALID := false.B
    io.uart_slave.RREADY  := false.B    

    io.timer_slave.AWADDR  := 0.U; io.timer_slave.AWPROT := 0.U; io.timer_slave.AWVALID := false.B
    io.timer_slave.WDATA   := 0.U; io.timer_slave.WSTRB  := 0.U; io.timer_slave.WVALID  := false.B
    io.timer_slave.BREADY  := false.B
    io.timer_slave.ARADDR  := 0.U; io.timer_slave.ARPROT := 0.U; io.timer_slave.ARVALID := false.B
    io.timer_slave.RREADY  := false.B


    // 拉下写地址和读地址给Xbar做判断
    // ISRAM 地址范围：0x80000000 ～ 0x8FFFFFFF
    // DSRAM 地址范围：0x00000000 ～ 0x7FFFFFFF
    val addr = Mux(io.slave_in.ARVALID, io.slave_in.ARADDR, io.slave_in.AWADDR)


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
        // 添加两个的地址，一个是串口，一个是定时器，串口是0xa0000000 + 0x3f8, 定时器是0xa0000000 + 0x200 
        // 地址根据地址范围选择
        when(addr === "ha00003f8".U || addr === "ha0000200".U) {
            // 选择UART或TIMER
            when(addr === "ha00003f8".U) {
                // 选择UART
                io.uart_slave.AWADDR  := io.slave_in.AWADDR
                io.uart_slave.AWPROT  := io.slave_in.AWPROT
                io.uart_slave.AWVALID := io.slave_in.AWVALID

                io.uart_slave.WDATA   := io.slave_in.WDATA
                io.uart_slave.WSTRB   := io.slave_in.WSTRB
                io.uart_slave.WVALID  := io.slave_in.WVALID

                io.uart_slave.BREADY  := io.slave_in.BREADY

                io.uart_slave.ARADDR  := io.slave_in.ARADDR
                io.uart_slave.ARPROT  := io.slave_in.ARPROT
                io.uart_slave.ARVALID := io.slave_in.ARVALID

                io.uart_slave.RREADY  := io.slave_in.RREADY

            }.otherwise {
                // 选择TIMER
                io.timer_slave.AWADDR  := io.slave_in.AWADDR
                io.timer_slave.AWPROT  := io.slave_in.AWPROT
                io.timer_slave.AWVALID := io.slave_in.AWVALID

                io.timer_slave.WDATA   := io.slave_in.WDATA
                io.timer_slave.WSTRB   := io.slave_in.WSTRB
                io.timer_slave.WVALID  := io.slave_in.WVALID

                io.timer_slave.BREADY  := io.slave_in.BREADY

                io.timer_slave.ARADDR  := io.slave_in.ARADDR
                io.timer_slave.ARPROT  := io.slave_in.ARPROT
                io.timer_slave.ARVALID := io.slave_in.ARVALID

                io.timer_slave.RREADY  := io.slave_in.RREADY
            }

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

    }

    // 把选中设备的响应返还给仲裁器
    val AWREADY = MuxCase(false.B, Seq(
        selI -> io.slave_i.AWREADY,
        (addr === "ha00003f8".U) -> io.uart_slave.AWREADY,
        (addr === "ha0000200".U) -> io.timer_slave.AWREADY,
        (addr =/= "ha00003f8".U && addr =/= "ha0000200".U) -> io.slave_m.AWREADY
    ))
    val WREADY = MuxCase(false.B, Seq(
        selI -> io.slave_i.WREADY,
        (addr === "ha00003f8".U) -> io.uart_slave.WREADY,
        (addr === "ha0000200".U) -> io.timer_slave.WREADY,
        (addr =/= "ha00003f8".U && addr =/= "ha0000200".U) -> io.slave_m.WREADY
    ))
    val BVALID = MuxCase(false.B, Seq(
        selI -> io.slave_i.BVALID,
        (addr === "ha00003f8".U) -> io.uart_slave.BVALID,
        (addr === "ha0000200".U) -> io.timer_slave.BVALID,
        (addr =/= "ha00003f8".U && addr =/= "ha0000200".U) -> io.slave_m.BVALID
    ))
    val BRESP = MuxCase(0.U, Seq(
        selI -> io.slave_i.BRESP,
        (addr === "ha00003f8".U) -> io.uart_slave.BRESP,
        (addr === "ha0000200".U) -> io.timer_slave.BRESP,
        (addr =/= "ha00003f8".U && addr =/= "ha0000200".U) -> io.slave_m.BRESP
    ))
    val ARREADY = MuxCase(false.B, Seq(
        selI -> io.slave_i.ARREADY,
        (addr === "ha00003f8".U) -> io.uart_slave.ARREADY,
        (addr === "ha0000200".U) -> io.timer_slave.ARREADY,
        (addr =/= "ha00003f8".U && addr =/= "ha0000200".U) -> io.slave_m.ARREADY
    ))
    val RDATA = MuxCase(0.U, Seq(
        selI -> io.slave_i.RDATA,
        (addr === "ha00003f8".U) -> io.uart_slave.RDATA,
        (addr === "ha0000200".U) -> io.timer_slave.RDATA,
        (addr =/= "ha00003f8".U && addr =/= "ha0000200".U) -> io.slave_m.RDATA
    ))
    val RVALID = MuxCase(false.B, Seq(
        selI -> io.slave_i.RVALID,
        (addr === "ha00003f8".U) -> io.uart_slave.RVALID,
        (addr === "ha0000200".U) -> io.timer_slave.RVALID,
        (addr =/= "ha00003f8".U && addr =/= "ha0000200".U) -> io.slave_m.RVALID
    ))
    val RRESP = MuxCase(0.U, Seq(
        selI -> io.slave_i.RRESP,
        (addr === "ha00003f8".U) -> io.uart_slave.RRESP,
        (addr === "ha0000200".U) -> io.timer_slave.RRESP,
        (addr =/= "ha00003f8".U && addr =/= "ha0000200".U) -> io.slave_m.RRESP
    ))

    io.slave_in.AWREADY := AWREADY
    io.slave_in.WREADY  := WREADY
    
    io.slave_in.BVALID  := BVALID
    io.slave_in.BRESP   := BRESP
    
    io.slave_in.ARREADY := ARREADY

    io.slave_in.RDATA   := RDATA
    io.slave_in.RVALID  := RVALID
    io.slave_in.RRESP   := RRESP
}
