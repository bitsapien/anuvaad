// Name : Square
#include <stdio.h>
int main() {
	// input:
	// k :  count of cases
	// an : integers a and n in every row
	int k, an[1000][2], idx, jdx;
	char roots[105]="No root";
	char an_tmp[2];
	scanf("%d", &k);
	for(idx = 0; idx< k; idx++) {
		scanf("%s", &an_tmp[0]);
		for(jdx = 0;jdx<2;jdx++) {
			an[idx][jdx] = an_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `roots`

	// output
	printf("%s", roots);
	return 0;
}