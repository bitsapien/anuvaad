// Name : Best Friends
#include <stdio.h>
int main() {
	// input:
	// n : the number of Dima's friends
	// fingers :  the number of fingers Dima's friends will show during the counting game
	int n, fingers[100], answer=3, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &fingers[index]);
	}


	// write your code here
	// store your results in `answer`

	// output
	printf("%d", answer);
	return 0;
}