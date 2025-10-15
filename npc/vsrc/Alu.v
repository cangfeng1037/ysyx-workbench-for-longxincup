module ysyx_25080212_Alu(
    input [31:0] a,
    input  [31:0] b,
    output reg [31:0] y,
    input  [3:0] op
);

    always @(*) begin
        case(op)
            4'b0000: y = a + b;
            4'b0001: y = a - b;
            4'b0010: y = a & b;
            4'b0011: y = a | b;
            4'b0100: y = a ^ b;
            4'b0101: y = a << b[4:0];
            4'b0110: y = a >> b[4:0];
            4'b0111: y = $signed(a) >>> b[4:0];  // 算术右移
            4'b1000: y = a * b;
            4'b1001: y = $signed(a) / $signed(b);
            4'b1010: y = a / b;
            4'b1011: y = $signed(a) % $signed(b);
            4'b1100: y = a % b;
            default: y = 32'b0;
        endcase
    end
endmodule
