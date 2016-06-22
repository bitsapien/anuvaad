// Name : Walter Junior
#include <stdio.h>
int main() {
	// input:
	// a :  number of blue substances that Walter has
	// b :  number of purple substances that Walter has
	// c :  number of orange substances that Walter has
	// x :  number of blue substances that Walter needs to get
	// y :  number of purple substances that Walter needs to get
	// z :  number of orange substances that Walter needs to get
	int a, b, c, x, y, z;
	char result[105]="YES";
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &x, &y, &z);


	// write your code here
	// store your results in `result`

	// output
	printf("%s", result);
	return 0;
}