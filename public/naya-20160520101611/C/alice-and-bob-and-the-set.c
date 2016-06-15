// Name : Alice and Bob and the Set
#include <stdio.h>
int main() {
	// input:
	// n :  the number of elements in the set
	// x : elements of the set
	int n, x[100000], result[2][100000], index, idx, jdx;
	char tmp[100000];
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &x[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	for(idx = 0; idx< 2; idx++) {
		for(jdx = 0;jdx<n;jdx++) {
			printf("%d ",result[idx][j]);
		}
		printf("
");	}
	return 0;
}