// Name : Big Chessboard
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// x0 : start point
		// y0 : start point
		// x1 : destination point
		// y1 : destination point
		// n : number of segments of the permitted cells
		// rab : each row of rab corresponds to ri ai bi
		int idx, jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int x0 = Integer.parseInt(elements[0]);
		int y0 = Integer.parseInt(elements[1]);
		int x1 = Integer.parseInt(elements[2]);
		int y1 = Integer.parseInt(elements[3]);
		int n = Integer.parseInt(in.nextLine());
		int[][] rab = new int[n][3];
		String[] rab_elements = new String[100];
		for(idx=0;idx<n;idx++){
			rab_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<3;jdx++){
				rab[idx][jdx] = Integer.parseInt(rab_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `minimum_moves`

		// output
		// Dummy Data
		int minimum_moves=4;

		System.out.println(minimum_moves);

	}
}