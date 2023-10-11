`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:24:47 10/02/2023
// Design Name:   TOP
// Module Name:   G:/HK7/IClab/W5/lab/Counter7Seg/test.v
// Project Name:  Counter7Seg
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TOP
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
	reg s1;
	reg s2;
	reg clki;

	// Outputs
	wire clko;
	wire stb;
	wire dio;

	// Instantiate the Unit Under Test (UUT)
	TOP uut (
		.s0(s0), 
		.s1(s1), 
		.s2(s2), 
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
		s1 = 0;
		s2 = 0;
		clki = 0;

		// Wait 100 ns for global reset to finish
		#2000;
		s0 = 1;
		s2 = 1;
		#2000;
		s1 = 1;
		s2 = 0;
		#2000;
        
		// Add stimulus here

	end
      
endmodule

