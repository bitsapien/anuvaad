// Name : Greedy Man
#include <stdio.h>
int main() {
	// input:
	// m : number of devices
	// n : number of phones
	// phones : smart phones
	int m, n, phones[100], max=8, index;
	scanf("%d %d", &m, &n);
	for(index = 0; index< m; index++) {
		scanf("%d", &phones[index]);
	}


	// write your code here
	// store your results in `max`

	// output
	printf("%d", max);
	return 0;
}