// Name : Box of Candies
using System;
namespace Application {
	class boxof_candies {
		public static void Main(string[] args) {
		// input:
		// n :  the number of boxes with candies James and Jessica have
		// a :  the number of candies in the every bag
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `sought_number_of_ways`

		// output
		// Dummy Data
		int sought_number_of_ways=1;

		Console.WriteLine(sought_number_of_ways);

		}	
	}
}