// Name : Arrays Minmax
using System;
namespace Application {
	class arrays_minmax {
		public static void Main(string[] args) {
		// input:
		// n : size of a
		// m : size of b
		// a : array A
		// b : array B
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);
		int[] b = new int[m];
		string[] b_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<m;index++)
			b[index] = Convert.ToInt32(b_elements[index]);


		// write your code here
		// store your results in `minimum_num_of_operations`

		// output
		// Dummy Data
		int minimum_num_of_operations=3;

		Console.WriteLine(minimum_num_of_operations);

		}	
	}
}