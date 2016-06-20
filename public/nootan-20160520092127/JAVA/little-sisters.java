// Name : Little Sisters
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// a : size
		// b : size
		// x : ratio
		// y : ratio
				Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int a = Integer.parseInt(elements[0]);
		int b = Integer.parseInt(elements[1]);
		int x = Integer.parseInt(elements[2]);
		int y = Integer.parseInt(elements[3]);


		// write your code here
		// store your results in `new_size_x`,`new_size_y`

		// output
				System.out.println(new_size_x+" "+new_size_y);

	}
}