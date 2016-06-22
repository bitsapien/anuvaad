// Name : Trains
using System;
namespace Application {
	class trains {
		public static void Main(string[] args) {
		// input:
		// n : number of cities
		// m : number of  roads connecting the cities
		// k : number of railways
		// uvx : uvx corresponds to ui vi xi
		// sy : uvx corresponds to si yi
		int idx, jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		int k = Convert.ToInt32(elements[2]);
		int[,] uvx = new int[m,3];
		string[] uvx_elements = new string[100];
		for(idx=0;idx<m;idx++){
			uvx_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<3;jdx++){
				uvx[idx,jdx] = Convert.ToInt32(uvx_elements[jdx]);
			}
		}
		int[,] sy = new int[k,2];
		string[] sy_elements = new string[100];
		for(idx=0;idx<k;idx++){
			sy_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				sy[idx,jdx] = Convert.ToInt32(sy_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=2;

		Console.WriteLine(result);

		}	
	}
}