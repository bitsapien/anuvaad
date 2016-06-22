// Name : Bookshelf
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of books
		// m : number of books remaining in the first shelf
				Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);


		// write your code here
		// store your results in `number_of_methods`

		// output
		// Dummy Data
		int number_of_methods=4;

		System.out.println(number_of_methods);

	}
}