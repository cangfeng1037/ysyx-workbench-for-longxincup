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

class top extends Module {
    val io = IO(new Bundle {
        val pc = Output(UInt(32.W))
        val inst = Output(UInt(32.W))
        val halt_ret = Output(Bool())
        val non_inst = Output(Bool())

        val interrupt = Input(Bool())

        val master = new bus.Axi4MasterIO()
        val slave  = new bus.Axi4SlaveIO()
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
    io.pc := npc_cpu.io.pc_out
    io.inst := npc_cpu.io.inst_out

    // ebreak 检测和调用
    val is_ebreak = npc_cpu.io.inst_out === "h00100073".U
    val ebreak_box = Module(new EbreakBlackBox())
    ebreak_box.io.is_ebreak := is_ebreak

    // Difftest接口连接
    io.difftest_valid := npc_cpu.io.difftest_valid

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

    // 添加一个计数器来跟踪周期数
    val printCycles = 1000  // 只打印前3个周期
    val cycleCounter = RegInit(0.U(32.W))
    cycleCounter := cycleCounter + 1.U
    

    /*
    // 只在前N个周期打印
    when (cycleCounter < printCycles.U) {
        printf(p"PC: 0x${Hexadecimal(io.pc)}, Instruction: 0x${Hexadecimal(io.inst)}\n")
        // 打印所有总线信号
        printf(p"AXI Master Signals:\n")
        printf(p"  AWADDR: 0x${Hexadecimal(io.master.awaddr)}, AWVALID: ${io.master.awvalid}, AWREADY: ${io.master.awready}\n")
        printf(p"  WDATA: 0x${Hexadecimal(io.master.wdata)}, WSTRB: 0x${Hexadecimal(io.master.wstrb)}, WVALID: ${io.master.wvalid}, WREADY: ${io.master.wready}\n")
        printf(p"  BRESP: 0x${Hexadecimal(io.master.bresp)}, BVALID: ${io.master.bvalid}, BREADY: ${io.master.bready}\n")
        printf(p"  ARADDR: 0x${Hexadecimal(io.master.araddr)}, ARVALID: ${io.master.arvalid}, ARREADY: ${io.master.arready}\n")
        printf(p"  RDATA: 0x${Hexadecimal(io.master.rdata)}, RRESP: 0x${Hexadecimal(io.master.rresp)}, RVALID: ${io.master.rvalid}, RREADY: ${io.master.rready}\n")
    }
    */
}