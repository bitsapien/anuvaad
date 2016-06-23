// Name : Changing Root of tree
using System;
namespace Application {
	class changing_rootoftree {
		public static void Main(string[] args) {
		// input:
		// n :  the amount of nodes in the tree
		// r1 : index of the old root
		// r2 : e index of the new one
		// old_tree :  old representation of the tree
		int index;
		string[] elements = (Console.ReadLine()).Split(' ');
		int n = Convert.ToInt32(elements[0]);
		int r1 = Convert.ToInt32(elements[1]);
		int r2 = Convert.ToInt32(elements[2]);
		int[] old_tree = new int[(n-1)];
		string[] old_tree_elements = (Console.ReadLine()).Split(' ');
		for(index=0;index<(n-1);index++)
			old_tree[index] = Convert.ToInt32(old_tree_elements[index]);


		// write your code here
		// store your results in `new_tree`

		// output
		// Dummy Data
		int[] new_tree = new int[] {2,3};

		Console.WriteLine(string.Join(" ", new_tree));
		}	
	}
}