// Name : A Bag
using System;
namespace Application {
	class a_bag {
		public static void Main(string[] args) {
		// input:
		// n : number of toolkits
		// volume_of_each_toolkit : volume of each toolkit
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] volume_of_each_toolkit = new int[n];
		string[] volume_of_each_toolkit_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			volume_of_each_toolkit[index] = Convert.ToInt32(volume_of_each_toolkit_elements[index]);


		// write your code here
		// store your results in `minimum_number_of_bags`

		// output
		// Dummy Data
		int minimum_number_of_bags=4;

		Console.WriteLine(minimum_number_of_bags);

		}	
	}
}