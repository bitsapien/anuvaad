// Name : Forgotten Password
using System;
namespace Application {
	class forgotten_password {
		public static void Main(string[] args) {
		// input:
		// n :  the number of digits in the password 
		// m :  the number of
		// sc : each row contains si ci
		int idx;
		int jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		string[,] sc = new string[m,2];
		string[] sc_elements = new string[100];
		for(idx=0;idx<m;idx++){
			sc_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				sc[idx,jdx] = sc_elements[jdx];
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=6;

		Console.WriteLine(result);

		}	
	}
}