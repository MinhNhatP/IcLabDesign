`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:07:03 09/27/2023
// Design Name:   Counter
// Module Name:   G:/HK7/IClab/W5/lab/PhanMinhNhat_20119147/testcount.v
// Project Name:  PhanMinhNhat_20119147
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testcount;

	// Inputs
	reg clk;
	reg s0;

	// Outputs
	wire [7:0] q0;
	wire [7:0] q1;

	// Instantiate the Unit Under Test (UUT)
	Counter uut (
		.clk(clk), 
		.s0(s0), 
		.q0(q0), 
		.q1(q1)
	);
always
	begin
		clk=~clk;
		#10;
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		#100
		s0 = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

