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
        val branch = Output(new Bundle{
            val pc_branch = UInt(32.W)
            val pc_jal    = UInt(32.W)
            val pc_jalr   = UInt(32.W)
            val is_branch_taken = Bool()
            val is_jal   = Bool()
            val is_jalr  = Bool()

            val is_ecall = Bool()
            val is_mret  = Bool()
            val pc_csr   = UInt(32.W) // 从CSR模块读到的数据,是PC跳转需要的地址
        })
    })

    // 状态机
    io.in.ready := io.out.ready
    io.out.valid := io.in.valid

    // 从输入拉下来
    val alu_a   = io.in.bits.alu_a
    val alu_b   = io.in.bits.alu_b
    val alu_op  = io.in.bits.alu_op
    val rs1_data = io.in.bits.rs1_data
    val rs2_data = io.in.bits.rs2_data
    val csr_rdata= io.in.bits.csr_rdata


    val alu = Module(new ALU())
    alu.io.a := alu_a
    alu.io.b := alu_b
    alu.io.aluOp := alu_op

    val alu_result = alu.io.out

    // 判断分支
    val is_branch_taken = MuxCase(false.B, Seq(
        io.in.bits.is_beq  -> (rs1_data === rs2_data),
        io.in.bits.is_bne  -> (rs1_data =/= rs2_data),
        io.in.bits.is_blt  -> (rs1_data.asSInt < rs2_data.asSInt),
        io.in.bits.is_bltu -> (rs1_data < rs2_data),
        io.in.bits.is_bge  -> (rs1_data.asSInt >= rs2_data.asSInt),
        io.in.bits.is_bgeu -> (rs1_data >= rs2_data)
    ))
    val pc_branch = io.in.bits.pc + io.in.bits.alu_b

    // 判断跳转
    val pc_jal = io.in.bits.pc + io.in.bits.alu_b
    val pc_jalr = (alu_a + alu_b) & Cat(Fill(31, 1.U), 0.U(1.W))

    // 异常处理：执行ECALL时，跳转到mtvec
    val is_ecall = io.in.bits.is_ecall
    val is_mret  = io.in.bits.is_mret   

    // 输出打包
    io.out.bits.pc         := io.in.bits.pc
    io.out.bits.inst       := io.in.bits.inst
    io.out.bits.alu_result := alu_result
    io.out.bits.rs2_data   := io.in.bits.rs2_data
    io.out.bits.rd_addr    := io.in.bits.rd_addr
    io.out.bits.rd_en      := io.in.bits.rd_en
    io.out.bits.is_lw      := io.in.bits.is_lw
    io.out.bits.is_lbu     := io.in.bits.is_lbu
    io.out.bits.is_lh      := io.in.bits.is_lh
    io.out.bits.is_lhu     := io.in.bits.is_lhu
    io.out.bits.is_lb      := io.in.bits.is_lb
    io.out.bits.is_sw      := io.in.bits.is_sw
    io.out.bits.is_sb      := io.in.bits.is_sb
    io.out.bits.is_sh      := io.in.bits.is_sh
    io.out.bits.is_jalr    := io.in.bits.is_jalr
    io.out.bits.is_jal     := io.in.bits.is_jal
    io.out.bits.csr_wdata  := io.in.bits.csr_wdata
    io.out.bits.csr_wen    := io.in.bits.csr_wen
    io.out.bits.csr_waddr  := io.in.bits.csr_waddr
    io.out.bits.csr_rdata  := csr_rdata
    io.out.bits.is_csrrw   := io.in.bits.is_csrrw
    io.out.bits.is_csrrs   := io.in.bits.is_csrrs

    // 把调转和分支信号拉到IFU模块
    io.branch.pc_branch := pc_branch
    io.branch.pc_jal    := pc_jal
    io.branch.pc_jalr   := pc_jalr
    io.branch.is_branch_taken := is_branch_taken
    io.branch.is_jal   := io.in.bits.is_jal
    io.branch.is_jalr  := io.in.bits.is_jalr
    io.branch.is_ecall := is_ecall
    io.branch.is_mret  := is_mret
    io.branch.pc_csr   := csr_rdata
}
