// Name : Changing Root of tree
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// n :  the amount of nodes in the tree
		// r1 : index of the old root
		// r2 : e index of the new one
		// old_tree :  old representation of the tree
		int index;
		Scanner in = new Scanner(System.in);
		String[] elements = (in.nextLine()).split(" ");
		int n = Integer.parseInt(elements[0]);
		int r1 = Integer.parseInt(elements[1]);
		int r2 = Integer.parseInt(elements[2]);
		int[] old_tree = new int[(n-1)];
		String[] old_tree_elements = (in.nextLine()).split(" ");
		for(index=0;index<(n-1);index++)
			old_tree[index] = Integer.parseInt(old_tree_elements[index]);


		// write your code here
		// store your results in `new_tree`

		// output
		// Dummy Data
		intnew_tree[] = new int[] {2,3};

		System.out.println(join_string(Arrays.toString(new_tree)));

	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}