// Name : Max Even Sum 
#include <stdio.h>
int main() {
	// input:
	// n : number of integers
	// given_integers : given integers
	int n, given_integers[100000], result=6, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &given_integers[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}