// 将IFU分成两个阶段，IFU1负责发送指令和处理分支跳转，IFU2负责接收指令送到ID阶段
// 分支预测：BPU 查询，严格执行 pred_next_pc

package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class IF12IF2 extends Bundle {
    val pc    = UInt(32.W)
    val kill  = Bool()
}

class BranchBus extends Bundle {
    // 分支/跳转实际目标
    val pc_branch = UInt(32.W)
    val pc_snpc   = UInt(32.W)
    val pc_jal    = UInt(32.W)
    val pc_jalr   = UInt(32.W)
    val is_branch_taken = Bool()
    val is_jal   = Bool()
    val is_jalr  = Bool()
    val is_ecall = Bool()
    val is_mret  = Bool()
    val pc_csr   = UInt(32.W)

    // EXU 重定向（预测错误时）
    val is_redirect = Bool()      // 是否需要重定向
    val redirect_pc = UInt(32.W)  // 重定向目标
}

// instruction request and response
class ICacheFetchReq extends Bundle {
    val pc = UInt(32.W)
    val kill = Bool()
}


class IFU1 extends Module {
    val io = IO(new Bundle{
        val out = Decoupled(new IF12IF2)
        val in  = Flipped(Decoupled(new BranchBus))

        val inst_req = Decoupled(new ICacheFetchReq)

        // BPU 接口
        val bpu_pred_pc = Output(UInt(32.W))
        val bpu_pred_next_pc = Input(UInt(32.W))

        val stall = Input(Bool())
        val flush = Output(Bool())
    })

    // PC 寄存器
    val pc = RegInit("h30000000".U(32.W))

    // 锁存一次发射请求对应的pc
    val pc_reg = RegInit(0.U(32.W))

    // 请求有效位：拉高后保持，直到与ICache握手成功
    val req_valid = RegInit(false.B)
    val out_valid = RegInit(false.B)

    // BPU 响应锁存
    val pred_next_pc_reg = RegInit(0.U(32.W))
    val wait_pred = RegInit(false.B)
    val pred_valid = RegInit(false.B)  // BPU 响应有效标志

    when (reset.asBool) {
        pc := "h30000000".U(32.W)
        pc_reg := "h30000000".U(32.W)
        req_valid := false.B
        out_valid := false.B
        wait_pred := false.B
        pred_next_pc_reg := 0.U
        pred_valid := false.B
    }

    // 发送 BPU 预测查询
    io.bpu_pred_pc := pc

    // EXU 重定向：预测错误时
    val redirect_valid = io.in.valid && io.in.bits.is_redirect

    // 分支/跳转实际发生
    val branch_taken_valid = io.in.valid && {
        io.in.bits.is_jal || io.in.bits.is_jalr || io.in.bits.is_branch_taken ||
        io.in.bits.is_ecall || io.in.bits.is_mret
    }

    // 重定向目标 PC（优先使用 EXU 的重定向，否则使用分支/跳转目标）
    val redirect_pc = MuxCase(0.U(32.W), Seq(
        redirect_valid -> io.in.bits.redirect_pc,
        io.in.bits.is_jal    -> io.in.bits.pc_jal,
        io.in.bits.is_jalr   -> io.in.bits.pc_jalr,
        io.in.bits.is_branch_taken -> io.in.bits.pc_branch,
        io.in.bits.is_ecall  -> io.in.bits.pc_csr,
        io.in.bits.is_mret   -> io.in.bits.pc_csr
    ))

    // 给状态机赋初值
    io.inst_req.valid := req_valid && !io.stall && !redirect_valid
    io.inst_req.bits.pc := pc_reg
    io.out.valid := false.B

    // 收到 BPU 响应时，锁存 pred_next_pc，设置有效标志
    when (wait_pred) {
        pred_next_pc_reg := io.bpu_pred_next_pc
        pred_valid := true.B
        wait_pred := false.B
    }

    // redirect_valid 优先级最高，立即更新 PC 并取消当前请求
    when (redirect_valid || branch_taken_valid) {
        pc := redirect_pc
        req_valid := false.B
        out_valid := false.B
        wait_pred := false.B
        pred_valid := false.B
    }.otherwise {
        // 当前没有待发请求时，发起取指请求
        when (!req_valid && !out_valid && !io.stall) {
            req_valid := true.B
            pc_reg := pc
            wait_pred := true.B  // 等待 BPU 响应
            pred_valid := false.B // 清除有效标志
        }

        // 请求握手成功后，向IFU2发出本次请求元数据
        when (io.inst_req.fire) {
            req_valid := false.B
            out_valid := true.B
        }

        // IFU2 握手成功后，使用 pred_next_pc 更新 PC（如果 BPU 响应有效）或默认顺序执行
        when (io.out.fire) {
            pc := Mux(pred_valid, pred_next_pc_reg, pc + 4.U)
            out_valid := false.B
        }
    }

    // 设置握手信号
    io.out.valid := out_valid
    io.out.bits.pc := pc_reg
    io.in.ready := true.B
    io.flush := redirect_valid || branch_taken_valid
    io.inst_req.bits.kill := redirect_valid || branch_taken_valid
    io.out.bits.kill := redirect_valid || branch_taken_valid
}
