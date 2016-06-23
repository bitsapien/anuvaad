// Name : Apartment
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the size of Shalkan’s apartment plan
		// m : the size of Shalkan’s apartment plan
		// nm :  the description of the apartment plan
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		char[][] nm = new char[n][m];
		String[] nm_elements = new String[100];
		for(idx=0;idx<n;idx++){
			nm_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<m;jdx++){
				nm[idx][jdx] = nm_elements[jdx];
			}
		}


		// write your code here
		// store your results in `new_plan`

		// output
		// Dummy Data
		char[][] new_plan[2000][2000]= new char[][] {{'.','*','.','*','.'},{'*','*','*','*','*'},{'.','*','.','*','.'},{'*','*','*','*','*'},{'.','*','.','*','.'}};

for(idx=0;idx<n;idx++){
			System.out.println(join_string(Arrays.toString(new_plan[idx])));
		}
	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}