// Name : Apples
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the amount of apples
		// w :  the weight of each apple
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] w = new int[n];
		String[] w_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			w[index] = Integer.parseInt(w_elements[index]);


		// write your code here
		// store your results in `possibility`

		// output
		// Dummy Data
		String possibility="YES";

		System.out.println(possibility);

	}
}