package npc.chisel_src.cpucore

object BootConfig {
  private val defaultResetPc = BigInt("30000000", 16)

  private def parsePc(raw: String): Option[BigInt] = {
    val s = raw.trim.toLowerCase
    if (s.isEmpty) return None
    val (base, body) =
      if (s.startsWith("0x")) (16, s.drop(2))
      else if (s.startsWith("h")) (16, s.drop(1))
      else (10, s)
    try {
      Some(BigInt(body, base))
    } catch {
      case _: NumberFormatException => None
    }
  }

  val resetPc: BigInt = sys.env.get("NPC_RESET_PC").flatMap(parsePc).getOrElse(defaultResetPc)
}
