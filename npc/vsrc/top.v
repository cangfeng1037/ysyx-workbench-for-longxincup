module top(
    input clk,
    input rst,

    output [31 : 0] pc,
    input [31 : 0] inst,
    output [31 : 0] halt_ret
);
    // 声明DPI-C函数
    import "DPI-C" function void ebreak(); 

    wire is_ebreak;
    assign is_ebreak = (inst == 32'h00100073);

    ysyx_25080212_cpu #(
        .ADDR_WIDTH(5),
        .DATA_WIDTH(32)
    ) cpu(
        .clk(clk),
        .rst(rst),
        .pc(pc),
        .inst(inst),
        .halt_ret(halt_ret)
    );

    // 上升沿检测ebreak指令并调用DPI-C函数
    always @(posedge clk) begin
        if (!rst && is_ebreak) begin
            ebreak();
        end
    end

endmodule
