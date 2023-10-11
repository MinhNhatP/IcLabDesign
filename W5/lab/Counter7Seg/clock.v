`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:46:27 09/27/2023 
// Design Name: 
// Module Name:    clock 
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
module Clock_Div(
input wire clk,
output reg clk_hz,
output reg clk_khz
    );
initial
begin
clk_hz = 0;
clk_khz = 0;
end
integer cnt_0 = 0;
integer cnt_1 = 0;
always@(posedge clk)
	if(cnt_0 == 32)   //800khz 
		begin 
			clk_khz= ~clk_khz; 
			cnt_0 =0;
		end
	else 
		cnt_0 =cnt_0 + 1;
	
	
always@(posedge clk)
	if(cnt_1 == 25_000_000)   //1hz
		begin 
			clk_hz= ~clk_hz; 
			cnt_1 =0;
		end 
	else 
		cnt_1 = cnt_1+1;
endmodule