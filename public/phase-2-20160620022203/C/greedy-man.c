// Name : Greedy Man
#include <stdio.h>
int main() {
	// input:
	// m : 
	// n : 
	// mn : 
	int m, n, mn[1000], ouput=8, index;
	scanf("%d %d", &m, &n);
	for(index = 0; index< m; index++) {
		scanf("%d", &mn[index]);
	}


	// write your code here
	// store your results in `ouput`

	// output
	printf("%d", ouput);
	return 0;
}