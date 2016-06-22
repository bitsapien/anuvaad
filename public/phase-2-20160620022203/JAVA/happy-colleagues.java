// Name : Happy Colleagues
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// r :  the number of candies of red
		// g :  the number of candies of green
		// b :  the number of candies of blue
				Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int r = Integer.parseInt(elements[0]);
		int g = Integer.parseInt(elements[1]);
		int b = Integer.parseInt(elements[2]);


		// write your code here
		// store your results in `number_of_colleagues`

		// output
		// Dummy Data
		int number_of_colleagues=4;

		System.out.println(number_of_colleagues);

	}
}