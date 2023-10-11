`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:04:13 09/09/2023 
// Design Name: 
// Module Name:    MODE4_SANGDON 
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
module MODE4_SANGDON(clk, reset, en, OUT
    );
	input clk;
	input reset;
	input en;
	output reg [7:0] OUT;
	reg [7:0] temp;
	always@(posedge clk, posedge reset)
	begin
		if (reset || OUT == 8'b1111_1111)
		begin
			OUT 	= 8'b0000_0001;
			temp 	= 8'b0000_0000;
		end
		else
		begin
			if (en)
			begin
				OUT = OUT << 1;
				OUT = OUT | temp;
				if (OUT == temp)
					OUT = OUT + 1;
				
			end
			else 
				OUT = OUT;
				
			
			case (OUT)
			8'b1000_0000 : begin temp = OUT;end
			8'b1100_0000 : begin temp = OUT;end
			8'b1110_0000 : begin temp = OUT;end
			8'b1111_0000 : begin temp = OUT;end
			8'b1111_1000 : begin temp = OUT;end
			8'b1111_1100 : begin temp = OUT;end
			8'b1111_1110 : begin temp = OUT;end
			8'b1111_1111 : begin temp = 8'b0000_0001;end
			endcase
		end
	end
endmodule
