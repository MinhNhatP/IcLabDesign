`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:51:05 09/13/2023 
// Design Name: 
// Module Name:    Divide4f 
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
module dived2f(
		 
		 input reset, clk,
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
				
					counter = counter + 4;
						
					
		end
endmodule
