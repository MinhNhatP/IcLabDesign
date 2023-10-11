`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:15:13 09/07/2023
// Design Name:   dived2f
// Module Name:   G:/HK7/IClab/W3/lab/ex4/testDIV.v
// Project Name:  ex4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dived2f
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testDIV;

	// Inputs
	reg [1:0] control;
	reg reset;
	reg clk;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	dived2f uut (
		.control(control), 
		.reset(reset), 
		.clk(clk), 
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

