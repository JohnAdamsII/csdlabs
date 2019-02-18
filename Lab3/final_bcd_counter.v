// This is the top module for the programmable BCD counter.
// It implements a programmable 7-bit counter and a binary-
// to-bcd converter that can output two digits.
// 
// Use of this template is optional

module bcd_count_7(max_count, CLK, run, digit_1, digit_2);

  input [6:0] max_count;
  input CLK, run;
  output [3:0] digit_1;
  output [3:0] digit_2;

  // TODO: Wires and registers for interconnect if needed
  wire [6:0] count_out_to_bcd;
  

  // Programmable 7-bit counter module
  prog_count_7 counter(.max_count(max_count), 
			.run(run), 
			.CLK(CLK), 
			.count_out(count_out_to_bcd));

  // Binary-to-BCD Converter for converting count_out to BCD
  binary_bcd_2 bcd_converter(.bin_in(count_out_to_bcd),
			      .digit_1(digit_1), 
			      .digit_2(digit_2));

endmodule