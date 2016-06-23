// Name : Fabulous Sum
using System;
namespace Application {
	class fabulous_sum {
		public static void Main(string[] args) {
		// input:
		// t :  the amount of numbers for which you need to calculate the requested sum
		// n : 
		int idx;
		int jdx;
		int t = Convert.ToInt32(Console.ReadLine());
		int[,] n = new int[t,1];
		string[] n_elements = new string[100];
		for(idx=0;idx<t;idx++){
			n_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<1;jdx++){
				n[idx,jdx] = Convert.ToInt32(n_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `sum`

		// output
		// Dummy Data
		int[][] sum= new int[][] {{-4},{499999998352516354}};

for(idx=0;idx<t;idx++){
			Console.WriteLine(string.Join(" ", sum[idx]));
		}
		}	
	}
}