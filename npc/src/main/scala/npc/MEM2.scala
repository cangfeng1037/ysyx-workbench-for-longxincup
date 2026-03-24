package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class MEM22WB extends Bundle {
    val pc         = UInt(32.W)
    val inst       = UInt(32.W)
    val addr       = UInt(32.W)
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

class dcache_resp extends Bundle {
    val addr = UInt(32.W)
    val data = UInt(32.W)
}

class MEM2 extends Module {
    val io = IO(new Bundle{
        val in  = Flipped(Decoupled(new MEM12MEM2()))
        val out = Decoupled(new MEM22WB())
        
        // 内存响应接口（连接到 SRAM）
        val mem_resp = Flipped(Decoupled(new dcache_resp()))
    })

    // 状态机定义
    val s_idle :: s_wait :: s_send :: Nil = Enum(3)
    val state = RegInit(0.U(2.W))

    // 锁存输入信号
    val pc        = RegInit(0.U(32.W))
    val inst      = RegInit(0.U(32.W))
    val addr      = RegInit(0.U(32.W))
    val rd_addr   = RegInit(0.U(5.W))
    val rd_en     = RegInit(false.B)
    val is_load   = RegInit(false.B)
    val is_store  = RegInit(false.B)
    val is_lw     = RegInit(false.B)
    val is_lb     = RegInit(false.B)
    val is_lbu    = RegInit(false.B)
    val is_lh     = RegInit(false.B)
    val is_lhu    = RegInit(false.B)
    val is_jalr   = RegInit(false.B)
    val is_jal    = RegInit(false.B)
    val csr_wdata = RegInit(0.U(32.W))
    val csr_wen   = RegInit(false.B)
    val csr_waddr = RegInit(0.U(12.W))
    val csr_rdata = RegInit(0.U(32.W))
    val is_csrrw  = RegInit(false.B)
    val is_csrrs  = RegInit(false.B)
    val mem_data  = RegInit(0.U(32.W))

    // 默认信号赋值
    io.in.ready := false.B
    io.out.valid := false.B
    io.mem_resp.ready := false.B
    
    switch(state) {
        is (s_idle) {
            // 空闲状态：等待输入
            io.in.ready := true.B
            when(io.in.fire) {
                // 锁存输入信号
                pc         := io.in.bits.pc
                inst       := io.in.bits.inst
                addr       := io.in.bits.addr
                rd_addr    := io.in.bits.rd_addr
                rd_en      := io.in.bits.rd_en
                is_load    := io.in.bits.is_load
                is_store   := io.in.bits.is_store
                is_lw      := io.in.bits.is_lw
                is_lb      := io.in.bits.is_lb
                is_lbu     := io.in.bits.is_lbu
                is_lh      := io.in.bits.is_lh
                is_lhu     := io.in.bits.is_lhu
                is_jalr    := io.in.bits.is_jalr
                is_jal     := io.in.bits.is_jal
                csr_wdata  := io.in.bits.csr_wdata
                csr_wen    := io.in.bits.csr_wen
                csr_waddr  := io.in.bits.csr_waddr
                csr_rdata  := io.in.bits.csr_rdata
                is_csrrw   := io.in.bits.is_csrrw
                is_csrrs   := io.in.bits.is_csrrs

                // load/store 需要等待 dcache 返回；其余指令直接下发
                when(io.in.bits.is_load || io.in.bits.is_store) {
                    state := s_wait
                } .otherwise {
                    mem_data := 0.U
                    state := s_send
                }
            }
        }


        is (s_wait) {
            // 等待dcache的内存响应
            io.mem_resp.ready := true.B
            when(io.mem_resp.fire) {
                // 收到内存响应，准备发送到下一级
                addr := io.mem_resp.bits.addr
                val raw = io.mem_resp.bits.data
                val byteSel = io.mem_resp.bits.addr(1, 0)
                val halfSel = io.mem_resp.bits.addr(1)
                val byteData = MuxLookup(byteSel, raw(7, 0))(Seq(
                    0.U(2.W) -> raw(7, 0),
                    1.U(2.W) -> raw(15, 8),
                    2.U(2.W) -> raw(23, 16),
                    3.U(2.W) -> raw(31, 24)
                ))
                val halfData = Mux(halfSel, raw(31, 16), raw(15, 0))
                val loadData = MuxCase(raw, Seq(
                    is_lbu -> Cat(0.U(24.W), byteData),
                    is_lb  -> Cat(Fill(24, byteData(7)), byteData),
                    is_lhu -> Cat(0.U(16.W), halfData),
                    is_lh  -> Cat(Fill(16, halfData(15)), halfData),
                    is_lw  -> raw
                ))
                mem_data := Mux(is_load, loadData, raw)
                state := s_send
            }
        }

        is (s_send) {
            // 发送数据到下一级
            io.out.valid := true.B
            when(io.out.fire) {
                state := s_idle
            }
        }
    }

    // 输出打包
    io.out.bits.pc         := pc
    io.out.bits.inst       := inst
    io.out.bits.addr       := addr
    io.out.bits.rd_addr    := rd_addr
    io.out.bits.rd_en      := rd_en
    io.out.bits.mem_data   := mem_data
    io.out.bits.is_load    := is_load
    io.out.bits.is_store   := is_store
    io.out.bits.is_jalr    := is_jalr
    io.out.bits.is_jal     := is_jal
    io.out.bits.csr_wdata  := csr_wdata
    io.out.bits.csr_wen    := csr_wen
    io.out.bits.csr_waddr  := csr_waddr
    io.out.bits.csr_rdata  := csr_rdata
    io.out.bits.is_csrrw   := is_csrrw
    io.out.bits.is_csrrs   := is_csrrs
}
