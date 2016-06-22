// Name : XOR sum
#include <stdio.h>
int main() {
	// input:
	// n :  the number of elements in the array
	// a :  integers from the array
	int n, a[100], xor_sum=3, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `xor_sum`

	// output
	printf("%d", xor_sum);
	return 0;
}