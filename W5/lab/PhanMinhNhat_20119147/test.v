`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:38:24 10/02/2023
// Design Name:   PhanMinhNhat
// Module Name:   G:/HK7/IClab/W5/lab/PhanMinhNhat_20119147/test.v
// Project Name:  PhanMinhNhat_20119147
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PhanMinhNhat
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
	reg s0;
	reg clki;

	// Outputs
	wire clko;
	wire stb;
	wire dio;

	// Instantiate the Unit Under Test (UUT)
	PhanMinhNhat uut (
		.s0(s0), 
		.clki(clki), 
		.clko(clko), 
		.stb(stb), 
		.dio(dio)
	);
always
begin
#10;clki=~clki;
end
	initial begin
		// Initialize Inputs
		s0 = 0;
		#10;
		s0 = 1;
		clki = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

