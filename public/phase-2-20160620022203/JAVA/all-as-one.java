// Name : All as One
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : size of array
		// a : array of integers
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);


		// write your code here
		// store your results in `min_amt_of_changes`

		// output
		// Dummy Data
		int min_amt_of_changes=5;

		System.out.println(min_amt_of_changes);

	}
}