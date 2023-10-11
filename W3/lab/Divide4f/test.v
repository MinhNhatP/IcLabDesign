`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:13:32 09/12/2023
// Design Name:   DIVIDE_4F
// Module Name:   G:/HK7/IClab/W3/lab/Divide4f/test.v
// Project Name:  Divide4f
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DIVIDE_4F
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [1:0] control;
	reg clk;
	reg reset;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	DIVIDE_4F uut (
		.control(control), 
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
		control = 0;
		#10000;
		control = 1;
		#10000;
		control = 2;
		#10000;
		control = 3;
		#10000;
        
		// Add stimulus here
	end
      
endmodule

