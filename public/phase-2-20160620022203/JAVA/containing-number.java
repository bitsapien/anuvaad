// Name : Containing Number
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : count of the following numbers
		// k : k
		// numbers_to_check : 
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int k = Integer.parseInt(elements[1]);
		int[][] numbers_to_check = new int[n][1];
		String[] numbers_to_check_elements = new String[100];
		for(idx=0;idx<n;idx++){
			numbers_to_check_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<1;jdx++){
				numbers_to_check[idx][jdx] = Integer.parseInt(numbers_to_check_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=2;

		System.out.println(result);

	}
}