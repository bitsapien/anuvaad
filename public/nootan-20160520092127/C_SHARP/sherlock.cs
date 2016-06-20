// Name : Sherlock
using System;
namespace Application {
	class sherlock {
		public static void Main(string[] args) {
			// input:
			// n : size
			// m : size
			// map : ratio
			int idx, jdx;
					string[] elements = (Console.ReadLine()).Split(" ");
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		char[][] map = new char[][];
		string map_elements = "";
		for(idx=0;idx<n;idx++){
			map_elements = (Console.ReadLine()).Split(" ");
			for(jdx=0;jdx<m;jdx++){
				map[idx][jdx] = map_elements[jdx];
			}
		}

			// write your code here
			// store your results in `row`,`column`

			// output
					Console.WriteLine(row+" "+column);

	}	
	}}