// Name : Factorial game
using System;
namespace Application {
	class factorialgame {
		public static void Main(string[] args) {
		// input:
		// t :  the number of games the soldiers play
		// ab :  each row containing a pair of integers a and b defining the value of n for each game
		int idx;
		int jdx;
		int t = Convert.ToInt32(Console.ReadLine());
		int[,] ab = new int[t,2];
		string[] ab_elements = new string[100];
		for(idx=0;idx<t;idx++){
			ab_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				ab[idx,jdx] = Convert.ToInt32(ab_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `max_score_for_soldiers`

		// output
		// Dummy Data
		int[][] max_score_for_soldiers= new int[][] {{2},{5}};

for(idx=0;idx<t;idx++){
			Console.WriteLine(string.Join(" ", max_score_for_soldiers[idx]));
		}
		}	
	}
}