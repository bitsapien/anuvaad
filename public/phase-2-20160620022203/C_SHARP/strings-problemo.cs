// Name : Strings Problemo
using System;
namespace Application {
	class strings_problemo {
		public static void Main(string[] args) {
		// input:
		// s : latin characters
		// t : latin characters
		// n : the number of possible replacements
		// abw : each row corresponds to a b w for each possible replacement
		int idx;
		int jdx;
		string s = Console.ReadLine();
		string t = Console.ReadLine();
		int n = Convert.ToInt32(Console.ReadLine());
		char[,] abw = new char[n,3];
		string[] abw_elements = new string[100];
		for(idx=0;idx<n;idx++){
			abw_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<3;jdx++){
				abw[idx,jdx] = abw_elements[jdx];
			}
		}


		// write your code here
		// store your results in `answer`,`resulting_string`

		// output
		// Dummy Data
		int answer=21;
		string resulting_string="uxyd";

		Console.WriteLine(answer);
		Console.WriteLine(resulting_string);

		}	
	}
}