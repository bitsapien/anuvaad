// Name : All as One
using System;
namespace Application {
	class allas_one {
		public static void Main(string[] args) {
		// input:
		// n : size of array
		// a : array of integers
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `min_amt_of_changes`

		// output
		// Dummy Data
		int min_amt_of_changes=5;

		Console.WriteLine(min_amt_of_changes);

		}	
	}
}