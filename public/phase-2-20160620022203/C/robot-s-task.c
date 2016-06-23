// Name : Robot's Task
#include <stdio.h>
int main() {
	// input:
	// n : number of non negative integers
	// a : integers
	int n, a[1000], changes=1, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `changes`

	// output
	printf("%d", changes);
	return 0;
}