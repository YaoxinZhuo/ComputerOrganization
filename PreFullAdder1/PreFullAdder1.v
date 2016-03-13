`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:30:54 03/13/2016 
// Design Name: 
// Module Name:    PreFullAdder1 
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
module PreFullAdder1(A,B,CIN,F,COUT
    );
	input[3:0] A;
	input[3:0] B;
	input CIN;
	output[3:0] F;
	output COUT;
	wire[3:0] G,P;
	wire C1,C2,C3;
	
	FullAdder1 CC1(F[0],CIN,C1,A[0],B[0]);
	FullAdder1 CC2(F[1],C1,C2,A[1],B[1]);
	FullAdder1 CC3(F[2],C2,C3,A[2],B[2]);
	FullAdder1 CC4(F[3],C3,COUT,A[3],B[3]);
	
	assign G[3:0] = A[3:0]&B[3:0];
	assign P[3:0] = A[3:0]|B[3:0];
	
	assign C1 = G[0]||(P[0]&&CIN);
	assign C2 = G[1]||(P[1]&&G[0])||(P[1]&&P[0]&&CIN);
	assign C3 = G[2]||(P[2]&&G[1])||(P[2]&&P[1]&&G[0])||(P[2]&&P[1]&&P[0]&&CIN);
	assign COUT = G[3]||(P[3]&&G[2])||(P[3]&&P[2]&&G[1])||(P[3]&&P[2]&&P[1]&&G[0])||(P[3]&&P[2]&&P[1]&&P[0]&&CIN);
	
endmodule
