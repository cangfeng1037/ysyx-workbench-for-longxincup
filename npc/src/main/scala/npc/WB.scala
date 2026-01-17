package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._


class WB extends Module {
    val io = IO(new Bundle {
        val in = Flipped(Decoupled(new MEM2WB()))
        // 不需要给IFU，从CPU中推给Regfile的写接口
        val rd_addr = Output(UInt(5.W))
        val rd_data = Output(UInt(32.W))
        val rd_en   = Output(Bool())
        // CSR写接口
        val csr_waddr = Output(UInt(12.W))
        val csr_wdata = Output(UInt(32.W))
        val csr_wen   = Output(Bool())

        val commit    = Output(Bool()) // 指令提交信号
    })
    
    // 拉取信号并锁存
    val pc         = RegInit(0.U(32.W))
    val inst       = RegInit(0.U(32.W))
    val alu_result = RegInit(0.U(32.W))
    val rd_addr    = RegInit(0.U(5.W))
    val rd_en      = RegInit(false.B)
    val mem_data   = RegInit(0.U(32.W))

    // 控制信号
    val is_load    = RegInit(false.B)
    val is_store   = RegInit(false.B)
    val is_jalr    = RegInit(false.B)
    val is_jal     = RegInit(false.B)
    // CSR信号
    val csr_wdata  = RegInit(0.U(32.W))
    val csr_wen    = RegInit(false.B)
    val csr_waddr  = RegInit(0.U(12.W))
    val csr_rdata  = RegInit(0.U(32.W))
    val is_csrrw   = RegInit(false.B)
    val is_csrrs   = RegInit(false.B)

    
    when (io.in.fire) {
        pc         := io.in.bits.pc
        inst       := io.in.bits.inst
        alu_result := io.in.bits.alu_result
        rd_addr    := io.in.bits.rd_addr
        rd_en      := io.in.bits.rd_en
        mem_data   := io.in.bits.mem_data

        // 控制信号
        is_load    := io.in.bits.is_load
        is_store   := io.in.bits.is_store
        is_jalr    := io.in.bits.is_jalr
        is_jal     := io.in.bits.is_jal

        // CSR信号
        csr_wdata  := io.in.bits.csr_wdata
        csr_wen    := io.in.bits.csr_wen
        csr_waddr  := io.in.bits.csr_waddr
        csr_rdata  := io.in.bits.csr_rdata
        is_csrrw   := io.in.bits.is_csrrw
        is_csrrs   := io.in.bits.is_csrrs
    }

    //状态机
    
    val s_idle :: s_writeback :: Nil = Enum(2)
    val state = RegInit(s_idle)

    io.in.ready := (state === s_idle)
    io.commit   := (state === s_writeback)
    switch(state) {
        is (s_idle) {
            when (io.in.fire) { state := s_writeback }
        }
        is (s_writeback) {
            // 写回一拍完成，直接回空闲
            state := s_idle
        }
    }

    // 连接regfile
    io.rd_addr := rd_addr
    // sw不需要写使能
    io.rd_en   := rd_en
    io.rd_data := MuxCase(alu_result, Seq(
        // CSR read/write instructions write the *old* CSR value to rd
        (is_csrrw || is_csrrs) -> csr_rdata,
        is_load -> mem_data,
        (is_jal || is_jalr) -> (pc + 4.U)
    )) // 所有load指令都已经在MEM阶段处理好了

    // 连接CSR写端口
    io.csr_waddr := csr_waddr
    io.csr_wdata := csr_wdata
    io.csr_wen   := csr_wen
}
