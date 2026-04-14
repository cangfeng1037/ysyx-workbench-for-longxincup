// Hazard Unit: 处理数据冒险和控制冒险的单元

package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._

class fwd_info extends Bundle {
    val valid = Bool()
    val rd_addr = UInt(5.W)
    val rd_en   = Bool()
    val rd_is_load = Bool() // 是否是load指令，load指令需要特殊处理
    val val_out = UInt(32.W)
}

class HazardUnit extends Module {
    val io = IO(new Bundle {
        val exu_fwd = Input(new fwd_info())
        val mem1_fwd = Input(new fwd_info())
        val mem2_fwd = Input(new fwd_info())
        val wb_fwd = Input(new fwd_info())

        val load_tag_alloc_valid = Input(Bool())
        val load_tag_alloc_rd = Input(UInt(5.W))
        val load_tag_alloc_tag = Input(UInt(6.W))
        val load_tag_commit_valid = Input(Bool())
        val load_tag_commit_rd = Input(UInt(5.W))
        val load_tag_commit_tag = Input(UInt(6.W))

        val id_rs1 = Input(UInt(5.W))
        val id_rs2 = Input(UInt(5.W))
        val use_rs1 = Input(Bool())
        val use_rs2 = Input(Bool())
        val id_valid = Input(Bool())

        val dbg_id_pc = Input(UInt(32.W))
        val dbg_id_inst = Input(UInt(32.W))
        val dbg_id_valid = Input(Bool())
        val dbg_wb_pc = Input(UInt(32.W))
        val dbg_wb_inst = Input(UInt(32.W))
        val dbg_wb_valid = Input(Bool())

        // 发送给 IDU 的前递结果
        val fs1_fwd_en = Output(Bool())
        val fs1_fwd_data = Output(UInt(32.W))
        val fs2_fwd_en = Output(Bool())
        val fs2_fwd_data = Output(UInt(32.W))

        // 发送给IDU的冒险信号
        val stall = Output(Bool())

    })

    // 默认不冒险
    io.stall := false.B
    io.fs1_fwd_en := false.B
    io.fs1_fwd_data := 0.U
    io.fs2_fwd_en := false.B
    io.fs2_fwd_data := 0.U

    val pendingValid = RegInit(VecInit(Seq.fill(32)(false.B)))
    val pendingTag = RegInit(VecInit(Seq.fill(32)(0.U(6.W))))

    when (io.load_tag_alloc_valid && io.load_tag_alloc_rd =/= 0.U) {
        pendingValid(io.load_tag_alloc_rd) := true.B
        pendingTag(io.load_tag_alloc_rd) := io.load_tag_alloc_tag
    }

    when (io.load_tag_commit_valid && io.load_tag_commit_rd =/= 0.U) {
        when (pendingValid(io.load_tag_commit_rd) && (pendingTag(io.load_tag_commit_rd) === io.load_tag_commit_tag)) {
            pendingValid(io.load_tag_commit_rd) := false.B
        }
    }
    
    // 先判断依赖关系，再判断该级前递值是否就绪(valid)
    val rs1_use = io.id_valid && io.use_rs1
    val rs2_use = io.id_valid && io.use_rs2

    val exuHasRd = io.exu_fwd.valid && io.exu_fwd.rd_en && (io.exu_fwd.rd_addr =/= 0.U)
    val mem1HasRd = io.mem1_fwd.valid && io.mem1_fwd.rd_en && (io.mem1_fwd.rd_addr =/= 0.U)
    val mem2HasRd = io.mem2_fwd.valid && io.mem2_fwd.rd_en && (io.mem2_fwd.rd_addr =/= 0.U)
    val wbHasRd = io.wb_fwd.valid && io.wb_fwd.rd_en && (io.wb_fwd.rd_addr =/= 0.U)

    val rs1_exu_dep = rs1_use && exuHasRd && io.exu_fwd.rd_addr === io.id_rs1 && io.id_rs1 =/= 0.U
    val rs1_mem1_dep = rs1_use && mem1HasRd && io.mem1_fwd.rd_addr === io.id_rs1 && io.id_rs1 =/= 0.U
    val rs1_mem2_dep = rs1_use && mem2HasRd && io.mem2_fwd.rd_addr === io.id_rs1 && io.id_rs1 =/= 0.U
    val rs1_wb_dep = rs1_use && wbHasRd && io.wb_fwd.rd_addr === io.id_rs1 && io.id_rs1 =/= 0.U

    // EXU 阶段的 load 结果还不可用于前递，避免把地址当作数据前递
    val rs1_exu_ready = rs1_exu_dep && exuHasRd && !io.exu_fwd.rd_is_load
    val rs1_mem1_ready = rs1_mem1_dep && mem1HasRd
    val rs1_mem2_ready = rs1_mem2_dep && mem2HasRd
    val rs1_wb_ready = rs1_wb_dep && wbHasRd
    val rs1_any_dep = rs1_exu_dep || rs1_mem1_dep || rs1_mem2_dep || rs1_wb_dep
    val rs1_any_ready = rs1_exu_ready || rs1_mem1_ready || rs1_mem2_ready || rs1_wb_ready
    val stall_rs1_raw_unready = rs1_any_dep && !rs1_any_ready

    when (rs1_exu_ready) {
        io.fs1_fwd_en := true.B
        io.fs1_fwd_data := io.exu_fwd.val_out
    } .elsewhen (rs1_mem1_ready) {
        io.fs1_fwd_en := true.B
        io.fs1_fwd_data := io.mem1_fwd.val_out
    } .elsewhen (rs1_mem2_ready) {
        io.fs1_fwd_en := true.B
        io.fs1_fwd_data := io.mem2_fwd.val_out
    } .elsewhen (rs1_wb_ready) {
        io.fs1_fwd_en := true.B
        io.fs1_fwd_data := io.wb_fwd.val_out
    } .otherwise {
        // 不命中，正常从寄存器读
        io.fs1_fwd_en := false.B
    }

    // rs2 前递判断
    val rs2_exu_dep = rs2_use && exuHasRd && io.exu_fwd.rd_addr === io.id_rs2 && io.id_rs2 =/= 0.U
    val rs2_mem1_dep = rs2_use && mem1HasRd && io.mem1_fwd.rd_addr === io.id_rs2 && io.id_rs2 =/= 0.U
    val rs2_mem2_dep = rs2_use && mem2HasRd && io.mem2_fwd.rd_addr === io.id_rs2 && io.id_rs2 =/= 0.U
    val rs2_wb_dep =  rs2_use && wbHasRd && io.wb_fwd.rd_addr === io.id_rs2 && io.id_rs2 =/= 0.U

    val rs2_exu_ready = rs2_exu_dep && exuHasRd && !io.exu_fwd.rd_is_load
    val rs2_mem1_ready = rs2_mem1_dep && mem1HasRd
    val rs2_mem2_ready = rs2_mem2_dep && mem2HasRd
    val rs2_wb_ready = rs2_wb_dep && wbHasRd
    val rs2_any_dep = rs2_exu_dep || rs2_mem1_dep || rs2_mem2_dep || rs2_wb_dep
    val rs2_any_ready = rs2_exu_ready || rs2_mem1_ready || rs2_mem2_ready || rs2_wb_ready
    val stall_rs2_raw_unready = rs2_any_dep && !rs2_any_ready

    when (rs2_exu_ready) {
        io.fs2_fwd_en := true.B
        io.fs2_fwd_data := io.exu_fwd.val_out
    } .elsewhen (rs2_mem1_ready) {
        io.fs2_fwd_en := true.B
        io.fs2_fwd_data := io.mem1_fwd.val_out
    } .elsewhen (rs2_mem2_ready) {
        io.fs2_fwd_en := true.B
        io.fs2_fwd_data := io.mem2_fwd.val_out
    } .elsewhen (rs2_wb_ready) {
        io.fs2_fwd_en := true.B
        io.fs2_fwd_data := io.wb_fwd.val_out
    } .otherwise {
        // 不命中，正常从寄存器读
        io.fs2_fwd_en := false.B
    }

    // load_use stall: 仅当 EXU 前递信息有效且为 load 时才停顿，避免旧元数据导致假停顿
    val rs1_exu_load_dep = rs1_use && io.exu_fwd.rd_en && (io.exu_fwd.rd_addr =/= 0.U) && io.exu_fwd.rd_addr === io.id_rs1 && io.id_rs1 =/= 0.U
    val rs2_exu_load_dep = rs2_use && io.exu_fwd.rd_en && (io.exu_fwd.rd_addr =/= 0.U) && io.exu_fwd.rd_addr === io.id_rs2 && io.id_rs2 =/= 0.U
    val rs1_mem2_load_dep = rs1_use && io.mem2_fwd.rd_en && (io.mem2_fwd.rd_addr =/= 0.U) && io.mem2_fwd.rd_addr === io.id_rs1 && io.id_rs1 =/= 0.U
    val rs2_mem2_load_dep = rs2_use && io.mem2_fwd.rd_en && (io.mem2_fwd.rd_addr =/= 0.U) && io.mem2_fwd.rd_addr === io.id_rs2 && io.id_rs2 =/= 0.U
    val stall_exu_load = (rs1_exu_load_dep || rs2_exu_load_dep) && io.exu_fwd.valid && io.exu_fwd.rd_is_load
    val stall_mem2_load = (rs1_mem2_load_dep || rs2_mem2_load_dep) && io.mem2_fwd.rd_is_load && !io.mem2_fwd.valid
    val stall_tag_pending = io.id_valid && (
        (io.use_rs1 && io.id_rs1 =/= 0.U && pendingValid(io.id_rs1)) ||
        (io.use_rs2 && io.id_rs2 =/= 0.U && pendingValid(io.id_rs2))
    )
    io.stall := stall_tag_pending || stall_exu_load || stall_mem2_load || stall_rs1_raw_unready || stall_rs2_raw_unready

    
}
