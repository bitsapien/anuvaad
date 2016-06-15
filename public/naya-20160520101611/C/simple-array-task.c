// Name : Simple Array Task
#include <stdio.h>
int main() {
	// input:
	// n : the number of elements in the array
	// a :  the elements of the array
	int n, a[100], ai, aj, ak, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `ai`,`aj`,`ak`

	// output
	printf("%d %d %d", ai, aj, ak);
	return 0;
}