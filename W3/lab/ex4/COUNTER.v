`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:46:06 09/07/2023 
// Design Name: 
// Module Name:    COUNTER 
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
module COUNTER(clk, reset, UD, LED);
		input clk;
		input reset;
		input UD;
		output reg [7:0] LED;
		
		always@(posedge clk, posedge reset)
		begin
				if (reset)
					LED = 8'b0000_0000;
				else 
					if (UD)
						LED = LED + 1;
					else 
						LED = LED - 1;
		end
endmodule
