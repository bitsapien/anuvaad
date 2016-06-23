// Name : EShopping
#include <stdio.h>
int main() {
	// input:
	// n :  number of phone models' descriptions in the shop
	// description :  zero stands for an unread description one for a read description
	int n, description[1000], clicks=9, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &description[index]);
	}


	// write your code here
	// store your results in `clicks`

	// output
	printf("%d", clicks);
	return 0;
}