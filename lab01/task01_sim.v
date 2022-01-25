`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:28:14 10/19/2021
// Design Name:   task01
// Module Name:   /home/student/Desktop/labs/lab01/task01_sim.v
// Project Name:  lab01_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: task01
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module task01_sim;

	// Inputs
	reg [3:0] address;

	// Outputs
	wire [7:0] data;

	// Instantiate the Unit Under Test (UUT)
	task01 uut (
		.address(address), 
		.data(data)
	);

	initial begin
		// Initialize Inputs
		address = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		address = 4'd10;
        
		// Add stimulus here

	end
      
endmodule

