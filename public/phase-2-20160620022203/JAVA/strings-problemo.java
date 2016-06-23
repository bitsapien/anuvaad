// Name : Strings Problemo
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// s : latin characters
		// t : latin characters
		// n : the number of possible replacements
		// abw : each row corresponds to a b w for each possible replacement
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		String t = in.nextLine();
		int n = Integer.parseInt(in.nextLine());
		char[][] abw = new char[n][3];
		String[] abw_elements = new String[100];
		for(idx=0;idx<n;idx++){
			abw_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<3;jdx++){
				abw[idx][jdx] = abw_elements[jdx];
			}
		}


		// write your code here
		// store your results in `answer`,`resulting_string`

		// output
		// Dummy Data
		int answer=21;
		String resulting_string="uxyd";

		System.out.println(answer);
		System.out.println(resulting_string);

	}
}