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
	input wire [1:0]s,
	input wire clki,
	output wire clko,
	output wire stb,
	output wire dio
    );
	 

wire clk_hz;
wire [3:0] one0,ten0;
wire [3:0] one1,ten1;
wire [3:0] one2,ten2;
wire [3:0] one3,ten3;

wire [7:0] out_c;

wire [7:0] out0,out1,out2,out03;

Clock_Div clock (.clk(clki),.clk_hz(clk_hz),.clk_khz(clk_khz));
COUNTER counter (.clk(clk_hz),.s0(s0),.s1(s1),.out0(out_c));
Shifter shift(clki,out_c,s,out0,out1,out2,out03);


HEX_BCD hex_out0 (.hex(out0),.ones(one0),.tens(ten0));
HEX_BCD hex_out1 (.hex(out1),.ones(one1),.tens(ten1));
HEX_BCD hex_out2 (.hex(out2),.ones(one2),.tens(ten2));
HEX_BCD hex_out3 (.hex(out3),.ones(one3),.tens(ten3));


TM1638 tm (.led(out0),.seg0(ten3),.seg1(one3),.seg2(ten2),.seg3(one1),.seg4(ten1),.seg5(one1),.seg6(ten0),.seg7(one0),
	.clkinput(clk_khz),
	.clk(clko),
	.stb(stb),
	.dio(dio)
 );


endmodule
