// Name : Array Disctances
#include <stdio.h>
int main() {
	// input:
	// n :  the number of elements in the set
	// x : elements of the set
	int n, x[100000], result[100000][2], index, idx, jdx;
	char tmp[2];
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &x[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	for(idx = 0; idx< n; idx++) {
		for(jdx = 0;jdx<2;jdx++) {
			printf("%d ",result[idx][jdx]);
		}
		printf("\n");
	}
	return 0;
}