// Name : Junior Broker
using System;
namespace Application {
	class junior_broker {
		public static void Main(string[] args) {
		// input:
		// n :  number of days
		// e :  amount of Euro Finn has on the first day
		// a :  the currency rate of Dollar to Euro on day i
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int e = Convert.ToInt32(elements[1]);
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=8;

		Console.WriteLine(result);

		}	
	}
}