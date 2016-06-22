// Name : Max Even Sum 
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of integers
		// given_integers : given integers
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] given_integers = new int[n];
		String[] given_integers_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			given_integers[index] = Integer.parseInt(given_integers_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=6;

		System.out.println(result);

	}
}