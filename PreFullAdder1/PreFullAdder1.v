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
module PreFullAdder1(A,B,cin,F,cout
    );
	input[3:0] A;
	input[3:0] B;
	input cin;
	output[3:0] F;
	output cout;
	wire[3:0] G,P;
	wire	C1,C2,C3;
	/*
	FullAdder1 CcC1(.F(F[0]),.C0(CIN),.C1(CC1),.A(A[0]),.B(B[0]));
	FullAdder1 CcC2(.F(F[1]),.C0(CC1),.C1(CC2),.A(A[1]),.B(B[1]));
	FullAdder1 CcC3(.F(F[2]),C0(CC2),.C1(CC3),.A(A[2]),.B(B[2]));
	FullAdder1 CcC4(.F(F[3]),C0(CC3),.C1(COUT),.A(A[3]),.B(B[3]));
	*/
	FullAdder1 CcC1(.F(F[0]),.CIN(cin),.A(A[0]),.B(B[0]));
	FullAdder1 CcC2(.F(F[1]),.CIN(C1),.A(A[1]),.B(B[1]));
	FullAdder1 CcC3(.F(F[2]),.CIN(C2),.A(A[2]),.B(B[2]));
	FullAdder1 CcC4(.F(F[3]),.CIN(C3),.A(A[3]),.B(B[3]));
	
	assign G[3:0] = A[3:0]&B[3:0];
	assign P[3:0] = A[3:0]|B[3:0];
	
	assign C1 = G[0]||(P[0]&&cin);
	assign C2 = G[1]||(P[1]&&G[0])||(P[1]&&P[0]&&cin);
	assign C3 = G[2]||(P[2]&&G[1])||(P[2]&&P[1]&&G[0])||(P[2]&&P[1]&&P[0]&&cin);
	assign cout = G[3]||(P[3]&&G[2])||(P[3]&&P[2]&&G[1])||(P[3]&&P[2]&&P[1]&&G[0])||(P[3]&&P[2]&&P[1]&&P[0]&&cin);
	
endmodule
