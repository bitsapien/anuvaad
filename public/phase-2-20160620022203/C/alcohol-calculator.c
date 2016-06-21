// Name : Alcohol Calculator
#include <stdio.h>
int main() {
	// input:
	// n1 :  alcohol percentage 1
	// m1 : volume 1 in ml
	// n2 :  alcohol percentage 2
	// m2 : volume 2 in ml
	int n1, n2;
	float m1, m2;
	char v[105]="30%";
	scanf("%d %f", &n1, &m1);
	scanf("%d %f", &n2, &m2);


	// write your code here
	// store your results in `v`

	// output
	printf("%s", v);
	return 0;
}