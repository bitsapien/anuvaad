// Name : Changing Root of tree
#include <stdio.h>
int main() {
	// input:
	// n :  the amount of nodes in the tree
	// r1 : index of the old root
	// r2 : e index of the new one
	// old_tree :  old representation of the tree
	int n, r1, r2, old_tree[104], new_tree[104]={2,3}, index;
	scanf("%d %d %d", &n, &r1, &r2);
	for(index = 0; index< (n-1); index++) {
		scanf("%d", &old_tree[index]);
	}


	// write your code here
	// store your results in `new_tree`

	// output
	for(index = 0; index< (n-1); index++) {
		printf("%d ",new_tree[index]);
	}
	return 0;
}