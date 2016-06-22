// Name : Treepath
using System;
namespace Application {
	class treepath {
		public static void Main(string[] args) {
		// input:
		// n :  the number of vertices
		// m :  edges of the graph
		// uvw : each row has the  numbers of the
		// u :  the number of the starting vertex
		int idx;
		int jdx;
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		int[,] uvw = new int[m,3];
		string[] uvw_elements = new string[100];
		for(idx=0;idx<m;idx++){
			uvw_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<3;jdx++){
				uvw[idx,jdx] = Convert.ToInt32(uvw_elements[jdx]);
			}
		}
		int u = Convert.ToInt32(Console.ReadLine());


		// write your code here
		// store your results in `minimal_total_weight`,`indices_of_edges`

		// output
		// Dummy Data
		int minimal_total_weight=2;
		int[] indices_of_edges = new int[] {1,2};

		Console.WriteLine(minimal_total_weight);
		Console.WriteLine(string.Join(" ", indices_of_edges));
		}	
	}
}