// Name : All as One
#include <stdio.h>
int main() {
	// input:
	// n : size of array
	// a : array of integers
	int n, a[100000], min_amt_of_changes=5, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `min_amt_of_changes`

	// output
	printf("%d", min_amt_of_changes);
	return 0;
}