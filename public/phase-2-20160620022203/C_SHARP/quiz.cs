// Name : Quiz
using System;
namespace Application {
	class quiz {
		public static void Main(string[] args) {
		// input:
		// n : number of consecutive questions
		// m : number of questions to which right answer was given
		// k : count threshold
				string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		int k = Convert.ToInt32(elements[2]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=3;

		Console.WriteLine(result);

		}	
	}
}