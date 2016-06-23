// Name : Colored Balls
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// k :  the number of colors
		// c :  the number of balls of each color 
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		int k = Integer.parseInt(in.nextLine());
		int[][] c = new int[k][1];
		String[] c_elements = new String[100];
		for(idx=0;idx<k;idx++){
			c_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<1;jdx++){
				c[idx][jdx] = Integer.parseInt(c_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=3;

		System.out.println(result);

	}
}