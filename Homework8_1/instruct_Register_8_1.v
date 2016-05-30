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
	input reset,//reset �����ź�
	input clk,//ʱ��
	output [31:0] Instruct_code//���ָ���ź�
    );
	
	//ָ��洢��
	reg [31:0] PC;
	wire [31:0] PC_NEW;
	
	assign PC_NEW = PC+4;//PC������·
	
	always@(negedge clk or posedge reset)   //�����ظ���
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
	
	//ip�˵�ʵ��
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