// Name : A and B and Compilation Errors
using System;
namespace Application {
	class aand_band_compilation_errors {
		public static void Main(string[] args) {
		// input:
		// n :  the initial number of compilation errors
		// a : 
		// b : 
		// c : 
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);
		int[] b = new int[(n-1)];
		string[] b_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<(n-1);index++)
			b[index] = Convert.ToInt32(b_elements[index]);
		int[] c = new int[(n-2)];
		string[] c_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<(n-2);index++)
			c[index] = Convert.ToInt32(c_elements[index]);


		// write your code here
		// store your results in `errors_disappeared_after_first_correction`,`errors_disappeared_after_second_correction`

		// output
		// Dummy Data
		int errors_disappeared_after_first_correction=8;
		int errors_disappeared_after_second_correction=123;

		Console.WriteLine(errors_disappeared_after_first_correction);
		Console.WriteLine(errors_disappeared_after_second_correction);

		}	
	}
}