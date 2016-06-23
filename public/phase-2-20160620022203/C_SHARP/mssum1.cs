// Name : MSSUM1
using System;
namespace Application {
	class mssum1 {
		public static void Main(string[] args) {
		// input:
		// n :  the number of elements in the array
		// q :  the number of queries correspondingly
		// a :  the array elements
		// lr : each row corresponds to l and r
		int index;
		int idx;
		int jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int q = Convert.ToInt32(elements[1]);
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);
		int[,] lr = new int[q,2];
		string[] lr_elements = new string[100];
		for(idx=0;idx<q;idx++){
			lr_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				lr[idx,jdx] = Convert.ToInt32(lr_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `sum_of_replies`

		// output
		// Dummy Data
		int sum_of_replies=25;

		Console.WriteLine(sum_of_replies);

		}	
	}
}