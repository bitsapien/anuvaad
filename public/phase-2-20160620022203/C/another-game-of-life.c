// Name : Another Game of Life
#include <stdio.h>
int main() {
	// input:
	// n :  the size of the map
	// m :  the number of populations that want to
	int n, m, idx, jdx;
	char exists[105]="NO";
	char territory[100][100]={{''}}, territory_tmp[100];
	scanf("%d %d", &n, &m);


	// write your code here
	// store your results in `exists`,`territory`

	// output
	printf("%s", exists);
	if(exists=="YES"){
		for(idx = 0; idx< n; idx++) {
			for(jdx = 0;jdx<n;jdx++) {
				printf("%c ",territory[idx][jdx]);
			}
			printf("\n");
		}
	}
	return 0;
}