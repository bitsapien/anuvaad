// Name : Best Friends
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : the number of Dima's friends
		// fingers :  the number of fingers Dima's friends will show during the counting game
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] fingers = new int[n];
		String[] fingers_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			fingers[index] = Integer.parseInt(fingers_elements[index]);


		// write your code here
		// store your results in `answer`

		// output
		// Dummy Data
		int answer=3;

		System.out.println(answer);

	}
}