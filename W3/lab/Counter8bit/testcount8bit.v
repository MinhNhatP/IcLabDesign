`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:40:47 09/06/2023
// Design Name:   counter8bit
// Module Name:   G:/HK7/IClab/W3/lab/Counter8bit/testcount8bit.v
// Project Name:  Counter8bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter8bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testcount8bit;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	counter8bit uut (
		.clk(clk), 
		.reset(reset), 
		.q(q)
	);
always
	begin
		clk = 1;
		#20;
		clk = 0;
		#30;
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		#10;
		reset = 1;
		#10;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#10;
      
		// Add stimulus here

	end
      
endmodule

