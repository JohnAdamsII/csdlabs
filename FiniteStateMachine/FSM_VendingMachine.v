`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:56:50 03/02/2019 
// Design Name: 
// Module Name:    FSM_VendingMachine 
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
module FSM_VendingMachine(
N_in,D_in,Q_in,diet_in,soda_in,GiveDiet,GiveSoda,clk,reset,N_out, D_out, Q_out);
//Mealy Template:

// inputs
input clk, reset, N_in,D_in,Q_in, soda_in, diet_in;

//outputs
output reg GiveDiet, GiveSoda, N_out, D_out, Q_out; 

//States Defining
parameter S0 = 4'b0000;
parameter S1 = 4'b0001;
parameter S2 = 4'b0010;
parameter S3 = 4'b0011;
parameter S4 = 4'b0100;
parameter S5 = 4'b0101;
parameter S6 = 4'b0110;
parameter S7 = 4'b0111;
parameter S8 = 4'b1000;
parameter S9 = 4'b1001;


(* F5M_ENCODING="SEQUNTIAL", SAFE_IMPLEMENTATION="NO" *)
reg [3:0] state = S0;
 
 
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
				
			
			else if (Q_in) 
				begin
					state <= S5;
					Q_out = 1;
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
				
			else if (Q_in) 
				begin
					state <= S6;
					Q_out = 1;
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
				
			else if (Q_in) 
				begin
					state <= S7;
					Q_out = 1;
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
			
			else if (Q_in) 
				begin
					state <= S8;
					Q_out = 1;
				end
				
			else
			
			state <= S3;
			
			end
			
			
			S4 : begin
			
			N_out = 0;
			D_out = 0;
			
			if (N_in) 
				begin
					state <= S5;
					N_out = 1;
				end
				
			else if (D_in) 
				begin
					state <= S6;
					D_out = 1;
				end

			else if (Q_in) 
				begin
					state <= S9;
					Q_out = 1;
				end				

			else
			
			state <= S4;
			
				
			end
			
			
			S5 : begin
			
			N_out = 0;
			D_out = 0;
			Q_out = 0;
			
			if (N_in) 
				begin
					state <= S6;
					N_out = 1;
				end
				
			else if (D_in) 
				begin
					state <= S7;
					D_out = 1;
				end

			else if (Q_in) 
				begin
					state <= S9;
					Q_out = 1;
				end				
				
			else
			
			state <= S5;
			
					
			end
			
			
				
			S6 : begin
			
			N_out = 0;
			D_out = 0;
			Q_out = 0;
			
			if (N_in) 
				begin
					state <= S7;
					N_out = 1;
				end
				
			else if (D_in) 
				begin
					state <= S8;
					D_out = 1;
				end

			else if (Q_in) 
				begin
					state <= S9;
					Q_out = 1;
				end				
				
			else
			
			state <= S6;
			
			end
			
			
			
			S7 : begin
			
			N_out = 0;
			D_out = 0;
			Q_out = 0;
			
			if (N_in) 
				begin
					state <= S8;
					N_out = 1;
				end
				
			else if (D_in) 
				begin
					state <= S9;
					D_out = 1;
				end

			else if (Q_in) 
				begin
					state <= S9;
					Q_out = 1;
				end				
				
			else
			
			state <= S7;

			end


			S8 : begin
			
			N_out = 0;
			D_out = 0;
			Q_out = 0;
			
			if (N_in) 
				begin
					state <= S9;
					N_out = 1;
				end
				
			else if (D_in) 
				begin
					state <= S9;
					D_out = 1;
				end

			else if (Q_in) 
				begin
					state <= S9;
					Q_out = 1;
				end				
				
			else
			
			state <= S8;			

			end
			
			S9 : begin
			
			N_out = 0;
			D_out = 0;
			Q_out = 0;
			
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