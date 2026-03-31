package npc

import chisel3._
import chisel3.util._
import npc.chisel_src.cpucore._
import bus.Axi4MasterIO
import bus.Axi4SlaveIO

// 定义 DPI-C ebreak 函数的 BlackBox

class EbreakBlackBox extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle {
        val is_ebreak = Input(Bool())
    })


    setInline("EbreakBlackBox.v",
        """module EbreakBlackBox(
          |    input is_ebreak
          |);
          |    import "DPI-C" function void ebreak();
          |    
          |    always @(posedge is_ebreak) begin
          |        if (is_ebreak) begin
          |            ebreak();
          |        end
          |    end
          |endmodule
        """.stripMargin)
}

// 定义 Difftest DPI 导出 BlackBox（提供 C++ 侧可调用的函数）
class DifftestDPI extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle {
        val pc = Input(UInt(32.W))
        val inst = Input(UInt(32.W))
        val difftest_valid = Input(Bool())
        val non_inst = Input(Bool())
        val gpr0  = Input(UInt(32.W))
        val gpr1  = Input(UInt(32.W))
        val gpr2  = Input(UInt(32.W))
        val gpr3  = Input(UInt(32.W))
        val gpr4  = Input(UInt(32.W))
        val gpr5  = Input(UInt(32.W))
        val gpr6  = Input(UInt(32.W))
        val gpr7  = Input(UInt(32.W))
        val gpr8  = Input(UInt(32.W))
        val gpr9  = Input(UInt(32.W))
        val gpr10 = Input(UInt(32.W))
        val gpr11 = Input(UInt(32.W))
        val gpr12 = Input(UInt(32.W))
        val gpr13 = Input(UInt(32.W))
        val gpr14 = Input(UInt(32.W))
        val gpr15 = Input(UInt(32.W))
        val gpr16 = Input(UInt(32.W))
        val gpr17 = Input(UInt(32.W))
        val gpr18 = Input(UInt(32.W))
        val gpr19 = Input(UInt(32.W))
        val gpr20 = Input(UInt(32.W))
        val gpr21 = Input(UInt(32.W))
        val gpr22 = Input(UInt(32.W))
        val gpr23 = Input(UInt(32.W))
        val gpr24 = Input(UInt(32.W))
        val gpr25 = Input(UInt(32.W))
        val gpr26 = Input(UInt(32.W))
        val gpr27 = Input(UInt(32.W))
        val gpr28 = Input(UInt(32.W))
        val gpr29 = Input(UInt(32.W))
        val gpr30 = Input(UInt(32.W))
        val gpr31 = Input(UInt(32.W))
        val hit_count = Input(UInt(32.W))      // ICache hit
        val miss_count = Input(UInt(32.W))     // ICache miss
        val dcache_hit_count = Input(UInt(32.W))   // DCache hit
        val dcache_miss_count = Input(UInt(32.W))   // DCache miss
        val i_cnt = Input(UInt(32.W))  // 取指访存周期总数
        val d_cnt = Input(UInt(32.W))  // 数据访存周期总数
        val stall_cnt = Input(UInt(32.W))  // 停顿周期总数
        val flush_cnt = Input(UInt(32.W))  // 刷新周期总数
        val bp_total_count = Input(UInt(32.W))
        val bp_hit_count = Input(UInt(32.W))
    })

    setInline("DifftestDPI.v",
        """module DifftestDPI(
          |    input  [31:0] pc,
          |    input  [31:0] inst,
          |    input         difftest_valid,
          |    input         non_inst,
          |    input  [31:0] gpr0,
          |    input  [31:0] gpr1,
          |    input  [31:0] gpr2,
          |    input  [31:0] gpr3,
          |    input  [31:0] gpr4,
          |    input  [31:0] gpr5,
          |    input  [31:0] gpr6,
          |    input  [31:0] gpr7,
          |    input  [31:0] gpr8,
          |    input  [31:0] gpr9,
          |    input  [31:0] gpr10,
          |    input  [31:0] gpr11,
          |    input  [31:0] gpr12,
          |    input  [31:0] gpr13,
          |    input  [31:0] gpr14,
          |    input  [31:0] gpr15,
          |    input  [31:0] gpr16,
          |    input  [31:0] gpr17,
          |    input  [31:0] gpr18,
          |    input  [31:0] gpr19,
          |    input  [31:0] gpr20,
          |    input  [31:0] gpr21,
          |    input  [31:0] gpr22,
          |    input  [31:0] gpr23,
          |    input  [31:0] gpr24,
          |    input  [31:0] gpr25,
          |    input  [31:0] gpr26,
          |    input  [31:0] gpr27,
          |    input  [31:0] gpr28,
          |    input  [31:0] gpr29,
          |    input  [31:0] gpr30,
          |    input  [31:0] gpr31,
          |    input  [31:0] hit_count,
          |    input  [31:0] miss_count,
          |    input  [31:0] dcache_hit_count,
          |    input  [31:0] dcache_miss_count,
          |    input  [31:0] i_cnt,
          |    input  [31:0] d_cnt,
          |    input  [31:0] stall_cnt,
          |    input  [31:0] flush_cnt,
          |    input  [31:0] bp_total_count,
          |    input  [31:0] bp_hit_count
          |);
          |
          |    function int get_pc();
          |        get_pc = pc;
          |    endfunction
          |    export "DPI-C" function get_pc;
          |
          |    function int get_inst();
          |        get_inst = inst;
          |    endfunction
          |    export "DPI-C" function get_inst;
          |
          |    function int get_difftest_valid();
          |        get_difftest_valid = {31'b0, difftest_valid};
          |    endfunction
          |    export "DPI-C" function get_difftest_valid;
          | 
          |    function int get_non_inst();
          |        get_non_inst = {31'b0, non_inst};
          |    endfunction
          |    export "DPI-C" function get_non_inst;
          | 
          |    function int get_gpr(input int idx);
          |        case (idx)
          |            0:  get_gpr = gpr0;
          |            1:  get_gpr = gpr1;
          |            2:  get_gpr = gpr2;
          |            3:  get_gpr = gpr3;
          |            4:  get_gpr = gpr4;
          |            5:  get_gpr = gpr5;
          |            6:  get_gpr = gpr6;
          |            7:  get_gpr = gpr7;
          |            8:  get_gpr = gpr8;
          |            9:  get_gpr = gpr9;
          |            10: get_gpr = gpr10;
          |            11: get_gpr = gpr11;
          |            12: get_gpr = gpr12;
          |            13: get_gpr = gpr13;
          |            14: get_gpr = gpr14;
          |            15: get_gpr = gpr15;
          |            16: get_gpr = gpr16;
          |            17: get_gpr = gpr17;
          |            18: get_gpr = gpr18;
          |            19: get_gpr = gpr19;
          |            20: get_gpr = gpr20;
          |            21: get_gpr = gpr21;
          |            22: get_gpr = gpr22;
          |            23: get_gpr = gpr23;
          |            24: get_gpr = gpr24;
          |            25: get_gpr = gpr25;
          |            26: get_gpr = gpr26;
          |            27: get_gpr = gpr27;
          |            28: get_gpr = gpr28;
          |            29: get_gpr = gpr29;
          |            30: get_gpr = gpr30;
          |            31: get_gpr = gpr31;
          |            default: get_gpr = 0;
          |        endcase
          |    endfunction
          |    export "DPI-C" function get_gpr;
          |
          |    function int get_hit_count();
          |        get_hit_count = hit_count;
          |    endfunction
          |    export "DPI-C" function get_hit_count;
          |
          |    function int get_miss_count();
          |        get_miss_count = miss_count;
          |    endfunction
          |    export "DPI-C" function get_miss_count;
          |
          |    function int get_dcache_hit_count();
          |        get_dcache_hit_count = dcache_hit_count;
          |    endfunction
          |    export "DPI-C" function get_dcache_hit_count;
          |
          |    function int get_dcache_miss_count();
          |        get_dcache_miss_count = dcache_miss_count;
          |    endfunction
          |    export "DPI-C" function get_dcache_miss_count;
          |
          |    function int get_i_cnt();
          |        get_i_cnt = i_cnt;
          |    endfunction
          |    export "DPI-C" function get_i_cnt;
          |
          |    function int get_d_cnt();
          |        get_d_cnt = d_cnt;
          |    endfunction
          |    export "DPI-C" function get_d_cnt;
          |
          |    function int get_stall_cnt();
          |        get_stall_cnt = stall_cnt;
          |    endfunction
          |    export "DPI-C" function get_stall_cnt;
          |
          |    function int get_flush_cnt();
          |        get_flush_cnt = flush_cnt;
          |    endfunction
          |    export "DPI-C" function get_flush_cnt;
                    |
                    |    function int get_bp_total_count();
                    |        get_bp_total_count = bp_total_count;
                    |    endfunction
                    |    export "DPI-C" function get_bp_total_count;
                    |
                    |    function int get_bp_hit_count();
                    |        get_bp_hit_count = bp_hit_count;
                    |    endfunction
                    |    export "DPI-C" function get_bp_hit_count;
          |
          |endmodule
        """.stripMargin)
}

class top extends Module {
    val io = IO(new Bundle {
        
        val pc = Output(UInt(32.W))
        val inst = Output(UInt(32.W))
        val halt_ret = Output(Bool())
        val non_inst = Output(Bool())
           
       val interrupt = Input(Bool())

        val master = new bus.Axi4MasterIO()
        val slave  = new bus.Axi4SlaveIO()

        val halt = Output(Bool()) // 用于测试结束的信号
        // 导出寄存器堆的值
        val gpr = Output(Vec(32, UInt(32.W)))
        // Difftest接口
        val difftest_valid = Output(Bool())
    })

    val npc_cpu = Module(new NPC_CPU())

    // 连接顶层IO
    io.halt_ret := false.B // 先不实现halt指令
    io.non_inst := false.B // 先不实现非指令异常
    io.gpr := npc_cpu.io.regs_out
    io.pc := npc_cpu.io.commit_pc
    io.inst := npc_cpu.io.commit_inst

    // ebreak 检测和调用
    // ebreak只在提交时触发
    
    val is_ebreak = (npc_cpu.io.commit_inst === "h00100073".U) && (npc_cpu.io.difftest_valid)
    io.halt := is_ebreak
    val ebreak_box = Module(new EbreakBlackBox())
    ebreak_box.io.is_ebreak := is_ebreak

    // Difftest接口连接
    io.difftest_valid := npc_cpu.io.difftest_valid

    // 连接 Difftest DPI 导出模块
    
    val difftest_dpi = Module(new DifftestDPI())
    difftest_dpi.io.pc := io.pc
    difftest_dpi.io.inst := io.inst
    difftest_dpi.io.difftest_valid := io.difftest_valid
    difftest_dpi.io.non_inst := io.non_inst
    difftest_dpi.io.gpr0  := io.gpr(0)
    difftest_dpi.io.gpr1  := io.gpr(1)
    difftest_dpi.io.gpr2  := io.gpr(2)
    difftest_dpi.io.gpr3  := io.gpr(3)
    difftest_dpi.io.gpr4  := io.gpr(4)
    difftest_dpi.io.gpr5  := io.gpr(5)
    difftest_dpi.io.gpr6  := io.gpr(6)
    difftest_dpi.io.gpr7  := io.gpr(7)
    difftest_dpi.io.gpr8  := io.gpr(8)
    difftest_dpi.io.gpr9  := io.gpr(9)
    difftest_dpi.io.gpr10 := io.gpr(10)
    difftest_dpi.io.gpr11 := io.gpr(11)
    difftest_dpi.io.gpr12 := io.gpr(12)
    difftest_dpi.io.gpr13 := io.gpr(13)
    difftest_dpi.io.gpr14 := io.gpr(14)
    difftest_dpi.io.gpr15 := io.gpr(15)
    difftest_dpi.io.gpr16 := io.gpr(16)
    difftest_dpi.io.gpr17 := io.gpr(17)
    difftest_dpi.io.gpr18 := io.gpr(18)
    difftest_dpi.io.gpr19 := io.gpr(19)
    difftest_dpi.io.gpr20 := io.gpr(20)
    difftest_dpi.io.gpr21 := io.gpr(21)
    difftest_dpi.io.gpr22 := io.gpr(22)
    difftest_dpi.io.gpr23 := io.gpr(23)
    difftest_dpi.io.gpr24 := io.gpr(24)
    difftest_dpi.io.gpr25 := io.gpr(25)
    difftest_dpi.io.gpr26 := io.gpr(26)
    difftest_dpi.io.gpr27 := io.gpr(27)
    difftest_dpi.io.gpr28 := io.gpr(28)
    difftest_dpi.io.gpr29 := io.gpr(29)
    difftest_dpi.io.gpr30 := io.gpr(30)
    difftest_dpi.io.gpr31 := io.gpr(31)
    difftest_dpi.io.hit_count := npc_cpu.io.hit_count
    difftest_dpi.io.miss_count := npc_cpu.io.miss_count
    difftest_dpi.io.dcache_hit_count := npc_cpu.io.dcache_hit_count
    difftest_dpi.io.dcache_miss_count := npc_cpu.io.dcache_miss_count
    difftest_dpi.io.i_cnt := npc_cpu.io.i_cnt
    difftest_dpi.io.d_cnt := npc_cpu.io.d_cnt
    difftest_dpi.io.stall_cnt := npc_cpu.io.stall_cnt
    difftest_dpi.io.flush_cnt := npc_cpu.io.flush_cnt
    difftest_dpi.io.bp_total_count := npc_cpu.io.bp_total_count
    difftest_dpi.io.bp_hit_count := npc_cpu.io.bp_hit_count
    
    // 连接顶层总线
    npc_cpu.io.master <> io.master
    io.slave <> npc_cpu.io.slave
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

    /*
    // 只在前N个周期打印
    // 添加一个计数器来跟踪周期数
    val printCycles = 1000  // 只打印前3个周期
    val cycleCounter = RegInit(0.U(32.W))
    cycleCounter := cycleCounter + 1.U
    when (cycleCounter < printCycles.U) {
        printf(p"PC: 0x${Hexadecimal(io.pc)}, Instruction: 0x${Hexadecimal(io.inst)}\n")
        // 打印所有总线信号
        /*
        printf(p"AXI Master Signals:\n")
        printf(p"  AWADDR: 0x${Hexadecimal(io.master.awaddr)}, AWVALID: ${io.master.awvalid}, AWREADY: ${io.master.awready}\n")
        printf(p"  WDATA: 0x${Hexadecimal(io.master.wdata)}, WSTRB: 0x${Hexadecimal(io.master.wstrb)}, WVALID: ${io.master.wvalid}, WREADY: ${io.master.wready}\n")
        printf(p"  BRESP: 0x${Hexadecimal(io.master.bresp)}, BVALID: ${io.master.bvalid}, BREADY: ${io.master.bready}\n")
        printf(p"  ARADDR: 0x${Hexadecimal(io.master.araddr)}, ARVALID: ${io.master.arvalid}, ARREADY: ${io.master.arready}\n")
        printf(p"  RDATA: 0x${Hexadecimal(io.master.rdata)}, RRESP: 0x${Hexadecimal(io.master.rresp)}, RVALID: ${io.master.rvalid}, RREADY: ${io.master.rready}\n")
        */
    }
    */
    
}