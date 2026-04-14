// MEM1阶段：发送内存请求，MEM2阶段：等待内存响应并处理数据，最后送到WB阶段
package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class MEM12MEM2 extends Bundle {
    val pc        = UInt(32.W)
    val inst       = UInt(32.W)
    val addr       = UInt(32.W)
    val rd_addr    = UInt(5.W)
    val rd_en      = Bool()
    val load_tag   = UInt(6.W)

    // csr信号
    val csr_wdata  = UInt(32.W)
    val csr_wen    = Bool()
    val csr_waddr  = UInt(12.W)
    val csr_rdata  = UInt(32.W)
    val is_csrrw   = Bool()
    val is_csrrs   = Bool()

    // 控制信号
    val is_load     = Bool()
    val is_store    = Bool()
    val is_lw       = Bool()
    val is_lb       = Bool()
    val is_lbu      = Bool()
    val is_lh       = Bool()
    val is_lhu      = Bool()
    val is_jalr     = Bool()
    val is_jal      = Bool()
}

class dcache_req extends Bundle {
    val pc = UInt(32.W)
    val inst = UInt(32.W)
    val wen = Bool() // true: 写请求，false: 读请求
    val rsize = UInt(3.W) // 0: byte, 1: half-word, 2: word
    val wdata = UInt(32.W) // 写数据
    val wmask = UInt(4.W) // 写掩码，按字节使能
    val raddr = UInt(32.W)
    val waddr = UInt(32.W)
    val wsize = UInt(3.W) // 写传输大小，0=byte, 1=half, 2=word
    val bypass = Bool() // true: 直通写，不走DCache写命中/替换
}

class MEM1 extends Module {
    val io = IO(new Bundle {
        val in  = Flipped(Decoupled(new EX2MEM()))
        val out = Decoupled(new MEM12MEM2())
        val mem1_fwd = Output(new fwd_info())
        
        // 内存访问接口（连接到 SRAM）
        val mem_req = Decoupled(new dcache_req())
    })

    // 先拉取所有信号并锁存
    val pc        = RegInit(0.U(32.W))
    val inst      = RegInit(0.U(32.W))
    val alu_result= RegInit(0.U(32.W))
    val rs2_data  = RegInit(0.U(32.W))
    val rd_addr   = RegInit(0.U(5.W))
    val rd_en     = RegInit(false.B)
    val load_tag  = RegInit(0.U(6.W))

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
        load_tag   := io.in.bits.load_tag

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


    // 状态机：空闲 -> 访存请求 -> 旁路发送
    val s_idle :: s_req :: s_bypass :: Nil = Enum(3)
    val state = RegInit(s_idle)
    
    val in_ready = (state === s_idle)
    val req_sent = RegInit(false.B) // mem_req 是否已成功握手
    val out_sent = RegInit(false.B) // token 是否已发给 MEM2
    
    // 默认赋值
    io.mem_req.valid  := false.B
    io.out.valid := false.B

    val is_load_now  = io.in.bits.is_lw || io.in.bits.is_lb || io.in.bits.is_lbu || io.in.bits.is_lh || io.in.bits.is_lhu
    val is_store_now = io.in.bits.is_sw || io.in.bits.is_sb || io.in.bits.is_sh

    switch(state) {
        is (s_idle) {
            when (io.in.fire) {
                when (is_load_now || is_store_now) {
                    req_sent := false.B
                    out_sent := false.B
                    state := s_req
                }
                .otherwise {
                    state := s_bypass // 非访存指令直接下发
                }
            }
        }
        
        is (s_req) { // 发出内存请求
            io.mem_req.valid := !req_sent
            io.out.valid := req_sent && !out_sent

            when (io.mem_req.fire) {
                req_sent := true.B
            }
            when (io.out.fire) {
                out_sent := true.B
            }
            when (req_sent && out_sent) {
                state := s_idle
            }
        }

        is (s_bypass) {
            io.out.valid := true.B
            when (io.out.fire) {
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

    // 按访存指令语义生成请求宽度：byte/half/word
    val rsize = MuxCase(2.U, Seq(
        (is_lb || is_lbu) -> 0.U,
        (is_lh || is_lhu) -> 1.U,
        is_lw             -> 2.U
    ))
    // 内存接口输出
    io.mem_req.bits.wen   := is_sw || is_sh || is_sb
    io.mem_req.bits.pc    := pc
    io.mem_req.bits.inst  := inst
    io.mem_req.bits.raddr := alu_result
    io.mem_req.bits.waddr := alu_result
    io.mem_req.bits.wdata := wdata
    io.mem_req.bits.wmask := wmask
    io.mem_req.bits.rsize := rsize
    io.mem_req.bits.wsize := MuxCase(2.U, Seq(
        is_sb -> 0.U,
        is_sh -> 1.U,
        is_sw -> 2.U
    ))
    // bootloader 阶段（pc < 0xa0010000）的访存优先旁路，避免与 DCache 一致性耦合
    val is_bootloader_phase = pc < "ha0010000".U(32.W)
    val is_cacheable_addr =
        (alu_result(31, 26) === "b101000".U) || // 0xa0xx_xxxx
        (alu_result(31, 26) === "b100000".U) || // 0x80xx_xxxx
        (alu_result(31, 16) === "h8000".U(16.W)) // 0x8000_xxxx
    val is_uncacheable_store = is_store && !is_cacheable_addr
    val is_mem_op = is_load || is_store
    io.mem_req.bits.bypass := is_uncacheable_store || (is_bootloader_phase && is_mem_op)

    // ===== MEM1 RET debug trace (disabled by default) =====
    val mem1RetDbgEnable = false.B
    val dbgStackLo = "h8004ff00".U(32.W)
    val dbgStackHi = "h80050020".U(32.W)
    val dbgPcLo = "h80005c04".U(32.W)
    val dbgPcHi = "h80005c10".U(32.W)
    val dbgAddr = alu_result
    val dbgHitAddr = dbgAddr >= dbgStackLo && dbgAddr <= dbgStackHi
    val dbgHitPc = pc >= dbgPcLo && pc <= dbgPcHi
    when (mem1RetDbgEnable && io.mem_req.fire && (is_load || is_store) && (dbgHitAddr || dbgHitPc)) {
        printf(
            p"[MEM1-RET-DBG] pc=0x${Hexadecimal(pc)} inst=0x${Hexadecimal(inst)} addr=0x${Hexadecimal(dbgAddr)} is_load=${is_load} is_store=${is_store} rsize=${rsize} rd_en=${rd_en} rd=${rd_addr} wdata=0x${Hexadecimal(wdata)} wmask=0x${Hexadecimal(wmask)} bypass=${io.mem_req.bits.bypass}\n"
        )
    }

    // ===== MEM1 exact watch trace (default on, precise addr only) =====
    val watch0 = "h8004ff48".U(32.W)
    val watch1 = "h8004ffe0".U(32.W)
    val watch2 = "h8004ff44".U(32.W)
    val watch3 = "h8004ff4c".U(32.W)
    val watch4 = "h8004ff40".U(32.W)
    val watch5 = "h8004ff50".U(32.W)
    val dbgWordBase = Cat(dbgAddr(31, 2), 0.U(2.W))
    val isWatchAddr =
        (dbgWordBase === watch0) || (dbgWordBase === watch1) || (dbgWordBase === watch2) ||
        (dbgWordBase === watch3) || (dbgWordBase === watch4) || (dbgWordBase === watch5)
    when (false.B && io.mem_req.fire && is_store && isWatchAddr) {
        printf(
            p"[MEM1-WATCH] pc=0x${Hexadecimal(pc)} inst=0x${Hexadecimal(inst)} addr=0x${Hexadecimal(dbgAddr)} word=0x${Hexadecimal(dbgWordBase)} wdata=0x${Hexadecimal(wdata)} wmask=0x${Hexadecimal(wmask)} wsize=${io.mem_req.bits.wsize} bypass=${io.mem_req.bits.bypass}\n"
        )
    }

    val mem1_result = MuxCase(alu_result, Seq(
        (is_csrrw || is_csrrs) -> csr_rdata,
        (is_jal || is_jalr) -> (pc + 4.U)
    ))
    io.mem1_fwd.rd_en := rd_en && (state =/= s_idle)
    io.mem1_fwd.rd_addr := rd_addr
    io.mem1_fwd.rd_is_load := is_load
    io.mem1_fwd.val_out := mem1_result
    io.mem1_fwd.valid := io.mem1_fwd.rd_en && !is_load

    // 输出打包
    io.out.bits.pc         := pc
    io.out.bits.inst       := inst
    io.out.bits.addr       := alu_result
    io.out.bits.rd_addr    := rd_addr
    io.out.bits.rd_en      := rd_en
    io.out.bits.load_tag   := load_tag

    io.out.bits.is_load    := is_load
    io.out.bits.is_jalr    := is_jalr
    io.out.bits.is_jal     := is_jal
    io.out.bits.is_store   := is_store
    io.out.bits.is_lw      := is_lw
    io.out.bits.is_lb      := is_lb
    io.out.bits.is_lbu     := is_lbu
    io.out.bits.is_lh      := is_lh
    io.out.bits.is_lhu     := is_lhu

    io.out.bits.csr_wdata  := csr_wdata
    io.out.bits.csr_wen    := csr_wen
    io.out.bits.csr_waddr  := csr_waddr
    io.out.bits.csr_rdata  := csr_rdata
    io.out.bits.is_csrrw   := is_csrrw
    io.out.bits.is_csrrs   := is_csrrs
 
    io.in.ready := in_ready
}
