// Name : Snowflakes
using System;
namespace Application {
	class snowflakes {
		public static void Main(string[] args) {
		// input:
		// n : length of array
		// k : number of  letters of the English alphabet
		// english_letters :  contains n uppercase English letters
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int k = Convert.ToInt32(elements[1]);
		string english_letters = Console.ReadLine();


		// write your code here
		// store your results in `min_number_of_changes`,`changed_array`

		// output
		// Dummy Data
		int min_number_of_changes=2;
		string changed_array="ABCACA";

		Console.WriteLine(min_number_of_changes);
		Console.WriteLine(changed_array);

		}	
	}
}