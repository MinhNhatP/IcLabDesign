`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:05:44 09/29/2023 
// Design Name: 
// Module Name:    ChooseLed 
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
module ChooseLed(
	input [7:0] data,
	input s2,
	output reg [7:0] out0,
	output reg [7:0] out1
   );
always@(posedge s2)
begin
	if(s2)
		begin
		out0 = data;
		out1 = 8'b0000_0000;
		end
	else
		begin
		out0 = 8'b0000_0000;
		out1 = data;
		end

end

endmodule
