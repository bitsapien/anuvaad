// Name : Palindromization
#include <stdio.h>
int main() {
	// input:
	// n :  string length
	// p :  the current position of the cursor
	// given_string : string of n lowercase Latin letters
	int n, p, result=12;
	char given_string[105];
	scanf("%d %d", &n, &p);
	scanf("%s", &given_string);


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}