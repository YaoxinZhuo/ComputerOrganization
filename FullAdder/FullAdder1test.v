`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:57:39 03/13/2016
// Design Name:   FullAdder1
// Module Name:   C:/ComputerOrganization/FullAdder/FullAdder1test.v
// Project Name:  FullAdder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FullAdder1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FullAdder1test;

	// Inputs
	reg C0;
	reg A;
	reg B;

	// Outputs
	wire F;
	wire C1;

	// Instantiate the Unit Under Test (UUT)
	FullAdder1 uut (
		.F(F), 
		.C0(C0), 
		.C1(C1), 
		.A(A), 
		.B(B)
	);

	initial begin
		// Initialize Inputs
		C0 = 0;
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		C0=1;
		
		#100;
		B=1;
		C0=0;
		#100;
		C0=1;
		#100;
		A=1;
		B=0;
		C0=0;
		#100;
		C0=1;
		#100;
		B=1;
		C0=0;
		#100;
		C0=1;
	end
      
endmodule

