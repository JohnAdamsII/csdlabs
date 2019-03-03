`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:13:28 03/02/2019
// Design Name:   FSM_VendingMachine
// Module Name:   F:/Xilinx/Working/FiniteStateMachine/FSM_VendingMachine_TestBench.v
// Project Name:  FiniteStateMachine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FSM_VendingMachine
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FSM_VendingMachine_TestBench;

	// Inputs
	reg N_in;
	reg D_in;
	reg Q_in;
	reg SodaDiet_Sel;
	reg clk;
	reg reset;

	// Outputs
	wire GiveDiet;
	wire GiveSoda;
	wire N_out;
	wire D_out;
	wire Q_out;

	// Instantiate the Unit Under Test (UUT)
	FSM_VendingMachine uut (
		.N_in(N_in), 
		.D_in(D_in), 
		.Q_in(Q_in), 
		.SodaDiet_Sel(SodaDiet_Sel), 
		.GiveDiet(GiveDiet), 
		.GiveSoda(GiveSoda), 
		.clk(clk), 
		.reset(reset), 
		.N_out(N_out), 
		.D_out(D_out), 
		.Q_out(Q_out)
	);

//Clock Generator
	always
		begin
			clk = ~clk;
			#5;
		end
	
	initial begin
		// Initialize Inputs
		N_in = 0;
		D_in = 0;
		Q_in = 0;
		SodaDiet_Sel = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#20;
		SodaDiet_Sel = 1;
		// Add stimulus here
		
		// N D N D N D Test Case
		N_in = 1;
		
		#15
		
		N_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		#15
		
		N_in = 1;
		
		#15
		
		N_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		#15
		
		N_in = 1;
		
		#15
		
		N_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		// N D D D D test case
		#55	
		
		N_in = 1;
		
		#15
		
		N_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		// D Q D Test Case
		#55
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		#15
		
		Q_in = 1;
		
		#15
		
		Q_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		D_in = 0;

		// N Q D N Test Case
		#55
		SodaDiet_Sel = 0;
		
		N_in = 1;
		
		#15
		
		N_in = 0;
		
		#15
		
		Q_in = 1;
		
		#15
		
		Q_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		#15

		N_in = 1;
		
		#15
		
		N_in = 0;
		
		
		// Q Q Test Case
		
		#55
		
		Q_in = 1;
		
		#15
		
		Q_in = 0;
		
		#15
		
		Q_in = 1;
		
		#15
		
		Q_in = 0;
		
		#15

		N_in = 1;
		
		#15
		
		N_in = 0;
	end
      
endmodule

