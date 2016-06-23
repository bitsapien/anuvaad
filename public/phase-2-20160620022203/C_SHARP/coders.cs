// Name : Coders
using System;
namespace Application {
	class coders {
		public static void Main(string[] args) {
		// input:
		// n :  number of developers
		// m :  number of lines of
		// b :  maximum possible number of errors
		// mod : the module you need to use to get the
		// a :  the number of errors that each
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		int b = Convert.ToInt32(elements[2]);
		int mod = Convert.ToInt32(elements[3]);
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=10;

		Console.WriteLine(result);

		}	
	}
}