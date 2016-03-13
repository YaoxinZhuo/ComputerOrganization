`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:06:47 03/13/2016
// Design Name:   PreFullAdder1
// Module Name:   Y:/Desktop/ComputerOrganization/PreFullAdder1/PreFullAdder1test.v
// Project Name:  PreFullAdder1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PreFullAdder1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PreFullAdder1test;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg CIN;

	// Outputs
	wire [3:0] F;
	wire COUT;

	// Instantiate the Unit Under Test (UUT)
	PreFullAdder1 uut (
		.A(A), 
		.B(B), 
		.CIN(CIN), 
		.F(F), 
		.COUT(COUT)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		CIN = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		A=4'b0001;
		B=4'b1010;
		
		#100;
		A=4'b0001;
		B=4'b1010;
		CIN=1;

	end
      
endmodule

