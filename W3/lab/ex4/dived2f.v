`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:31:50 09/07/2023 
// Design Name: 
// Module Name:    dived2f 
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
		 input [1:0] control,
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
					case (control)
						2'b00: 		counter = counter + 1;
						2'b01: 		counter = counter + 2;
						2'b10: 		counter = counter + 4;
						2'b11: 		counter = counter + 8;
						default: counter = counter;
					endcase
		end
endmodule
