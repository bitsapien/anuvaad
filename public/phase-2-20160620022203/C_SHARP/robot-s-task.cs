// Name : Robot's Task
using System;
namespace Application {
	class robot's_task {
		public static void Main(string[] args) {
		// input:
		// n : number of non negative integers
		// a : integers
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `changes`

		// output
		// Dummy Data
		int changes=1;

		Console.WriteLine(changes);

		}	
	}
}