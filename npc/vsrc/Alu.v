module ysyx_25080212_Alu(
    input [31:0] a,
    input  [31:0] b,
    output [31:0] y,
    input  [3:0] op
);
    assign y = (op == 4'b0000) ? (a + b) :
               (op == 4'b0001) ? (a - b) :
               (op == 4'b0010) ? (a & b) :
               (op == 4'b0011) ? (a | b) :
               (op == 4'b0100) ? (a ^ b) :
               (op == 4'b0101) ? (a << b) :
               (op == 4'b0110) ? (a >> b) :
               (op == 4'b0111) ? (a >>> b) :
               32'b0;
endmodule
