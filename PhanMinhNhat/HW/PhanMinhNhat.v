`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:23:12 10/03/2023 
// Design Name: 
// Module Name:    PhanMinhNhat 
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
module PhanMinhNhat(
	input wire s0,
	input wire s1,
	input wire s2,
	input wire clki,
	output wire clko,
	output wire stb,
	output wire dio
    );
wire clk_khz,clk_hz;
wire [3:0] one0,ten0,hundred0,one1,ten1,hundred1;
wire [7:0] out0,out1;
Clock_Div clock (.clk(clki),.clk_hz(clk_hz),.clk_khz(clk_khz));
COUNTER counter (.clk(clk_hz),.s0(s0),.s1(s1),.s2(s2),.out0(out0),.out1(out1));
HEX_BCD hex_out0 (.hex(out0),.ones(one0),.tens(ten0),.hundreds(hundred0));
HEX_BCD hex_out1 (.hex(out1),.ones(one1),.tens(ten1),.hundreds(hundred1));

TM1638 tm (.seg0(hundred0),.seg1(ten0),.seg2(one0),.seg5(hundred1),.seg6(ten1),.seg7(one1),
	.clkinput(clk_khz),
	.clk(clko),
	.stb(stb),
	.dio(dio)
 );


endmodule
