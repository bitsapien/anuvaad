// Name : Forgotten Password
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the number of digits in the password 
		// m :  the number of
		// sc : each row contains si ci
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		String[][] sc = new String[m][2];
		String[] sc_elements = new String[100];
		for(idx=0;idx<m;idx++){
			sc_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				sc[idx][jdx] = sc_elements[jdx];
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=6;

		System.out.println(result);

	}
}