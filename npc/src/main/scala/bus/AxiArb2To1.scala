package bus
import chisel3._
import chisel3.util._

// 仲裁器：IFU和MEM同时调用总线时，优先级IFU高于MEM
// 响应路由：根据 bid/rid 判断
// ysyxSoCFull 侧的bid/rid 统一分配为0了，不能用ID来做总线仲裁
// 用using_ifu锁定总线归属

class AXI_ARB2TO1 extends Module{
    val io = IO(new Bundle {
        val ifu_master = Flipped(new Axi4MasterIO()) // IFU 主接口
        val mem_master = Flipped(new Axi4MasterIO()) // MEM 主接口
        val master_out = new Axi4MasterIO()      // 输出主接口
    })

    // 仅允许单 outstanding
    val busy = RegInit(false.B)
    // 锁存一次事务的 owner/type（busy 期间保持）
    val using_ifu = RegInit(false.B)
    val is_write = RegInit(false.B)
    // 写数据阶段：AW 已握手，等待 W
    val w_phase = RegInit(false.B)

    val ifu_ar_req = io.ifu_master.arvalid
    val mem_ar_req = io.mem_master.arvalid
    val ifu_aw_req = io.ifu_master.awvalid
    val mem_aw_req = io.mem_master.awvalid

    // 当拍用于路由到下游 slave 的选择信号：
    // - busy=0：用 pick_ifu（组合），保证同拍握手能走到正确的 slave
    // - busy=1：用 using_ifu（寄存），保证事务完成前选择不变

    // ========== 默认值：所有输出置零 ==========
    io.master_out.awaddr  := 0.U
    io.master_out.awid    := 0.U
    io.master_out.awlen   := 0.U
    io.master_out.awsize  := 0.U
    io.master_out.awburst := 0.U
    io.master_out.awvalid := false.B
    
    io.master_out.wdata   := 0.U
    io.master_out.wstrb   := 0.U
    io.master_out.wlast   := false.B
    io.master_out.wvalid  := false.B
    
    io.master_out.bready  := false.B
    
    io.master_out.araddr  := 0.U
    io.master_out.arid    := 0.U
    io.master_out.arlen   := 0.U
    io.master_out.arsize  := 0.U
    io.master_out.arburst := 0.U
    io.master_out.arvalid := false.B
    
    io.master_out.rready  := false.B

    // IFU Master 默认值
    io.ifu_master.awready := false.B
    io.ifu_master.wready  := false.B
    io.ifu_master.bvalid  := false.B
    io.ifu_master.bresp   := 0.U
    io.ifu_master.bid     := 0.U
    io.ifu_master.arready := false.B
    io.ifu_master.rdata   := 0.U
    io.ifu_master.rresp   := 0.U
    io.ifu_master.rvalid  := false.B
    io.ifu_master.rlast   := false.B
    io.ifu_master.rid     := 0.U

    // MEM Master 默认值
    io.mem_master.awready := false.B
    io.mem_master.wready  := false.B
    io.mem_master.bvalid  := false.B
    io.mem_master.bresp   := 0.U
    io.mem_master.bid     := 0.U
    io.mem_master.arready := false.B
    io.mem_master.rdata   := 0.U
    io.mem_master.rresp   := 0.U
    io.mem_master.rvalid  := false.B
    io.mem_master.rlast   := false.B
    io.mem_master.rid     := 0.U
    
   // 仲裁与锁定：写请求和读请求互斥，写请求优先
   when(!busy) {
    // 写请求优先处理（仅看 AW）
    when (ifu_aw_req || mem_aw_req) {
        val sel = ifu_aw_req  // IFU 发写请求时选 IFU，否则选 MEM

        // 转发写地址通道
        io.master_out.awaddr  := Mux(sel, io.ifu_master.awaddr, io.mem_master.awaddr)
        io.master_out.awid    := Mux(sel, io.ifu_master.awid, io.mem_master.awid)
        io.master_out.awlen   := Mux(sel, io.ifu_master.awlen, io.mem_master.awlen)
        io.master_out.awsize  := Mux(sel, io.ifu_master.awsize, io.mem_master.awsize)
        io.master_out.awburst := Mux(sel, io.ifu_master.awburst, io.mem_master.awburst)
        io.master_out.awvalid := Mux(sel, io.ifu_master.awvalid, io.mem_master.awvalid)

        // Ready 信号回传（仅 AW）
        when(sel) {
            io.ifu_master.awready := io.master_out.awready
        } .otherwise {
            io.mem_master.awready := io.master_out.awready
        }

        // AW 握手成功，锁定总线并进入写数据阶段
        when (io.master_out.awvalid && io.master_out.awready) {
            busy := true.B
            using_ifu := sel
            is_write := true.B
            w_phase := true.B
        }
    }
    // 读请求（写请求优先时，读请求延后）
    .elsewhen (ifu_ar_req || mem_ar_req) {
        val sel = ifu_ar_req  // IFU 发读请求时选 IFU，否则选 MEM

        // 转发读地址通道
        io.master_out.araddr  := Mux(sel, io.ifu_master.araddr, io.mem_master.araddr)
        io.master_out.arid    := Mux(sel, io.ifu_master.arid, io.mem_master.arid)
        io.master_out.arlen   := Mux(sel, io.ifu_master.arlen, io.mem_master.arlen)
        io.master_out.arsize  := Mux(sel, io.ifu_master.arsize, io.mem_master.arsize)
        io.master_out.arburst := Mux(sel, io.ifu_master.arburst, io.mem_master.arburst)
        io.master_out.arvalid := Mux(sel, io.ifu_master.arvalid, io.mem_master.arvalid)

        // Ready 信号回传
        when(sel) {
            io.ifu_master.arready := io.master_out.arready
        } .otherwise {
            io.mem_master.arready := io.master_out.arready
        }

        // 握手成功，锁定总线
        when (io.master_out.arvalid && io.master_out.arready) {
            busy := true.B
            using_ifu := sel
            is_write := false.B
        }
    }
   } 
    // 响应路由
    .otherwise {
        when(is_write) {
            // 写数据阶段：只转发 W，等待 W 握手结束
            when(w_phase) {
                // 保持aw信号不变，转发w信号
                /*
                io.master_out.awaddr  := Mux(using_ifu, io.ifu_master.awaddr, io.mem_master.awaddr)
                io.master_out.awid    := Mux(using_ifu, io.ifu_master.awid, io.mem_master.awid)
                io.master_out.awlen   := Mux(using_ifu, io.ifu_master.awlen, io.mem_master.awlen)
                io.master_out.awsize  := Mux(using_ifu, io.ifu_master.awsize, io.mem_master.awsize)
                io.master_out.awburst := Mux(using_ifu, io.ifu_master.awburst, io.mem_master.awburst)
                io.master_out.awvalid := Mux(using_ifu, io.ifu_master.awvalid, io.mem_master.awvalid)
                */
                io.master_out.wdata   := Mux(using_ifu, io.ifu_master.wdata, io.mem_master.wdata)
                io.master_out.wstrb   := Mux(using_ifu, io.ifu_master.wstrb, io.mem_master.wstrb)
                io.master_out.wlast   := Mux(using_ifu, io.ifu_master.wlast, io.mem_master.wlast)
                io.master_out.wvalid  := Mux(using_ifu, io.ifu_master.wvalid, io.mem_master.wvalid)

                when(using_ifu) {
                    io.ifu_master.wready := io.master_out.wready
                } .otherwise {
                    io.mem_master.wready := io.master_out.wready
                }

                when(io.master_out.wvalid && io.master_out.wready) {
                    w_phase := false.B
                }
            } .otherwise {
                // 写响应：用 using_ifu 锁定的归属路由
                io.master_out.bready := Mux(using_ifu, io.ifu_master.bready, io.mem_master.bready)

                when(using_ifu) {
                    io.ifu_master.bvalid := io.master_out.bvalid
                    io.ifu_master.bresp  := io.master_out.bresp
                    io.ifu_master.bid    := io.master_out.bid
                } .otherwise {
                    io.mem_master.bvalid := io.master_out.bvalid
                    io.mem_master.bresp  := io.master_out.bresp
                    io.mem_master.bid    := io.master_out.bid
                }

                // 响应完成，释放总线
                when (io.master_out.bvalid && io.master_out.bready) {
                    busy := false.B
                }
            }
        } .otherwise {
            // 读响应：用 using_ifu 锁定的归属路由
            io.master_out.rready := Mux(using_ifu, io.ifu_master.rready, io.mem_master.rready)

            when(using_ifu) {
                io.ifu_master.rvalid := io.master_out.rvalid
                io.ifu_master.rdata  := io.master_out.rdata
                io.ifu_master.rresp  := io.master_out.rresp
                io.ifu_master.rlast  := io.master_out.rlast
                io.ifu_master.rid    := io.master_out.rid
            } .otherwise {
                io.mem_master.rvalid := io.master_out.rvalid
                io.mem_master.rdata  := io.master_out.rdata
                io.mem_master.rresp  := io.master_out.rresp
                io.mem_master.rlast  := io.master_out.rlast
                io.mem_master.rid    := io.master_out.rid
            }

            // 响应完成，释放总线
            when (io.master_out.rvalid && io.master_out.rready && io.master_out.rlast) {
                busy := false.B
            }
        }
    }
}
