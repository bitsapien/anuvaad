// Name : Big Chessboard
#include <stdio.h>
int main() {
	// input:
	// x0 : start point
	// y0 : start point
	// x1 : destination point
	// y1 : destination point
	// n : number of segments of the permitted cells
	// rab : each row of rab corresponds to ri ai bi
	int x0, y0, x1, y1, n, rab[100000][3], minimum_moves=4, idx, jdx;
	char rab_tmp[3];
	scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
	scanf("%d", &n);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &rab_tmp[0]);
		for(jdx = 0;jdx<3;jdx++) {
			rab[idx][jdx] = rab_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `minimum_moves`

	// output
	printf("%d", minimum_moves);
	return 0;
}