// Name : Alcohol Calculator
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n1 : alcohol percentage
		// m1 : volume in ml
		// n2 : alcohol percentage
		// m2 : volume in ml
				Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n1 = Integer.parseInt(elements[0]);
		float m1 = Float.parseFloat(elements[1]);
		String[] elements = (in.nextLine()).split(" ");
		int n2 = Integer.parseInt(elements[0]);
		float m2 = Float.parseFloat(elements[1]);


		// write your code here
		// store your results in `v`

		// output
		// Dummy Data
		String v="30%";

		System.out.println(v);

	}
}