// Name : Little Sisters
#include <stdio.h>
int main() {
	// input:
	// n : number of sisters Hikki has
	int n, solution[100][100], idx, jdx;
	char tmp[100];
	scanf("%d", &n);


	// write your code here
	// store your results in `solution`

	// output
	for(idx = 0; idx< n; idx++) {
		for(jdx = 0;jdx<n;jdx++) {
			printf("%d ",solution[idx][jdx]);
		}
		printf("\n");
	}
	return 0;
}