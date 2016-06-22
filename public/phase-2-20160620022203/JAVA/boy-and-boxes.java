// Name : Boy and Boxes
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the number of boxes
		// x : number of the
		// a :  number of balls in each box
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int x = Integer.parseInt(elements[1]);
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result[] = new int [] {3,2,5,4};

		System.out.println(join_string(Arrays.toString(result)));

	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}