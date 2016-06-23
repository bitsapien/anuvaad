// Name : Skyscraper
#include <stdio.h>
int main() {
	// input:
	// n : number of skyscrapers
	// k : number of stories to move
	// h : each row has height of each skyscraper
	int n, k, h[100], j=3, index;
	scanf("%d %d", &n, &k);
	for(index = 0; index< n; index++) {
		scanf("%d", &h[index]);
	}


	// write your code here
	// store your results in `j`

	// output
	printf("%d", j);
	return 0;
}