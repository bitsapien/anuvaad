// Name : MSSUM1
#include <stdio.h>
int main() {
	// input:
	// n :  the number of elements in the array
	// q :  the number of queries correspondingly
	// a :  the array elements
	// lr : each row corresponds to l and r
	int n, q, a[100000], lr[100000][2], sum_of_replies=25, index, idx, jdx;
	char lr_tmp[2];
	scanf("%d %d", &n, &q);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}
	for(idx = 0; idx< q; idx++) {
		scanf("%s", &lr_tmp[0]);
		for(jdx = 0;jdx<2;jdx++) {
			lr[idx][jdx] = lr_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `sum_of_replies`

	// output
	printf("%d", sum_of_replies);
	return 0;
}