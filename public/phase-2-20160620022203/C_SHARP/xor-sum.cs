// Name : XOR sum
using System;
namespace Application {
	class xo_rsum {
		public static void Main(string[] args) {
		// input:
		// n :  the number of elements in the array
		// a :  integers from the array
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `xor_sum`

		// output
		// Dummy Data
		int xor_sum=3;

		Console.WriteLine(xor_sum);

		}	
	}
}