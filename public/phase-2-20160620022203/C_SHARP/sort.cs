// Name : Sort
using System;
namespace Application {
	class sort {
		public static void Main(string[] args) {
		// input:
		// n : number of subjects
		// m : the number of limitations
		// su : pairs si ui which describe the order of subjects
		// sequence : 
		int idx;
		int jdx;
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		int[,] su = new int[m,2];
		string[] su_elements = new string[100];
		for(idx=0;idx<m;idx++){
			su_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				su[idx,jdx] = Convert.ToInt32(su_elements[jdx]);
			}
		}
		int[] sequence = new int[n];
		string[] sequence_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			sequence[index] = Convert.ToInt32(sequence_elements[index]);


		// write your code here
		// store your results in `correct`

		// output
		// Dummy Data
		string correct="YES";

		Console.WriteLine(correct);

		}	
	}
}