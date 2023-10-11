`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:16 10/03/2023 
// Design Name: 
// Module Name:    Clock_Div 
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
output reg clk_hz
    );
initial
begin
clk_hz = 0;

end
integer cnt_1 = 0;

always@(posedge clk)
	if(cnt_1 == 25_000_000)   //1hz
		begin 
			clk_hz= ~clk_hz; 
			cnt_1 =0;
		end 
	else 
		cnt_1 = cnt_1+1;
endmodule