// Name : Little Bear With Cards
#include <stdio.h>
int main() {
	// input:
	// n :  the number of cards
	// description : 
	int n, description[10000][2], steps=0, idx, jdx;
	char description_tmp[2];
	scanf("%d", &n);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &description_tmp[0]);
		for(jdx = 0;jdx<2;jdx++) {
			description[idx][jdx] = description_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `steps`

	// output
	printf("%d", steps);
	return 0;
}