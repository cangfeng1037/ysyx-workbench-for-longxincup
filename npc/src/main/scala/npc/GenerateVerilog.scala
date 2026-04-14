package npc

import chisel3._
import circt.stage.ChiselStage
import npc.chisel_src.cpucore._

object GenerateVerilog extends App {
  val firtoolDir = sys.env.getOrElse("CHISEL_FIRTOOL_PATH", "/home/cangfeng_/circt-build/circt/build/bin")
  val targetDir = sys.env.getOrElse("NPC_VERILOG_DIR", "verilog")
  System.setProperty("CHISEL_FIRTOOL_PATH", firtoolDir)

  println(s"[GenerateVerilog] targetDir=$targetDir, NPC_RESET_PC=${BootConfig.resetPc.toString(16)}")

  // 生成 CPU 顶层模块的 Verilog (强制使用 Verilog 而非 SystemVerilog)
  ChiselStage.emitSystemVerilogFile(
    new top,
    Array("--target-dir", targetDir),
    Array("--disable-all-randomization", "--strip-debug-info", 
          "--lowering-options=disallowLocalVariables,disallowPackedArrays")
  )
  println("✅ CPU Verilog 生成成功！")
}
