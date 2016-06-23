// Name : Equality
#include <stdio.h>
int main() {
	// input:
	// n :  the amount of array elements
	// m : array elements
	int n, m[10000], result=3, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &m[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}