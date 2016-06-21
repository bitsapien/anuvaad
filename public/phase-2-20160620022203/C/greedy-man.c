// Name : Greedy Man
#include <stdio.h>
int main() {
	// input:
	// n : the number of devices that will fit into
	// m : e number of smartphones available for sale
	// a : price of a smartphones
	int n, m, a[1000], maximum_sum_of_money=8, index;
	scanf("%d %d", &n, &m);
	for(index = 0; index< m; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `maximum_sum_of_money`

	// output
	printf("%d", maximum_sum_of_money);
	return 0;
}