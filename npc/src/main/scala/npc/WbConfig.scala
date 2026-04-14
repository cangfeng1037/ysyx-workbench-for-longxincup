package npc.chisel_src.cpucore

object WbConfig {
  private def parseBool(raw: String): Option[Boolean] = {
    val s = raw.trim.toLowerCase
    s match {
      case "1" | "true" | "y" | "yes" | "on"  => Some(true)
      case "0" | "false" | "n" | "no" | "off" => Some(false)
      case _ => None
    }
  }

  val useThreeCycleWb: Boolean =
    sys.env.get("NPC_WB_THREE_CYCLE").flatMap(parseBool).getOrElse(true)
}
