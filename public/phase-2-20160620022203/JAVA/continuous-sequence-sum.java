// Name : Continuous Sequence Sum
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : length of sequence
		// a : sequence
		// t : sum
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);
		int t = Integer.parseInt(in.nextLine());


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		String result="True";

		System.out.println(result);

	}
}