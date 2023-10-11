`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:36:34 09/13/2023 
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

 module TOP(
    input clk,
    input reset,
    output [7:0] LED
);

wire q_intermediate; 


SHIFT_1LED shift(
	.reset(reset),
	.clk(q_intermediate),
	.out(LED));
	
divide4f d4f(
    .reset(reset),
    .clk(clk),
    .q(q_intermediate)
);

endmodule