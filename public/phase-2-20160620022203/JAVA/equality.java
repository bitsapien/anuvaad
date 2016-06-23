// Name : Equality
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the amount of array elements
		// m : array elements
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] m = new int[n];
		String[] m_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			m[index] = Integer.parseInt(m_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=3;

		System.out.println(result);

	}
}