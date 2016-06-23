// Name : Factorial game
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// t :  the number of games the soldiers play
		// ab :  each row containing a pair of integers a and b defining the value of n for each game
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		int t = Integer.parseInt(in.nextLine());
		int[][] ab = new int[t][2];
		String[] ab_elements = new String[100];
		for(idx=0;idx<t;idx++){
			ab_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				ab[idx][jdx] = Integer.parseInt(ab_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `max_score_for_soldiers`

		// output
		// Dummy Data
		int[][] max_score_for_soldiers[100000][1]= new int[][] {{2},{5}};

for(idx=0;idx<t;idx++){
			System.out.println(join_string(Arrays.toString(max_score_for_soldiers[idx])));
		}
	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}