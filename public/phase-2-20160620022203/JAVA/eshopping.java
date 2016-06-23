// Name : EShopping
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  number of phone models' descriptions in the shop
		// description :  zero stands for an unread description one for a read description
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] description = new int[n];
		String[] description_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			description[index] = Integer.parseInt(description_elements[index]);


		// write your code here
		// store your results in `clicks`

		// output
		// Dummy Data
		int clicks=9;

		System.out.println(clicks);

	}
}