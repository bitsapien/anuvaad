// Name : Walter Junior
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// a :  number of blue substances that Walter has
		// b :  number of purple substances that Walter has
		// c :  number of orange substances that Walter has
		// x :  number of blue substances that Walter needs to get
		// y :  number of purple substances that Walter needs to get
		// z :  number of orange substances that Walter needs to get
				Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int a = Integer.parseInt(elements[0]);
		int b = Integer.parseInt(elements[1]);
		int c = Integer.parseInt(elements[2]);
		String[] elements = (in.nextLine()).split(" ");
		int x = Integer.parseInt(elements[0]);
		int y = Integer.parseInt(elements[1]);
		int z = Integer.parseInt(elements[2]);


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		String result="YES";

		System.out.println(result);

	}
}