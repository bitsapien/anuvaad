// Name : Arrays Minmax
#include <stdio.h>
int main() {
	// input:
	// n : size of a
	// m : size of b
	// a : array A
	// b : array B
	int n, m, a[10000], b[10000], minimum_num_of_operations=3, index, index;
	scanf("%d %d", &n, &m);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}
	for(index = 0; index< m; index++) {
		scanf("%d", &b[index]);
	}


	// write your code here
	// store your results in `minimum_num_of_operations`

	// output
	printf("%d", minimum_num_of_operations);
	return 0;
}