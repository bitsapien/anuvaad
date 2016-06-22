// Name : Box of Candies
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the number of boxes with candies James and Jessica have
		// a :  the number of candies in the every bag
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);


		// write your code here
		// store your results in `sought_number_of_ways`

		// output
		// Dummy Data
		int sought_number_of_ways=1;

		System.out.println(sought_number_of_ways);

	}
}