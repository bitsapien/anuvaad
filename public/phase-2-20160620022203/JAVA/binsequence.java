// Name : BinSequence
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : length
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());


		// write your code here
		// store your results in `sequence`

		// output
		// Dummy Data
		int sequence[] = new int [] {0,1};

		System.out.println(join_string(Arrays.toString(sequence)));

	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}