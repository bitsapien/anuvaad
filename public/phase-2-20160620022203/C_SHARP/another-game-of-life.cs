// Name : Another Game of Life
using System;
namespace Application {
	class another_gameof_life {
		public static void Main(string[] args) {
		// input:
		// n :  the size of the map
		// m :  the number of populations that want to
		int idx;
		int jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);


		// write your code here
		// store your results in `exists`,`territory`

		// output
		// Dummy Data
		string exists="NO";
		char[][] territory= new char[][] {{''}};

		Console.WriteLine(exists);
		if(exists=="YES"){
			for(idx=0;idx<n;idx++){
				Console.WriteLine(string.Join(" ", territory[idx]));
			}
		}
		}	
	}
}