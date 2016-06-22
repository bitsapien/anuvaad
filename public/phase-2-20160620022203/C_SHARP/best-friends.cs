// Name : Best Friends
using System;
namespace Application {
	class best_friends {
		public static void Main(string[] args) {
		// input:
		// n : the number of Dima's friends
		// fingers :  the number of fingers Dima's friends will show during the counting game
		int index;
		int n = Convert.ToInt32(Console.ReadLine());
		int[] fingers = new int[n];
		string[] fingers_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<n;index++)
			fingers[index] = Convert.ToInt32(fingers_elements[index]);


		// write your code here
		// store your results in `answer`

		// output
		// Dummy Data
		int answer=3;

		Console.WriteLine(answer);

		}	
	}
}