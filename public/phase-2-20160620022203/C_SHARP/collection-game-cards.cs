// Name : Collection Game Cards
using System;
namespace Application {
	class collection_game_cards {
		public static void Main(string[] args) {
		// input:
		// n : the number of cards on the assembly line
		// a : cards
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