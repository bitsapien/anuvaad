// Name : Continuous Sequence Sum
#include <stdio.h>
int main() {
	// input:
	// n : length of sequence
	// a : sequence
	// t : sum
	int n, a[100], t, index;
	char result[105]="True";
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}
	scanf("%d", &t);


	// write your code here
	// store your results in `result`

	// output
	printf("%s", result);
	return 0;
}