`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:15:45 02/08/2019
// Design Name:   bcd_count_7
// Module Name:   G:/My Drive/Classes/CSD_Lab/Labs/Lab3/T0.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bcd_count_7
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module T0;

	// Inputs
	reg [6:0] max_count;
	reg CLK;
	reg run;

	// Outputs
	wire [3:0] digit_1;
	wire [3:0] digit_2;

	// Instantiate the Unit Under Test (UUT)
	bcd_count_7 uut (
		.max_count(max_count), 
		.CLK(CLK), 
		.run(run), 
		.digit_1(digit_1), 
		.digit_2(digit_2)
	);

	// Clock Generator
	always begin
		CLK = ~CLK;
		#5;
	end

	initial begin
		// Initialize Inputs
		max_count = 0;
		CLK = 0;
		run = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		CLK = 0;
		run = 0;
		max_count = 0;
		#100;
		// Set MAX to 73 while run=0
		max_count = 73;
		#10;
		// Wait, then set run to 1
		run = 1;
		#800;
		// Change MAX while run is 1 - should NOT affect the output;
		max_count = 15;
		#950;
		// At this time, the output should be 73. Reset it to zero and give it the new max by setting run to 0
		run = 0;
		#20
		// Count up to 15 by setting run to 1
		run = 1;
		#50;
		// Change max count to > 99
		max_count = 118;
		#500
		run=0;
		#20
		run=1;

	end
      
endmodule

