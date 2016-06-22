// Name : Max Even Sum 
using System;
namespace Application {
	class max_even_sum {
		public static void Main(string[] args) {
		// input:
		// n : number of integers
		// given_integers : given integers
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] given_integers = new int[n];
		string[] given_integers_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			given_integers[index] = Convert.ToInt32(given_integers_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=6;

		Console.WriteLine(result);

		}	
	}
}