package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class EX2MEM extends Bundle {
    val pc        = UInt(32.W)
    val inst      = UInt(32.W)
    val alu_result= UInt(32.W)
    val rs2_data  = UInt(32.W)
    val rd_addr   = UInt(5.W)
    val rd_en     = Bool()
    val load_tag  = UInt(6.W)

    // csr信号
    val csr_wdata = UInt(32.W)
    val csr_wen   = Bool()
    val csr_waddr = UInt(12.W)
    val csr_rdata = UInt(32.W)
    val is_csrrw  = Bool()
    val is_csrrs  = Bool()

    // 控制信号
    val is_lw     = Bool()
    val is_lbu    = Bool()
    val is_lh     = Bool()
    val is_lhu    = Bool()
    val is_lb     = Bool()
    val is_sw     = Bool()
    val is_sb     = Bool()
    val is_sh     = Bool()
    val is_jalr   = Bool()
    val is_jal    = Bool()
}

class EXU extends Module {
    val io = IO(new Bundle {
        val in  = Flipped(Decoupled(new ID2EX()))
        val out = Decoupled(new EX2MEM())
        val branch = Decoupled(new BranchBus())

        // 前递相关信号
        val exu_fwd = Output(new fwd_info())

        // load tag 分配接口
        val load_tag_alloc_valid = Output(Bool())
        val load_tag_alloc_rd = Output(UInt(5.W))
        val load_tag_alloc_tag = Output(UInt(6.W))

        // BPU 训练接口
        val bpu_update_valid = Output(Bool())
        val bpu_update_pc = Output(UInt(32.W))
        val bpu_update_taken = Output(Bool())
        val bpu_update_target = Output(UInt(32.W))
        val bpu_update_is_branch = Output(Bool())

        val bp_total_count = Output(UInt(32.W))
        val bp_hit_count = Output(UInt(32.W))
    })

    // 状态机
    val s_idle :: s_exec :: Nil = Enum(2)
    val state = RegInit(s_idle)

    // 寄存执行态
    val out_valid = RegInit(false.B)
    io.in.ready := (state === s_idle)

    val alu_a   = RegInit(0.U(32.W))
    val alu_b   = RegInit(0.U(32.W))
    val alu_op  = RegInit(0.U(4.W))
    val rs1_data = RegInit(0.U(32.W))
    val rs2_data = RegInit(0.U(32.W))
    val csr_rdata= RegInit(0.U(32.W))
    val pc       = RegInit(0.U(32.W))
    val inst     = RegInit(0.U(32.W))
    val rd_addr  = RegInit(0.U(5.W))
    val rd_en    = RegInit(false.B)

    val csr_wdata = RegInit(0.U(32.W))
    val csr_wen   = RegInit(false.B)
    val csr_waddr = RegInit(0.U(12.W))
    val is_csrrw  = RegInit(false.B)
    val is_csrrs  = RegInit(false.B)

    val is_lw     = RegInit(false.B)
    val is_lbu    = RegInit(false.B)
    val is_lh     = RegInit(false.B)
    val is_lhu    = RegInit(false.B)
    val is_lb     = RegInit(false.B)
    val is_sw     = RegInit(false.B)
    val is_sb     = RegInit(false.B)
    val is_sh     = RegInit(false.B)
    val is_jalr   = RegInit(false.B)
    val is_jal    = RegInit(false.B)
    val is_ecall  = RegInit(false.B)
    val is_mret   = RegInit(false.B)

    val is_beq   = RegInit(false.B)
    val is_bne   = RegInit(false.B)
    val is_blt   = RegInit(false.B)
    val is_bltu  = RegInit(false.B)
    val is_bge   = RegInit(false.B)
    val is_bgeu  = RegInit(false.B)

    // 前递保持寄存器：在 EXU->MEM 交接后额外保持一拍，填补 EXU/MEM2 前递空窗
    val fwd_hold_rd_addr = RegInit(0.U(5.W))
    val fwd_hold_rd_en = RegInit(false.B)
    val fwd_hold_rd_is_load = RegInit(false.B)
    val fwd_hold_val_out = RegInit(0.U(32.W))

    // load-use tag 分配计数器
    val nextLoadTag = RegInit(1.U(6.W))

    // 上一条已执行指令的正确下一PC，用于本拍输入纠错比较
    val expected_next_pc_reg = RegInit("h30000000".U(32.W))
    val first_inst_reg = RegInit(true.B)
    val bp_expect_valid_reg = RegInit(false.B)
    val bp_total_count_reg = RegInit(0.U(32.W))
    val bp_hit_count_reg = RegInit(0.U(32.W))

    // 基于EXU已锁存指令做纠错判定，避免把前端flush和后端stall连成组合环
    val redirect_now = (state === s_exec) && out_valid && !first_inst_reg && (pc =/= expected_next_pc_reg)
    val bp_check_now = (state === s_exec) && out_valid && bp_expect_valid_reg

    when (bp_check_now) {
        bp_total_count_reg := bp_total_count_reg + 1.U
        when (pc === expected_next_pc_reg) {
            bp_hit_count_reg := bp_hit_count_reg + 1.U
        }
        bp_expect_valid_reg := false.B
    }

    // 状态机
    switch(state) {
        is (s_idle) {
            out_valid := false.B
            when (io.in.fire) {
                state := s_exec
            }
        }

        is (s_exec) {
            out_valid := !redirect_now
            when (redirect_now) {
                // 纠错启动时，冲刷当前EXU执行指令，不向MEM提交
                out_valid := false.B
                state := s_idle
                rd_en := false.B
            } .elsewhen (io.out.fire) {
                out_valid := false.B
                state := s_idle

                // 记录当前已执行指令的正确下一PC，供下一拍输入PC比较
                val cur_branch_taken = MuxCase(false.B, Seq(
                    is_beq  -> (rs1_data === rs2_data),
                    is_bne  -> (rs1_data =/= rs2_data),
                    is_blt  -> (rs1_data.asSInt < rs2_data.asSInt),
                    is_bltu -> (rs1_data < rs2_data),
                    is_bge  -> (rs1_data.asSInt >= rs2_data.asSInt),
                    is_bgeu -> (rs1_data >= rs2_data)
                ))
                val cur_pc_branch = pc + alu_b
                val cur_pc_jal = pc + alu_b
                val cur_pc_jalr = (alu_a + alu_b) & Cat(Fill(31, 1.U), 0.U(1.W))
                val cur_is_jump = is_jal || is_jalr

                expected_next_pc_reg := Mux(cur_is_jump,
                    Mux(is_jalr, cur_pc_jalr, cur_pc_jal),
                    Mux(cur_branch_taken, cur_pc_branch, pc + 4.U)
                )
                first_inst_reg := false.B
                bp_expect_valid_reg := is_beq || is_bne || is_blt || is_bltu || is_bge || is_bgeu
            }
        }
    }

    // s_idle 接收并锁存新指令
    when (io.in.fire) {
        alu_a    := io.in.bits.alu_a
        alu_b    := io.in.bits.alu_b
        alu_op   := io.in.bits.alu_op
        rs1_data := io.in.bits.rs1_data
        rs2_data := io.in.bits.rs2_data
        csr_rdata:= io.in.bits.csr_rdata
        pc       := io.in.bits.pc
        inst     := io.in.bits.inst
        rd_addr  := io.in.bits.rd_addr
        rd_en    := io.in.bits.rd_en
        csr_wdata:= io.in.bits.csr_wdata
        csr_wen  := io.in.bits.csr_wen
        csr_waddr:= io.in.bits.csr_waddr
        is_csrrw := io.in.bits.is_csrrw
        is_csrrs := io.in.bits.is_csrrs
        is_ecall := io.in.bits.is_ecall
        is_mret  := io.in.bits.is_mret
        is_lw    := io.in.bits.is_lw
        is_lbu   := io.in.bits.is_lbu
        is_lh    := io.in.bits.is_lh
        is_lhu   := io.in.bits.is_lhu
        is_lb    := io.in.bits.is_lb
        is_sw    := io.in.bits.is_sw
        is_sb    := io.in.bits.is_sb
        is_sh    := io.in.bits.is_sh
        is_jalr  := io.in.bits.is_jalr
        is_jal   := io.in.bits.is_jal
        is_beq   := io.in.bits.is_beq
        is_bne   := io.in.bits.is_bne
        is_blt   := io.in.bits.is_blt
        is_bltu  := io.in.bits.is_bltu
        is_bge   := io.in.bits.is_bge
        is_bgeu  := io.in.bits.is_bgeu
    }

    when (io.out.fire) {
        rd_en := false.B
        rd_addr := 0.U
        is_lw := false.B
        is_lbu := false.B
        is_lh := false.B
        is_lhu := false.B
        is_lb := false.B
    }

    val alu = Module(new ALU())
    alu.io.a := alu_a
    alu.io.b := alu_b
    alu.io.aluOp := alu_op
    val alu_result = alu.io.out

    // 执行态分支信息
    val is_branch_taken = MuxCase(false.B, Seq(
        is_beq  -> (rs1_data === rs2_data),
        is_bne  -> (rs1_data =/= rs2_data),
        is_blt  -> (rs1_data.asSInt < rs2_data.asSInt),
        is_bltu -> (rs1_data < rs2_data),
        is_bge  -> (rs1_data.asSInt >= rs2_data.asSInt),
        is_bgeu -> (rs1_data >= rs2_data)
    ))
    val pc_branch = pc + alu_b
    val pc_jal = pc + alu_b
    val pc_jalr = (alu_a + alu_b) & Cat(Fill(31, 1.U), 0.U(1.W))
    val is_branch = is_beq || is_bne || is_blt || is_bltu || is_bge || is_bgeu
    val exu_fwd_live_valid = (rd_en || fwd_hold_rd_en) && (state === s_exec) && !redirect_now

    // 交接拍锁存前递信息，下一拍通过 hold_valid 对外可见
    when (io.out.fire && exu_fwd_live_valid) {
        fwd_hold_rd_addr := rd_addr
        fwd_hold_rd_en := rd_en
        fwd_hold_rd_is_load := is_lw || is_lbu || is_lh || is_lhu || is_lb
        fwd_hold_val_out := alu_result
    }
    val exu_fwd_hold_valid_1 = RegNext(io.out.fire && exu_fwd_live_valid, false.B)
    val exu_fwd_hold_valid_2 = RegNext(exu_fwd_hold_valid_1, false.B)

    // 输出打包
    io.out.valid := out_valid && !redirect_now
    io.out.bits.pc := pc
    io.out.bits.inst := inst
    io.out.bits.alu_result := alu_result
    io.out.bits.rs2_data := rs2_data
    io.out.bits.rd_addr := rd_addr
    io.out.bits.rd_en := rd_en
    io.out.bits.load_tag := Mux((is_lw || is_lbu || is_lh || is_lhu || is_lb) && rd_en, nextLoadTag, 0.U)
    io.out.bits.is_lw := is_lw
    io.out.bits.is_lbu := is_lbu
    io.out.bits.is_lh := is_lh
    io.out.bits.is_lhu := is_lhu
    io.out.bits.is_lb := is_lb
    io.out.bits.is_sw := is_sw
    io.out.bits.is_sb := is_sb
    io.out.bits.is_sh := is_sh
    io.out.bits.is_jalr := is_jalr
    io.out.bits.is_jal := is_jal
    io.out.bits.csr_wdata := csr_wdata
    io.out.bits.csr_wen := csr_wen
    io.out.bits.csr_waddr := csr_waddr
    io.out.bits.csr_rdata := csr_rdata
    io.out.bits.is_csrrw := is_csrrw
    io.out.bits.is_csrrs := is_csrrs

    // 分支/跳转反馈
    io.branch.bits.pc_branch := pc_branch
    io.branch.bits.pc_snpc := pc + 4.U
    io.branch.bits.pc_jal := pc_jal
    io.branch.bits.pc_jalr := pc_jalr
    io.branch.bits.is_branch_taken := is_branch_taken && is_branch
    io.branch.bits.is_jal := is_jal
    io.branch.bits.is_jalr := is_jalr
    io.branch.bits.is_ecall := is_ecall
    io.branch.bits.is_mret := is_mret
    io.branch.bits.pc_csr := csr_rdata
    io.branch.bits.is_redirect := redirect_now
    io.branch.bits.redirect_pc := expected_next_pc_reg
    io.branch.valid := redirect_now || io.out.fire

    // 前递：优先当前执行态，若当前无效则使用保持一拍的结果
    val exu_fwd_use_live = exu_fwd_live_valid
    io.exu_fwd.valid := exu_fwd_use_live || exu_fwd_hold_valid_1 || exu_fwd_hold_valid_2
    io.exu_fwd.rd_addr := Mux(exu_fwd_use_live, rd_addr, fwd_hold_rd_addr)
    io.exu_fwd.rd_en := Mux(exu_fwd_use_live, rd_en, fwd_hold_rd_en)
    io.exu_fwd.val_out := Mux(exu_fwd_use_live, alu_result, fwd_hold_val_out)
    io.exu_fwd.rd_is_load := Mux(exu_fwd_use_live, is_lw || is_lbu || is_lh || is_lhu || is_lb, fwd_hold_rd_is_load)

    val curIsLoad = is_lw || is_lbu || is_lh || is_lhu || is_lb
    io.load_tag_alloc_valid := io.out.fire && curIsLoad && rd_en && (rd_addr =/= 0.U) && !redirect_now
    io.load_tag_alloc_rd := rd_addr
    io.load_tag_alloc_tag := nextLoadTag
    when (io.load_tag_alloc_valid) {
        nextLoadTag := nextLoadTag + 1.U
    }

    // BPU训练
    io.bpu_update_valid := io.out.fire && is_branch
    io.bpu_update_pc := pc
    io.bpu_update_taken := is_branch_taken
    io.bpu_update_target := pc_branch
    io.bpu_update_is_branch := is_branch

    io.bp_total_count := bp_total_count_reg
    io.bp_hit_count := bp_hit_count_reg
}
