package npc.chisel_src.BranchPredictor

import chisel3._
import chisel3.util._

// GShare 分支预测器（简化版：只输出 pred_next_pc）

class BPU extends Module {
    val io = IO(new Bundle {
        // 预测接口
        val pred_pc = Input(UInt(32.W))
        val pred_next_pc = Output(UInt(32.W))

        // 训练接口（来自 EXU）
        val update_valid = Input(Bool())
        val update_pc = Input(UInt(32.W))
        val update_taken = Input(Bool())
        val update_target = Input(UInt(32.W))
        val update_is_branch = Input(Bool())
    })

    val k = 10
    val pht_size = 1 << k
    val btb_size = 1 << k
    val pht_idx_size = k
    val btb_idx_size = k

    // PHT/BTB 使用 SyncReadMem
    val ghr = RegInit(0.U(k.W)) // 全局历史寄存器
    val pht = SyncReadMem(pht_size, UInt(2.W)) // 2-bit 计数器
    val btb = SyncReadMem(btb_size, UInt(33.W)) // 1 bit 有效位 + 32 bit 目标地址

    // 查询路径：输入 pc 后，下一拍给出预测结果
    val pred_idx_s0 = (io.pred_pc(pht_idx_size - 1, 0) ^ ghr).asUInt
    val btb_idx_s0 = io.pred_pc(btb_idx_size - 1, 0)
    val pht_val_s1 = pht.read(pred_idx_s0, true.B)
    val btb_val_s1 = btb.read(btb_idx_s0, true.B)

    val pred_pc_s1 = RegNext(io.pred_pc, 0.U(32.W))

    val btb_valid_s1 = btb_val_s1(32)
    val btb_target_s1 = btb_val_s1(31, 0)
    val pred_taken_s1 = btb_valid_s1 && (pht_val_s1 >= 2.U)

    // 核心输出：预测下一 PC
    io.pred_next_pc := Mux(pred_taken_s1, btb_target_s1, pred_pc_s1 + 4.U)

    // 训练路径：使用"取指时"快照的 GHR 计算更新索引
    val update_fire = io.update_valid && io.update_is_branch

    // Stage U0: 锁存训练请求并发起 PHT 读
    val update_pc_s0 = RegEnable(io.update_pc, update_fire)
    val update_taken_s0 = RegEnable(io.update_taken, update_fire)
    val update_target_s0 = RegEnable(io.update_target, update_fire)
    val update_ghr_s0 = RegEnable(ghr, update_fire)  // 锁存当前 GHR
    val update_idx_s0 = (update_pc_s0(pht_idx_size - 1, 0) ^ update_ghr_s0).asUInt
    val update_btb_idx_s0 = update_pc_s0(btb_idx_size - 1, 0)
    val old_pht_s1 = pht.read(update_idx_s0, update_fire)

    // Stage U1: 读改写 PHT，taken 时更新 BTB
    val update_fire_s1 = RegNext(update_fire, false.B)
    val update_idx_s1 = RegEnable(update_idx_s0, update_fire)
    val update_btb_idx_s1 = RegEnable(update_btb_idx_s0, update_fire)
    val update_taken_s1 = RegEnable(update_taken_s0, update_fire)
    val update_target_s1 = RegEnable(update_target_s0, update_fire)

    when (update_fire_s1) {
        val new_pht = Mux(update_taken_s1,
            Mux(old_pht_s1 === 3.U, 3.U, old_pht_s1 + 1.U),
            Mux(old_pht_s1 === 0.U, 0.U, old_pht_s1 - 1.U)
        )
        pht.write(update_idx_s1, new_pht)

        when (update_taken_s1) {
            btb.write(update_btb_idx_s1, Cat(1.U(1.W), update_target_s1))
        }
    }

    // 分支训练时推进 GHR
    when (update_fire) {
        ghr := Cat(ghr(k - 2, 0), io.update_taken)
    }
}
