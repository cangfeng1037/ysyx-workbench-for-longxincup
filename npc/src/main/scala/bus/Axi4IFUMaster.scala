// AXI4的IFU主接口，挂在CPU下面

package bus
import chisel3._
import chisel3.util._

// 处理IFU的请求，将IFU的inst_req和inst_resp转换为AXI-lite总线信号
// 修改为axi4的版本
class Axi4_IFU_Master extends Module {
    val io = IO(new Bundle{
        val master = new Axi4MasterIO()

        val inst_req = Flipped(Decoupled(new npc.chisel_src.cpucore.inst_req))
        val inst_resp= Decoupled(new npc.chisel_src.cpucore.inst_resp)

        val flush = Input(Bool())
    })

    // 写通道全部置0
    io.master.awaddr := 0.U
    io.master.awvalid := false.B
    io.master.wdata   := 0.U
    io.master.wstrb   := 0.U
    io.master.wvalid  := false.B
    io.master.bready  := false.B

    io.master.awid  := 0.U
    io.master.awlen := 0.U
    io.master.awsize:= 0.U
    io.master.awburst:= 0.U
    io.master.wlast := false.B


    // 读地址通道新增字段
    io.master.arid   := 1.U
    io.master.arlen  := 0.U
    io.master.arsize := 2.U  // 4字节
    io.master.arburst:= 1.U  // INCR模式

    // 读数据通道检查 RLAST

    
    // 单 outstanding 控制，等到RVALID在发起下一个请求
    val pending = RegInit(false.B)
    val killPending = RegInit(false.B)

    val ar_fire = io.master.arvalid && io.master.arready
    val r_fire  = io.master.rvalid  && io.master.rready

    when(ar_fire) { pending := true.B }
    when(r_fire) { pending := false.B; killPending := false.B }


    // flush 控制：flush后接回来的rdata不发给inst_resp
    when(io.flush && pending) {
        killPending := true.B
    }

    // 读地址通道：只有 pending = 0 才允许发新AR
    io.master.araddr  := io.inst_req.bits.pc
    io.master.arvalid := io.inst_req.valid && !pending
    io.inst_req.ready := io.master.arready && !pending
    

    // 读数据通道：用 Decoupled 反压
    io.inst_resp.valid  := io.master.rvalid && !killPending
    io.inst_resp.bits.inst := io.master.rdata
    
    // R通道依然要接收，但是排空不传给inst_resp
    io.master.rready    := io.inst_resp.ready || killPending 

    // 复位逻辑：复位信号消失前arvalid和rready不释放
    when(reset.asBool) {
        io.master.arvalid := false.B
        io.master.rready := false.B
    }

}
