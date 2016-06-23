// Name : Magic Square
using System;
namespace Application {
	class magic_square {
		public static void Main(string[] args) {
		// input:
		// original_magic_square : original magic square
		int idx;
		int jdx;
		int[,] original_magic_square = new int[3,3];
		string[] original_magic_square_elements = new string[100];
		for(idx=0;idx<3;idx++){
			original_magic_square_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<3;jdx++){
				original_magic_square[idx,jdx] = Convert.ToInt32(original_magic_square_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `repaired_magic_square`

		// output
		// Dummy Data
		int[][] repaired_magic_square= new int[][] {{4,4,4},{4,4,4},{4,4,4}};

for(idx=0;idx<3;idx++){
			Console.WriteLine(string.Join(" ", repaired_magic_square[idx]));
		}
		}	
	}
}