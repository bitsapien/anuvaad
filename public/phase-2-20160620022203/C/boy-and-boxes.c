// Name : Boy and Boxes
#include <stdio.h>
int main() {
	// input:
	// n :  the number of boxes
	// x : number of the
	// a :  number of balls in each box
	int n, x, a[10000], result[10000]={3,2,5,4}, index;
	scanf("%d %d", &n, &x);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	for(index = 0; index< n; index++) {
		printf("%d ",result[index]);
	}
	return 0;
}