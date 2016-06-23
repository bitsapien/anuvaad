// Name : Sort
#include <stdio.h>
int main() {
	// input:
	// n : number of subjects
	// m : the number of limitations
	// su : pairs si ui which describe the order of subjects
	// sequence : 
	int n, m, su[10000][2], sequence[1000], idx, jdx, index;
	char correct[105]="YES";
	char su_tmp[2];
	scanf("%d %d", &n, &m);
	for(idx = 0; idx< m; idx++) {
		scanf("%s", &su_tmp[0]);
		for(jdx = 0;jdx<2;jdx++) {
			su[idx][jdx] = su_tmp[jdx];
		}
	}
	for(index = 0; index< n; index++) {
		scanf("%d", &sequence[index]);
	}


	// write your code here
	// store your results in `correct`

	// output
	printf("%s", correct);
	return 0;
}