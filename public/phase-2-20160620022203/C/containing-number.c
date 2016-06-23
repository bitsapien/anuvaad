// Name : Containing Number
#include <stdio.h>
int main() {
	// input:
	// n : count of the following numbers
	// k : k
	// numbers_to_check : 
	int n, k, numbers_to_check[100][1], result=2, idx, jdx;
	char numbers_to_check_tmp[1];
	scanf("%d %d", &n, &k);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &numbers_to_check_tmp[0]);
		for(jdx = 0;jdx<1;jdx++) {
			numbers_to_check[idx][jdx] = numbers_to_check_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}