// Name : Greedy Man
using System;
namespace Application {
	class greedy_man {
		public static void Main(string[] args) {
		// input:
		// n : the number of devices that will fit into
		// m : e number of smartphones available for sale
		// a : price of a smartphones
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		int[] a = new int[m];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<m;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `maximum_sum_of_money`

		// output
		// Dummy Data
		int maximum_sum_of_money=8;

		Console.WriteLine(maximum_sum_of_money);

		}	
	}
}