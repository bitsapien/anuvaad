// Name : Junior Broker
#include <stdio.h>
int main() {
	// input:
	// n :  number of days
	// e :  amount of Euro Finn has on the first day
	// a :  the currency rate of Dollar to Euro on day i
	int n, e, a[2000], result=8, index;
	scanf("%d %d", &n, &e);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}