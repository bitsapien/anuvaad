// Name : Notebook with Numbers 
using System;
namespace Application {
	class notebookwith_numbers {
		public static void Main(string[] args) {
		// input:
		// n : number of sheets
		// k : 
		// a : 
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int k = Convert.ToInt32(elements[1]);
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `maximum_sum`,`r`

		// output
		// Dummy Data
		int maximum_sum=27;
		int[] r = new int[] {3,4,5,8};

		Console.WriteLine(maximum_sum);
		Console.WriteLine(string.Join(" ", r));
		}	
	}
}