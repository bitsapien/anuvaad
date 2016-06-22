// Name : Big Chessboard
using System;
namespace Application {
	class big_chessboard {
		public static void Main(string[] args) {
		// input:
		// x0 : start point
		// y0 : start point
		// x1 : destination point
		// y1 : destination point
		// n : number of segments of the permitted cells
		// rab : each row of rab corresponds to ri ai bi
		int idx, jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int x0 = Convert.ToInt32(elements[0]);
		int y0 = Convert.ToInt32(elements[1]);
		int x1 = Convert.ToInt32(elements[2]);
		int y1 = Convert.ToInt32(elements[3]);
		int n = Convert.ToInt32(Console.ReadLine());
		int[,] rab = new int[n,3];
		string[] rab_elements = new string[100];
		for(idx=0;idx<n;idx++){
			rab_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<3;jdx++){
				rab[idx,jdx] = Convert.ToInt32(rab_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `minimum_moves`

		// output
		// Dummy Data
		int minimum_moves=4;

		Console.WriteLine(minimum_moves);

		}	
	}
}