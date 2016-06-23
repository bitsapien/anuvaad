// Name : Elite Architect
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : the number of Buildings in the capital of Nippon
		// h :  number of stories in each building
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] h = new int[n];
		String[] h_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			h[index] = Integer.parseInt(h_elements[index]);


		// write your code here
		// store your results in `a`

		// output
		// Dummy Data
		inta[] = new int[] {3,2,0,2,0};

		System.out.println(join_string(Arrays.toString(a)));

	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}