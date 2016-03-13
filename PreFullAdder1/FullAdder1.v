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
module FullAdder1(F,C0,C1,A,B
    );
	input C0,A,B;
	output F,C1;
	wire t1,t2,t3;
	
	xor(F,A,B,C0);
	
	and(t1,A,B);
	xor(t2,A,B);
	and(t3,t2,C0);
	or(C1,t1,t3);

endmodule
