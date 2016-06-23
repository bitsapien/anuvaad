// Name : Magic Pool
using System;
namespace Application {
	class magic_pool {
		public static void Main(string[] args) {
		// input:
		// n : number of tourists
		// a : sizes of the pool
		// b : sizes of the pool
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int a = Convert.ToInt32(elements[1]);
		int b = Convert.ToInt32(elements[2]);


		// write your code here
		// store your results in `s`,`a1`,`b1`

		// output
		// Dummy Data
		int s=18;
		int a1=3;
		int b1=6;

		Console.WriteLine(s);
		Console.WriteLine(a1+" "+b1);

		}	
	}
}