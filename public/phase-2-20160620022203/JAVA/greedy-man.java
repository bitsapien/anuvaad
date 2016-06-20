// Name : Greedy Man
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// m : number of devices
		// n : number of phones
		// phones : smart phones
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int m = Integer.parseInt(elements[0]);
		int n = Integer.parseInt(elements[1]);
		int[] phones = new int[m];
		String[] phones_elements = (in.nextLine()).split(" ");
		for(index=0;index<m;index++)
			phones[index] = Integer.parseInt(phones_elements[index]);


		// write your code here
		// store your results in `max`

		// output
		// Dummy Data
		int max=8;

				System.out.println(max);

	}
}