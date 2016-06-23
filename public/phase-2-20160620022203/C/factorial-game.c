// Name : Factorial game
#include <stdio.h>
int main() {
	// input:
	// t :  the number of games the soldiers play
	// ab :  each row containing a pair of integers a and b defining the value of n for each game
	int t, ab[1000000][2], max_score_for_soldiers[100000][1]={{2},{5}}, idx, jdx;
	char ab_tmp[2], max_score_for_soldiers_tmp[1];
	scanf("%d", &t);
	for(idx = 0; idx< t; idx++) {
		scanf("%s", &ab_tmp[0]);
		for(jdx = 0;jdx<2;jdx++) {
			ab[idx][jdx] = ab_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `max_score_for_soldiers`

	// output
	for(idx = 0; idx< t; idx++) {
		for(jdx = 0;jdx<1;jdx++) {
			printf("%d ",max_score_for_soldiers[idx][jdx]);
		}
		printf("\n");
	}
	return 0;
}