`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:02:48 09/07/2023
// Design Name:   COUNTER
// Module Name:   G:/HK7/IClab/W3/lab/ex4/testCounter.v
// Project Name:  ex4
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
	reg reset;
	reg UD;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	COUNTER uut (
		.clk(clk), 
		.reset(reset), 
		.UD(UD), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		reset = 1;
		#20;
		clk = 0;
		reset = 0;
		UD = 0;
		forever #10 clk =~ clk;
		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here

	end
      
endmodule

