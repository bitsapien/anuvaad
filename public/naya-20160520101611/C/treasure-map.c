// Name : Treasure Map
#include <stdio.h>
int main() {
	// input:
	// n :  the number of rows 
	// island : islands
	int n, island[30][30], total_number_of_islands, island_with_maximum_total_probability, idx, jdx;
	char tmp[30];
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &tmp[0]);
		for(jdx = 0;jdx<n;jdx++) {
			island[idx][jdx] = tmp[jdx];
		}
	}


	// write your code here
	// store your results in `total_number_of_islands`,`island_with_maximum_total_probability`

	// output
	printf("%d %d", total_number_of_islands, island_with_maximum_total_probability);
	return 0;
}