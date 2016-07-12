// Name : Forgotten Password
#include <stdio.h>
int main() {
	// input:
	// n :  the number of digits in the password 
	// m :  the number of
	// sc : each row contains si ci
	int n, m, result=6, idx, jdx;
	char sc[105][10][2];
	char sc_tmp[2];
	scanf("%d %d", &n, &m);
	for(idx = 0; idx< m; idx++) {
		for(jdx = 0;jdx<2;jdx++) {
			scanf("%s", &sc[idx][jdx][0]);
		}
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}