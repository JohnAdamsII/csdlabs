`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:47:57 02/10/2019
// Design Name:   lab_board
// Module Name:   E:/Google Drive/USF Spring 2019/Computer System Design Lab/gitLAB3/lab3boardTESTBENCH.v
// Project Name:  gitLAB3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab_board
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab3boardTESTBENCH;

	// Inputs
	reg [7:0] SW;
	reg CLK;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	lab_board uut (
		.LED(LED), 
		.SW(SW), 
		.CLK(CLK)
	);

	initial begin
		// Initialize Inputs
		SW = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here


	end
      
endmodule
