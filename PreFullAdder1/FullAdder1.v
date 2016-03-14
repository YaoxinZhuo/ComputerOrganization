`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:29:41 03/13/2016 
// Design Name: 
// Module Name:    FullAdder1 
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
module FullAdder1(F,CIN,COUT,A,B
    );
	input CIN,A,B;
	output F,COUT;
	wire t1,t2,t3;
	
	xor FF(F,A,B,CIN);
	
	and TT1(t1,A,B);
	xor TT2(t2,A,B);
	and TT3(t3,t2,CIN);
	or CC(COUT,t1,t3);

endmodule
