`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:42:54 09/04/2023
// Design Name:   demux14
// Module Name:   G:/HK7/IClab/W1/lab4/Demux1to4/test14.v
// Project Name:  Demux1to4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux14
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test14;

	// Inputs
	reg data;
	reg [1:0] control;

	// Outputs
	wire [3:0] outputs;

	// Instantiate the Unit Under Test (UUT)
	demux14 uut (
		.data(data), 
		.control(control), 
		.outputs(outputs)
	);

	always begin
    #2 data = ~data; // Invert the clock every 5 time units
  end
	
	initial begin
		// Initialize Inputs
		data = 0;
		control = 0;
		#20;
		control = 1;
		#20;
		control = 2;
		#20;
		control = 3;
	   
		// Add stimulus here

	end
      
endmodule

