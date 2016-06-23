// Name : Pony Sequence
using System;
namespace Application {
	class pony_sequence {
		public static void Main(string[] args) {
		// input:
		// n : number of elements in the sequences in a and b
		// a : sequence a
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `b`

		// output
		// Dummy Data
		int[] b = new int[] {1,1,1,1,1};

		Console.WriteLine(string.Join(" ", b));
		}	
	}
}