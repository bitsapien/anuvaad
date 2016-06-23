// Name : Square
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// k :  count of cases
		// an : integers a and n in every row
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		int k = Integer.parseInt(in.nextLine());
		int[][] an = new int[k][2];
		String[] an_elements = new String[100];
		for(idx=0;idx<k;idx++){
			an_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				an[idx][jdx] = Integer.parseInt(an_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `roots`

		// output
		// Dummy Data
		String roots="No root";

		System.out.println(roots);

	}
}