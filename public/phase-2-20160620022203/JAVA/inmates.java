// Name : Inmates
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of prisoners
		// t : crime threshold
		// c : selected inmates
		// severity :  severity of the crime committed by each inmate
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int t = Integer.parseInt(elements[1]);
		int c = Integer.parseInt(elements[2]);
		int[] severity = new int[n];
		String[] severity_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			severity[index] = Integer.parseInt(severity_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=2;

		System.out.println(result);

	}
}