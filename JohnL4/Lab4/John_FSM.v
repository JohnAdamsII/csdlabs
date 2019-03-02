`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:43:13 03/01/2019 
// Design Name: 
// Module Name:    John_FSM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module John_FSM(N_in,D_in,Q_in,diet_in,soda_in,GiveDiet,GiveSoda,clk,reset,N_out, D_out, Q_out);
//Mealy Template:


// inputs
input clk, reset, N_in,D_in,Q_in, soda_in, diet_in;

//outputs
output reg GiveDiet, GiveSoda, N_out, D_out, Q_out; 


parameter S0 = 3'b000;
parameter S1 = 3'b001;
parameter S2 = 3'b010;
parameter S3 = 3'b011;
parameter S4 = 3'b100;
parameter S5 = 3'b101;


(* F5M_ENCODING="SEQUNTIAL", SAFE_IMPLEMENTATION="NO" *)
reg [2:0] state = S0;
 
 
always@(posedge clk )
	if (reset) begin
		state <= S0;
	end
	
	else
		(* FULL_CASE, PARALLEL_CASE *) 
		
		case (state)
		   S0 : begin
			
			GiveDiet = 0;
			GiveSoda = 0;
			N_out = 0;
			D_out = 0;
			Q_out = 0; 
			
			if (N_in) 
			begin
				state <= S1;
				 N_out = 1;
			end
			
			else if (D_in) 
				begin
					state <= S2;
					D_out = 1;
				end
				
			else
				state <= S0;
		    end
			 
		   S1 : begin
			
			N_out = 0;
			
			if (N_in) 
				begin
					state <= S2;
					N_out = 1;
				end
				
			else if (D_in) 
				begin
					state <= S3;
					D_out = 1;
				end
				
			else
				state <= S1;
		    end
			 
			S2 : begin
			
			N_out = 0;
			D_out = 0;
			
			if (N_in) 
				begin
					state <= S3;
					N_out = 1;
				end
				
			else if (D_in) 
				begin
					state <= S4;
					D_out = 1;
				end
				
			else
			
			state <= S2;
			
			end
			
			S3 : begin
			
			N_out = 0;
			D_out = 0;
			
			if (N_in) 
				begin
					state <= S4;
					N_out = 1;
				end
				
			else if (D_in) 
				begin
					state <= S5;
					D_out = 1;
				end
				
			else
			
			state <= S3;
			
			end
			
			
			S4 : begin
			
			N_out = 0;
			D_out = 0;
			
			if(diet_in)
			GiveDiet = 1;
			
			else
			GiveSoda = 1;
			
			state <= S0;
			
			end
			
			
		  	
		endcase

//assign <outputl> = <logic_equation_based_on_states_and;inputs>;
//assign <output2> = <logic_equation_based_on_states_and;inputs>;
// Add other output equations as necessary

endmodule
