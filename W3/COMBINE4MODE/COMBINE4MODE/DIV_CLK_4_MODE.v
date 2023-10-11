`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:19:27 09/11/2023 
// Design Name: 
// Module Name:    DIV_CLK_4_MODE 
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
module DIV_CLK_4_MODE(clk, mode, OUT);
	input clk;
	input [1:0] mode;
	output reg OUT;
	
	reg [24:0] counter;
	
	initial
		begin
			counter = 1;
			OUT = 0;
		end
		
	always@(posedge clk)
	begin
		counter = counter + 1;
		
		case (mode)
		0: 	begin if (counter == 25_000_000) begin counter = 1; OUT = ~OUT; end end
		1: 	begin if (counter == 12_500_000) begin counter = 1; OUT = ~OUT; end end
		2: 	begin if (counter == 6_250_000) begin counter = 1; OUT = ~OUT; end end
		3: 	begin if (counter == 3_120_000) begin counter = 1; OUT = ~OUT; end end
		endcase
	end

endmodule
