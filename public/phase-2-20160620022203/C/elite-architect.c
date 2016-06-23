// Name : Elite Architect
#include <stdio.h>
int main() {
	// input:
	// n : the number of Buildings in the capital of Nippon
	// h :  number of stories in each building
	int n, h[10000], a[10000]={3,2,0,2,0}, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &h[index]);
	}


	// write your code here
	// store your results in `a`

	// output
	for(index = 0; index< n; index++) {
		printf("%d ",a[index]);
	}
	return 0;
}