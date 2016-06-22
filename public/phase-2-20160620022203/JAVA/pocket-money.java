// Name : Pocket money
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : the number of exams
		// r :  the maximum score
		// avg : average score required to double his pocket money
		// ab : ab corresponds to ai bi
		int idx, jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int r = Integer.parseInt(elements[1]);
		int avg = Integer.parseInt(elements[2]);
		int[][] ab = new int[n][2];
		String[] ab_elements = new String[100];
		for(idx=0;idx<n;idx++){
			ab_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				ab[idx][jdx] = Integer.parseInt(ab_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=4;

		System.out.println(result);

	}
}