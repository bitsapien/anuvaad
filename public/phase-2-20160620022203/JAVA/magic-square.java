// Name : Magic Square
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// original_magic_square : original magic square
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		int[][] original_magic_square = new int[3][3];
		String[] original_magic_square_elements = new String[100];
		for(idx=0;idx<3;idx++){
			original_magic_square_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<3;jdx++){
				original_magic_square[idx][jdx] = Integer.parseInt(original_magic_square_elements[jdx]);
			}
		}


		// write your code here
		// store your results in `repaired_magic_square`

		// output
		// Dummy Data
		int[][] repaired_magic_square[3][3]= new int[][] {{4,4,4},{4,4,4},{4,4,4}};

for(idx=0;idx<3;idx++){
			System.out.println(join_string(Arrays.toString(repaired_magic_square[idx])));
		}
	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}