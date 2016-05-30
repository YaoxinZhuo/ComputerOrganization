 `timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:23:17 05/23/2016 
// Design Name: 
// Module Name:    instruct_Register_8_1 
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
module Ins(
	input reset,//reset 重置信号
	input clk,//时钟
	output [31:0] Instruct_code//输出指令信号
    );
	
	//指令存储器
	reg [31:0] PC;
	wire [31:0] PC_NEW;
	
	assign PC_NEW = PC+4;//PC自增电路
	
	always@(negedge clk or posedge reset)   //下跳沿更新
	begin
		if(reset)
			begin
				PC <= 0;
			end
		else 
			begin
				PC <= PC_NEW;
			end
	end
	
	//ip核的实例
	Inst_Rom_8_1 My_inst_rom_8_1 (
  .clka(clk), // input clka
  .addra(PC[7:2]), // input [5 : 0] addra
  .douta(Instruct_code) // output [31 : 0] douta
);
/*
Inst_Rom_8_1 your_instance_name (
  .clka(clka), // input clka
  .addra(addra), // input [5 : 0] addra
  .douta(douta) // output [31 : 0] douta
);
*/
endmodule