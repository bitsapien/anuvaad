// Name : Pony Sequence
#include <stdio.h>
int main() {
	// input:
	// n : number of elements in the sequences in a and b
	// a : sequence a
	int n, a[100], b[100]={1,1,1,1,1}, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `b`

	// output
	for(index = 0; index< n; index++) {
		printf("%d ",b[index]);
	}
	return 0;
}