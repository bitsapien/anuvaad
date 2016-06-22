// Name : Arny’s Workout
#include <stdio.h>
int main() {
	// input:
	// n :  the number of exercises
	// a :  the number of repeats for the exercises
	int n, a[20], index;
	char result[105]="chest";
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%s", result);
	return 0;
}