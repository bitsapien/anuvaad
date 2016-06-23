// Name : EShopping
using System;
namespace Application {
	class e_shopping {
		public static void Main(string[] args) {
		// input:
		// n :  number of phone models' descriptions in the shop
		// description :  zero stands for an unread description one for a read description
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] description = new int[n];
		string[] description_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			description[index] = Convert.ToInt32(description_elements[index]);


		// write your code here
		// store your results in `clicks`

		// output
		// Dummy Data
		int clicks=9;

		Console.WriteLine(clicks);

		}	
	}
}