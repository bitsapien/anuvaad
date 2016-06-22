// Name : Pocket money
using System;
namespace Application {
	class pocketmoney {
		public static void Main(string[] args) {
		// input:
		// n : the number of exams
		// r :  the maximum score
		// avg : average score required to double his pocket money
		// ab : ab corresponds to ai bi
		int idx, jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int r = Convert.ToInt32(elements[1]);
		int avg = Convert.ToInt32(elements[2]);
		int[,] ab = new int[n,2];
		string[] ab_elements = new string[100];
		for(idx=0;idx<n;idx++){
			ab_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				ab[idx,jdx] = Convert.ToInt32(ab_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=4;

		Console.WriteLine(result);

		}	
	}
}