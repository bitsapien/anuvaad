// Name : Trains
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n : number of cities
		// m : number of  roads connecting the cities
		// k : number of railways
		// uvx : uvx corresponds to ui vi xi
		// sy : uvx corresponds to si yi
		int idx, jdx;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int m = Integer.parseInt(elements[1]);
		int k = Integer.parseInt(elements[2]);
		int[][] uvx = new int[m][3];
		String[] uvx_elements = new String[100];
		for(idx=0;idx<m;idx++){
			uvx_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<3;jdx++){
				uvx[idx][jdx] = Integer.parseInt(uvx_elements[jdx]);
			}
		}
		int[][] sy = new int[k][2];
		String[] sy_elements = new String[100];
		for(idx=0;idx<k;idx++){
			sy_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				sy[idx][jdx] = Integer.parseInt(sy_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `result`

		// output
		// Dummy Data
		int result=2;

		System.out.println(result);

	}
}