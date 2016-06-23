// Name : Flowers Girls and Grandma
using System;
namespace Application {
	class flowers_girlsand_grandma {
		public static void Main(string[] args) {
		// input:
		// n :  the number of girls
		// p : Grandmas favourite prime number
		// lr : each row corresponds to the range of flowers that each girl can grow
		int idx;
		int jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int p = Convert.ToInt32(elements[1]);
		int[,] lr = new int[n,2];
		string[] lr_elements = new string[100];
		for(idx=0;idx<n;idx++){
			lr_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				lr[idx,jdx] = Convert.ToInt32(lr_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		float result=0.0;

		Console.WriteLine(result);

		}	
	}
}