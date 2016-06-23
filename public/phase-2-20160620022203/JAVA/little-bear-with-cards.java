// Name : Little Bear With Cards
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the number of cards
		// description : 
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[][] description = new int[n][2];
		String[] description_elements = new String[100];
		for(idx=0;idx<n;idx++){
			description_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				description[idx][jdx] = Integer.parseInt(description_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `steps`

		// output
		// Dummy Data
		int steps=0;

		System.out.println(steps);

	}
}