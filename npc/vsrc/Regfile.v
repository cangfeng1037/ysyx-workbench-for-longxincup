// 32个 32位寄存器堆
// 输入为rs1, rs2, 输出为rd
// 在时钟上升沿给rd赋值为
module ysyx_25080212_Regfile #(
    parameter ADDR_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input clk,
    input rst,

    input [ADDR_WIDTH - 1 : 0] rs1,
    output [DATA_WIDTH - 1 : 0] rdata1,

    input [ADDR_WIDTH - 1 : 0] rs2,
    output [DATA_WIDTH - 1 : 0] rdata2,

    input [ADDR_WIDTH - 1 : 0] rd,
    input [DATA_WIDTH - 1 : 0] din,

    input wen
);
    reg [DATA_WIDTH - 1 : 0] regs_out [2**ADDR_WIDTH - 1 : 0];

    // 写端口，时钟上升沿写入
    always @(posedge clk) begin
        if (wen && (rd != {ADDR_WIDTH{1'b0}})) begin
            regs_out[rd] <= din;
        end
    end
    

    // 异步读，组合逻辑
    assign rdata1 = regs_out[rs1];
    assign rdata2 = regs_out[rs2];
endmodule


