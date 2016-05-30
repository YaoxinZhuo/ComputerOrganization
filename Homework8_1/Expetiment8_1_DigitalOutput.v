`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:41:03 05/29/2016 
// Design Name: 
// Module Name:    Expetiment8_1_DigitalOutput 
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
module Expetiment8_1_DigitalOutput(
	input Up_clk,
	input Up_reset,
	input [2:0] Choose_light,
	output reg [7:0] Digital_light
    );
	wire [31:0] Up_Fout;
	wire Up_ZF;
	wire Up_OF;
	
	always@(*)
		begin
			case(Choose_light)
					3'b000: Digital_light = Up_Fout[7:0];
					3'b001: Digital_light = Up_Fout[15:8];
					3'b010: Digital_light = Up_Fout[23:16];
					3'b011: Digital_light = Up_Fout[31:24];
					3'b100: 
						begin
							Digital_light[0] = Up_ZF;
							Digital_light[1] = Up_OF;
						end
			endcase;
		end
	
	Integration_8_1 UpInt(
	.clk(Up_clk),		
	.rst(Up_reset),
	.FOUT(Up_Fout),  //²âÊÔÊ±ºò¿´µÄ
	.ZF(Up_ZF),
	.OF(Up_OF)
    );
endmodule
