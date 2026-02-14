// MEM Master
// 挂在CPU下面

package bus
import chisel3._
import chisel3.util._
import npc.chisel_src.cpucore._

// 处理MEM的请求，将MEM的mem_req和mem_resp转换为AXI4总线信号

// 不要检查rid和bid，因为ysyxSoCFull侧统一分配为0了

// 修改为axi4的版本
class Axi4_MEM_Master extends Module {
    val io = IO(new Bundle{
        val master = new Axi4MasterIO()

        val mem_req = Flipped(Decoupled(new npc.chisel_src.cpucore.MemReq))
        val mem_resp= Decoupled(new npc.chisel_src.cpucore.MemResp)
    })

    // 状态机
    val sIdle :: sWaitW ::sReadWait :: sWriteWait :: Nil = Enum(4)
    val state = RegInit(sIdle)

    val MEM_ID = 1.U(4.W) // ysyxSoCFull 侧统一分配为0

    // 锁存写数据信息
    val wdata = RegInit(0.U(32.W))
    val wstrb = RegInit(0.U(4.W))
    val waddr = RegInit(0.U(32.W))

    // 默认值
    io.master.awaddr  := 0.U; io.master.awvalid := false.B
    io.master.awid   := MEM_ID
    io.master.awlen  := 0.U
    io.master.awsize := 0.U  // 4字节
    io.master.awburst:= 1.U  // INCR模式
    
    io.master.wdata   := 0.U; io.master.wstrb   := 0.U; io.master.wvalid  := false.B
    io.master.wlast  := true.B // 单次传输

    io.master.bready  := false.B
    
    io.master.araddr  := 0.U; io.master.arvalid := false.B
    io.master.arid   := MEM_ID
    io.master.arlen  := 0.U
    io.master.arsize := io.mem_req.bits.rsize
    io.master.arburst:= 1.U  // INCR模式

    io.master.rready  := false.B
    
    io.mem_req.ready := false.B
    io.mem_resp.valid := false.B
    io.mem_resp.bits := 0.U.asTypeOf(new npc.chisel_src.cpucore.MemResp)

    

    switch(state) {
        is(sIdle) {
            // 写（AW/W解锁）
            when(io.mem_req.valid && io.mem_req.bits.wen) {
                // 先发送 AW
                io.master.awaddr  := io.mem_req.bits.waddr
                io.master.awvalid := true.B
                // awsize按wmask字节选择：单子节设为0，多字节设为2
                io.master.awsize := Mux(PopCount(io.mem_req.bits.wmask) === 1.U, 0.U, 2.U)
                /*
                io.master.wdata   := io.mem_req.bits.wdata
                io.master.wstrb   := io.mem_req.bits.wmask
                io.master.wvalid  := true.B
                */

                io.mem_req.ready := io.master.awready

                // 如果 AW 握手成功，进入 sWaitW
                when(io.master.awready) {
                    wdata := io.mem_req.bits.wdata
                    wstrb := io.mem_req.bits.wmask
                    waddr := io.mem_req.bits.waddr
                    state := sWaitW
                }
                // 打印写入信息

            } .elsewhen(io.mem_req.valid) {
                // 读
                io.master.araddr  := io.mem_req.bits.raddr
                io.master.arvalid := true.B 

                io.mem_req.ready := io.master.arready
                when(io.mem_req.ready) { state := sReadWait }
            }
        }

        is(sWaitW) {
            /*
            // 此时，保持awaddr和awvalid不变
            io.master.awaddr  := waddr
            io.master.awvalid := true.B
            */
            // 等待 W 通道握手
            io.master.wdata   := wdata
            io.master.wstrb   := wstrb
            io.master.wvalid  := true.B

            when(io.master.wready) {
                state := sWriteWait
            }
        }

        is(sReadWait) {
            io.master.rready := io.mem_resp.ready // 准备接收读响应

            io.mem_resp.valid := io.master.rvalid
            io.mem_resp.bits.rdata := io.master.rdata
            
            // 检查 对0x10000005 LSR的访问
            when(io.mem_req.valid && (io.mem_req.bits.raddr === 0x10000005.U)) {
                printf("AXI_MEM_Master: Accessing UART LSR = 0x%x\n", io.master.rdata)
            }

            // 读fire，回到空闲
            when(io.master.rvalid && io.master.rready) { 
                // 检查RLAST和rresp
                //assert(io.master.rlast === true.B, "AXI_MEM_Master: RLAST should be 1 for single beat read")
                //assert(io.master.rresp === 0.U, "AXI_MEM_Master: RRESP should be OKAY for successful read")
                state := sIdle 
            }
        }

        is(sWriteWait) {
            io.master.bready := true.B // 准备接收写响应

            io.mem_resp.valid := io.master.bvalid
            
            // 写fire，回到空闲
            when(io.master.bvalid && io.master.bready) { 
                // 检查bresp
                //assert(io.master.bresp === 0.U, "AXI_MEM_Master: BRESP should be OKAY for successful write")
                state := sIdle 
            }
        }
    }
}
