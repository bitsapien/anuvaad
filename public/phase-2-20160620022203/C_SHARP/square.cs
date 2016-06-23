// Name : Square
using System;
namespace Application {
	class square {
		public static void Main(string[] args) {
		// input:
		// k :  count of cases
		// an : integers a and n in every row
		int idx;
		int jdx;
		int k = Convert.ToInt32(Console.ReadLine());
		int[,] an = new int[k,2];
		string[] an_elements = new string[100];
		for(idx=0;idx<k;idx++){
			an_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				an[idx,jdx] = Convert.ToInt32(an_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `roots`

		// output
		// Dummy Data
		string roots="No root";

		Console.WriteLine(roots);

		}	
	}
}