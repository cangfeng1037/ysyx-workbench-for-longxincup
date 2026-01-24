// 定义AXI-lite总线相关的bundle
package bus
import chisel3._
import chisel3.util._

class AxiLiteMasterIO extends Bundle {
    // AW
    val AWADDR  = Output(UInt(32.W))
    val AWPROT  = Output(UInt(3.W))
    val AWVALID = Output(Bool())
    val AWREADY = Input(Bool())

    // W
    val WDATA   = Output(UInt(32.W))
    val WSTRB   = Output(UInt(4.W))
    val WVALID  = Output(Bool())
    val WREADY  = Input(Bool())

    // B write response
    val BVALID  = Input(Bool())
    val BRESP   = Input(UInt(2.W))
    val BREADY  = Output(Bool())

    // AR read address
    val ARADDR  = Output(UInt(32.W))
    val ARPROT  = Output(UInt(3.W))
    val ARVALID = Output(Bool())
    val ARREADY = Input(Bool())
    
    // R read data
    val RDATA   = Input(UInt(32.W))
    val RRESP   = Input(UInt(2.W))
    val RVALID  = Input(Bool())
    val RREADY  = Output(Bool())
}

class AxiLiteSlaveIO extends Bundle {
    // AW
    val AWADDR  = Input(UInt(32.W))
    val AWPROT  = Input(UInt(3.W))
    val AWVALID = Input(Bool())
    val AWREADY = Output(Bool())

    // W
    val WDATA   = Input(UInt(32.W))
    val WSTRB   = Input(UInt(4.W))
    val WVALID  = Input(Bool())
    val WREADY  = Output(Bool())

    // B write response
    val BVALID  = Output(Bool())
    val BRESP   = Output(UInt(2.W))
    val BREADY  = Input(Bool())

    // AR read address
    val ARADDR  = Input(UInt(32.W))
    val ARPROT  = Input(UInt(3.W))
    val ARVALID = Input(Bool())
    val ARREADY = Output(Bool())
    
    // R read data
    val RDATA   = Output(UInt(32.W))
    val RRESP   = Output(UInt(2.W))
    val RVALID  = Output(Bool())
    val RREADY  = Input(Bool())
}

// 处理IFU的请求，将IFU的inst_req和inst_resp转换为AXI-lite总线信号
class AXI_IFU_Master extends Module {
    val io = IO(new Bundle{
        val I_bus = new AxiLiteMasterIO()

        val inst_req = Flipped(Decoupled(new npc.chisel_src.cpucore.inst_req))
        val inst_resp= Decoupled(new npc.chisel_src.cpucore.inst_resp)

        val flush = Input(Bool())
    })

    io.I_bus.AWADDR  := 0.U
    io.I_bus.AWPROT  := 0.U
    io.I_bus.AWVALID := false.B
    io.I_bus.WDATA   := 0.U
    io.I_bus.WSTRB   := 0.U
    io.I_bus.WVALID  := false.B
    io.I_bus.BREADY  := false.B
    
    // 单 outstanding 控制，等到RVALID在发起下一个请求
    val pending = RegInit(false.B)
    val killPending = RegInit(false.B)

    val ar_fire = io.I_bus.ARVALID && io.I_bus.ARREADY
    val r_fire  = io.I_bus.RVALID  && io.I_bus.RREADY

    when(ar_fire) { pending := true.B }
    when(r_fire) { pending := false.B; killPending := false.B }


    // flush 控制：flush后接回来的rdata不发给inst_resp
    when(io.flush && pending) {
        killPending := true.B
    }

    // 读地址通道：只有 pending = 0 才允许发新AR
    io.I_bus.ARADDR  := io.inst_req.bits.pc
    io.I_bus.ARPROT  := 0.U
    io.I_bus.ARVALID := io.inst_req.valid && !pending
    io.inst_req.ready := io.I_bus.ARREADY && !pending
    

    // 读数据通道：用 Decoupled 反压
    io.inst_resp.valid  := io.I_bus.RVALID && !killPending
    io.inst_resp.bits.inst := io.I_bus.RDATA
    
    // R通道依然要接收，但是排空不传给inst_resp
    io.I_bus.RREADY    := io.inst_resp.ready || killPending 
}

// 处理MEM的请求，将MEM的mem_req和mem_resp转换为AXI-lite总线信号
class AXI_MEM_Master extends Module {
    val io = IO(new Bundle{
        val M_bus = new AxiLiteMasterIO()

        val mem_req = Flipped(Decoupled(new npc.chisel_src.cpucore.MemReq))
        val mem_resp= Decoupled(new npc.chisel_src.cpucore.MemResp)
    })

    // 状态机
    val sIdle :: sReadWait :: sWriteWait :: Nil = Enum(3)
    val state = RegInit(sIdle)

    // 默认值
    io.M_bus.AWADDR  := 0.U; io.M_bus.AWPROT  := 0.U; io.M_bus.AWVALID := false.B
    io.M_bus.WDATA   := 0.U; io.M_bus.WSTRB   := 0.U; io.M_bus.WVALID  := false.B
    io.M_bus.BREADY  := false.B
    io.M_bus.ARADDR  := 0.U; io.M_bus.ARPROT  := 0.U; io.M_bus.ARVALID := false.B
    io.M_bus.RREADY  := false.B

    io.mem_req.ready := false.B
    io.mem_resp.valid := false.B
    io.mem_resp.bits := 0.U.asTypeOf(new npc.chisel_src.cpucore.MemResp)

    switch(state) {
        is(sIdle) {
            // 写（AW/W同拍）
            when(io.mem_req.valid && io.mem_req.bits.wen) {
                io.M_bus.AWADDR  := io.mem_req.bits.waddr
                io.M_bus.AWPROT  := 0.U
                io.M_bus.AWVALID := true.B

                io.M_bus.WDATA   := io.mem_req.bits.wdata
                io.M_bus.WSTRB   := io.mem_req.bits.wmask
                io.M_bus.WVALID  := true.B

                io.mem_req.ready := io.M_bus.AWREADY && io.M_bus.WREADY

                when(io.mem_req.ready) { state := sWriteWait}
            } .elsewhen(io.mem_req.valid) {
                // 读
                io.M_bus.ARADDR  := io.mem_req.bits.raddr
                io.M_bus.ARPROT  := 0.U
                io.M_bus.ARVALID := true.B 

                io.mem_req.ready := io.M_bus.ARREADY

                when(io.mem_req.ready) { state := sReadWait }
            }
        }

        is(sReadWait) {
            io.M_bus.RREADY := io.mem_resp.ready // 准备接收读响应
            io.mem_resp.valid := io.M_bus.RVALID
            io.mem_resp.bits.rdata := io.M_bus.RDATA
            // 读fire，回到空闲
            when(io.M_bus.RVALID && io.M_bus.RREADY) { state := sIdle }
        }

        is(sWriteWait) {
            io.M_bus.BREADY := true.B // 准备接收写响应
            io.mem_resp.valid := io.M_bus.BVALID
            // 写fire，回到空闲
            when(io.M_bus.BVALID && io.M_bus.BREADY) { state := sIdle }
        }
    }
}


// UART_slave的实现，目前先空置
class AXI_UART_Slave extends Module {
    val io = IO(new AxiLiteSlaveIO())

    // 默认不响应
    io.AWREADY := false.B
    io.WREADY  := false.B
    io.BVALID  := false.B
    io.BRESP   := 0.U
    io.ARREADY := false.B
    io.RDATA   := 0.U
    io.RRESP   := 0.U
    io.RVALID  := false.B
}

// TIMER_slave的实现，目前先空置
class AXI_TIMER_Slave extends Module {
    val io = IO(new AxiLiteSlaveIO())

    // 默认不响应
    io.AWREADY := false.B
    io.WREADY  := false.B
    io.BVALID  := false.B
    io.BRESP   := 0.U
    io.ARREADY := false.B
    io.RDATA   := 0.U
    io.RRESP   := 0.U
    io.RVALID  := false.B
}