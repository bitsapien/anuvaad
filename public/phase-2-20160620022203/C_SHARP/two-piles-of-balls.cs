// Name : Two Piles of Balls
using System;
namespace Application {
	class two_pilesof_balls {
		public static void Main(string[] args) {
		// input:
		// n : number of balls in a pile
		// a : 
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[2n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<2n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `result`,`b`

		// output
		// Dummy Data
		int result=1;
		int[] b = new int[] {2,1};

		Console.WriteLine(result);
		Console.WriteLine(string.Join(" ", b));
		}	
	}
}