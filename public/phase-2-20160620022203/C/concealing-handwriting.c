// Name : Concealing Handwriting
#include <stdio.h>
int main() {
	// input:
	// s : A string that the spy needs to send in a letter
	// t : A string that is printed in the news article
	char s[105], t[105];
	int right_case=5, wrong_case=1;
	scanf("%s", &s);
	scanf("%s", &t);


	// write your code here
	// store your results in `right_case`,`wrong_case`

	// output
	printf("%d %d", right_case, wrong_case);
	return 0;
}