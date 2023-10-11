`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:02:57 08/30/2023
// Design Name:   decode24
// Module Name:   G:/HK7/IClab/W1/lab1/bentest.v
// Project Name:  lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decode24
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module bentest;

	// Inputs
	reg [1:0] w;

	// Outputs
	wire [3:0] y;

	// Instantiate the Unit Under Test (UUT)
	decode24 uut (
		.w(w), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		w = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

