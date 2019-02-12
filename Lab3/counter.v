// Source template for a simple 7-bit binary counter with
// enable and synchronous reset.

module count_7(run,reset, CLK, count_out);

  output reg [6:0] count_out;
  input run,reset, CLK;

initial begin 
count_out = 0; 
end

  always @(posedge CLK)
  begin
    if(reset == 0) begin // Reset Condition
	count_out = 0; 
  end     

else if (run && reset)
 begin // Run Condition
	count_out = count_out+ 1; 
 end
 	else begin
	count_out = count_out; 
     end 
end
  
endmodule 