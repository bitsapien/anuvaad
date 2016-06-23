// Name : A and B and Compilation Errors
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the initial number of compilation errors
		// a : 
		// b : 
		// c : 
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);
		int[] b = new int[(n-1)];
		String[] b_elements = (in.nextLine()).split(" ");
		for(index=0;index<(n-1);index++)
			b[index] = Integer.parseInt(b_elements[index]);
		int[] c = new int[(n-2)];
		String[] c_elements = (in.nextLine()).split(" ");
		for(index=0;index<(n-2);index++)
			c[index] = Integer.parseInt(c_elements[index]);


		// write your code here
		// store your results in `errors_disappeared_after_first_correction`,`errors_disappeared_after_second_correction`

		// output
		// Dummy Data
		int errors_disappeared_after_first_correction=8;
		int errors_disappeared_after_second_correction=123;

		System.out.println(errors_disappeared_after_first_correction);
		System.out.println(errors_disappeared_after_second_correction);

	}
}