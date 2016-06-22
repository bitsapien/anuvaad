// Name : BinSequence
using System;
namespace Application {
	class bin_sequence {
		public static void Main(string[] args) {
		// input:
		// n : length
		int index;
		int n = Convert.ToInt32(Console.ReadLine());


		// write your code here
		// store your results in `sequence`

		// output
		// Dummy Data
		int[] sequence = new int[n] {0,1};

		Console.WriteLine(string.Join(" ", sequence));
		}	
	}
}