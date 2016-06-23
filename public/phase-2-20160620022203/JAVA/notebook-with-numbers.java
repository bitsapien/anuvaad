// Name : Notebook with Numbers 
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of sheets
		// k : 
		// a : 
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int k = Integer.parseInt(elements[1]);
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);


		// write your code here
		// store your results in `maximum_sum`,`r`

		// output
		// Dummy Data
		int maximum_sum=27;
		intr[] = new int[] {3,4,5,8};

		System.out.println(maximum_sum);
		System.out.println(join_string(Arrays.toString(r)));

	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}