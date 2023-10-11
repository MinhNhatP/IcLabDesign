`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:39:17 09/11/2023 
// Design Name: 
// Module Name:    TOP 
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
module TOP(freq_sel, mode_sel, reset, clk, OUT);
	input [1:0] freq_sel;
	input [1:0] mode_sel;
	input reset;
	input clk;
	output reg [7:0] OUT;
	reg [3:0] en_internal;
	reg [3:0] reset_internal;
	
	wire [7:0] out_mode1;
	wire [7:0] out_mode2;
	wire [7:0] out_mode3;
	wire [7:0] out_mode4;
	
	wire clk_internal;
	initial 
	begin
		reset_internal = 4'b1111;
		en_internal = 4'b0000;
	end
	DIV_CLK_4_MODE div_clk(.clk(clk), .mode(freq_sel), .OUT(clk_internal));
	MODE1_LEDCHOPTAT mode1(.clk(clk_internal), .reset(reset_internal[0]), .en(en_internal[0]), .OUT(out_mode1));
	MODE2_LEDSANGDAN_TATDAN mode2(.clk(clk_internal), .reset(reset_internal[1]), .en(en_internal[1]), .OUT(out_mode2));
	MODE3_LEDCHAY_TRAIPHAI mode3(.clk(clk_internal), .reset(reset_internal[2]), .en(en_internal[2]), .OUT(out_mode3));
	MODE4_SANGDON mode4(.clk(clk_internal), .reset(reset_internal[3]), .en(en_internal[3]), .OUT(out_mode4));
	
	always@(posedge clk)
	begin
		if (reset) 
			reset_internal = 4'b1111;
		else
			reset_internal = 4'b0000;
			
			
		if (mode_sel == 2'b00) begin 
			en_internal = 4'b0001; reset_internal = 4'b1110; OUT = out_mode1; end
		else if (mode_sel == 2'b01) begin 
			en_internal = 4'b0010; reset_internal = 4'b1101; OUT = out_mode2; end 
		else if (mode_sel == 2'b10) begin 
			en_internal = 4'b0100; reset_internal = 4'b1011; OUT = out_mode3; end 
		else if (mode_sel == 2'b11) begin 
			en_internal = 4'b1000; reset_internal = 4'b0111; OUT = out_mode4; end 
		else begin
		reset_internal = 4'b1111;
		en_internal = 4'b0000;
	end
	end 
endmodule
