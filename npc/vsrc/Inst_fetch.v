module Inst_fetch(
    input         clock,
    input         reset,

    input         pc_valid,
    input  [31:0] pc,

    output reg        inst_valid,
    output reg [31:0] inst
);

import "DPI-C" function int pmem_read_inst(input int pc);

reg [31:0] pc_r;
reg        pc_valid_r;

always @(posedge clock) begin
  if (reset) begin
    pc_r       <= 32'b0;
    pc_valid_r <= 1'b0;
    inst       <= 32'b0;
    inst_valid <= 1'b0;
  end else begin
    // 第 N 拍：锁存取指请求
    pc_r       <= pc;
    pc_valid_r <= pc_valid;

    // 第 N+1 拍：返回指令
    if (pc_valid_r) begin
      inst       <= pmem_read_inst(pc_r);
      inst_valid <= 1'b1;
    end else begin
      inst_valid <= 1'b0;
    end
  end
end

endmodule