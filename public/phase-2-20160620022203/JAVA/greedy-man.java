// Name : Greedy Man
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// m : 
		// n : 
		// mn : 
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int m = Integer.parseInt(elements[0]);
		int n = Integer.parseInt(elements[1]);
		int[] mn = new int[m];
		String[] mn_elements = (in.nextLine()).split(" ");
		for(index=0;index<m;index++)
			mn[index] = Integer.parseInt(mn_elements[index]);


		// write your code here
		// store your results in `ouput`

		// output
		// Dummy Data
		int ouput=8;

		System.out.println(ouput);

	}
}