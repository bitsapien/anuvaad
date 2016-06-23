// Name : Two Circles
#include <stdio.h>
int main() {
	// input:
	// n :  the number of points
	// x1 : coordinates of first circle
	// y1 : coordinates of first circle
	// x2 : coordinates of second circle
	// y2 :  coordinates of second circle
	// xy :  each row contains integers xi and yi
	int n, x1, y1, x2, y2, xy[2000][2], minimum_value=6, idx, jdx;
	char xy_tmp[2];
	scanf("%d %d %d %d %d", &n, &x1, &y1, &x2, &y2);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &xy_tmp[0]);
		for(jdx = 0;jdx<2;jdx++) {
			xy[idx][jdx] = xy_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `minimum_value`

	// output
	printf("%d", minimum_value);
	return 0;
}