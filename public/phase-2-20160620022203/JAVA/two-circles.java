// Name : Two Circles
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the number of points
		// x1 : coordinates of first circle
		// y1 : coordinates of first circle
		// x2 : coordinates of second circle
		// y2 :  coordinates of second circle
		// xy :  each row contains integers xi and yi
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int x1 = Integer.parseInt(elements[1]);
		int y1 = Integer.parseInt(elements[2]);
		int x2 = Integer.parseInt(elements[3]);
		int y2 = Integer.parseInt(elements[4]);
		int[][] xy = new int[n][2];
		String[] xy_elements = new String[100];
		for(idx=0;idx<n;idx++){
			xy_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				xy[idx][jdx] = Integer.parseInt(xy_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `minimum_value`

		// output
		// Dummy Data
		int minimum_value=6;

		System.out.println(minimum_value);

	}
}