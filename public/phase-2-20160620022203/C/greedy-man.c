// Name : Greedy Man
#include <stdio.h>
int main() {
	// input:
	// n :  the number of devices that will fit into
	// m :  the number of smartphones available for sale
	// a : 
	int n, m, a[1000], result=8, index;
	scanf("%d %d", &n, &m);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}