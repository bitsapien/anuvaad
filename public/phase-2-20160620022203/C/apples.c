// Name : Apples
#include <stdio.h>
int main() {
	// input:
	// n :  the amount of apples
	// w :  the weight of each apple
	int n, w[100], index;
	char possibility[105]="YES";
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &w[index]);
	}


	// write your code here
	// store your results in `possibility`

	// output
	printf("%s", possibility);
	return 0;
}