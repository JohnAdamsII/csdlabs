`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:55:38 03/01/2019
// Design Name:   John_FSM
// Module Name:   G:/My Drive/Classes/CSD_Lab/Labs/Lab4/T1.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: John_FSM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module T1;

	// Inputs
	reg N_in;
	reg D_in;
	reg Q_in;
	reg diet_in;
	reg soda_in;
	reg clk;
	reg reset;

	// Outputs
	wire GiveDiet;
	wire GiveSoda;
	wire N_out;
	wire D_out;
	wire Q_out;

	// Instantiate the Unit Under Test (UUT)
	John_FSM uut (
		.N_in(N_in), 
		.D_in(D_in), 
		.Q_in(Q_in), 
		.diet_in(diet_in), 
		.soda_in(soda_in), 
		.GiveDiet(GiveDiet), 
		.GiveSoda(GiveSoda), 
		.clk(clk), 
		.reset(reset), 
		.N_out(N_out), 
		.D_out(D_out), 
		.Q_out(Q_out)
	);



	always begin
	clk = ~clk;
	#5;
	end




	initial begin
	

	
		// Initialize Inputs
		N_in = 0;
		D_in = 0;
		Q_in = 0;
		diet_in = 0;
		soda_in = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		N_in = 1;
		diet_in = 1;
		
		
		#15
		
		N_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		N_in = 0;
		D_in = 0;
		
		#15
		
		N_in = 1;
		
		#15
		
		N_in = 0;
		D_in = 0;
		
		
		#100
		
		
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		#15
		
		D_in = 1;
		
		#15
		
		D_in = 0;
		
		

	end
      
endmodule

