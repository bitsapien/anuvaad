// Name : Snowflakes
#include <stdio.h>
int main() {
	// input:
	// n : length of array
	// k : number of  letters of the English alphabet
	// english_letters :  contains n uppercase English letters
	int n, k, min_number_of_changes=2;
	char english_letters[105], changed_array[105]="ABCACA";
	scanf("%d %d", &n, &k);
	scanf("%s", &english_letters);


	// write your code here
	// store your results in `min_number_of_changes`,`changed_array`

	// output
	printf("%d", min_number_of_changes);
	printf("%s", changed_array);
	return 0;
}