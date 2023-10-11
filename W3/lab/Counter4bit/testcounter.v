`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:53:41 09/06/2023
// Design Name:   counter4bit
// Module Name:   G:/HK7/IClab/W3/New folder/Counter4bit/testcounter.v
// Project Name:  Counter4bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter4bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testcounter;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	counter4bit uut (
		.clk(clk), 
		.reset(reset), 
		.q(q)
	);
	integer i;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 1;
		#10;
		reset = 0;
		#10;
		for (i=0;i<32;i=i+1)
		#10 clk = ~clk;
		// Add stimulus here

	end
      
endmodule

