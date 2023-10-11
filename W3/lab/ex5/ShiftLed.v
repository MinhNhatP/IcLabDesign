`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:45:15 09/09/2023 
// Design Name: 
// Module Name:    ShiftLed 
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


module SHIFT_8LED(clk,check, reset, out);
	input clk, reset;
	output reg [7:0] out;
	input check;
	integer temp;
	
	initial temp = 0;
	
	
	always@(posedge clk, posedge reset)
	begin
		if (reset)
			begin
				out = 8'b0000_0000;
				temp = 1;
			end
		else
			if(check)
			begin // >>>>>>
				if(temp)
					begin // fill 0											
								
						out[7] = 1'b0;
						out = out >> 1;
						
						if( out == 8'b0000_0000)
							temp = 0;
					end // fill 0
			
				else
					begin // fill 1
							
						out = out >> 1;
						out[7] = 1'b1;
								
						if( out == 8'b1111_1111)
							temp = 1;
					end // fill 1
			end // >>>>>>>>
			
			else
			
			begin // <<<<<<<
				if(temp)
					begin // fill 0											
								
						out[0] = 1'b0;
						out = out << 1;
						
						if( out == 8'b0000_0000)
							temp = 0;
					end // fill 0
			
				else
					begin // fill 1
							
						out = out << 1;
						out[0] = 1'b1;
								
						if( out == 8'b1111_1111)
							temp = 1;
					end // fill 1
			end // <<<<<<<
	end
	
endmodule
