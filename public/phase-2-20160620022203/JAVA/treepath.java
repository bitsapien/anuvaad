// Name : Treepath
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the number of vertices
		// m :  edges of the graph
		// uvw : each row has the  numbers of the
		// u :  the number of the starting vertex
		int idx;
		int jdx;
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		int[][] uvw = new int[m][3];
		String[] uvw_elements = new String[100];
		for(idx=0;idx<m;idx++){
			uvw_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<3;jdx++){
				uvw[idx][jdx] = Integer.parseInt(uvw_elements[jdx]);
			}
		}
		int u = Integer.parseInt(in.nextLine());


		// write your code here
		// store your results in `minimal_total_weight`,`indices_of_edges`

		// output
		// Dummy Data
		int minimal_total_weight=2;
		intindices_of_edges[] = new int[] {1,2};

		System.out.println(minimal_total_weight);
		System.out.println(join_string(Arrays.toString(indices_of_edges)));

	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}