// Name : A Bag
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of toolkits
		// volume_of_each_toolkit : volume of each toolkit
		int index;
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
		int[] volume_of_each_toolkit = new int[n];
		String[] volume_of_each_toolkit_elements = (in.nextLine()).split(" ");
		for(index=0;index<n;index++)
			volume_of_each_toolkit[index] = Integer.parseInt(volume_of_each_toolkit_elements[index]);


		// write your code here
		// store your results in `minimum_number_of_bags`

		// output
		// Dummy Data
		int minimum_number_of_bags=4;

		System.out.println(minimum_number_of_bags);

	}
}