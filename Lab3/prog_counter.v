// Wrapper to add programmability to a 7-bit counter.
// This module contains the logic to stop a counter when it
// reaches a designated value. The maximum value is 99 (decimal)

module prog_count_7(max_count, run, CLK, count_out);

input [6:0] max_count;
input run, CLK;
output [6:0] count_out;

// Wires/Registers required go here.
wire [6:0] counter_output;
reg [6:0] count_out;
reg enable;

// 7-bit counter instance
count_7 counter_1(.run(enable),
		  .reset(run),
		  .CLK(CLK),
		  .count_out(counter_output));


// TODO: Write logic for Counter control

//In your always block, first check if run == 0, then read //max_count. Compare max_count with count_out to stop.

initial begin
	enable = 1;
end

  always @(posedge CLK)
		begin
			if(!run)
			begin
			enable = 1;
			end
											
			if(counter_output == max_count || counter_output >= 100)
			begin
				enable = 0;	
			end
		
			else if(counter_output <= max_count)
				begin 
				count_out = counter_output;
				end
 
end
   
endmodule 