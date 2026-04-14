package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._


class WB extends Module {
    val io = IO(new Bundle {
        val in = Flipped(Decoupled(new MEM22WB()))
        // 不需要给IFU，从CPU中推给Regfile的写接口
        val rd_addr = Output(UInt(5.W))
        val rd_data = Output(UInt(32.W))
        val rd_en   = Output(Bool())
        // CSR写接口
        val csr_waddr = Output(UInt(12.W))
        val csr_wdata = Output(UInt(32.W))
        val csr_wen   = Output(Bool())

        val commit    = Output(Bool()) // 指令提交信号
        val commit_pc = Output(UInt(32.W))
        val commit_inst = Output(UInt(32.W))
        val commit_addr = Output(UInt(32.W))

        // Difftest接口

        // 前递相关信号
        val wb_fwd = Output(new fwd_info())
    })
    
    // 拉取信号并锁存
    val pc         = RegInit(0.U(32.W))
    val inst       = RegInit(0.U(32.W))
    val addr = RegInit(0.U(32.W))
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
        addr       := io.in.bits.addr
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

    // 状态机
    
    val (s_idle, s_writeback, s_writeback_hold_opt, state_init) =
      if (WbConfig.useThreeCycleWb) {
        val s_idle :: s_writeback :: s_writeback_hold :: Nil = Enum(3)
        (s_idle, s_writeback, Some(s_writeback_hold), s_idle)
      } else {
        val s_idle :: s_writeback :: Nil = Enum(2)
        (s_idle, s_writeback, None, s_idle)
      }
    val state = RegInit(state_init)

    io.in.ready := (state === s_idle)
    io.commit :=
      (if (WbConfig.useThreeCycleWb) {
        state === s_writeback_hold_opt.get
      } else {
        state === s_writeback
      })
    io.commit_pc := pc
    io.commit_inst := inst
    io.commit_addr := addr
    if (WbConfig.useThreeCycleWb) {
        switch(state) {
            is (s_idle) {
                when (io.in.fire) { state := s_writeback }
            }
            is (s_writeback) {
                state := s_writeback_hold_opt.get
            }
            is (s_writeback_hold_opt.get) {
                state := s_idle
            }
        }
    } else {
        switch(state) {
            is (s_idle) {
                when (io.in.fire) { state := s_writeback }
            }
            is (s_writeback) {
                state := s_idle
            }
        }
    }
    val wb_result = MuxCase(addr, Seq(
        // CSR read/write instructions write the *old* CSR value to rd
        (is_csrrw || is_csrrs) -> csr_rdata,
        is_load -> mem_data,
        (is_jal || is_jalr) -> (pc + 4.U)
    )) // 所有load指令都已经在MEM阶段处理好了

    // ===== RET debug trace (disabled by default) =====
    val wbRetDbgEnable = false.B
    val dbgRetPc = "h80005c18".U(32.W)
    val dbgWinLo = "h80005c04".U(32.W)
    val dbgWinHi = "h80005c18".U(32.W)
    val dbgFollowCnt = RegInit(0.U(5.W))
    val inDbgWin = pc >= dbgWinLo && pc <= dbgWinHi
    when (io.commit && pc === dbgRetPc) {
        dbgFollowCnt := 16.U
    } .elsewhen (io.commit && dbgFollowCnt =/= 0.U) {
        dbgFollowCnt := dbgFollowCnt - 1.U
    }
    val wbDbgFire = wbRetDbgEnable && io.commit && (inDbgWin || dbgFollowCnt =/= 0.U)
    when (wbDbgFire) {
        printf(
            p"[WB-RET-DBG] pc=0x${Hexadecimal(pc)} inst=0x${Hexadecimal(inst)} rd_en=${rd_en} rd=${rd_addr} rd_data=0x${Hexadecimal(wb_result)} is_load=${is_load} is_store=${is_store} follow=${dbgFollowCnt}\n"
        )
    }

    // 连接regfile
    io.rd_addr := rd_addr
    // sw不需要写使能
    io.rd_en   := rd_en
    io.rd_data := wb_result

    // 连接CSR写端口
    io.csr_waddr := csr_waddr
    io.csr_wdata := csr_wdata
    io.csr_wen   := csr_wen

    // 前递相关信号：valid/rd_en 同源，空闲态显式输出无效语义
    val wbFwdActive = rd_en && (state =/= s_idle)
    io.wb_fwd.valid := wbFwdActive
    io.wb_fwd.rd_en := wbFwdActive
    io.wb_fwd.rd_addr := Mux(wbFwdActive, rd_addr, 0.U)
    io.wb_fwd.val_out := Mux(wbFwdActive, wb_result, 0.U)
    io.wb_fwd.rd_is_load := Mux(wbFwdActive, is_load, false.B)
}
