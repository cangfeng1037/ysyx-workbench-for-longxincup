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

class MemReq extends Bundle {
    val wen   = Bool()
    val raddr = UInt(32.W)
    val waddr = UInt(32.W)
    val wdata = UInt(32.W)
    val wmask = UInt(4.W)
}

class MemResp extends Bundle {
    val rdata = UInt(32.W)
}


class MEM extends Module {
    val io = IO(new Bundle {
        val in  = Flipped(Decoupled(new EX2MEM()))
        val out = Decoupled(new MEM2WB())
        
        // 内存访问接口（连接到 SRAM）
        val mem_req = Decoupled(new MemReq())
        val mem_resp= Flipped(Decoupled(new MemResp()))
    })

    // 先拉取所有信号并锁存
    val pc        = RegInit(0.U(32.W))
    val inst      = RegInit(0.U(32.W))
    val alu_result= RegInit(0.U(32.W))
    val rs2_data  = RegInit(0.U(32.W))
    val rd_addr   = RegInit(0.U(5.W))
    val rd_en     = RegInit(false.B)

    // csr信号
    val csr_wdata = RegInit(0.U(32.W))
    val csr_wen   = RegInit(false.B)
    val csr_waddr = RegInit(0.U(12.W))
    val csr_rdata = RegInit(0.U(32.W))
    val is_csrrw  = RegInit(false.B)
    val is_csrrs  = RegInit(false.B)

    // 控制信号
    val is_lw     = RegInit(false.B)
    val is_lbu    = RegInit(false.B)
    val is_lh     = RegInit(false.B)
    val is_lhu    = RegInit(false.B)
    val is_lb     = RegInit(false.B)
    val is_sw     = RegInit(false.B)
    val is_sb     = RegInit(false.B)
    val is_sh     = RegInit(false.B)
    val is_jalr    = RegInit(false.B)
    val is_jal     = RegInit(false.B)
    val is_load    = RegInit(false.B)
    val is_store   = RegInit(false.B)

    when(io.in.fire) {
        pc         := io.in.bits.pc
        inst       := io.in.bits.inst
        alu_result := io.in.bits.alu_result
        rs2_data   := io.in.bits.rs2_data
        rd_addr    := io.in.bits.rd_addr
        rd_en      := io.in.bits.rd_en

        csr_wdata  := io.in.bits.csr_wdata
        csr_wen    := io.in.bits.csr_wen
        csr_waddr  := io.in.bits.csr_waddr
        csr_rdata  := io.in.bits.csr_rdata
        is_csrrw   := io.in.bits.is_csrrw
        is_csrrs   := io.in.bits.is_csrrs

        is_lw      := io.in.bits.is_lw
        is_lbu     := io.in.bits.is_lbu
        is_lh      := io.in.bits.is_lh
        is_lhu     := io.in.bits.is_lhu
        is_lb      := io.in.bits.is_lb
        is_sw      := io.in.bits.is_sw
        is_sb      := io.in.bits.is_sb
        is_sh      := io.in.bits.is_sh
        is_jalr     := io.in.bits.is_jalr
        is_jal      := io.in.bits.is_jal
        is_load     := io.in.bits.is_lw || io.in.bits.is_lb || io.in.bits.is_lbu || io.in.bits.is_lh || io.in.bits.is_lhu
        is_store    := io.in.bits.is_sw || io.in.bits.is_sb || io.in.bits.is_sh
    }


    // 状态机
    val s_idle :: s_req ::s_wait :: s_send ::Nil = Enum(4)
    val state = RegInit(s_idle)
    
    val in_ready = (state === s_idle)
    val out_valid= RegInit(false.B)
    when (state === s_send && !out_valid) {
        out_valid := true.B
    }
    
    val mem_data = RegInit(0.U(32.W))

    // 默认赋值
    io.mem_req.valid  := false.B
    io.mem_resp.ready := (state === s_wait)   // 仅状态驱动

    val is_load_now  = io.in.bits.is_lw || io.in.bits.is_lb || io.in.bits.is_lbu || io.in.bits.is_lh || io.in.bits.is_lhu
    val is_store_now = io.in.bits.is_sw || io.in.bits.is_sb || io.in.bits.is_sh


    switch(state) {
        is (s_idle) {
            when (io.in.fire) {
                
                when (is_load_now || is_store_now) {
                    state := s_req
                }
                .otherwise {state := s_send}
            }
        }
        
        is (s_req) { // 发出内存请求
            io.mem_req.valid := true.B
            when (io.mem_req.fire) {
                state := Mux(is_load, s_wait, s_send)
            }
        }

        is (s_wait) {
            // ready 由状态驱动，不再在 fire 分支修改
            when (io.mem_resp.fire) {
                state := s_send
                val mem_data_reg = io.mem_resp.bits.rdata
                // 根据ADDR选数据（
                val sel_byte = MuxCase(mem_data_reg(7, 0), Seq(
                    (alu_result(1,0) === "b00".U) -> mem_data_reg(7, 0),
                    (alu_result(1,0) === "b01".U) -> mem_data_reg(15, 8),
                    (alu_result(1,0) === "b10".U) -> mem_data_reg(23, 16),
                    (alu_result(1,0) === "b11".U) -> mem_data_reg(31, 24)
                ))
                val sel_half = Mux(alu_result(1), mem_data_reg(31, 16), mem_data_reg(15, 0))

                mem_data := MuxCase(0.U, Seq(
                    is_lw  -> mem_data_reg,
                    is_lbu -> Cat(0.U(24.W), sel_byte),
                    is_lb  -> Cat(Fill(24, sel_byte(7)), sel_byte),
                    is_lhu -> Cat(0.U(16.W), sel_half),
                    is_lh  -> Cat(Fill(16, sel_half(15)), sel_half)
                ))
            }
        }

        is (s_send) {
            when (io.out.fire) {
                out_valid := false.B
                state := s_idle
            }
        }
    }

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

    // 内存接口输出
    io.mem_req.bits.wen   := is_sw || is_sh || is_sb
    io.mem_req.bits.raddr := alu_result
    io.mem_req.bits.waddr := alu_result
    io.mem_req.bits.wdata := wdata
    io.mem_req.bits.wmask := wmask

    // 输出打包
    io.out.bits.pc         := pc
    io.out.bits.inst       := inst
    io.out.bits.alu_result := alu_result
    io.out.bits.rd_addr    := rd_addr
    io.out.bits.rd_en      := rd_en
    io.out.bits.mem_data   := mem_data

    io.out.bits.is_load    := is_load
    io.out.bits.is_jalr    := is_jalr
    io.out.bits.is_jal     := is_jal
    io.out.bits.is_store   := is_store

    io.out.bits.csr_wdata  := csr_wdata
    io.out.bits.csr_wen    := csr_wen
    io.out.bits.csr_waddr  := csr_waddr
    io.out.bits.csr_rdata  := csr_rdata
    io.out.bits.is_csrrw   := is_csrrw
    io.out.bits.is_csrrs   := is_csrrs
 
    io.in.ready := in_ready
    io.out.valid:= out_valid
}