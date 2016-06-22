// Name : Add and Remove
#include <stdio.h>
int main() {
	// input:
	// n : size of array
	// a : source array
	int n, a[10000], maximum_number_of_equal_elements=1, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `maximum_number_of_equal_elements`

	// output
	printf("%d", maximum_number_of_equal_elements);
	return 0;
}