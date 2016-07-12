// Name : Continuous Sequence Sum
using System;
namespace Application {
	class continuous_sequence_sum {
		public static void Main(string[] args) {
		// input:
		// n : length of sequence
		// a : sequence
		// t : sum
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);
		int t = Convert.ToInt32(Console.ReadLine());


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		string result="True";

		Console.WriteLine(result);

		}	
	}
}