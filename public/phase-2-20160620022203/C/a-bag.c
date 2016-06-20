// Name : A Bag
#include <stdio.h>
int main() {
	// input:
	// n : number of toolkits
	// volume : volume of each toolkit
	int n, volume[10000], minimum_number_of_bags=4, index;
	scanf("%d", &n);
	for(index = 0; index< n; index++) {
		scanf("%d", &volume[index]);
	}


	// write your code here
	// store your results in `minimum_number_of_bags`

	// output
	printf("%d", minimum_number_of_bags);
	return 0;
}