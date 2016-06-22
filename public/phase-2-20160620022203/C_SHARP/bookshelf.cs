// Name : Bookshelf
using System;
namespace Application {
	class bookshelf {
		public static void Main(string[] args) {
		// input:
		// n : number of books
		// m : number of books remaining in the first shelf
				string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);


		// write your code here
		// store your results in `number_of_methods`

		// output
		// Dummy Data
		int number_of_methods=4;

		Console.WriteLine(number_of_methods);

		}	
	}
}