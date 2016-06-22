// Name : Apples
using System;
namespace Application {
	class apples {
		public static void Main(string[] args) {
		// input:
		// n :  the amount of apples
		// w :  the weight of each apple
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] w = new int[n];
		string[] w_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			w[index] = Convert.ToInt32(w_elements[index]);


		// write your code here
		// store your results in `possibility`

		// output
		// Dummy Data
		string possibility="YES";

		Console.WriteLine(possibility);

		}	
	}
}