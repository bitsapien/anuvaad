// Name : Pocket money
#include <stdio.h>
int main() {
	// input:
	// n : the number of exams
	// r :  the maximum score
	// avg : average score required to double his pocket money
	// ab : ab corresponds to ai bi
	int n, r, avg, ab[10000][2], result=4, idx, jdx;
	char ab_tmp[2];
	scanf("%d %d %d", &n, &r, &avg);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &ab_tmp[0]);
		for(jdx = 0;jdx<2;jdx++) {
			ab[idx][jdx] = ab_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}