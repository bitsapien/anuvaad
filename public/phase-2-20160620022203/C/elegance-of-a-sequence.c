// Name : Elegance of a Sequence
#include <stdio.h>
int main() {
	// input:
	// n : length of sequence of a
	// a : sequence a
	int n, a[105], k=2, b[105]={4,5}, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `k`,`b`

	// output
	printf("%d\n", k);
	for(index = 0; index< k; index++) {
		printf("%d ",b[index]);
	}
	return 0;
}