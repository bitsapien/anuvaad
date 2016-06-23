// Name : Snowflakes
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : length of array
		// k : number of  letters of the English alphabet
		// english_letters :  contains n uppercase English letters
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int k = Integer.parseInt(elements[1]);
		String english_letters = in.nextLine();


		// write your code here
		// store your results in `min_number_of_changes`,`changed_array`

		// output
		// Dummy Data
		int min_number_of_changes=2;
		String changed_array="ABCACA";

		System.out.println(min_number_of_changes);
		System.out.println(changed_array);

	}
}