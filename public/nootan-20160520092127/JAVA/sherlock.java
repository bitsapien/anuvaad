// Name : Sherlock
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : size
		// m : size
		// map : ratio
		int idx, jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		char[][] map = new char[][];
		String map_elements = "";
		for(idx=0;idx<n;idx++){
			map_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<m;jdx++){
				map[idx][jdx] = map_elements[jdx];
			}
		}

		// write your code here
		// store your results in `row`,`column`

		// output
				System.out.println(row+" "+column);

	}
}