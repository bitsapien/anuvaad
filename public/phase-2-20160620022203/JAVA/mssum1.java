// Name : MSSUM1
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the number of elements in the array
		// q :  the number of queries correspondingly
		// a :  the array elements
		// lr : each row corresponds to l and r
		int index;
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int q = Integer.parseInt(elements[1]);
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);
		int[][] lr = new int[q][2];
		String[] lr_elements = new String[100];
		for(idx=0;idx<q;idx++){
			lr_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				lr[idx][jdx] = Integer.parseInt(lr_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `sum_of_replies`

		// output
		// Dummy Data
		int sum_of_replies=25;

		System.out.println(sum_of_replies);

	}
}