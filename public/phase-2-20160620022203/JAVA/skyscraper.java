// Name : Skyscraper
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of skyscrapers
		// k : number of stories to move
		// h : each row has height of each skyscraper
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int k = Integer.parseInt(elements[1]);
		int[] h = new int[n];
		String[] h_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			h[index] = Integer.parseInt(h_elements[index]);


		// write your code here
		// store your results in `j`

		// output
		// Dummy Data
		int j=3;

		System.out.println(j);

	}
}