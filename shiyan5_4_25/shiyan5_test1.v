`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:47:18 04/25/2016 
// Design Name: 
// Module Name:    shiyan5_test1 
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
module experiment5_storage_1_top(input clk_m,input[7:0] Mem_Addr,output reg [7:0]LED,input Mem_Write
    );//Mem_write 写为1，读为0,CLK手动时钟
	 wire [31:0] Read_Data;//读数据
	 reg [31:0] Write_Data;//写入数据
	 wire Mem_Write;
	 
	 always @(Mem_Write or Mem_Addr or Read_Data)  //字节选择 or 数据选择
	 begin
		if(Mem_Write == 0)
			begin
				case(Mem_Addr[1:0])
					2'b00: LED[7:0] = Read_Data[7:0];
					2'b01: LED[7:0] = Read_Data[15:8];
					2'b10: LED[7:0] = Read_Data[23:16];
					2'b11: LED[7:0] = Read_Data[31:24];
				endcase
			end
		
		else
			begin
				case(Mem_Addr[1:0])
					2'b00: Write_Data = 32'b00000000000000000000000000000000;
					2'b01: Write_Data = 32'b10101010010101011100110000110011;
					2'b10: Write_Data = 32'b10000000000010110000100000000000;
					2'b11: Write_Data = 32'b11111111111111111111111111111111;
				endcase
			end
	 end
	RAM_B RAM_B_INSTANCE(
  .clka(clk_m), // input clka
  .wea(Mem_Write), // input [0 : 0] wea
  .addra(Mem_Addr[7:2]), // input [5 : 0] addra
  .dina(Write_Data), // input [31 : 0] dina
  .douta(Read_Data) // output [31 : 0] douta
);
endmodule
