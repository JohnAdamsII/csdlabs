`timescale 1ns / 1ps

module lab_board(LED, SW, CLK);

output  [7:0] LED;
input [7:0] SW;
input CLK;
//wire [3:0] ones;
//wire [3:0] tens;

//assign ones = LED[3:0];
//assign tens = LED[7:4];

bcd_count_7 top_counter( 
.max_count(SW[6:0]), 
.CLK(CLK), 
.run(SW[7]), 
.digit_l(LED[3:0]), 
.digit_2(LED[7:4]) 
); 


endmodule
