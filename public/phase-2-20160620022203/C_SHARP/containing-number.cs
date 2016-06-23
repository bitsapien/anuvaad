// Name : Containing Number
using System;
namespace Application {
	class containing_number {
		public static void Main(string[] args) {
		// input:
		// n : count of the following numbers
		// k : k
		// numbers_to_check : 
		int idx;
		int jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int k = Convert.ToInt32(elements[1]);
		int[,] numbers_to_check = new int[n,1];
		string[] numbers_to_check_elements = new string[100];
		for(idx=0;idx<n;idx++){
			numbers_to_check_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<1;jdx++){
				numbers_to_check[idx,jdx] = Convert.ToInt32(numbers_to_check_elements[jdx]);
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