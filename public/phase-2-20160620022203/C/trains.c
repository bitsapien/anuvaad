// Name : Trains
#include <stdio.h>
int main() {
	// input:
	// n : number of cities
	// m : number of  roads connecting the cities
	// k : number of railways
	// uvx : uvx corresponds to ui vi xi
	// sy : uvx corresponds to si yi
	int n, m, k, uvx[10000][3], sy[10000][2], result=2, idx, jdx;
	char uvx_tmp[3], sy_tmp[2];
	scanf("%d %d %d", &n, &m, &k);
	for(idx = 0; idx< m; idx++) {
		scanf("%s", &uvx_tmp[0]);
		for(jdx = 0;jdx<3;jdx++) {
			uvx[idx][jdx] = uvx_tmp[jdx];
		}
	}
	for(idx = 0; idx< k; idx++) {
		scanf("%s", &sy_tmp[0]);
		for(jdx = 0;jdx<2;jdx++) {
			sy[idx][jdx] = sy_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}