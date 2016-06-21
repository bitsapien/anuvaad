// Name : Greedy Man
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : the number of devices that will fit into
		// m : e number of smartphones available for sale
		// a : price of a smartphones
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		int[] a = new int[m];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<m;index++)
			a[index] = Integer.parseInt(a_elements[index]);


		// write your code here
		// store your results in `maximum_sum_of_money`

		// output
		// Dummy Data
		int maximum_sum_of_money=8;

				System.out.println(maximum_sum_of_money);

	}
}