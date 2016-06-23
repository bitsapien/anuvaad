// Name : Colored Balls
using System;
namespace Application {
	class colored_balls {
		public static void Main(string[] args) {
		// input:
		// k :  the number of colors
		// c :  the number of balls of each color 
		int idx;
		int jdx;
		int k = Convert.ToInt32(Console.ReadLine());
		int[,] c = new int[k,1];
		string[] c_elements = new string[100];
		for(idx=0;idx<k;idx++){
			c_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<1;jdx++){
				c[idx,jdx] = Convert.ToInt32(c_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=3;

		Console.WriteLine(result);

		}	
	}
}