`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:41:17 09/09/2023 
// Design Name: 
// Module Name:    MODE2_LEDSANGDAN_TATDAN 
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
module MODE2_LEDSANGDAN_TATDAN(clk, reset, en, OUT);
	input clk;
	input reset;
	input en;
	output reg [7:0] OUT;
	
	always@(posedge clk)
	begin
		if (reset)
			OUT = 8'b0000_0001;
		else
			if (en)
				if (OUT[7] == 0)
				begin
					OUT = OUT << 1;
					OUT = OUT + 1;
				end
				else 
					OUT = OUT << 1;
			else
				OUT = OUT;
				
	end
endmodule
