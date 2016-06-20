// Name : Greedy Man
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of devices that will fit into steve
		// m : number of smartphones available for sale
		// price_of_smartphones : list of price of n smartphones
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		int[] price_of_smartphones = new int[n];
		String[] price_of_smartphones_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			price_of_smartphones[index] = Integer.parseInt(price_of_smartphones_elements[index]);


		// write your code here
		// store your results in `result`

		// output
				System.out.println(result);

	}
}