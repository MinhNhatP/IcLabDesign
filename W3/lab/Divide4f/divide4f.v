`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:46:01 09/06/2023 
// Design Name: 
// Module Name:    divide4f 
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
module DIVIDE_4F(
		input [1:0] control,
		input clk, reset,
		output reg q
		 );
		integer counter;
		always@(posedge clk, posedge reset)
		begin
			if (reset)
				begin
				q = 0;
				counter = 0;
				end
			else 
				if (counter > 25)
					begin 
						q = ~q;
						counter = 0;
					end
				else 
					case (control)
						2'b00: 		counter = counter + 1;
						2'b01: 		counter = counter + 2;
						2'b10: 		counter = counter + 4;
						2'b11: 		counter = counter + 8;
						default: counter = counter;
					endcase
		end
endmodule
