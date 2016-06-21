// Name : Add and Remove
#include <stdio.h>
int main() {
	// input:
	// n : the size of the array
	// a : source of array
	int n, a[10000], result=1, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}