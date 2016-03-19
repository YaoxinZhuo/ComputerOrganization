`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:09:17 03/19/2016 
// Design Name: 
// Module Name:    top1 
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
//顶层调用模块
module Top(
    input CLK,
	 input [31:0] Data,
	 input Sel,
    output  [3:0] AN,
    output  [7:0] Seg
    );
	 reg [15:0] Data_OUT;
	 reg [20:0] count_l;
	 reg CLK_OUT_L;

	 
	 always @(posedge CLK)      //分频 动态扫描用
    begin 
	 
	 if (count_l[17] == 1'b1)             
	 begin
	 count_l <= 0;
	 CLK_OUT_L <= ~CLK_OUT_L;
	 end
	
	 else count_l <= count_l+1;
    end
	

	 tongyongshumaguan tongyongshumaguan(.CLK_S(CLK_OUT_L),.Data(Data),.AN(AN),.Seg(Seg),.Sel(Sel));


endmodule