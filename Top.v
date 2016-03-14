`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:26:10 12/03/2015 
// Design Name: 
// Module Name:    Top 
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
module Top(
    input Start_Stop,
    input CLK,
    input CLR,
    output  [3:0] AN,
    output  [7:0] Seg
    );
	 reg [15:0] Data;
	 reg [15:0] Data_OUT;
	 reg [23:0] count;
	 reg [20:0] count_l;
	 reg CLK_OUT;
	 reg CLK_OUT_L;
	// reg Flag1;
	 //reg Flag2;
	// reg Flag3;
	 //reg [20:0]D_C;   //进位时参考
	 
	 
	 
	 //////////
	 always @(posedge CLK or negedge CLR)      //分频 计数用
    begin 
    if (!CLR)
	 begin
    count <= 0 ;
	 CLK_OUT <= 0;
	// CLK_OUT_L <= 0;
	 end
	 
	 else if(!Start_Stop)
	 begin
	 count <= count;
	 CLK_OUT <= CLK_OUT;
	 end
	 
    else if (count[22] == 1'b1)             //时间
	 begin
	 count <= 0;
    CLK_OUT <= ~CLK_OUT;
	 //CLK_OUT_L <= ~CLK_OUT_L;
	 end
	 
	 else count <= count+1;
    end
	 //////////
	 
	 always @(posedge CLK )      //分频 动态扫描用
    begin 
	 
	 if (count_l[17] == 1'b1)             
	 begin
	 count_l <= 0;
	 CLK_OUT_L <= ~CLK_OUT_L;
	 end
	
	 else count_l <= count_l+1;
    end
	
	
	 always@(posedge CLK_OUT or negedge CLR)     //数字自增 当前位后面全9才能进位 这样就没问题了(……理论上
	 begin
		if(!CLR) 
		begin
		Data <= 0;
		end
		
		else if(!Start_Stop)
		Data <= Data;
		
		else 
		begin
			 if(Data[3:0]==4'd9 && Data[7:4]<4'd10 && Data[11:8]<4'd10 && Data[15:12]<4'd10) //xxx9
          begin
				Data[3:0] <= 4'd0;
            Data[7:4] <= Data[7:4] + 4'd1;
				
				if(Data[7:4] == 4'd9 && Data[11:8]<4'd10 && Data[15:12]<4'd10) //xx99
            begin
					Data[7:4] <= 4'd0;
               Data[11:8] <= Data[11:8] + 4'd1;
						
					if(Data[11:8] == 4'd9 && Data[15:12]<4'd10)   //x999
					begin
						Data[11:8] <= 4'd0;
						Data[15:12] <= Data[15:12] + 4'd1;
						
						 if(Data[15:12]==4'd9 )
						 begin
						 Data <=0;
						 end
					end
            end
				
          end
            
					 
          else
			 begin
				Data[3:0] <= Data[3:0] + 4'd1;             
          end
				
		end
	 end
	
	 
	 tongyongshumaguan tongyongshumaguan(.CLK_S(CLK_OUT_L),.Data(Data),.AN(AN),.Seg(Seg));


endmodule
