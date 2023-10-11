`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:43:34 09/09/2023 
// Design Name: 
// Module Name:    Shift1Led 
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



module SHIFT_1LED(clk, reset, out);
	input clk, reset;
	output reg [7:0] out;
	integer temp;
	initial begin
	temp = 0;
	
	end
	
	always@(posedge clk, posedge reset)
	begin
		if (reset)
			begin
				out = 8'b0000_0001;
				temp = 1;
			end
		else
			begin //shifting
				if(temp) // right to left
					begin
						out = out << 1;
						if(out == 8'b1000_0000)
							temp = 0;
					end
				else // left to right
					begin
						out = out >> 1;
						if(out == 8'b0000_0001)
							temp = 1;
					end
			end //shifting
		
	end
	
endmodule
