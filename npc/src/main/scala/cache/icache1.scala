package npc.chisel_src.cache

import chisel3._
import chisel3.util._

// ICache : 8KB, 32B/line, 2-way, 128 lines/way, 7-bit index, 5-bit offset, 20-bit tag

// instruction request and response
class inst_req extends Bundle {
    val pc = UInt(32.W)
    val burst = Bool() // true: cache line refill burst(8 beats), false: single beat bypass
}

class inst_resp extends Bundle {
    val inst = UInt(32.W)
    val last = Bool() // 表示当前响应的指令是一个cache line中的最后一条指令
}


class ICache1 extends Module {
    val io = IO(new Bundle{
        val fetch_req = Flipped(Decoupled(new npc.chisel_src.cpucore.ICacheFetchReq))
        val fetch_resp= Decoupled(new npc.chisel_src.cpucore.ICacheFetchResp)

        val inst_req = Decoupled(new inst_req)
        val inst_resp= Flipped(Decoupled(new inst_resp))

        val flush = Input(Bool())
        val hit_count = Output(UInt(32.W))
        val miss_count = Output(UInt(32.W))
    })

// ============== cache参数定义  ===================
    val cache_size = 8 * 1024 // 8KB
    val line_bytes = 32 // 32B/line
    val ways = 4 // 4-way
    val sets = 64
    val words_per_line = line_bytes / 4 // 8 words/line

    val offset_bits = 5
    val index_bits = 6 // 64 sets
    val tag_bits = 21


// ============== 定义cache结构  ===================
    // 定义各array来存储cache行的数据、标签和有效位
    val data_array = Reg(Vec(ways, Vec(sets, Vec(words_per_line, UInt(32.W)))))
    val tag_array = Reg(Vec(ways, Vec(sets, UInt(tag_bits.W))))
    val valid_array = RegInit(
            VecInit(Seq.fill(ways)(
                VecInit(Seq.fill(sets)(false.B))
            ))
        )


    val tag_reg = RegInit(0.U(21.W)) // 存储当前访问的地址的 tag、index、offset
    val index_reg = RegInit(0.U(6.W))   
    val offset_reg = RegInit(0.U(5.W)) 
    val line_base = RegInit(0.U(32.W)) // 存储当前行的基地址
    val miss_pc_reg = RegInit(0.U(32.W)) // 锁存本次请求PC（用于bypass响应）
    val miss_cacheable_reg = RegInit(false.B) // 当前miss是否可缓存（SDRAM）
    val bypass_inst_reg = RegInit(0.U(32.W)) // 非SDRAM单拍返回数据
    val bypass_pc_reg = RegInit(0.U(32.W))   // 非SDRAM单拍返回PC
    val resp_is_bypass = RegInit(false.B)    // s_resp阶段区分数据来源

// ============== 伪随机替换算法  ===================
    val lfsr = chisel3.util.random.LFSR(8)
    val rand_way = lfsr(1, 0) // 生成0-3的随机数，选择替换的路径
    val victim_way = RegInit(0.U(2.W)) // 记录当前被替换的路径，供下一次替换使用
    val refill_cnt = RegInit(0.U(3.W)) // 记录当前正在填充的cache line中的指令数量

// ============== 状态机定义  ===================
    val state = RegInit(0.U(3.W)) // 状态机状态
    val s_idle :: s_lookup :: s_missreq :: s_refill :: s_resp :: Nil = Enum(5)

// ============== 性能计数器  ===================
    val hit_count = RegInit(0.U(32.W))
    val miss_count = RegInit(0.U(32.W))
    io.hit_count := hit_count
    io.miss_count := miss_count

// ============== 赋默认值  ===================
    io.fetch_req.ready := false.B
    io.fetch_resp.valid := false.B
    io.fetch_resp.bits.pc := 0.U
    io.fetch_resp.bits.inst := 0.U
    io.fetch_resp.bits.miss := false.B
    io.inst_req.valid := false.B
    io.inst_req.bits.pc := line_base
    io.inst_req.bits.burst := true.B
    io.inst_resp.ready := false.B

// ============== 状态机实现  ===================

    when (io.flush) {
        state := s_idle
        io.fetch_req.ready := true.B
        io.fetch_resp.valid := false.B
        io.inst_req.valid := false.B
        io.inst_resp.ready := false.B
        refill_cnt := 0.U
        resp_is_bypass := false.B
    } .otherwise {
        switch(state) {
            is (s_idle) {
                // 等待 fetch_req，有效时进入 lookup 状态，并锁存地址信息
                io.fetch_req.ready := true.B
                when (io.fetch_req.fire) {
                    val addr = io.fetch_req.bits.pc
                    tag_reg := addr(31, 12)
                    index_reg := addr(10, 5)
                    offset_reg := addr(4, 0)
                    line_base := addr & "hffffffe0".U // 行基地址，低5位清零
                    miss_pc_reg := addr
                    // 仅SDRAM区域(0xa0000000~0xa3ffffff)走cache，其他地址单拍bypass
                    miss_cacheable_reg := addr(31, 26) === "b101000".U
                    victim_way := rand_way // 记录当前被替换的路径，供下一次替换使用
                    refill_cnt := 0.U
                    state := s_lookup
                }        
            }

            is (s_lookup) {
                val hit0 = valid_array(0)(index_reg) && tag_array(0)(index_reg) === tag_reg
                val hit1 = valid_array(1)(index_reg) && tag_array(1)(index_reg) === tag_reg
                val hit2 = valid_array(2)(index_reg) && tag_array(2)(index_reg) === tag_reg
                val hit3 = valid_array(3)(index_reg) && tag_array(3)(index_reg) === tag_reg
                val hit = hit0 || hit1 || hit2 || hit3

                when (hit) {
                    hit_count := hit_count + 1.U
                    // 命中，准备响应数据
                    io.fetch_resp.valid := true.B
                    io.fetch_resp.bits.pc := line_base + offset_reg
                    io.fetch_resp.bits.inst := Mux1H(Seq(
                        hit0 -> data_array(0)(index_reg)(offset_reg(4, 2)),
                        hit1 -> data_array(1)(index_reg)(offset_reg(4, 2)),
                        hit2 -> data_array(2)(index_reg)(offset_reg(4, 2)),
                        hit3 -> data_array(3)(index_reg)(offset_reg(4, 2))
                    ))
                    io.fetch_resp.bits.miss := false.B
                    resp_is_bypass := false.B
                    state := s_resp
                } .otherwise {
                    miss_count := miss_count + 1.U
                    // 未命中，进入 missreq:
                    // - SDRAM: 发burst做refill
                    // - 非SDRAM: 发单拍并bypass
                    io.inst_req.valid := true.B
                    io.inst_req.bits.pc := Mux(miss_cacheable_reg, line_base, miss_pc_reg)
                    io.inst_req.bits.burst := miss_cacheable_reg
                    // 锁存rand_way到victim_way，确保在missreq和refill阶段使用同一路径进行替换
                    victim_way := rand_way
                    refill_cnt := 0.U
                    // 如果当拍已经握手成功，直接进入refill，避免“请求已发出但状态还停在missreq”
                    when (io.inst_req.fire) {
                        state := s_refill
                    } .otherwise {
                        state := s_missreq
                    }
                }
            }

            is (s_missreq) {
                io.inst_req.valid := true.B
                io.inst_req.bits.pc := Mux(miss_cacheable_reg, line_base, miss_pc_reg)
                io.inst_req.bits.burst := miss_cacheable_reg
                when (io.inst_req.fire) {
                    state := s_refill
                }
            }

            is (s_refill) {
                // 等待 inst_resp，填充 cache 行
                io.inst_resp.ready := true.B

                when (io.inst_resp.fire) {
                    val data = io.inst_resp.bits.inst
                    when (miss_cacheable_reg) {
                        data_array(victim_way)(index_reg)(refill_cnt) := data
                        when (io.inst_resp.bits.last) {
                            // 最后一个数据到达，更新标签和有效位，准备响应
                            tag_array(victim_way)(index_reg) := tag_reg
                            valid_array(victim_way)(index_reg) := true.B
                            refill_cnt := 0.U
                            resp_is_bypass := false.B
                            state := s_resp
                        } .otherwise {
                            refill_cnt := refill_cnt + 1.U
                        }
                    } .otherwise {
                        // 非SDRAM: 单拍响应，直接透传给前端，不写入cache
                        bypass_inst_reg := data
                        bypass_pc_reg := miss_pc_reg
                        resp_is_bypass := true.B
                        refill_cnt := 0.U
                        state := s_resp
                    }
                }
            }

            is (s_resp) {
                // 按照tag和index响应指令，等待fetch_resp被接受后回到idle状态
                io.fetch_resp.valid := true.B
                io.fetch_resp.bits.pc := Mux(resp_is_bypass, bypass_pc_reg, line_base + offset_reg)
                io.fetch_resp.bits.inst := Mux(resp_is_bypass, bypass_inst_reg, Mux1H(Seq(
                    (valid_array(0)(index_reg) && tag_array(0)(index_reg) === tag_reg) -> data_array(0)(index_reg)(offset_reg(4, 2)),
                    (valid_array(1)(index_reg) && tag_array(1)(index_reg) === tag_reg) -> data_array(1)(index_reg)(offset_reg(4, 2)),
                    (valid_array(2)(index_reg) && tag_array(2)(index_reg) === tag_reg) -> data_array(2)(index_reg)(offset_reg(4, 2)),
                    (valid_array(3)(index_reg) && tag_array(3)(index_reg) === tag_reg) -> data_array(3)(index_reg)(offset_reg(4, 2))
                )))
                io.fetch_resp.bits.miss := false.B

                when (io.fetch_resp.fire) {
                    resp_is_bypass := false.B
                    state := s_idle
                }
            }
        }
    }
}
