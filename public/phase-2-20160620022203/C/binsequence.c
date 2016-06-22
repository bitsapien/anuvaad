// Name : BinSequence
#include <stdio.h>
int main() {
	// input:
	// n : length
	int n, sequence[100]={0,1}, index;
	scanf("%d", &n);


	// write your code here
	// store your results in `sequence`

	// output
	for(index = 0; index< n; index++) {
		printf("%d ",sequence[index]);
	}
	return 0;
}