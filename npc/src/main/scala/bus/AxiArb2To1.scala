package bus
import chisel3._
import chisel3.util._

// 仲裁器：IFU和MEM同时调用总线时，优先级IFU高于MEM
class AXI_ARB2TO1 extends Module{
    val io = IO(new Bundle {
        val i_master = Flipped(new AxiLiteMasterIO())
        val m_master = Flipped(new AxiLiteMasterIO())
        // 仲裁后的“下游主设备口”（去接 slaveSel，再到 ISRAM/DSRAM）
        val slave    = new AxiLiteMasterIO()
        val is_inst  = Output(Bool()) // 输出当前是哪个主设备在使用总线
    })

    // 仅允许单 outstanding
    val busy = RegInit(false.B)
    // 锁存一次事务的 owner/type（busy 期间保持）
    val using_ifu = RegInit(false.B)
    val is_write = RegInit(false.B)

    val i_ar_req = io.i_master.ARVALID
    val m_ar_req = io.m_master.ARVALID

    val i_aw_req = io.i_master.AWVALID && io.i_master.WVALID
    val m_aw_req = io.m_master.AWVALID && io.m_master.WVALID

    val pick_ifu = i_ar_req || i_aw_req || (!m_ar_req && !m_aw_req)

    // 当拍用于路由到下游 slave 的选择信号：
    // - busy=0：用 pick_ifu（组合），保证同拍握手能走到正确的 slave
    // - busy=1：用 using_ifu（寄存），保证事务完成前选择不变
    val owner_sel = WireDefault(using_ifu)
    when(!busy) {
        owner_sel := pick_ifu
    }

    // 默认：不发起下游事务
    io.slave.AWADDR  := 0.U
    io.slave.AWPROT  := 0.U
    io.slave.AWVALID := false.B
    io.slave.WDATA   := 0.U
    io.slave.WSTRB   := 0.U
    io.slave.WVALID  := false.B
    io.slave.BREADY  := false.B

    io.slave.ARADDR  := 0.U
    io.slave.ARPROT  := 0.U
    io.slave.ARVALID := false.B
    io.slave.RREADY  := false.B

    // 默认 master 侧 ready/valid
    io.i_master.AWREADY := false.B
    io.i_master.WREADY  := false.B
    io.i_master.BVALID  := false.B
    io.i_master.BRESP   := 0.U
    io.i_master.ARREADY := false.B
    io.i_master.RDATA   := 0.U
    io.i_master.RRESP   := 0.U
    io.i_master.RVALID  := false.B

    io.m_master.AWREADY := false.B
    io.m_master.WREADY  := false.B
    io.m_master.BVALID  := false.B
    io.m_master.BRESP   := 0.U
    io.m_master.ARREADY := false.B
    io.m_master.RDATA   := 0.U
    io.m_master.RRESP   := 0.U
    io.m_master.RVALID  := false.B

    // 对下游选择输出（给 slaveSel 用）
    io.is_inst := owner_sel

    // 仲裁与锁定

    when(!busy) {
        // 发起写 AW/W同拍
        when(i_aw_req || m_aw_req) {
            val sel = pick_ifu

            val awaddr = Mux(sel, io.i_master.AWADDR, io.m_master.AWADDR)
            val awprot = Mux(sel, io.i_master.AWPROT, io.m_master.AWPROT)
            val wdata  = Mux(sel, io.i_master.WDATA, io.m_master.WDATA)
            val wstrb  = Mux(sel, io.i_master.WSTRB, io.m_master.WSTRB)
            val awvalid= Mux(sel, io.i_master.AWVALID, io.m_master.AWVALID)
            val wvalid = Mux(sel, io.i_master.WVALID, io.m_master.WVALID)

            io.slave.AWADDR  := awaddr
            io.slave.AWPROT  := awprot
            io.slave.AWVALID := awvalid
            io.slave.WDATA   := wdata
            io.slave.WSTRB   := wstrb
            io.slave.WVALID  := wvalid

            // 将 ready 返回对应的master
            when(sel) {
                io.i_master.AWREADY := io.slave.AWREADY
                io.i_master.WREADY  := io.slave.WREADY
            }.otherwise {
                io.m_master.AWREADY := io.slave.AWREADY
                io.m_master.WREADY  := io.slave.WREADY
            }

            // fire 后，总线锁定
            when(io.slave.AWREADY && io.slave.WREADY && awvalid && wvalid) {
                using_ifu := sel
                is_write := true.B
                busy := true.B
            }
        }.elsewhen(i_ar_req || m_ar_req) {
            // 发起读请求
            val sel = pick_ifu
            val araddr = Mux(sel, io.i_master.ARADDR, io.m_master.ARADDR)
            val arprot = Mux(sel, io.i_master.ARPROT, io.m_master.ARPROT)
            val arvalid= Mux(sel, io.i_master.ARVALID, io.m_master.ARVALID)

            io.slave.ARADDR  := araddr
            io.slave.ARPROT  := arprot
            io.slave.ARVALID := arvalid

            when(sel) {
                io.i_master.ARREADY := io.slave.ARREADY
            }.otherwise {
                io.m_master.ARREADY := io.slave.ARREADY
            }

            // fire 后，总线锁定
            when(io.slave.ARREADY && arvalid) {
                using_ifu := sel
                is_write := false.B
                busy := true.B
            }
        }
    }.otherwise {
        // busy: 发送响应给对应的master
        when(is_write) {
            // B 写响应
            io.slave.BREADY := Mux(using_ifu, io.i_master.BREADY, io.m_master.BREADY)
            when(using_ifu) {
                io.i_master.BVALID := io.slave.BVALID
                io.i_master.BRESP  := io.slave.BRESP
            }.otherwise {
                io.m_master.BVALID := io.slave.BVALID
                io.m_master.BRESP  := io.slave.BRESP
            }

            // 响应完成，释放总线
            when(io.slave.BVALID && io.slave.BREADY) {
                busy := false.B
            }
        }.otherwise {
            // R 读响应
            io.slave.RREADY := Mux(using_ifu, io.i_master.RREADY, io.m_master.RREADY)
            when(using_ifu) {
                io.i_master.RVALID := io.slave.RVALID
                io.i_master.RDATA  := io.slave.RDATA
                io.i_master.RRESP  := io.slave.RRESP
            }.otherwise {
                io.m_master.RVALID := io.slave.RVALID
                io.m_master.RDATA  := io.slave.RDATA
                io.m_master.RRESP  := io.slave.RRESP
            }

            // 响应完成，释放总线
            when(io.slave.RVALID && io.slave.RREADY) {
                busy := false.B
            }
        }
    }
}
