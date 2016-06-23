// Name : Another Game of Life
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the size of the map
		// m :  the number of populations that want to
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);


		// write your code here
		// store your results in `exists`,`territory`

		// output
		// Dummy Data
		String exists="NO";
		char[][] territory[100][100]= new char[][] {{''}};

		System.out.println(exists);
		if(exists=="YES"){
			for(idx=0;idx<n;idx++){
				System.out.println(join_string(Arrays.toString(territory[idx])));
			}
		}
	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}