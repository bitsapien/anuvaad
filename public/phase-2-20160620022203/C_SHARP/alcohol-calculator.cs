// Name : Alcohol Calculator
using System;
namespace Application {
	class alcohol_calculator {
		public static void Main(string[] args) {
		// input:
		// n1 :  alcohol percentage 1
		// m1 : volume 1 in ml
		// n2 :  alcohol percentage 2
		// m2 : volume 2 in ml
				string[] elements = (Console.ReadLine()).Split(' ');
		int n1 = Convert.ToInt32(elements[0]);
		float m1 = Float.parseFloat(elements[1]);
		string[] elements = (Console.ReadLine()).Split(' ');
		int n2 = Convert.ToInt32(elements[0]);
		float m2 = Float.parseFloat(elements[1]);


		// write your code here
		// store your results in `v`

		// output
		// Dummy Data
		string v="30%";

		Console.WriteLine(v);

		}	
	}
}