// Name : Sherlock
#include <stdio.h>
int main() {
	// input:
	// n : size
	// m : size
	// map : ratio
	int n, m, row, column, idx, jdx;
	char map[100][100], tmp[100];
	scanf("%d %d", &n, &m);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &tmp[0]);
		for(jdx = 0;jdx<m;jdx++) {
			map[idx][jdx] = tmp[jdx];
		}
	}


	// write your code here
	// store your results in `row`,`column`

	// output
	printf("%d %d", row, column);
	return 0;
}