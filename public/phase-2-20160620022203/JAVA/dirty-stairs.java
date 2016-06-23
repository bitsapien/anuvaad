// Name : Dirty Stairs
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  number of steps in the staircase
		// m : number of dirty steps
		// d :  numbers of dirty steps 
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		int[] d = new int[m];
		String[] d_elements = (in.nextLine()).split(" ");
		for(index=0;index<m;index++)
			d[index] = Integer.parseInt(d_elements[index]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		String result="YES";

		System.out.println(result);

	}
}