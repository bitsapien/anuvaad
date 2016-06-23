// Name : Fabulous Sum
#include <stdio.h>
int main() {
	// input:
	// t :  the amount of numbers for which you need to calculate the requested sum
	// n : 
	int t, n[100][1], sum[100][1]={{-4},{499999998352516354}}, idx, jdx;
	char n_tmp[1], sum_tmp[1];
	scanf("%d", &t);
	for(idx = 0; idx< t; idx++) {
		scanf("%s", &n_tmp[0]);
		for(jdx = 0;jdx<1;jdx++) {
			n[idx][jdx] = n_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `sum`

	// output
	for(idx = 0; idx< t; idx++) {
		for(jdx = 0;jdx<1;jdx++) {
			printf("%d ",sum[idx][jdx]);
		}
		printf("\n");
	}
	return 0;
}