// Name : Greedy Man
using System;
namespace Application {
	class greedy_man {
		public static void Main(string[] args) {
			// input:
			// n : number of devices that will fit into steve
			// m : number of smartphones available for sale
			// price_of_smartphones : list of price of n smartphones
			int index;
					string[] elements = (Console.ReadLine()).Split(" ");
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		int[] price_of_smartphones = new int[n];
		string[] price_of_smartphones_elements = (Console.ReadLine()).Split(" ");
		for(index=0;index<n;index++)
			price_of_smartphones[index] = Convert.ToInt32(price_of_smartphones_elements[index]);


			// write your code here
			// store your results in `result`

			// output
					Console.WriteLine(result);

	}	
	}}