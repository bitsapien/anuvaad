// Name : Add and Remove
using System;
namespace Application {
	class addand_remove {
		public static void Main(string[] args) {
		// input:
		// n : size of array
		// a : source array
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `maximum_number_of_equal_elements`

		// output
		// Dummy Data
		int maximum_number_of_equal_elements=1;

		Console.WriteLine(maximum_number_of_equal_elements);

		}	
	}
}