
package npc.chisel_src.cpucore

import chisel3._
import chisel3.util._
import bus.Axi4_IFU_Master
import bus.Axi4_MEM_Master
import bus.AXI_ARB2TO1
import npc.chisel_src.cache.ICache1
import npc.chisel_src.cache.DCache1
import npc.chisel_src.BranchPredictor.BPU

// 五个步骤：取指，译码，执行，访存，写回

class NPC_CPU extends Module {
    val io = IO(new Bundle {
        // 从顶层拉入总线
        val master = new bus.Axi4MasterIO()
        val slave  = new bus.Axi4SlaveIO()

        // 把寄存器导出给top
        val regs_out = Output(Vec(32, UInt(32.W)))
        val pc_out   = Output(UInt(32.W))
        val inst_out = Output(UInt(32.W))
        val commit_pc = Output(UInt(32.W))
        val commit_inst = Output(UInt(32.W))
        val commit_addr = Output(UInt(32.W))

        // Difftest接口
        val difftest_valid = Output(Bool())
        
        // 性能计数器
        val hit_count = Output(UInt(32.W))    // ICache hit
        val miss_count = Output(UInt(32.W))  // ICache miss
        val dcache_hit_count = Output(UInt(32.W))  // DCache hit
        val dcache_miss_count = Output(UInt(32.W))  // DCache miss
        val i_cnt = Output(UInt(32.W))  // 取指访存周期总数
        val d_cnt = Output(UInt(32.W))  // 数据访存周期总数

        val stall_cnt = Output(UInt(32.W))
        val flush_cnt = Output(UInt(32.W))
        val bp_total_count = Output(UInt(32.W))
        val bp_hit_count = Output(UInt(32.W))
    })

/* ======================= 流水段相关 ====================== */
    val ifu1 = Module(new IFU1())
    val ifu2 = Module(new IFU2())
    val idu = Module(new IDU())
    val exu = Module(new EXU())
    val mem1 = Module(new MEM1())
    val mem2 = Module(new MEM2())
    val wb  = Module(new WB())

    // 处理模块间的通信,用Decoupled接口实现总线
    ifu1.io.out <> ifu2.io.in
    ifu2.io.out <> idu.io.in
    idu.io.out <> exu.io.in
    exu.io.out <> mem1.io.in
    mem1.io.out <> mem2.io.in
    mem2.io.out <> wb.io.in

    val frontend_flush = ifu1.io.flush
    ifu2.io.flush := frontend_flush
    idu.io.flush := frontend_flush
    // EXU 的 flush 输入已移除

/* ====================== 流水段前递相关 =======================*/
    val hazard_unit = Module(new HazardUnit())
    exu.io.exu_fwd <> hazard_unit.io.exu_fwd
    mem1.io.mem1_fwd <> hazard_unit.io.mem1_fwd
    mem2.io.mem2_fwd <> hazard_unit.io.mem2_fwd
    wb.io.wb_fwd <> hazard_unit.io.wb_fwd
    idu.io.fwd_rs1_en := hazard_unit.io.fs1_fwd_en
    idu.io.fwd_rs2_en := hazard_unit.io.fs2_fwd_en
    idu.io.fwd_rs1_data := hazard_unit.io.fs1_fwd_data
    idu.io.fwd_rs2_data := hazard_unit.io.fs2_fwd_data
    hazard_unit.io.id_rs1 := idu.io.id_rs1
    hazard_unit.io.id_rs2 := idu.io.id_rs2
    hazard_unit.io.use_rs1 := idu.io.use_rs1
    hazard_unit.io.use_rs2 := idu.io.use_rs2
    hazard_unit.io.id_valid := idu.io.id_valid
    hazard_unit.io.dbg_id_pc := idu.io.dbg_id_pc
    hazard_unit.io.dbg_id_inst := idu.io.dbg_id_inst
    hazard_unit.io.dbg_id_valid := idu.io.id_valid
    hazard_unit.io.dbg_wb_pc := wb.io.commit_pc
    hazard_unit.io.dbg_wb_inst := wb.io.commit_inst
    hazard_unit.io.dbg_wb_valid := wb.io.commit
    hazard_unit.io.load_tag_alloc_valid := exu.io.load_tag_alloc_valid
    hazard_unit.io.load_tag_alloc_rd := exu.io.load_tag_alloc_rd
    hazard_unit.io.load_tag_alloc_tag := exu.io.load_tag_alloc_tag
    hazard_unit.io.load_tag_commit_valid := mem2.io.load_tag_commit_valid
    hazard_unit.io.load_tag_commit_rd := mem2.io.load_tag_commit_rd
    hazard_unit.io.load_tag_commit_tag := mem2.io.load_tag_commit_tag

    val frontend_stall = hazard_unit.io.stall && !frontend_flush
    ifu1.io.stall := frontend_stall
    ifu2.io.stall := frontend_stall
    idu.io.stall := frontend_stall

/* ======================= 分支预测器相关 ====================== */
    val bpu = Module(new BPU())

    // IFU1 <-> BPU
    bpu.io.pred_pc := ifu1.io.bpu_pred_pc
    ifu1.io.bpu_pred_next_pc := bpu.io.pred_next_pc

    // EXU -> BPU 训练
    bpu.io.update_valid := exu.io.bpu_update_valid
    bpu.io.update_pc := exu.io.bpu_update_pc
    bpu.io.update_taken := exu.io.bpu_update_taken
    bpu.io.update_target := exu.io.bpu_update_target
    bpu.io.update_is_branch := exu.io.bpu_update_is_branch

/* ======================= 性能计数器 ====================== */
    val stall_cnt = RegInit(0.U(32.W))
    val flush_cnt = RegInit(0.U(32.W))
    val perfPcInAmText = wb.io.commit_pc >= "ha0010000".U
    val perfPcInNpcPmem = wb.io.commit_pc(31, 28) === "h8".U
    when (frontend_stall && (perfPcInAmText || perfPcInNpcPmem)) { stall_cnt := stall_cnt + 1.U }
    when (frontend_flush && (perfPcInAmText || perfPcInNpcPmem)) { flush_cnt := flush_cnt + 1.U }

    io.stall_cnt := stall_cnt
    io.flush_cnt := flush_cnt
    io.bp_total_count := exu.io.bp_total_count
    io.bp_hit_count := exu.io.bp_hit_count


/* ====================== cache相关 ====================== */
    val icache1 = Module(new ICache1())
    val dcache1 = Module(new DCache1())

    ifu1.io.inst_req <> icache1.io.fetch_req
    ifu2.io.inst_resp <> icache1.io.fetch_resp
    icache1.io.flush := ifu1.io.flush

    mem1.io.mem_req  <> dcache1.io.dcache_req
    mem2.io.mem_resp <> dcache1.io.dcache_resp

    io.hit_count := icache1.io.hit_count
    io.miss_count := icache1.io.miss_count
    io.dcache_hit_count := dcache1.io.hit_count
    io.dcache_miss_count := dcache1.io.miss_count
    io.i_cnt := ifu2.io.i_cnt
    io.d_cnt := mem2.io.d_cnt
/* ====================== AXI4 总线  ====================== */

    // 实例化总线
    val axi_ifu_master = Module(new Axi4_IFU_Master())
    val axi_mem_master = Module(new Axi4_MEM_Master())
    val axi_clint_slave = Module(new bus.CLINT())
    
    icache1.io.inst_req <> axi_ifu_master.io.inst_req
    axi_ifu_master.io.inst_resp <> icache1.io.inst_resp
    axi_ifu_master.io.flush := ifu1.io.flush

    dcache1.io.data_req  <> axi_mem_master.io.mem_req
    dcache1.io.data_resp <> axi_mem_master.io.mem_resp
    dcache1.io.flush := false.B

    // 实例化仲裁器
    val axi_arbiter = Module(new AXI_ARB2TO1())
    
    // 连接AXI主接口到仲裁器
    io.master <> axi_arbiter.io.master_out
    axi_arbiter.io.ifu_master <> axi_ifu_master.io.master
    axi_arbiter.io.mem_master <> axi_mem_master.io.master
    axi_arbiter.io.clint_slave <> axi_clint_slave.io.clint_bus
    // 连接分支和跳转反馈到IFU
    ifu1.io.in <> exu.io.branch


/* ====================== CSR 相关 ====================== */
    // 实例化CSR寄存器
    val csr = Module(new CSR())

    // 连接CSR寄存器读接口
    csr.io.csr_raddr := idu.io.csr_raddr
    idu.io.csr_rdata := csr.io.csr_rdata
    csr.io.is_ecall  := idu.io.is_ecall
    csr.io.is_mret   := idu.io.is_mret

    // 连接CSR寄存器写接口
    csr.io.csr_waddr := wb.io.csr_waddr
    csr.io.csr_wdata := wb.io.csr_wdata
    csr.io.csr_wen   := wb.io.csr_wen

/* ======================= Regfile 相关 ================== */
    
    // 顶层定义寄存器堆
    val regfile = Module(new Regfile())

    // 连接寄存器堆读端口
    regfile.io.rs1_addr := idu.io.reg_rs1_addr
    regfile.io.rs2_addr := idu.io.reg_rs2_addr
    idu.io.reg_rs1_data := regfile.io.rs1_data
    idu.io.reg_rs2_data := regfile.io.rs2_data

    // 连接寄存器堆写端口
    regfile.io.rd_addr := wb.io.rd_addr
    regfile.io.rd_data := wb.io.rd_data
    regfile.io.rd_en   := wb.io.rd_en

    // 导出寄存器堆的值到顶层IO
    io.regs_out := regfile.io.regs_out
    io.pc_out   := ifu1.io.out.bits.pc
    io.inst_out := ifu2.io.out.bits.inst
    io.commit_pc := wb.io.commit_pc
    io.commit_inst := wb.io.commit_inst
    io.commit_addr := wb.io.commit_addr

// ======================= Difftest 相关 ================== */

    // 在此添加difftest信号，在wb.commit后执行difftest，传到top供cpp调用

    io.difftest_valid := wb.io.commit

// ======================= 其他接口置零 ================== */
    // slave 接口置零
    io.slave.awready := false.B
    io.slave.wready  := false.B
    io.slave.bvalid  := false.B
    io.slave.bresp   := 0.U
    io.slave.bid     := 0.U
    io.slave.arready := false.B
    io.slave.rvalid  := false.B
    io.slave.rresp   := 0.U
    io.slave.rdata   := 0.U
    io.slave.rlast   := false.B
    io.slave.rid     := 0.U


    

}
