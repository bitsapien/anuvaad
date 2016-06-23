// Name : Clockwork
#include <stdio.h>
int main() {
	// input:
	// time :  time in the format of hh mm
	// n :  number of minutes to add
	char time[105], moment_in_time[105]="00:09";
	int n;
	scanf("%s", &time);
	scanf("%d", &n);


	// write your code here
	// store your results in `moment_in_time`

	// output
	printf("%s", moment_in_time);
	return 0;
}