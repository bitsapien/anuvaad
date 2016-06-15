// Name : Sherlock
#include <stdio.h>
int main() {
	// input:
	// n : row number
	// m : column number
	// city_map : hold the representation of the city as a table
	int n, m, crime_row_number, crime_col_number, idx, jdx;
	char city_map[100][100], tmp[100];
	scanf("%d %d", &n, &m);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &tmp[0]);
		for(jdx = 0;jdx<m;jdx++) {
			city_map[idx][jdx] = tmp[jdx];
		}
	}


	// write your code here
	// store your results in `crime_row_number`,`crime_col_number`

	// output
	printf("%d %d", crime_row_number, crime_col_number);
	return 0;
}