`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:32:08 09/09/2023 
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
module TOP(clk,reset,control,sel,out);
	input clk,reset;
	input [1:0] control;
	input [1:0] sel;
	output [7:0] out;
	
	wire w;
	
	DIVIDE_4F div(.control(control), .clk(clk), .reset(reset), .q(w));
	BLINK blink(.clk(w), .reset(reset), .out(out));
	SHIFT_8LED shift8led(.clk(w), .reset(reset), .out(out));
	SHIFT_1LED shift1led(.clk(w), .reset(reset), .out(out));
always @(posedge clk, posedge reset,sel)
	begin
		case(control)
			1: blink(w, reset, out);
			2: shift8led(w, reset, out);
			3: shift1led(w, reset, out);
			
		endcase
		
	end


endmodule
