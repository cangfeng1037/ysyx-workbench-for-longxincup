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
    val is_jalr    = Bool()
    val is_jal     = Bool()
}



class EXU extends Module {
    val io = IO(new Bundle {
        val in  = Flipped(Decoupled(new ID2EX()))
        val out = Decoupled(new EX2MEM())
        val branch = Decoupled(new BranchBus())

        // 前递相关信号
        val exu_fwd = Output(new fwd_info())
    })

    // 状态机
    val s_idle :: s_exec :: Nil = Enum(2)
    val state = RegInit(s_idle)

    // 默认信号
    val out_valid = RegInit(false.B)
    io.in.ready := (state === s_idle)
    io.out.valid := out_valid

    switch(state) {
        is (s_idle) {
            out_valid := false.B
            when (io.in.fire) {
                state := s_exec
            }
        }

        is (s_exec) {
            out_valid := true.B
            when (io.out.fire) {
                out_valid := false.B
                state := s_idle
            }
        }
    }

    // 寄存PC和inst

    // 从输入拉下来，全部锁存
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
    val is_jalr    = RegInit(false.B)
    val is_jal     = RegInit(false.B)
    val is_ecall = RegInit(false.B)
    val is_mret  = RegInit(false.B)

    val is_beq   = RegInit(false.B)
    val is_bne   = RegInit(false.B)
    val is_blt   = RegInit(false.B)
    val is_bltu  = RegInit(false.B)
    val is_bge   = RegInit(false.B)
    val is_bgeu  = RegInit(false.B)

    when (io.out.fire) {
        rd_en := false.B
        rd_addr := 0.U
        is_lw := false.B
        is_lbu := false.B
        is_lh := false.B
        is_lhu := false.B
        is_lb := false.B
    }


    when (io.in.fire) {
        alu_a    := io.in.bits.alu_a
        alu_b    := io.in.bits.alu_b
        alu_op   := io.in.bits.alu_op
        rs1_data := io.in.bits.rs1_data
        rs2_data := io.in.bits.rs2_data
        csr_rdata:= io.in.bits.csr_rdata
        pc        := io.in.bits.pc
        inst      := io.in.bits.inst
        rd_addr   := io.in.bits.rd_addr
        rd_en     := io.in.bits.rd_en
        csr_wdata := io.in.bits.csr_wdata
        csr_wen   := io.in.bits.csr_wen
        csr_waddr := io.in.bits.csr_waddr
        is_csrrw  := io.in.bits.is_csrrw
        is_csrrs  := io.in.bits.is_csrrs
        is_ecall  := io.in.bits.is_ecall
        is_mret   := io.in.bits.is_mret
        is_lw     := io.in.bits.is_lw
        is_lbu    := io.in.bits.is_lbu
        is_lh     := io.in.bits.is_lh
        is_lhu    := io.in.bits.is_lhu
        is_lb     := io.in.bits.is_lb
        is_sw     := io.in.bits.is_sw
        is_sb     := io.in.bits.is_sb
        is_sh     := io.in.bits.is_sh
        is_jalr    := io.in.bits.is_jalr
        is_jal     := io.in.bits.is_jal
        is_beq    := io.in.bits.is_beq
        is_bne    := io.in.bits.is_bne
        is_blt    := io.in.bits.is_blt
        is_bltu   := io.in.bits.is_bltu
        is_bge    := io.in.bits.is_bge
        is_bgeu   := io.in.bits.is_bgeu
    }

    val alu = Module(new ALU())
    alu.io.a := alu_a
    alu.io.b := alu_b
    alu.io.aluOp := alu_op

    val alu_result = alu.io.out

    // 判断分支
    val is_branch_taken = MuxCase(false.B, Seq(
        is_beq  -> (rs1_data === rs2_data),
        is_bne  -> (rs1_data =/= rs2_data),
        is_blt  -> (rs1_data.asSInt < rs2_data.asSInt),
        is_bltu -> (rs1_data < rs2_data),
        is_bge  -> (rs1_data.asSInt >= rs2_data.asSInt),
        is_bgeu -> (rs1_data >= rs2_data)
    ))
    val pc_branch = pc + alu_b

    // 判断跳转
    val pc_jal = pc + alu_b
    val pc_jalr = (alu_a + alu_b) & Cat(Fill(31, 1.U), 0.U(1.W))
 

    // 输出打包
    io.out.bits.pc         := pc
    io.out.bits.inst       := inst
    io.out.bits.alu_result := alu_result
    io.out.bits.rs2_data   := rs2_data
    io.out.bits.rd_addr    := rd_addr
    io.out.bits.rd_en      := rd_en
    io.out.bits.is_lw      := is_lw
    io.out.bits.is_lbu     := is_lbu
    io.out.bits.is_lh      := is_lh
    io.out.bits.is_lhu     := is_lhu
    io.out.bits.is_lb      := is_lb
    io.out.bits.is_sw      := is_sw
    io.out.bits.is_sb      := is_sb
    io.out.bits.is_sh      := is_sh
    io.out.bits.is_jalr    := is_jalr
    io.out.bits.is_jal     := is_jal
    io.out.bits.csr_wdata  := csr_wdata
    io.out.bits.csr_wen    := csr_wen
    io.out.bits.csr_waddr  := csr_waddr
    io.out.bits.csr_rdata  := csr_rdata
    io.out.bits.is_csrrw   := is_csrrw
    io.out.bits.is_csrrs   := is_csrrs

    // 把调转和分支信号拉到IFU模块
    io.branch.bits.pc_branch := pc_branch
    io.branch.bits.pc_jal    := pc_jal
    io.branch.bits.pc_jalr   := pc_jalr
    io.branch.bits.is_branch_taken := is_branch_taken
    io.branch.bits.is_jal   := is_jal
    io.branch.bits.is_jalr  := is_jalr
    io.branch.bits.is_ecall := is_ecall
    io.branch.bits.is_mret  := is_mret
    io.branch.bits.pc_csr   := csr_rdata
    
    // 还需要设置握手信号
    io.branch.valid := out_valid

    // 前递相关信号
    io.exu_fwd.valid := rd_en && io.out.valid
    io.exu_fwd.rd_addr := rd_addr
    io.exu_fwd.rd_en := rd_en
    io.exu_fwd.val_out := alu_result
    io.exu_fwd.rd_is_load := is_lw || is_lbu || is_lh || is_lhu || is_lb
}
