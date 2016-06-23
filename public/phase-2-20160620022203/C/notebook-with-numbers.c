// Name : Notebook with Numbers 
#include <stdio.h>
int main() {
	// input:
	// n : number of sheets
	// k : 
	// a : 
	int n, k, a[300], maximum_sum=27, r[300]={3,4,5,8}, index;
	scanf("%d %d", &n, &k);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `maximum_sum`,`r`

	// output
	printf("%d", maximum_sum);
	for(index = 0; index< (k-1); index++) {
		printf("%d ",r[index]);
	}
	return 0;
}