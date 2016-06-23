// Name : Flowers Girls and Grandma
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the number of girls
		// p : Grandmas favourite prime number
		// lr : each row corresponds to the range of flowers that each girl can grow
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int p = Integer.parseInt(elements[1]);
		int[][] lr = new int[n][2];
		String[] lr_elements = new String[100];
		for(idx=0;idx<n;idx++){
			lr_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				lr[idx][jdx] = Integer.parseInt(lr_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		float result=0.0;

		System.out.println(result);

	}
}