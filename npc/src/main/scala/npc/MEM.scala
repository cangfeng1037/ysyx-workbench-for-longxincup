package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

// 通过BlackBox调用DPIC实现内存读写



class MEM2WB extends Bundle {
    val pc         = UInt(32.W)
    val inst       = UInt(32.W)
    val alu_result = UInt(32.W)
    val rd_addr    = UInt(5.W)
    val rd_en      = Bool()
    val mem_data   = UInt(32.W)

    // 控制信号
    val is_load    = Bool()
    val is_store   = Bool()
    val is_jalr    = Bool()
    val is_jal     = Bool()

    // CSR信号
    val csr_wdata  = UInt(32.W)
    val csr_wen    = Bool()
    val csr_waddr  = UInt(12.W)
    val csr_rdata  = UInt(32.W)
    val is_csrrw   = Bool()
    val is_csrrs   = Bool()
}

class MEM extends Module {
    val io = IO(new Bundle {
        val in  = Flipped(Decoupled(new EX2MEM()))
        val out = Decoupled(new MEM2WB())
        
        // 内存访问接口（连接到顶层 BlackBox）
        val mem = new Bundle {
            val valid = Output(Bool())
            val wen   = Output(Bool())
            val raddr = Output(UInt(32.W))
            val waddr = Output(UInt(32.W))
            val wdata = Output(UInt(32.W))
            val wmask = Output(UInt(4.W))
            val rdata = Input(UInt(32.W))
        }
    })

    // 状态机
    val s_idle :: s_mem_req :: s_mem_wait :: s_send :: Nil = Enum(4)
    val state = RegInit(s_idle)

    // 拉取控制信号
    val is_lw = io.in.bits.is_lw
    val is_sw = io.in.bits.is_sw
    val is_lb = io.in.bits.is_lb
    val is_sb = io.in.bits.is_sb
    val is_lh = io.in.bits.is_lh
    val is_sh = io.in.bits.is_sh
    val is_lbu= io.in.bits.is_lbu
    val is_lhu= io.in.bits.is_lhu
    val is_load = is_lw || is_lb || is_lbu || is_lh || is_lhu
    val is_store= is_sw || is_sb || is_sh

    // 状态转移
    /*
    switch(state) {
        is(s_idle) {
            when (io.in.fire) {
                state := Mux(is_load || is_store, s_mem_req, s_send)
            }
        }
        is(s_mem_req) {
            state := s_mem_wait
        }
        is(s_mem_wait) {
            state := s_send
        }
        is(s_send) {
            when (io.out.fire) { state := s_idle }
        }
    }
    io.in.ready := (state === s_idle)
    io.out.valid := (state === s_send)
    */
    
    //单周期，拉成纯组合逻辑
    io.in.ready := io.out.ready
    io.out.valid := io.in.valid

    // 拉取其他信号
    val alu_result = io.in.bits.alu_result
    val rs2_data   = io.in.bits.rs2_data

    // 写掩码生成
    val byte_sel = alu_result(1,0)
    val half_sel = alu_result(1)

    val wmask = MuxCase(0.U, Seq(
        is_sb -> (1.U << byte_sel),
        is_sh -> Mux(half_sel, "b1100".U, "b0011".U),
        is_sw -> "b1111".U
    ))

    // 写数据对齐
    val wdata = MuxCase(0.U, Seq(
        is_sb -> (rs2_data(7, 0) << (byte_sel << 3)),
        is_sh -> (rs2_data(15, 0) << (half_sel << 4)),
        is_sw -> rs2_data
    ))

    // 读数据处理
    val rdata = io.mem.rdata
    val rdata_byte = (rdata >> (byte_sel << 3))(7,0)
    val rdata_half = (rdata >> (half_sel << 4))(15,0)

    val mem_data = MuxCase(0.U, Seq(
        is_lb  -> Cat(Fill(24, rdata_byte(7)), rdata_byte),
        is_lbu -> Cat(0.U(24.W), rdata_byte),
        is_lh  -> Cat(Fill(16, rdata_half(15)), rdata_half),
        is_lhu -> Cat(0.U(16.W), rdata_half),
        is_lw  -> rdata
    ))

    // 内存接口输出
    io.mem.valid := (is_load || is_store) && io.in.fire
    io.mem.wen   := is_sw || is_sh || is_sb
    io.mem.raddr := alu_result
    io.mem.waddr := alu_result
    io.mem.wdata := wdata
    io.mem.wmask := wmask

    // 输出打包
    io.out.bits.pc         := io.in.bits.pc
    io.out.bits.inst       := io.in.bits.inst
    io.out.bits.alu_result := alu_result
    io.out.bits.rd_addr    := io.in.bits.rd_addr
    io.out.bits.rd_en      := io.in.bits.rd_en
    io.out.bits.mem_data   := mem_data

    io.out.bits.is_load    := is_load
    io.out.bits.is_jalr    := io.in.bits.is_jalr
    io.out.bits.is_jal     := io.in.bits.is_jal
    io.out.bits.is_store   := is_store

    io.out.bits.csr_wdata  := io.in.bits.csr_wdata
    io.out.bits.csr_wen    := io.in.bits.csr_wen
    io.out.bits.csr_waddr  := io.in.bits.csr_waddr
    io.out.bits.csr_rdata  := io.in.bits.csr_rdata
    io.out.bits.is_csrrw   := io.in.bits.is_csrrw
    io.out.bits.is_csrrs   := io.in.bits.is_csrrs
}
