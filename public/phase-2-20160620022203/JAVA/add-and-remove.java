// Name : Add and Remove
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : size of array
		// a : source array
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);


		// write your code here
		// store your results in `maximum_number_of_equal_elements`

		// output
		// Dummy Data
		int maximum_number_of_equal_elements=1;

		System.out.println(maximum_number_of_equal_elements);

	}
}