`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:36:26 05/24/2016 
// Design Name: 
// Module Name:    Integration_8_1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Integration_8_1(
	input clk,		
	input rst,
	output [31:0] FOUT,   //测试时候看的
	output reg ZF,
	output reg OF
    );
	 
	wire [31:0] Inst_code;   //指令代码
	wire [5:0] OP;   //指令类型
	wire [5:0] func; //决定ALUOP
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire Write_Reg;
	wire [2:0] ALU_OP;
	wire [31:0] A;
	wire [31:0] B;
	wire COUT;
	
	
	
	assign OP = Inst_code[31:26];
	assign rs = Inst_code[25:21];
	assign rt = Inst_code[20:16];
	assign rd = Inst_code[15:11];
	assign func = Inst_code[5:0];
	
	
	
	always@(*)
	 begin
		if(FOUT == 0) 
			begin
				ZF = 1;
			end
		else 
			begin
				ZF = 0;
			end
		if(ALU_OP[2:0]==3'b100 || ALU_OP[2:0]==3'b101)
			begin
				OF = A[30]^B[30]^FOUT[30]^COUT; 
			end
		else 
			begin
				OF = 0;    //非带符号数运算无意义设定为0;
			end
	 end
	
	Register_jicunqiDui regfile1(	
	.CLK(clk),
	.RST(rst),
	.Write_Reg(Write_Reg),
	.W_Addr(rd),
	.W_Data(FOUT),
	.R_Addr_A(rs),
	.R_Addr_B(rt),
	.R_Data_A(A),
	.R_Data_B(B)
	);  
	ALU_8_1fromExperiment3 ALU1(
	.ALU_OP(ALU_OP),
	.A(A),
	.B(B),
	.COUT(COUT),
	.FOUT(FOUT)
	);	
	Ins Ins1 ( 
  .clk(clk), 
  .reset(rst), 
  .Instruct_code(Inst_code) 
	);
	translateInstructAndFunction My_Instruct_translate(	
	.OP(OP),
	.Function(func),
	.Write_Reg(Write_Reg),
	.ALU_OP(ALU_OP)
	);  



endmodule


