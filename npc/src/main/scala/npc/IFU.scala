package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class IF2ID extends Bundle {
    val pc    = UInt(32.W)
    val inst  = UInt(32.W)
}

class BranchBus extends Bundle {
    val pc_branch = (UInt(32.W))
    val pc_jal    = (UInt(32.W))
    val pc_jalr   = (UInt(32.W))
    val is_branch_taken = (Bool())
    val is_jal   = (Bool())
    val is_jalr  = (Bool())

    val is_ecall = (Bool())
    val is_mret  = (Bool())
    val pc_csr   = (UInt(32.W)) // 从CSR模块读到的数据,是PC跳转需要的地址
}

// instruction request and response
class inst_req extends Bundle {
    val pc = UInt(32.W)
}

class inst_resp extends Bundle {
    val inst = UInt(32.W)
}

class IFU extends Module {
    val io = IO(new Bundle{
        val out = Decoupled(new IF2ID)
        val in  = Flipped(Decoupled(new BranchBus))

        val inst_req = Decoupled(new inst_req)
        val inst_resp= Flipped(Decoupled(new inst_resp))

        val flush = Output(Bool())
    })

    // 在 flash 中取指令
    val pc = RegInit("h30000000".U(32.W))

    // 锁存pc
    val pc_reg = RegInit(0.U(32.W))
    val inst_reg = RegInit(0.U(32.W))
    
    // 实现状态机
    val s_idle :: wait_inst :: Nil = Enum(2)
    val state = RegInit(s_idle)
    val out_valid = RegInit(false.B)

    when (reset.asBool) {
        pc := "h30000000".U(32.W)
        pc_reg := "h30000000".U(32.W)
        inst_reg := 0.U
        state := s_idle
        out_valid := false.B
    }
    
    // 给状态机赋初值    
    io.inst_req.valid := false.B
    io.inst_req.bits.pc := pc
    io.inst_resp.ready := (state === wait_inst) && !out_valid
    io.out.valid := false.B

    

    val redirect_valid = io.in.valid && {
        io.in.bits.is_jal || io.in.bits.is_jalr || io.in.bits.is_branch_taken ||
        io.in.bits.is_ecall || io.in.bits.is_mret
    }

    switch(state) {
        is (s_idle) { // S_idle 只发inst_req
        // 在s_idle时锁存pc

            // 重定向当拍不发取指请求，避免把“旧pc”的请求送入ISRAM
            io.inst_req.valid := !redirect_valid
            when (io.inst_req.fire) {
                state := wait_inst
                pc_reg := pc
            }
        }

        is (wait_inst) { // s_wait_inst 只接受inst_resp
            when (io.inst_resp.fire) {
                out_valid := true.B
                // 锁存inst
                inst_reg := io.inst_resp.bits.inst
                //io.inst_resp.ready := false.B
            }
            when (io.out.fire) { out_valid := false.B; state := s_idle}
        }
}

    val redirect_pc = MuxCase(pc + 4.U, Seq(
        io.in.bits.is_jal    -> io.in.bits.pc_jal,
        io.in.bits.is_jalr   -> io.in.bits.pc_jalr,
        io.in.bits.is_branch_taken -> io.in.bits.pc_branch,
        io.in.bits.is_ecall  -> io.in.bits.pc_csr,
        io.in.bits.is_mret   -> io.in.bits.pc_csr
    ))

    when (redirect_valid) {
        pc := redirect_pc
        out_valid := false.B
        state := s_idle
    }
    .elsewhen (io.out.fire) {
        pc := pc + 4.U
        out_valid := false.B
        //printf("PC updated: 0x%x -> 0x%x\n", pc, pc_next)
    }
    
    // 设置握手信号, 用锁存值
    io.out.valid := out_valid
    io.out.bits.pc := pc_reg
    io.out.bits.inst := inst_reg
    io.in.ready := true.B
    io.flush := redirect_valid

    //printf("IFU: pc=%x, inst=%x, redirect=%d, next_pc=%x, state=%d, inst_req_valid=%d, inst_resp_ready=%d\n", pc, inst_reg, redirect_valid, redirect_pc, state, io.inst_req.valid, io.inst_resp.ready)
}


