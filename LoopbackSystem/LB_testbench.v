`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:07:06 04/09/2019
// Design Name:   loopback
// Module Name:   F:/MyStuff/Downloads/LoopbackSystem-20190409T202207Z-001/LoopbackSystem/LB_testbench.v
// Project Name:  LoopbackSystem
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: loopback
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module LB_testbench;

	// Inputs
	reg [7:0] switches;
	reg rs232_rx;
	reg reset;
	reg clk;

	// Outputs
	wire [7:0] leds;
	wire rs232_tx;

	// Instantiate the Unit Under Test (UUT)
	loopback uut (
		.switches(switches), 
		.leds(leds), 
		.rs232_tx(rs232_tx), 
		.rs232_rx(rs232_rx), 
		.reset(reset), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		switches = 0;
		rs232_rx = 0;
		reset = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

