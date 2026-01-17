package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

  // ALU 操作码编码（4 位）

class ID2EX extends Bundle {
    val pc       = UInt(32.W)
    val inst     = UInt(32.W)
    val rd_addr  = UInt(5.W)
    val rd_en    = Bool()
    
    val alu_a    = UInt(32.W)
    val alu_b    = UInt(32.W)
    val alu_op   = UInt(4.W)

    val rs1_data = UInt(32.W)
    val rs2_data = UInt(32.W)

    // CSR寄存器输出
    val csr_wdata= UInt(32.W)
    val csr_wen   = Bool()
    val csr_waddr = UInt(12.W)
    val csr_rdata = UInt(32.W)
    val is_csrrw  = Bool()
    val is_csrrs  = Bool()

    // 必要的控制信号
    val is_jal    = Bool()
    val is_jalr   = Bool()
    val is_lw     = Bool()
    val is_sw     = Bool()
    val is_lb     = Bool()
    val is_sb     = Bool()
    val is_lh     = Bool()
    val is_sh     = Bool()
    val is_lbu    = Bool()
    val is_lhu    = Bool()

    // 分支类型
    val is_beq   = Bool()
    val is_bne   = Bool()
    val is_blt   = Bool()
    val is_bltu  = Bool()
    val is_bge   = Bool()
    val is_bgeu  = Bool()

    // 异常处理
    val is_ecall = Bool()
    val is_mret  = Bool()
}

class IDU extends Module {
    val io = IO(new Bundle{
        val in = Flipped(Decoupled(new IF2ID))
        val out = Decoupled(new ID2EX)

        // 寄存器读接口
        val reg_rs1_addr = Output(UInt(5.W))
        val reg_rs2_addr = Output(UInt(5.W))
        val reg_rs1_data = Input(UInt(32.W))
        val reg_rs2_data = Input(UInt(32.W))

        // CSR寄存器读接口
        val csr_raddr = UInt(12.W)
        val csr_rdata = Input(UInt(32.W))
        val is_ecall  = Output(Bool())
        val is_mret   = Output(Bool())

        val busy = Input(Bool())
    })

    // 状态机
    val s_idle :: s_decode :: Nil = Enum(2)
    val state = RegInit(s_idle)

    // 默认信号
    io.in.ready := (state === s_idle) && !io.busy
    io.out.valid := (state === s_decode)
    
    val inst = RegInit(0.U(32.W))
    val pc = RegInit(0.U(32.W))
    // 状态机实现
    switch(state) {
        is (s_idle) {
            when (io.in.fire) {
                // 锁存指令
                inst := io.in.bits.inst
                pc := io.in.bits.pc
                state := s_decode
            }
        }

        is (s_decode) {
            when (io.out.fire) {
                state := s_idle
            }
        }
    }

    // 根据inst译码
    val opcode   = inst(6, 0)
    val rd_addr  = inst(11, 7)
    val rs1_addr = inst(19, 15)
    val rs2_addr = inst(24, 20)
    val funct7   = inst(31, 25)
    val funct3   = inst(14, 12)

    // 立即数提取
    val imm_i = Cat(Fill(20, inst(31)), inst(31,20))
    val imm_s = Cat(Fill(20, inst(31)), inst(31,25), inst(11,7))
    val imm_b = Cat(Fill(19, inst(31)), inst(31), inst(7), inst(30,25), inst(11,8), 0.U(1.W))
    val imm_u = Cat(inst(31,12), 0.U(12.W))
    val imm_j = Cat(Fill(11, inst(31)), inst(31), inst(19,12), inst(20), inst(30,21), 0.U(1.W))
    // 控制信号译码
    val is_auipc = opcode === "b0010111".U
    val is_lui   = opcode === "b0110111".U
    val is_addi  = opcode === "b0010011".U && funct3 === "b000".U
    val is_andi  = opcode === "b0010011".U && funct3 === "b111".U
    val is_ori   = opcode === "b0010011".U && funct3 === "b110".U
    val is_xori  = opcode === "b0010011".U && funct3 === "b100".U
    
    val is_lw    = opcode === "b0000011".U && funct3 === "b010".U
    val is_lbu   = opcode === "b0000011".U && funct3 === "b100".U
    val is_lh    = opcode === "b0000011".U && funct3 === "b001".U
    val is_lhu   = opcode === "b0000011".U && funct3 === "b101".U
    val is_lb    = opcode === "b0000011".U && funct3 === "b000".U
    val is_load  = is_lw || is_lbu || is_lh || is_lhu || is_lb

    val is_slti  = opcode === "b0010011".U && funct3 === "b010".U
    val is_sltiu = opcode === "b0010011".U && funct3 === "b011".U
    val is_seqz  = opcode === "b0010011".U && funct3 === "b011".U && inst(31, 20) === "h001".U
    val is_srai  = opcode === "b0010011".U && funct3 === "b101".U && inst(30) === 1.U
    val is_srli  = opcode === "b0010011".U && funct3 === "b101".U && inst(30) === 0.U
    val is_slli  = opcode === "b0010011".U && funct3 === "b001".U
    
    val is_jal   = opcode === "b1101111".U
    val is_jalr  = opcode === "b1100111".U && funct3 === "b000".U
    
    val is_add   = opcode === "b0110011".U && funct3 === "b000".U && inst(30) === 0.U && funct7 === "b0000000".U
    val is_sub   = opcode === "b0110011".U && funct3 === "b000".U && inst(30) === 1.U
    val is_xor   = opcode === "b0110011".U && funct3 === "b100".U
    val is_or    = opcode === "b0110011".U && funct3 === "b110".U
    val is_and   = opcode === "b0110011".U && funct3 === "b111".U
    val is_mul   = opcode === "b0110011".U && funct3 === "b000".U && funct7 === "b0000001".U
    val is_div   = opcode === "b0110011".U && funct3 === "b100".U && funct7 === "b0000001".U
    val is_divu  = opcode === "b0110011".U && funct3 === "b101".U && funct7 === "b0000001".U
    val is_rem   = opcode === "b0110011".U && funct3 === "b110".U && funct7 === "b0000001".U
    val is_remu  = opcode === "b0110011".U && funct3 === "b111".U && funct7 === "b0000001".U
    val is_slt   = opcode === "b0110011".U && funct3 === "b010".U
    val is_sltu  = opcode === "b0110011".U && funct3 === "b011".U
    val is_sll   = opcode === "b0110011".U && funct3 === "b001".U && inst(30) === 0.U
    val is_srl   = opcode === "b0110011".U && funct3 === "b101".U && inst(30) === 0.U && funct7 === "b0000000".U
    val is_sra   = opcode === "b0110011".U && funct3 === "b101".U && inst(30) === 1.U
    
    val is_bne   = opcode === "b1100011".U && funct3 === "b001".U
    val is_beq   = opcode === "b1100011".U && funct3 === "b000".U
    val is_bge   = opcode === "b1100011".U && funct3 === "b101".U
    val is_bgeu  = opcode === "b1100011".U && funct3 === "b111".U
    val is_blt   = opcode === "b1100011".U && funct3 === "b100".U
    val is_bltu  = opcode === "b1100011".U && funct3 === "b110".U
    val is_branch= is_bne || is_beq || is_bge || is_bgeu || is_blt || is_bltu

    val is_sw    = opcode === "b0100011".U && funct3 === "b010".U
    val is_sb    = opcode === "b0100011".U && funct3 === "b000".U
    val is_sh    = opcode === "b0100011".U && funct3 === "b001".U
    val is_store = is_sw || is_sb || is_sh

    val is_ecall = inst === "h00000073".U
    val is_mret  = inst === "h30200073".U
    val is_csrrw = opcode === "b1110011".U && funct3 === "b001".U
    val is_csrrs = opcode === "b1110011".U && funct3 === "b010".U

    val is_op_imm = opcode === "b0010011".U
    val is_op     = opcode === "b0110011".U
    val is_csr    = opcode === "b1110011".U

    // 读寄存器
    io.reg_rs1_addr := rs1_addr
    io.reg_rs2_addr := rs2_addr
    val rs1_data = io.reg_rs1_data
    val rs2_data = io.reg_rs2_data
    // 在IDU里判断寄存器写使能
    // NOTE: ecall/mret are also opcode=SYSTEM, but they should NOT write rd.
    val is_csr_rd = (is_csrrw || is_csrrs) && (rd_addr =/= 0.U)
    val rd_en = is_load || is_lui || is_auipc || is_op || is_jal || is_jalr || is_op_imm || is_csr_rd

    //ALU 源选择
    val alu_a = MuxCase(rs1_data, Seq(
        is_auipc -> pc,
        is_jal   -> pc,
        is_lui   -> 0.U
    ))

    val imm_sel = MuxCase(imm_i, Seq(
        is_lui  -> imm_u,
        is_auipc-> imm_u,
        is_jal  -> imm_j,
        is_jalr -> imm_i,
        is_store-> imm_s,
        is_branch-> imm_b,
        (is_slli || is_srli || is_srai) -> Cat(0.U(27.W), inst(24,20))
    ))
    val use_imm = is_op_imm || is_load || is_store || is_jal || is_jalr || is_auipc || is_lui || is_branch
    val alu_b = Mux(use_imm, imm_sel, rs2_data)

    val alu_op   = MuxCase(AluOp.ADD , Seq(
        is_sub   -> AluOp.SUB,
        (is_and || is_andi) -> AluOp.AND,
        (is_or  || is_ori)  -> AluOp.OR,
        (is_xor || is_xori) -> AluOp.XOR,
        (is_sll || is_slli) -> AluOp.SLL,
        (is_srl || is_srli) -> AluOp.SRL,
        (is_sra || is_srai) -> AluOp.SRA,
        is_slt  -> AluOp.SLT,
        is_sltu -> AluOp.SLTU,
        is_slti -> AluOp.SLT,
        is_sltiu-> AluOp.SLTU,
        is_mul  -> AluOp.MUL,
        is_div  -> AluOp.DIV,
        is_divu -> AluOp.DIVU,
        is_rem  -> AluOp.REM,
        is_remu -> AluOp.REMU
    ))  

    // CSR寄存器接口
    val csr_raddr = MuxCase(inst(31, 20), Seq(
        is_ecall -> "h305".U,  // 读取mtvec
        is_mret  -> "h341".U   // 读取mepc
    ))
    val csr_waddr = MuxCase(inst(31, 20), Seq(
        is_ecall -> "h341".U,  // 写mepc
        is_mret  -> "h342".U   // 写mscause
    ))

    val csr_wdata = MuxCase(rs1_data, Seq(
        is_ecall -> pc,
        is_mret  -> 0.U(32.W)
    ))

    // CSR write enable: csrrw always writes; ecall writes mepc; mret should not write mcause.
    // (csrrs with rs1!=x0 is not implemented here; keep it read-only for now.)
    val csr_wen  = is_csrrw || is_ecall

    // 访存宽度与无符号
    val mem_width = MuxCase("b10".U, Seq(
        (is_lb || is_lbu || is_sb) -> "b00".U,
        (is_lh || is_lhu || is_sh) -> "b01".U
    ))
    val mem_unsigned = is_lbu || is_lhu

    // 输出信号打包
    io.out.bits.pc        := pc
    io.out.bits.inst      := inst
    io.out.bits.rd_addr   := rd_addr
    io.out.bits.alu_a     := alu_a
    io.out.bits.alu_b     := alu_b
    io.out.bits.alu_op    := alu_op
    io.out.bits.rs1_data  := rs1_data
    io.out.bits.rs2_data  := rs2_data
    io.out.bits.rd_en     := rd_en


    io.out.bits.is_jal     := is_jal
    io.out.bits.is_jalr    := is_jalr

    io.out.bits.is_lw      := is_lw
    io.out.bits.is_sw      := is_sw
    io.out.bits.is_lb      := is_lb
    io.out.bits.is_sb      := is_sb
    io.out.bits.is_lh      := is_lh
    io.out.bits.is_sh      := is_sh
    io.out.bits.is_lbu     := is_lbu
    io.out.bits.is_lhu     := is_lhu

    io.out.bits.is_beq     := is_beq
    io.out.bits.is_bne     := is_bne
    io.out.bits.is_blt     := is_blt
    io.out.bits.is_bltu    := is_bltu
    io.out.bits.is_bge     := is_bge
    io.out.bits.is_bgeu    := is_bgeu

    // 把异常处理信号往EXU输出
    io.out.bits.is_ecall   := is_ecall
    io.out.bits.is_mret    := is_mret
    io.out.bits.is_csrrw   := is_csrrw
    io.out.bits.is_csrrs   := is_csrrs

    // 输出CSR读信号
    io.csr_raddr := csr_raddr
    val csr_rdata = io.csr_rdata
    io.is_ecall  := is_ecall
    io.is_mret   := is_mret
    
    // 连接向EXU传递的CSR信号
    io.out.bits.csr_wdata := csr_wdata
    io.out.bits.csr_wen   := csr_wen
    io.out.bits.csr_waddr := csr_waddr
    io.out.bits.csr_rdata := csr_rdata
    
    /*
    printf("IDU: inst=%x, in.valid=%d, in.ready=%d, out.valid=%d, out.ready=%d\n",
        inst, io.in.valid, io.in.ready, io.out.valid, io.out.ready)
    */


    //printf("IDU: pc=%x, inst=%x, busy=%d, ready=%d, state=%d\n", pc, inst, io.busy, io.in.ready, state)
}
