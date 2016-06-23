// Name : Elegance of a Sequence
using System;
namespace Application {
	class eleganceofa_sequence {
		public static void Main(string[] args) {
		// input:
		// n : length of sequence of a
		// a : sequence a
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `k`,`b`

		// output
		// Dummy Data
		int k=2;
		int[] b = new int[] {4,5};

		Console.WriteLine(k);
		Console.WriteLine(string.Join(" ", b));
		}	
	}
}