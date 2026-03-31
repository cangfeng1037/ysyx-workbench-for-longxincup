// MEM Master
// 挂在CPU下面

package bus
import chisel3._
import chisel3.util._
import npc.chisel_src.cpucore._

// 处理MEM的请求，将MEM的mem_req和mem_resp转换为AXI4总线信号

// 不要检查rid和bid，因为ysyxSoCFull侧统一分配为0了

class data_req extends Bundle {
    val wen = Bool() // true: 写请求，false: 读请求
    val rsize = UInt(3.W) // 0: byte, 1: half-word, 2: word
    val raddr = UInt(32.W)
    val rlen = UInt(3.W) 

    val wdata = UInt(32.W) // 写数据
    val wmask = UInt(4.W) // 写掩码，按字节使能
    val wlen = UInt(3.W) // 突发写入的长度，单位为beat（4字节），值为0-7
    val wsize = UInt(3.W) // 突发传输的大小，单位为字节，值为0-7
    
    val waddr = UInt(32.W)
    val burst = Bool() // true: cache line refill burst(8 beats), false: single beat bypass
}

class data_resp extends Bundle {
    val data = UInt(32.W)
    val last = Bool() // 表示当前响应的数据是一个cache line中的最后一个数据
}


// 修改为axi4的版本
class Axi4_MEM_Master extends Module {
    val io = IO(new Bundle{
        val master = new Axi4MasterIO()

        val mem_req = Flipped(Decoupled(new npc.chisel_src.cache.data_req))
        val mem_resp= Decoupled(new npc.chisel_src.cache.data_resp)
    })

    // 状态机：单 outstanding
    val sIdle :: sReadWait :: sWriteData :: sWriteResp :: Nil = Enum(4)
    val state = RegInit(sIdle)

    val MEM_ID = 1.U(4.W) // ysyxSoCFull 侧统一分配为0

    // 锁存请求，避免在非 fire 周期读取上游 bits
    val req_wen   = RegInit(false.B)
    val req_rsize = RegInit(2.U(3.W))
    val req_raddr = RegInit(0.U(32.W))
    val req_rlen  = RegInit(0.U(3.W))
    val req_wdata = RegInit(0.U(32.W))
    val req_wmask = RegInit(0.U(4.W))
    val req_wlen  = RegInit(0.U(3.W))
    val req_wsize = RegInit(2.U(3.W))
    val req_waddr = RegInit(0.U(32.W))
    val req_burst = RegInit(false.B)
    val read_beat = RegInit(0.U(4.W))

    // DEBUG_AXI_W_TEXT_BEGIN: 监视所有写流量是否覆盖 printf 热点代码窗口
    val dbgAxiWTextCnt = RegInit(0.U(10.W))
    // DEBUG_AXI_W_TEXT_END

    // 默认值
    io.master.awaddr  := 0.U; io.master.awvalid := false.B
    io.master.awid   := MEM_ID
    io.master.awlen  := 0.U
    io.master.awsize := 2.U
    io.master.awburst:= 0.U
    
    io.master.wdata   := 0.U; io.master.wstrb   := 0.U; io.master.wvalid  := false.B
    io.master.wlast  := true.B

    io.master.bready  := false.B
    
    io.master.araddr  := 0.U; io.master.arvalid := false.B
    io.master.arid   := MEM_ID
    io.master.arlen  := 0.U
    io.master.arsize := 2.U
    io.master.arburst:= 0.U

    io.master.rready  := false.B
    
    io.mem_req.ready := false.B
    io.mem_resp.valid := false.B
    io.mem_resp.bits := 0.U.asTypeOf(new npc.chisel_src.cache.data_resp())
    
    def normSize(x: UInt): UInt = Mux(x <= 2.U, x, 2.U)

    switch(state) {
        is(sIdle) {
            when(io.mem_req.valid && io.mem_req.bits.wen) {
                // 写请求：优先同拍 AW + W，兼容下游 AWREADY 依赖 WVALID
                io.master.awaddr  := io.mem_req.bits.waddr
                io.master.awvalid := true.B
                io.master.awlen   := 0.U
                io.master.awsize  := normSize(io.mem_req.bits.wsize)
                io.master.awburst := 0.U

                io.master.wdata   := io.mem_req.bits.wdata
                io.master.wstrb   := io.mem_req.bits.wmask
                io.master.wvalid  := true.B
                io.master.wlast   := true.B
                
                val awFire = io.master.awvalid && io.master.awready
                val wFire  = io.master.wvalid  && io.master.wready
                io.mem_req.ready := awFire

                // 监视 sIdle 同拍 AW+W 写（此前只在 sWriteData 监视会漏掉这类写）
                val wAddrHotIdle = (io.mem_req.bits.waddr >= "ha0015d80".U) && (io.mem_req.bits.waddr <= "ha0015db0".U)
                when (false.B && awFire && wFire && wAddrHotIdle && dbgAxiWTextCnt < 256.U) {
                    printf(
                        p"[DBG_AXI_W_TEXT] waddr=0x${Hexadecimal(io.mem_req.bits.waddr)} wdata=0x${Hexadecimal(io.mem_req.bits.wdata)} wstrb=0x${Hexadecimal(io.mem_req.bits.wmask)} state=${state}\n"
                    )
                    dbgAxiWTextCnt := dbgAxiWTextCnt + 1.U
                }
                when (false.B && awFire && wFire && io.mem_req.bits.waddr === "ha0015da4".U && dbgAxiWTextCnt < 256.U) {
                    printf(
                        p"[DBG_AXI_W_DA4] wdata=0x${Hexadecimal(io.mem_req.bits.wdata)} wstrb=0x${Hexadecimal(io.mem_req.bits.wmask)}\n"
                    )
                    dbgAxiWTextCnt := dbgAxiWTextCnt + 1.U
                }

                when(awFire) {
                    req_wen   := io.mem_req.bits.wen
                    req_rsize := io.mem_req.bits.rsize
                    req_raddr := io.mem_req.bits.raddr
                    req_rlen  := io.mem_req.bits.rlen
                    req_wdata := io.mem_req.bits.wdata
                    req_wmask := io.mem_req.bits.wmask
                    req_wlen  := io.mem_req.bits.wlen
                    req_wsize := io.mem_req.bits.wsize
                    req_waddr := io.mem_req.bits.waddr
                    req_burst := io.mem_req.bits.burst
                    state := Mux(wFire, sWriteResp, sWriteData)
                }

            } .elsewhen(io.mem_req.valid) {
                // 读请求：支持 burst
                io.master.araddr  := io.mem_req.bits.raddr
                io.master.arvalid := true.B 
                io.master.arlen   := Mux(io.mem_req.bits.burst, io.mem_req.bits.rlen, 0.U)
                io.master.arsize  := normSize(io.mem_req.bits.rsize)
                io.master.arburst := Mux(io.mem_req.bits.burst, 1.U, 0.U)

                val arFire = io.master.arvalid && io.master.arready
                io.mem_req.ready := arFire
                when(arFire) {
                    req_wen   := io.mem_req.bits.wen
                    req_rsize := io.mem_req.bits.rsize
                    req_raddr := io.mem_req.bits.raddr
                    req_rlen  := io.mem_req.bits.rlen
                    req_wdata := io.mem_req.bits.wdata
                    req_wmask := io.mem_req.bits.wmask
                    req_wlen  := io.mem_req.bits.wlen
                    req_wsize := io.mem_req.bits.wsize
                    req_waddr := io.mem_req.bits.waddr
                    req_burst := io.mem_req.bits.burst
                    read_beat := 0.U
                    state := sReadWait
                }
            }
        }

        is(sReadWait) {
            io.master.rready := io.mem_resp.ready
            io.mem_resp.valid := io.master.rvalid
            io.mem_resp.bits.data := io.master.rdata
            io.mem_resp.bits.last := io.master.rlast

            // DEBUG_AXIMEM_TRACE_BEGIN: AXI读返回观测点（删除时搜索此标记整段移除）
            // val debugReadAddr = req_raddr >= "ha001a600".U && req_raddr <= "ha001a900".U
            // when(io.master.rvalid && io.master.rready && debugReadAddr) {
            //     printf(
            //         p"[DBG_AXIMEM_R] req_raddr=0x${Hexadecimal(req_raddr)} beat=${read_beat} rdata=0x${Hexadecimal(io.master.rdata)} rlast=${io.master.rlast} req_burst=${req_burst} req_rlen=${req_rlen} req_rsize=${req_rsize}\n"
            //     )
            // }
            // DEBUG_AXIMEM_TRACE_END

            when(io.master.rvalid && io.master.rready && io.master.rlast) {
                read_beat := 0.U
                state := sIdle
            } .elsewhen (io.master.rvalid && io.master.rready) {
                read_beat := read_beat + 1.U
            }
        }

        is(sWriteData) {
            // AW 已握手，补齐 W
            io.master.wdata   := req_wdata
            io.master.wstrb   := req_wmask
            io.master.wvalid  := true.B
            io.master.wlast   := true.B

            val w_fire = io.master.wvalid && io.master.wready
            val w_addr_hot = (req_waddr >= "ha0015d80".U) && (req_waddr <= "ha0015db0".U)
            when (false.B && w_fire && w_addr_hot && dbgAxiWTextCnt < 256.U) {
                printf(
                    p"[DBG_AXI_W_TEXT] waddr=0x${Hexadecimal(req_waddr)} wdata=0x${Hexadecimal(req_wdata)} wstrb=0x${Hexadecimal(req_wmask)} state=${state}\n"
                )
                dbgAxiWTextCnt := dbgAxiWTextCnt + 1.U
            }
            when (false.B && w_fire && req_waddr === "ha0015da4".U && dbgAxiWTextCnt < 256.U) {
                printf(
                    p"[DBG_AXI_W_DA4] wdata=0x${Hexadecimal(req_wdata)} wstrb=0x${Hexadecimal(req_wmask)}\n"
                )
                dbgAxiWTextCnt := dbgAxiWTextCnt + 1.U
            }

            when(io.master.wvalid && io.master.wready) {
                state := sWriteResp
            }
        }

        is(sWriteResp) {
            io.master.bready := io.mem_resp.ready
            io.mem_resp.valid := io.master.bvalid
            io.mem_resp.bits.data := 0.U
            io.mem_resp.bits.last := true.B
            
            when(io.master.bvalid && io.master.bready) {
                state := sIdle
            }    
        }
    }
}
