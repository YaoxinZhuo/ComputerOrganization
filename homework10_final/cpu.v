`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:37:15 06/07/2016 
// Design Name: 
// Module Name:    cpu 
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
module cpu(
	input clk,
	input clk_100m, 
	input rst,
	output [31:0] f,
	output [31:0] M_R_Data,	
	output [31:0] PC,		
	output ZF,
	output OF
    );

	wire [31:0] inst;   
	wire [5:0] OP;   
	wire [5:0] func; 
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [15:0] imm;	
	wire [25:0] address;
	wire [31:0] imm_data;	
	wire imm_s;
	wire Write_Reg;
	wire [2:0] ALU_OP;
	wire [31:0] A;		//寄存器堆读出数据A
	wire [31:0] B;		//寄存器堆读出数据B
	wire COUT;
	wire [1:0] PC_s;
	wire [31:0] PC_new;
	wire [4:0] W_Addr; 
	wire [1:0] w_r_s;	
	wire [31:0] ALU_B;	
	wire rt_imm_s;	
	wire Mem_Write;
	wire [1:0] wr_data_s;
	wire [5:0] Mem_Addr;  
	wire [31:0] M_W_Data;
	wire [31:0] W_Data;
	
	
	assign OP = inst[31:26];
	assign rs = inst[25:21];
	assign rt = inst[20:16];
	assign rd = inst[15:11];
	assign func = inst[5:0];
	assign imm = inst[15:0];	
	assign address = inst[25:0];
	
	
	assign imm_data = (imm_s)?{{16{imm[15]}},imm}:{{16{1'b0}},imm};	//是否对立即数进行符号扩展
	
	
	assign W_Addr = (w_r_s[1]) ? 5'b11111 : ((w_r_s[0]) ? rt : rd);
	
	
	assign ALU_B = (rt_imm_s) ? imm_data :B;	
	
	
	
	assign Mem_Addr = f[5:0];
	assign W_Data = (wr_data_s[1])?PC_new:((wr_data_s[0])?M_R_Data:f);	
	assign M_W_Data = B; 
	
	
	register myJicunqi(	//寄存器堆
	.CLK(clk),
	.RST(rst),
	.Write_Reg(Write_Reg),
	.W_Addr(W_Addr),		//rt rd 二选一
	.W_Data(W_Data),		//ALU RAM 二选一
	.R_Addr_A(rs),
	.R_Addr_B(rt),
	.R_Data_A(A),
	.R_Data_B(B)
	);  
	
	
	
	InsTrans myInstTranslate(	//指令译码器
	.OP(OP),
	.func(func),
	.ZF(ZF),
	.Write_Reg(Write_Reg),
	.ALU_OP(ALU_OP),
	.w_r_s(w_r_s),
	.imm_s(imm_s),
	.rt_imm_s(rt_imm_s),
	.wr_data_s(wr_data_s),
	.Mem_Write(Mem_Write),
	.PC_S(PC_s)	);  
	
	ALU myALU(	//ALU
	.ALU_OP(ALU_OP),
	.A(A),
	.B(ALU_B),	//立即数 寄存器堆B口 二选一 
	.COUT(COUT),
	.f(f),
	.OF(OF),
	.ZF(ZF)
	);	
		
	Instruct myInstruct (    //指令寄存器
  .clk(clk), 
  .rst(rst), 
  .PC_s(PC_s),
  .R_Data_A(A),
  .imm_data(imm_data),
  .address(address),
  .inst(inst),
  .PC_new(PC_new),
  .PC(PC)
	);
	
	Mem myMemory(	//数据存储器
	.clk_100m(clk_100m),
	.Mem_Addr(Mem_Addr),
	.M_W_Data(M_W_Data),
	.Mem_Write(Mem_Write),
	.M_R_Data(M_R_Data)
	);  



endmodule


