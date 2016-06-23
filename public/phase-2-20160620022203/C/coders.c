// Name : Coders
#include <stdio.h>
int main() {
	// input:
	// n :  number of developers
	// m :  number of lines of
	// b :  maximum possible number of errors
	// mod : the module you need to use to get the
	// a :  the number of errors that each
	int n, m, b, mod, a[500], result=10, index;
	scanf("%d %d %d %d", &n, &m, &b, &mod);
	for(index = 0; index< n; index++) {
		scanf("%d", &a[index]);
	}


	// write your code here
	// store your results in `result`

	// output
	printf("%d", result);
	return 0;
}