// Name : A and B and Compilation Errors
#include <stdio.h>
int main() {
	// input:
	// n :  the initial number of compilation errors
	// a : 
	// b : 
	// c : 
	int n, a[10000], b[10000], c[10000], errors_disappeared_after_first_correction=8, errors_disappeared_after_second_correction=123, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}
	for(index = 0; index< (n-1); index++) {
		scanf("%d", &b[index]);
	}
	for(index = 0; index< (n-2); index++) {
		scanf("%d", &c[index]);
	}


	// write your code here
	// store your results in `errors_disappeared_after_first_correction`,`errors_disappeared_after_second_correction`

	// output
	printf("%d", errors_disappeared_after_first_correction);
	printf("%d", errors_disappeared_after_second_correction);
	return 0;
}