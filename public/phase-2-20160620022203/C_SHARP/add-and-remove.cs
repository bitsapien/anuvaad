// Name : Add and Remove
using System;
namespace Application {
	class addand_remove {
		public static void Main(string[] args) {
		// input:
		// n : the size of the array
		// a : source of array
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=1;

		Console.WriteLine(result);

		}	
	}
}