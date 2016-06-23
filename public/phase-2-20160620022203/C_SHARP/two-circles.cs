// Name : Two Circles
using System;
namespace Application {
	class two_circles {
		public static void Main(string[] args) {
		// input:
		// n :  the number of points
		// x1 : coordinates of first circle
		// y1 : coordinates of first circle
		// x2 : coordinates of second circle
		// y2 :  coordinates of second circle
		// xy :  each row contains integers xi and yi
		int idx;
		int jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int x1 = Convert.ToInt32(elements[1]);
		int y1 = Convert.ToInt32(elements[2]);
		int x2 = Convert.ToInt32(elements[3]);
		int y2 = Convert.ToInt32(elements[4]);
		int[,] xy = new int[n,2];
		string[] xy_elements = new string[100];
		for(idx=0;idx<n;idx++){
			xy_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				xy[idx,jdx] = Convert.ToInt32(xy_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `minimum_value`

		// output
		// Dummy Data
		int minimum_value=6;

		Console.WriteLine(minimum_value);

		}	
	}
}