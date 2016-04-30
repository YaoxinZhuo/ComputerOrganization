`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:54:28 04/30/2016
// Design Name:   experiment5_storage_1_top
// Module Name:   Y:/Desktop/ComputerOrganization/shiyan5_4_25/zonghetest.v
// Project Name:  shiyan5_4_25
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: experiment5_storage_1_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module zonghetest;

	// Inputs
	reg Storage_clk_m;
	reg [7:0] Storage_Mem_Addr;
	reg Storage_Mem_Write;
	reg Register_Write_Reg;
	reg Register_Reset;
	reg ALU_OPP;
	reg mytest;

	// Outputs
	wire [7:0] Storage_LED;
	wire [31:0] Register_Data_A;
	wire [31:0] Register_Data_B;

	// Instantiate the Unit Under Test (UUT)
	experiment5_storage_1_top uut (
		.Storage_clk_m(Storage_clk_m), 
		.Storage_Mem_Addr(Storage_Mem_Addr), 
		.Storage_LED(Storage_LED), 
		.Storage_Mem_Write(Storage_Mem_Write), 
		.Register_Write_Reg(Register_Write_Reg), 
		.Register_Reset(Register_Reset), 
		.Register_Data_A(Register_Data_A), 
		.Register_Data_B(Register_Data_B), 
		.ALU_OPP(ALU_OPP), 
		.mytest(mytest)
	);

	initial begin
		// Initialize Inputs
		Storage_clk_m = 0;
		Storage_Mem_Addr = 0;
		Storage_Mem_Write = 0;
		Register_Write_Reg = 0;
		Register_Reset = 0;
		ALU_OPP = 0;
		mytest = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100;
		mytest = 1;
		Storage_clk_m = 1;
		
		#100;
		Storage_clk_m = 0;
		mytest = 1;
		
		#100;
		Storage_clk_m = 1;
		
		#100;
		mytest = 0;
		ALU_OPP=3'b001;
		
		#100;
		mytest = 1;
		ALU_OPP = 3'b010;
	end
      
endmodule

