// Name : Equality
using System;
namespace Application {
	class equality {
		public static void Main(string[] args) {
		// input:
		// n :  the amount of array elements
		// m : array elements
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] m = new int[n];
		string[] m_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			m[index] = Convert.ToInt32(m_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=3;

		Console.WriteLine(result);

		}	
	}
}