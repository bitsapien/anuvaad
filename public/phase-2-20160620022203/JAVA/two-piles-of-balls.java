// Name : Two Piles of Balls
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of balls in a pile
		// a : 
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] a = new int[2n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<2n;index++)
			a[index] = Integer.parseInt(a_elements[index]);


		// write your code here
		// store your results in `result`,`b`

		// output
		// Dummy Data
		int result=1;
		intb[] = new int[] {2,1};

		System.out.println(result);
		System.out.println(join_string(Arrays.toString(b)));

	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}