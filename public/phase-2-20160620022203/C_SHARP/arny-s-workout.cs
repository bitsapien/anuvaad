// Name : Arny’s Workout
using System;
namespace Application {
	class arny’s_workout {
		public static void Main(string[] args) {
		// input:
		// n :  the number of exercises
		// a :  the number of repeats for the exercises
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		string result="chest";

		Console.WriteLine(result);

		}	
	}
}