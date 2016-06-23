// Name : Fabulous Sum
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// t :  the amount of numbers for which you need to calculate the requested sum
		// n : 
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		int t = Integer.parseInt(in.nextLine());
		int[][] n = new int[t][1];
		String[] n_elements = new String[100];
		for(idx=0;idx<t;idx++){
			n_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<1;jdx++){
				n[idx][jdx] = Integer.parseInt(n_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `sum`

		// output
		// Dummy Data
		int[][] sum[100][1]= new int[][] {{-4},{499999998352516354}};

for(idx=0;idx<t;idx++){
			System.out.println(join_string(Arrays.toString(sum[idx])));
		}
	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}