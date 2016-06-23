// Name : Coders
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  number of developers
		// m :  number of lines of
		// b :  maximum possible number of errors
		// mod : the module you need to use to get the
		// a :  the number of errors that each
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		int b = Integer.parseInt(elements[2]);
		int mod = Integer.parseInt(elements[3]);
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=10;

		System.out.println(result);

	}
}