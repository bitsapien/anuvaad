// Name : Greedy Man
#include <stdio.h>
int main() {
	// input:
	// n : number of devices that will fit into steve
	// m : number of smartphones available for sale
	// price_of_smartphones : list of price of n smartphones
	int n, m, price_of_smartphones[100], result, index;
	scanf("%d %d", &n, &m);
	for(index = 0; index< n; index++) {
		scanf("%d", &price_of_smartphones[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}