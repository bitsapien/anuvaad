// Name : Happy Colleagues
using System;
namespace Application {
	class happy_colleagues {
		public static void Main(string[] args) {
		// input:
		// r :  the number of candies of red
		// g :  the number of candies of green
		// b :  the number of candies of blue
				string[] elements = (Console.ReadLine()).Split(' ');
		int r = Convert.ToInt32(elements[0]);
		int g = Convert.ToInt32(elements[1]);
		int b = Convert.ToInt32(elements[2]);


		// write your code here
		// store your results in `number_of_colleagues`

		// output
		// Dummy Data
		int number_of_colleagues=4;

		Console.WriteLine(number_of_colleagues);

		}	
	}
}