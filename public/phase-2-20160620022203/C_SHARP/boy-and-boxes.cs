// Name : Boy and Boxes
using System;
namespace Application {
	class boyand_boxes {
		public static void Main(string[] args) {
		// input:
		// n :  the number of boxes
		// x : number of the
		// a :  number of balls in each box
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int x = Convert.ToInt32(elements[1]);
		int[] a = new int[n];
		string[] a_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			a[index] = Convert.ToInt32(a_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int[] result = new int[n] {3,2,5,4};

		Console.WriteLine(string.Join(" ", result));
		}	
	}
}