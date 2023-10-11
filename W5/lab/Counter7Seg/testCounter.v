`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:03:56 10/03/2023
// Design Name:   COUNTER
// Module Name:   G:/HK7/IClab/W5/lab/Counter7Seg/testCounter.v
// Project Name:  Counter7Seg
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: COUNTER
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testCounter;

	// Inputs
	reg clk;
	reg s0;
	reg s1;
	reg s2;

	// Outputs
	wire [7:0] out0;
	wire [7:0] out1;

	// Instantiate the Unit Under Test (UUT)
	COUNTER uut (
		.clk(clk), 
		.s0(s0), 
		.s1(s1), 
		.s2(s2), 
		.out0(out0), 
		.out1(out1)
	);
always
begin
#10;clk=~clk;
end
	initial begin
		// Initialize Inputs
		clk = 0;
		s0 = 0;
		s1 = 0;
		s2 = 0;

		// Wait 100 ns for global reset to finish
		#2000;
      s0 = 1;
		#1000;
		s1 = 1;
		#1000;
		s1 = 0;
		s2 = 1;
		#300;
		s2 = 0;
		// Add stimulus here

	end
      
endmodule

