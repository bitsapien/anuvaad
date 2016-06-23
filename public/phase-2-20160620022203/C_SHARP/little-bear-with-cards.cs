// Name : Little Bear With Cards
using System;
namespace Application {
	class little_bear_with_cards {
		public static void Main(string[] args) {
		// input:
		// n :  the number of cards
		// description : 
		int idx;
		int jdx;
		int n = Convert.ToInt32(Console.ReadLine());
		int[,] description = new int[n,2];
		string[] description_elements = new string[100];
		for(idx=0;idx<n;idx++){
			description_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				description[idx,jdx] = Convert.ToInt32(description_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `steps`

		// output
		// Dummy Data
		int steps=0;

		Console.WriteLine(steps);

		}	
	}
}