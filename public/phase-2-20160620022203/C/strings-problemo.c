// Name : Strings Problemo
#include <stdio.h>
int main() {
	// input:
	// s : latin characters
	// t : latin characters
	// n : the number of possible replacements
	// abw : each row corresponds to a b w for each possible replacement
	char s[105], t[105], resulting_string[105]="uxyd";
	int n, answer=21, idx, jdx;
	char abw[500][3], abw_tmp[3];
	scanf("%s", &s);
	scanf("%s", &t);
	scanf("%d", &n);
	for(idx = 0; idx< n; idx++) {
		scanf("%s", &abw_tmp[0]);
		for(jdx = 0;jdx<3;jdx++) {
			abw[idx][jdx] = abw_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `answer`,`resulting_string`

	// output
	printf("%d\n", answer);
	printf("%s", resulting_string);
	return 0;
}