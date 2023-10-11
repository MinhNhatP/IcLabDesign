`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:33:00 09/04/2023
// Design Name:   demux18
// Module Name:   G:/HK7/IClab/W1/lab3/Demux1to8/test18.v
// Project Name:  Demux1to8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux18
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test18;

	// Inputs
	reg data;
	reg [2:0] control;

	// Outputs
	wire [7:0] outputs;

	// Instantiate the Unit Under Test (UUT)
	demux18 uut (
		.data(data), 
		.control(control), 
		.outputs(outputs)
	);
	
	always begin
    #5 data = ~data; // Invert the clock every 5 time units
  end
	
	initial begin
		// Initialize Inputs
		data = 0;
		control = 0;
		#100;
		control = 1;
		#100;
		control = 2;
		#100;
		control = 3;
		#100;
		control = 4;
		#100;
		control = 5;
		#100;
		control = 6;
		#100;
		control = 7;
		#100;
		
        
		// Add stimulus here

	end
      
endmodule

