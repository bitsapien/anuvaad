// Name : Inmates
using System;
namespace Application {
	class inmates {
		public static void Main(string[] args) {
		// input:
		// n : number of prisoners
		// t : crime threshold
		// c : selected inmates
		// severity :  severity of the crime committed by each inmate
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int t = Convert.ToInt32(elements[1]);
		int c = Convert.ToInt32(elements[2]);
		int[] severity = new int[n];
		string[] severity_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			severity[index] = Convert.ToInt32(severity_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=2;

		Console.WriteLine(result);

		}	
	}
}