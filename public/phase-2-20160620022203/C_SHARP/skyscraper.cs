// Name : Skyscraper
using System;
namespace Application {
	class  {
		public static void Main(string[] args) {
		// input:
		// n : number of skyscrapers
		// k : number of stories to move
		// h : each row has height of each skyscraper
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int k = Convert.ToInt32(elements[1]);
		int[] h = new int[n];
		string[] h_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			h[index] = Convert.ToInt32(h_elements[index]);


		// write your code here
		// store your results in `j`

		// output
		// Dummy Data
		int j=3;

		Console.WriteLine(j);

		}	
	}
}