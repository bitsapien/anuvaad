// Name : Arrays Minmax
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : size of a
		// m : size of b
		// a : array A
		// b : array B
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);
		int[] b = new int[m];
		String[] b_elements = (in.nextLine()).split(" ");
		for(index=0;index<m;index++)
			b[index] = Integer.parseInt(b_elements[index]);


		// write your code here
		// store your results in `minimum_num_of_operations`

		// output
		// Dummy Data
		int minimum_num_of_operations=3;

		System.out.println(minimum_num_of_operations);

	}
}