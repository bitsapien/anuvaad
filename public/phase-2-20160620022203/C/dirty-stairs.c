// Name : Dirty Stairs
#include <stdio.h>
int main() {
	// input:
	// n :  number of steps in the staircase
	// m : number of dirty steps
	// d :  numbers of dirty steps 
	int n, m, d[3000], index;
	char result[105]="YES";
	scanf("%d %d", &n, &m);
	for(index = 0; index< m; index++) {
		scanf("%d", &d[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%s", result);
	return 0;
}