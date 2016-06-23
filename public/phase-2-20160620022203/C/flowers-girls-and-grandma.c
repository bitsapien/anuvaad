// Name : Flowers Girls and Grandma
#include <stdio.h>
int main() {
	// input:
	// n :  the number of girls
	// p : Grandmas favourite prime number
	// lr : each row corresponds to the range of flowers that each girl can grow
	int n, p, lr[10000][2], idx, jdx;
	float result=0.0;
	char lr_tmp[2];
	scanf("%d %d", &n, &p);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &lr_tmp[0]);
		for(jdx = 0;jdx<2;jdx++) {
			lr[idx][jdx] = lr_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%f", result);
	return 0;
}