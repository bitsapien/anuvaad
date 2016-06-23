// Name : Two Piles of Balls
#include <stdio.h>
int main() {
	// input:
	// n : number of balls in a pile
	// a : 
	int n, a[100], result=1, b[100]={2,1}, index;
	scanf("%d", &n);
	for(index = 0; index< 2n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `result`,`b`

	// output
	printf("%d", result);
	for(index = 0; index< (2*n); index++) {
		printf("%d ",b[index]);
	}
	return 0;
}