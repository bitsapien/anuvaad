// Name : Junior Broker
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  number of days
		// e :  amount of Euro Finn has on the first day
		// a :  the currency rate of Dollar to Euro on day i
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int e = Integer.parseInt(elements[1]);
		int[] a = new int[n];
		String[] a_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			a[index] = Integer.parseInt(a_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=8;

		System.out.println(result);

	}
}