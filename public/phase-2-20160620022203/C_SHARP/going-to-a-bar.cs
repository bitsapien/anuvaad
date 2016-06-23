// Name : Going to a Bar
using System;
namespace Application {
	class goingtoa_bar {
		public static void Main(string[] args) {
		// input:
		// n :  the number of streets in Berlin
		// m : the number of avenues in Berlin
		// a :  the cost of spending a night in a bar at the intersection of street N and avenue M
		int idx;
		int jdx;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int m = Convert.ToInt32(elements[1]);
		int[,] a = new int[n,m];
		string[] a_elements = new string[100];
		for(idx=0;idx<n;idx++){
			a_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<m;jdx++){
				a[idx,jdx] = Convert.ToInt32(a_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `cost`

		// output
		// Dummy Data
		int cost=2;

		Console.WriteLine(cost);

		}	
	}
}