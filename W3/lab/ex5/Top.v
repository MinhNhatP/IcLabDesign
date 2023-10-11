`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:52:02 09/13/2023 
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
    input check,
    output [7:0] LED
);

wire q_intermediate; 


SHIFT_8LED shift_inst(
	.reset(reset),
	.check(check),
	.clk(q_intermediate),
	.out(LED));
	
dived2f d2f_inst (
    .reset(reset),
    .clk(clk),
    .q(q_intermediate)
);

endmodule
