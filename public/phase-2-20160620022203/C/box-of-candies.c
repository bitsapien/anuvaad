// Name : Box of Candies
#include <stdio.h>
int main() {
	// input:
	// n :  the number of boxes with candies James and Jessica have
	// a :  the number of candies in the every bag
	int n, a[100], sought_number_of_ways=1, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `sought_number_of_ways`

	// output
	printf("%d", sought_number_of_ways);
	return 0;
}