`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:30:14 03/27/2016 
// Design Name: 
// Module Name:    Top_Module_1 
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
module Top_Module_1(
    input CLK,					
	 input Sel,
	 input Write_Reg,			//一个开关
	 input CLK_Register,   			
	 input Reset,					
	 input [4:0] Addr,      
	 input [1:0] Sel_Data,  
    //下面这两个还是数码管中用的AN和Seg
	 output  [3:0] AN,		
    output  [7:0] Seg
    );
	 wire [31:0] Data;
	 reg [17:0] fenpinl;
	 reg CLKOUT;
	 reg [31:0] Data_In;
	 
	 Digital_Tube1 Digital_Tuble_1(.CLK_S(CLKOUT),.Data(Data),.AN(AN),.Seg(Seg),.Sel(Sel));
	 Register_Stack_1 Register_Stack_1(.CLK(CLK_Register),.Reset(Reset),.Write_Reg(Write_Reg),.W_Addr(Addr),.W_Data(Data_In),.R_Addr_A(Addr),.R_Addr_B(Addr),.R_Data_A(Data),.R_Data_B(Data));
//
	 
	 always@(Sel_Data)
		begin
			case(Sel_Data)
				2'b00:Data_In = 32'b00010010001101000101011001111000;
				2'b01:Data_In = 32'b11111111111111111111111111111111;
				2'b10:Data_In = 32'b11110000111100001111000011110000;
				2'b11:Data_In = 127;
			endcase
	 end
	
	 always @(posedge CLK)      //分频 动态扫描用
		begin 
			if (fenpin1[17] == 1'b1)             
				begin
					fenpin1 <= 0;
					CLKOUT <= ~CLKOUT;
				end
		else 
			begin
				fenpin1 <= fenpin1+1;
			end
    end


endmodule
