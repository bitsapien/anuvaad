// Name : Dirty Stairs
using System;
namespace Application {
	class dirty_stairs {
		public static void Main(string[] args) {
		// input:
		// n :  number of steps in the staircase
		// m : number of dirty steps
		// d :  numbers of dirty steps 
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		int[] d = new int[m];
		string[] d_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<m;index++)
			d[index] = Convert.ToInt32(d_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		string result="YES";

		Console.WriteLine(result);

		}	
	}
}