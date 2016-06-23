// Name : Apartment
using System;
namespace Application {
	class apartment {
		public static void Main(string[] args) {
		// input:
		// n :  the size of Shalkan’s apartment plan
		// m : the size of Shalkan’s apartment plan
		// nm :  the description of the apartment plan
		int idx;
		int jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		char[,] nm = new char[n,m];
		string[] nm_elements = new string[100];
		for(idx=0;idx<n;idx++){
			nm_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<m;jdx++){
				nm[idx,jdx] = nm_elements[jdx];
			}
		}


		// write your code here
		// store your results in `new_plan`

		// output
		// Dummy Data
		char[][] new_plan= new char[][] {{'.','*','.','*','.'},{'*','*','*','*','*'},{'.','*','.','*','.'},{'*','*','*','*','*'},{'.','*','.','*','.'}};

for(idx=0;idx<n;idx++){
			Console.WriteLine(string.Join(" ", new_plan[idx]));
		}
		}	
	}
}