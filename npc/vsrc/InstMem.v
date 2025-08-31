module ysyx_25080212_InstMem #(
    parameter ADDR_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input clk,
    input rst,
    input [ADDR_WIDTH - 1 : 0] addr,
    output [DATA_WIDTH - 1 : 0] rdata
);
    reg [DATA_WIDTH - 1 : 0] imem [0 : (1 << ADDR_WIDTH) - 1]; // 1KB 指令存储器

    // 异步读，组合逻辑
    assign rdata = imem[addr];

    integer i;
    always @(posedge clk) begin
        if (rst) begin
            for (i = 0; i < (1 << ADDR_WIDTH); i = i + 1) begin
                imem[i] <= {DATA_WIDTH{1'b0}};
            end

            // 在复位时加载测试指令
            // 地址0x80000000对应word_addr=0
            imem[0] <= 32'h00a00093; // addi x1, x0, 10    -> x1 = 0 + 10 = 10
            imem[1] <= 32'h01400113; // addi x2, x0, 20    -> x2 = 0 + 20 = 20
            imem[2] <= 32'h00208193; // addi x3, x1, 2     -> x3 = 10 + 2 = 12
            imem[3] <= 32'hffe10213; // addi x4, x2, -2    -> x4 = 20 - 2 = 18
            imem[4] <= 32'h00000293; // addi x5, x0, 0     -> x5 = 0 + 0 = 0
            imem[5] <= 32'h00100313; // addi x6, x0, 1     -> x6 = 0 + 1 = 1
            imem[6] <= 32'hfff00393; // addi x7, x0, -1    -> x7 = 0 - 1 = -1
            imem[7] <= 32'h00000000; // nop (空指令)

        end
    end

endmodule
