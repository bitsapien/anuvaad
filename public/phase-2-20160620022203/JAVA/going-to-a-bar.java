// Name : Going to a Bar
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the number of streets in Berlin
		// m : the number of avenues in Berlin
		// a :  the cost of spending a night in a bar at the intersection of street N and avenue M
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		int[][] a = new int[n][m];
		String[] a_elements = new String[100];
		for(idx=0;idx<n;idx++){
			a_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<m;jdx++){
				a[idx][jdx] = Integer.parseInt(a_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `cost`

		// output
		// Dummy Data
		int cost=2;

		System.out.println(cost);

	}
}