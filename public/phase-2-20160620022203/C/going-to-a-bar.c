// Name : Going to a Bar
#include <stdio.h>
int main() {
	// input:
	// n :  the number of streets in Berlin
	// m : the number of avenues in Berlin
	// a :  the cost of spending a night in a bar at the intersection of street N and avenue M
	int n, m, a[100][100], cost=2, idx, jdx;
	char a_tmp[100];
	scanf("%d %d", &n, &m);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &a_tmp[0]);
		for(jdx = 0;jdx<m;jdx++) {
			a[idx][jdx] = a_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `cost`

	// output
	printf("%d", cost);
	return 0;
}