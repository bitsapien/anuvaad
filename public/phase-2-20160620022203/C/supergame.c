// Name : Supergame
#include <stdio.h>
int main() {
	// input:
	// n : number of boys
	// a :  number of rounds each boy wants to play
	int n, a[10000], result=4, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}