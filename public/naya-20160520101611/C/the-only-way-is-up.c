// Name : The Only Way is Up
#include <stdio.h>
int main() {
	// input:
	// n : the number of elements in the array
	// d : distance
	// x :  the elements of the array
	int n, d, x[2000], number_of_times_to_add_b, index;
	scanf("%d %d", &n, &d);
	for(index = 0; index< n; index++) {
		scanf("%d", &x[index]);
	}


	// write your code here
	// store your results in `number_of_times_to_add_b`

	// output
	printf("%d", number_of_times_to_add_b);
	return 0;
}