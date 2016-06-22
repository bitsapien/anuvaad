// Name : Quiz
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of consecutive questions
		// m : number of questions to which right answer was given
		// k : count threshold
				Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		int k = Integer.parseInt(elements[2]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=3;

		System.out.println(result);

	}
}