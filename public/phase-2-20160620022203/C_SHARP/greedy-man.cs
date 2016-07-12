// Name : Greedy Man
using System;
namespace Application {
	class greedy_man {
		public static void Main(string[] args) {
		// input:
		// m : 
		// n : 
		// mn : 
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int m = Convert.ToInt32(elements[0]);
		int n = Convert.ToInt32(elements[1]);
		int[] mn = new int[m];
		string[] mn_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<m;index++)
			mn[index] = Convert.ToInt32(mn_elements[index]);


		// write your code here
		// store your results in `ouput`

		// output
		// Dummy Data
		int ouput=8;

		Console.WriteLine(ouput);

		}	
	}
}