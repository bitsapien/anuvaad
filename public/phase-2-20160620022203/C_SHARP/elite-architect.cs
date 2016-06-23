// Name : Elite Architect
using System;
namespace Application {
	class elite_architect {
		public static void Main(string[] args) {
		// input:
		// n : the number of Buildings in the capital of Nippon
		// h :  number of stories in each building
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] h = new int[n];
		string[] h_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			h[index] = Convert.ToInt32(h_elements[index]);


		// write your code here
		// store your results in `a`

		// output
		// Dummy Data
		int[] a = new int[] {3,2,0,2,0};

		Console.WriteLine(string.Join(" ", a));
		}	
	}
}