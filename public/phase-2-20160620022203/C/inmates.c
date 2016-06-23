// Name : Inmates
#include <stdio.h>
int main() {
	// input:
	// n : number of prisoners
	// t : crime threshold
	// c : selected inmates
	// severity :  severity of the crime committed by each inmate
	int n, t, c, severity[10000], result=2, index;
	scanf("%d %d %d", &n, &t, &c);
	for(index = 0; index< n; index++) {
		scanf("%d", &severity[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}