module ysyx_25080212_cpu #(
    parameter ADDR_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input clk,
    input rst,

    output [DATA_WIDTH - 1 : 0] pc,
    input [DATA_WIDTH - 1 : 0] inst,
    output [DATA_WIDTH - 1 : 0] halt_ret
    //output stall
);

    wire [DATA_WIDTH - 1 : 0] pc_current, pc_next; // dnpc
    wire pc_wen;
    wire reg_wen;
    //wire stall;
    wire is_load;


    ysyx_25080212_Reg #(.WIDTH(DATA_WIDTH), .RESET_VAL(32'h80000000)) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(pc_next),
        .dout(pc_current),
        .wen(pc_wen)
    );

    //assign pc_next = pc_current + 32'd4;
    assign pc_wen = 1'b1;

    //wire [DATA_WIDTH - 1 : 0] inst_addr;
    //assign inst_addr = pc_current - 32'h80000000; // 指令存储器数组下标，pc现在值 - pc初始值

    assign pc = pc_current;
    
    // 指令解码
    wire [6 : 0] opcode;
    wire [4 : 0] rd;
    wire [2 : 0] funct3;
    wire [4 : 0] rs1;
    wire [4 : 0] rs2;
    wire [31 : 0] raddr;
    wire [31 : 0] waddr;
    wire [31 : 0] wdata;
    wire [3 : 0] wmask;

    //wire [11 : 0] imm_i;
    
    wire is_auipc;
    wire is_lui;
    wire [31 : 0] alu_out;
    


    //wire [19 : 0] imm_u;
    wire [31 : 0] imm_j;
    wire [31 : 0] imm_u;
    wire [31 : 0] imm_i;
    wire [31 : 0] imm_b;
    wire [31 : 0] imm_s;

    wire [31 : 0] snpc;
    wire [31 : 0] dnpc;

    wire is_jal; 
    wire is_jalr;
    wire is_addi;
    wire is_andi;
    wire is_ori;
    wire is_xori;
    wire is_lw;
    wire is_lbu;
    wire is_lh;
    wire is_lhu;
    wire is_seqz;
    wire is_srai;
    wire is_srli;
    wire is_slli;
    wire is_add;
    wire is_sub;
    wire is_xor;
    wire is_or;
    wire is_and;
    wire is_mul;
    wire is_mulh;
    wire is_div;
    wire is_divu;
    wire is_rem;
    wire is_remu;
    wire is_slt;
    wire is_sltu;
    wire is_sll;
    wire is_srl;
    wire is_sra;
    wire is_bne;
    wire is_beq;
    //wire is_blez;
    wire is_bge;
    wire is_bgeu;
    wire is_blt;
    wire is_bltu;
    wire is_sw;
    wire is_sb;
    wire is_sh;


    
    wire reg_wen_normal;
    assign reg_wen_normal = is_addi | is_lui | is_auipc | is_jal | is_jalr |
                     is_andi | is_ori | is_xori |
                     is_add  | is_sub | is_xor  | is_or   | is_and  |
                     is_slt  | is_sltu| is_sll  | is_srl  | is_sra  |
                     is_mul  | is_div | is_divu | is_rem  | is_remu |
                     is_seqz | is_srai| is_srli | is_slli ;
    assign is_load = is_lw | is_lbu | is_lh | is_lhu ;
    //assign stall = is_load;
    //assign

 
 
    assign reg_wen = reg_wen_normal | is_load;

    wire [31 : 0] rs1_data, rs2_data;
    wire [31 : 0] reg_wdata;
    wire [31:0] load_wdata;
    // 注意：延迟写回周期用锁存的偏移，而不是当前周期(NOP)的raddr
    wire [1:0] byte_off = raddr[1:0];

    wire [7:0] rbyte =  (byte_off == 2'b00) ? rdata[7:0]   :
                        (byte_off == 2'b01) ? rdata[15:8]  :
                        (byte_off == 2'b10) ? rdata[23:16] :
                                                   rdata[31:24] ;
    wire [31:0] lbu_data = {24'b0, rbyte};
    wire [15:0] r2byte = (byte_off[1] == 1'b0) ? rdata[15:0] : rdata[31:16];
    wire [31:0] lh_data  = {{16{r2byte[15]}}, r2byte};
    wire [31:0] lhu_data = {16'b0, r2byte};

    ysyx_25080212_Decoder decoder(
        .inst       (inst       ),
        .opcode     (opcode     ),
        .rd         (rd         ),
        .funct3     (funct3     ),
        .rs1        (rs1        ),
        .rs2        (rs2        ),
        .imm_i      (imm_i      ),
        .imm_u      (imm_u      ),
        .imm_j      (imm_j      ),
        .imm_b      (imm_b      ),
        .imm_s      (imm_s      ),
        .is_auipc   (is_auipc   ),
        .is_lui     (is_lui     ),
        .is_jal     (is_jal     ),
        .is_jalr    (is_jalr    ),
        .is_addi    (is_addi    ),
        .is_andi    (is_andi    ),
        .is_ori     (is_ori     ),
        .is_xori    (is_xori    ),
        .is_lw      (is_lw      ),
        .is_lbu     (is_lbu     ),
        .is_lh      (is_lh      ),
        .is_lhu     (is_lhu     ),
        .is_seqz    (is_seqz    ),
        .is_srai    (is_srai    ),
        .is_srli    (is_srli    ),
        .is_slli    (is_slli    ),
        .is_add     (is_add     ),
        .is_sub     (is_sub     ),
        .is_xor     (is_xor     ),
        .is_or      (is_or      ),
        .is_and     (is_and     ),
        .is_mul     (is_mul     ),
        .is_div     (is_div     ),
        .is_divu    (is_divu    ),
        .is_rem     (is_rem     ),
        .is_remu    (is_remu    ),
        .is_slt     (is_slt     ),
        .is_sltu    (is_sltu    ),
        .is_sll     (is_sll     ),
        .is_srl     (is_srl     ),
        .is_sra     (is_sra     ),
        .is_bne     (is_bne     ),
        .is_beq     (is_beq     ),
        //.is_blez    (is_blez    ),
        .is_bge     (is_bge     ),
        .is_bgeu    (is_bgeu    ),
        .is_blt     (is_blt     ),
        .is_bltu    (is_bltu    ),
        .is_sw      (is_sw      ),
        .is_sb      (is_sb      ),
        .is_sh      (is_sh      )

    );


    ysyx_25080212_Regfile #(
        .ADDR_WIDTH 	(5   ),
        .DATA_WIDTH 	(32  )
    ) regfile(
        .clk    	(clk     ),
        .rst    	(rst     ),
        .rs1    	(rs1     ),
        .rdata1 	(rs1_data  ),
        .rs2    	(rs2     ),
        .rdata2 	(rs2_data  ),
        .rd     	(rd), 
        .din    	(reg_wdata),
        .wen    	(reg_wen),
        .x10_value (halt_ret)
    );
    

    // output declaration of module ysyx_25080212_Mem
    wire [31:0] rdata;
    wire valid; // mem使能
    wire wen;   // mem写使能

    wire [3 : 0] op;
    wire [31 : 0] alu_a;
    wire [31 : 0] alu_b;
    //assign op = 4'b0000;


    assign alu_a = is_auipc ? pc_current :
                   is_jal   ? pc_current :
                   is_jalr  ? rs1_data :
                   is_addi  ? rs1_data :
                   is_andi  ? rs1_data :
                   is_ori   ? rs1_data :
                   is_xori  ? rs1_data :
                   is_lw    ? rs1_data : 
                   is_lbu   ? rs1_data :
                   is_lh    ? rs1_data :
                   is_lhu   ? rs1_data :
                   is_seqz  ? rs1_data :
                   is_srai  ? rs1_data : 
                   is_srli  ? rs1_data :
                   is_slli  ? rs1_data :      
                   is_add   ? rs1_data :
                   is_sub   ? rs1_data :
                   is_xor   ? rs1_data :
                   is_or    ? rs1_data :
                   is_and   ? rs1_data :       
                   is_mul   ? rs1_data : 
                   is_div   ? rs1_data :
                   is_divu  ? rs1_data :
                   is_rem   ? rs1_data :
                   is_remu  ? rs1_data :
                   is_sll   ? rs1_data :
                   is_srl   ? rs1_data :
                   is_sra   ? rs1_data :
                   is_sb    ? rs1_data :
                   is_sh    ? rs1_data :
                   is_sw    ? rs1_data :
                   rs1_data;

    assign alu_b = is_auipc ? imm_u :
                   is_jal   ? rs1_data :
                   is_jalr  ? imm_i :
                   is_addi  ? imm_i :
                   is_andi  ? imm_i :
                   is_ori   ? imm_i :
                   is_xori  ? imm_i :
                   is_lw    ? imm_i :
                   is_lbu   ? imm_i :
                   is_lh    ? imm_i :
                   is_lhu   ? imm_i :
                   is_seqz  ? 32'h0000 :
                   is_srai  ? {27'b0, imm_i[4:0]} :
                   is_srli  ? {27'b0, imm_i[4:0]} :
                   is_slli  ? {27'b0, imm_i[4:0]} :
                   is_add   ? rs2_data :
                   is_sub   ? rs2_data :
                   is_xor   ? rs2_data :
                   is_or    ? rs2_data :
                   is_and   ? rs2_data :
                   is_mul   ? rs2_data :
                   is_div   ? rs2_data :
                   is_divu  ? rs2_data :
                   is_rem   ? rs2_data :
                   is_remu  ? rs2_data :
                   is_sll   ? {27'b0, rs2_data[4:0]} :
                   is_srl   ? {27'b0, rs2_data[4:0]} :
                   is_sra   ? {27'b0, rs2_data[4:0]} :
                   is_sb    ? imm_s :
                   is_sh    ? imm_s :
                   is_sw    ? imm_s :
                   rs2_data;
    
    assign op = is_auipc ? 4'b0000 : // ADD
                is_jal   ? 4'b0000 : // ADD
                is_jalr  ? 4'b0000 : // ADD
                is_addi  ? 4'b0000 : // ADD
                is_andi  ? 4'b0010 : // AND
                is_ori   ? 4'b0011 : // OR
                is_xori  ? 4'b0100 : // XOR
                is_lw    ? 4'b0000 : // ADD
                is_lbu   ? 4'b0000 : 
                is_lh    ? 4'b0000 :
                is_lhu   ? 4'b0000 :
                is_seqz  ? 4'b0011 :
                is_srai  ? 4'b0111 : // SRA
                is_srli  ? 4'b0110 : // SRL
                is_slli  ? 4'b0101 : // SLL
                is_add   ? 4'b0000 : // ADD
                is_sub   ? 4'b0001 : // SUB
                is_xor   ? 4'b0100 : // XOR
                is_or    ? 4'b0011 : // OR
                is_and   ? 4'b0010 : // AND
                is_mul   ? 4'b1000 : // MUL
                is_div   ? 4'b1001 : // DIV
                is_divu  ? 4'b1010 : // DIVU
                is_rem   ? 4'b1011 : // REM
                is_remu  ? 4'b1100 : // REMU
                is_sll   ? 4'b0101 : // SLL
                is_srl   ? 4'b0110 : // SRL
                is_sra   ? 4'b0111 : // SRA
                is_sb    ? 4'b0000 : // ADD
                is_sh    ? 4'b0000 : // ADD
                is_sw    ? 4'b0000 : // ADD
                4'b0000; // default ADD

    ysyx_25080212_Alu alu(
        .a 	(alu_a  ),
        .b 	(alu_b  ),
        .y 	(alu_out  ),
        .op (op)
    );
    assign snpc = pc_current + 32'd4;
    
    assign reg_wdata =  is_addi ? alu_out :
                        is_lui  ? imm_u :
                        is_auipc ? alu_out :
                        is_jal   ? snpc :
                        is_jalr  ? snpc :
                        is_andi ? alu_out :
                        is_ori  ? alu_out :
                        is_xori ? alu_out :
                        is_lw   ? rdata   :
                        is_lbu  ? lbu_data :
                        is_lh   ? lh_data  :
                        is_lhu  ? lhu_data :
                        is_seqz ? (alu_out == 0) ? 32'h0001 : 32'h0000 : 
                        is_srai ? alu_out :
                        is_srli ? alu_out :
                        is_slli ? alu_out :
                        is_add  ? alu_out :
                        is_sub  ? alu_out :
                        is_xor  ? alu_out :
                        is_or   ? alu_out :
                        is_and  ? alu_out :
                        is_mul  ? alu_out :
                        is_div  ? alu_out :
                        is_divu ? alu_out :
                        is_rem  ? alu_out :
                        is_remu ? alu_out :
                        is_slt  ? (( $signed(alu_a) < $signed(alu_b) ) ? 32'b1 : 32'b0) :
                        is_sltu ? (( $unsigned(alu_a) < $unsigned(alu_b) ) ? 32'b1 : 32'b0) :
                        is_sll  ? alu_out :
                        is_srl  ? alu_out :
                        is_sra  ? alu_out :
                        32'b0;
                       
    
    assign dnpc =   is_jal   ? (pc_current + imm_j) :
                    is_jalr  ? (alu_out & ~32'd1) : 
                    is_beq   ? ( (rs1_data == rs2_data) ? (pc_current + imm_b) : snpc ) :
                    is_bne   ? ( (rs1_data != rs2_data) ? (pc_current + imm_b) : snpc ) :
                    is_blt   ? ( ($signed(rs1_data) < $signed(rs2_data)) ? (pc_current + imm_b) : snpc ) :
                    is_bltu  ? ( ($unsigned(rs1_data) < $unsigned(rs2_data)) ? (pc_current + imm_b) : snpc ) :
                    is_bge   ? ( ($signed(rs1_data) >= $signed(rs2_data)) ? (pc_current + imm_b) : snpc ) :
                    is_bgeu  ? ( ($unsigned(rs1_data) >= $unsigned(rs2_data)) ? (pc_current + imm_b) : snpc ) :
                    snpc;
    assign pc_next = dnpc;

    assign wen = is_sw ? 1'b1 : 
                 is_sb ? 1'b1 :
                 is_sh ? 1'b1 :    
                    1'b0;

    assign valid =   is_lw ? 1'b1 :
                     is_lbu ? 1'b1 : 
                     is_lhu ? 1'b1 :
                     is_lh  ? 1'b1 :
                     is_sw  ? 1'b1 :
                     is_sb  ? 1'b1 :
                     is_sh  ? 1'b1 :
                        1'b0; // 仅在加载指令时访问数据存储器
    assign raddr = alu_out;

    assign waddr = alu_out; 
    wire [1:0] addr_off;
    assign addr_off = waddr[1:0];
    assign wdata =  rs2_data << (addr_off * 8);
    assign wmask =  is_sw ? 4'b1111 :
                    is_sh ? (waddr[1] ? 4'b1100 : 4'b0011) :
                    is_sb ? (waddr[1:0] == 2'b00 ? 4'b0001 :
                             waddr[1:0] == 2'b01 ? 4'b0010 :
                             waddr[1:0] == 2'b10 ? 4'b0100 : 4'b1000) :
                    4'b0000; // byte enable mask for write  
    //assign is_ebreak = (inst == 32'h00100073) ? 1'b1 : 1'b0; // EBREAK指令


    ysyx_25080212_Mem mem (
        .clk   (clk),
        .valid (valid),
        .wen   (wen),
        .raddr (raddr),
        .waddr (waddr),
        .wdata (wdata),
        .wmask (wmask),
        .rdata (rdata)
    );

always @(posedge clk) begin
    if (is_srai) begin
        $display("SRAI: a=0x%08x, b=0x%08x, b[4:0]=%d, result=0x%08x", 
                 alu_a, alu_b, alu_b[4:0], alu_out);
    end
end

endmodule
