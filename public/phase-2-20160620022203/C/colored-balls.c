// Name : Colored Balls
#include <stdio.h>
int main() {
	// input:
	// k :  the number of colors
	// c :  the number of balls of each color 
	int k, c[1000][1], result=3, idx, jdx;
	char c_tmp[1];
	scanf("%d", &k);
	for(idx = 0; idx< k; idx++) {
		scanf("%s", &c_tmp[0]);
		for(jdx = 0;jdx<1;jdx++) {
			c[idx][jdx] = c_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}