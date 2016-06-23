// Name : Sort
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of subjects
		// m : the number of limitations
		// su : pairs si ui which describe the order of subjects
		// sequence : 
		int idx;
		int jdx;
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		int[][] su = new int[m][2];
		String[] su_elements = new String[100];
		for(idx=0;idx<m;idx++){
			su_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				su[idx][jdx] = Integer.parseInt(su_elements[jdx]);
			}
		}
		int[] sequence = new int[n];
		String[] sequence_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			sequence[index] = Integer.parseInt(sequence_elements[index]);


		// write your code here
		// store your results in `correct`

		// output
		// Dummy Data
		String correct="YES";

		System.out.println(correct);

	}
}