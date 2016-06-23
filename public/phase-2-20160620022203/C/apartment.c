// Name : Apartment
#include <stdio.h>
int main() {
	// input:
	// n :  the size of Shalkan’s apartment plan
	// m : the size of Shalkan’s apartment plan
	// nm :  the description of the apartment plan
	int n, m, idx, jdx;
	char nm[2000][2000], new_plan[2000][2000]={{'.','*','.','*','.'},{'*','*','*','*','*'},{'.','*','.','*','.'},{'*','*','*','*','*'},{'.','*','.','*','.'}}, nm_tmp[2000], new_plan_tmp[2000];
	scanf("%d %d", &n, &m);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &nm_tmp[0]);
		for(jdx = 0;jdx<m;jdx++) {
			nm[idx][jdx] = nm_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `new_plan`

	// output
	for(idx = 0; idx< n; idx++) {
		for(jdx = 0;jdx<m;jdx++) {
			printf("%c ",new_plan[idx][jdx]);
		}
		printf("\n");
	}
	return 0;
}