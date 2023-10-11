`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:09:25 09/04/2023
// Design Name:   decode38
// Module Name:   G:/HK7/IClab/W1/lab2/Decoder38/test38.v
// Project Name:  Decoder38
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decode38
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test38;

	// Inputs
	reg [2:0] w;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	decode38 uut (
		.w(w), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		w = 0;
		#100;
		w = 1;
		#100;
		w = 2;
		#100;
		w = 3;
		#100; 
		w = 4;
		#100;
		w = 5;
		#100;
		w = 6;
		#100;
		w = 7;
		#100;
		
        
		// Add stimulus here

	end
      
endmodule

