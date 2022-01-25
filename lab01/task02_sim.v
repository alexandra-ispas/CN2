`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:36:57 10/19/2021
// Design Name:   task02
// Module Name:   /home/student/Desktop/labs/lab01/task02_sim.v
// Project Name:  lab01_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: task02
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module task02_sim;

	// Inputs
	reg clk;
	reg oe;
	reg cs;
	reg we;
	reg [6:0] address;
	reg [7:0] data_in;

	// Outputs
	wire [7:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	task02 uut (
		.clk(clk), 
		.oe(oe), 
		.cs(cs), 
		.we(we), 
		.address(address), 
		.data_in(data_in), 
		.data_out(data_out)
	);

	initial forever 
	#5 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		oe = 0;
		cs = 1;
		we = 0;
		address = 0;
		data_in = 0;

		// Wait 100 ns for global reset to finish
		#200;
        
		// Add stimulus here
		we = 1; oe = 0;
		data_in = 4'd1;
		address = 4'd8;
		
		
		#200
		we = 0; oe = 1;
		
		#200;
	end
      
endmodule

