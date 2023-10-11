`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:25:28 09/06/2023
// Design Name:   divide50m
// Module Name:   G:/HK7/IClab/W3/lab/Divide50M/test50m.v
// Project Name:  Divide50M
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: divide50m
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test50m;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	divide50m uut (
		.clk(clk), 
		.reset(reset), 
		.q(q)
	);
always
	begin
		clk=~clk;
		#10;
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


