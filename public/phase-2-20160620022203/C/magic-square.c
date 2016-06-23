// Name : Magic Square
#include <stdio.h>
int main() {
	// input:
	// original_magic_square : original magic square
	int original_magic_square[3][3], repaired_magic_square[3][3]={{4,4,4},{4,4,4},{4,4,4}}, idx, jdx;
	char original_magic_square_tmp[3], repaired_magic_square_tmp[3];
	for(idx = 0; idx< 3; idx++) {
		scanf("%s", &original_magic_square_tmp[0]);
		for(jdx = 0;jdx<3;jdx++) {
			original_magic_square[idx][jdx] = original_magic_square_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `repaired_magic_square`

	// output
	for(idx = 0; idx< 3; idx++) {
		for(jdx = 0;jdx<3;jdx++) {
			printf("%d ",repaired_magic_square[idx][jdx]);
		}
		printf("\n");
	}
	return 0;
}