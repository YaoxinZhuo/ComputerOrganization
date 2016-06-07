`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:32:06 06/07/2016 
// Design Name: 
// Module Name:    Ins 
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
module Instruct(
	input rst,
	input clk,
	input [1:0] PC_s,
	input [31:0] R_Data_A,
	input [31:0] imm_data,
	input [25:0] address,
	output [31:0] inst,
	output [31:0] PC_new,
	output reg [31:0] PC
    );
	
	assign PC_new = PC+4;
	
	always @(negedge clk or posedge rst)
	begin
		if(rst) PC <= 0;
		else
		begin
		end
	end
	
	ROM myROM (
  .clka(clk), // input clka
  .addra(PC[7:2]), // input [5 : 0] addra
  .douta(inst) // output [31 : 0] douta
);
endmodule