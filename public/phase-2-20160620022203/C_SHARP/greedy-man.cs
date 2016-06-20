// Name : Greedy Man
using System;
namespace Application {
	class greedy_man {
		public static void Main(string[] args) {
		// input:
		// m : number of devices
		// n : number of phones
		// phones : smart phones
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int m = Convert.ToInt32(elements[0]);
		int n = Convert.ToInt32(elements[1]);
		int[] phones = new int[m];
		string[] phones_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<m;index++)
			phones[index] = Convert.ToInt32(phones_elements[index]);


		// write your code here
		// store your results in `max`

		// output
		// Dummy Data
		int max=8;

		Console.WriteLine(max);

		}	
	}
}