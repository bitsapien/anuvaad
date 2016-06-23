// Name : A and B and Compilation Errors
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the initial number of compilation errors
	// a : 
	// b : 
	// c : 
	int index;
	int n;
	cin >> n;
	int a[10000];

	for(index=0;index<n;index++)
		cin >> a[index];
	int b[10000];

	for(index=0;index<(n-1);index++)
		cin >> b[index];
	int c[10000];

	for(index=0;index<(n-2);index++)
		cin >> c[index];


	// write your code here
	// store your results in `errors_disappeared_after_first_correction`,`errors_disappeared_after_second_correction`

	// output
	// Dummy Data
	int errors_disappeared_after_first_correction=8, errors_disappeared_after_second_correction=123;

	cout << errors_disappeared_after_first_correction << endl;
	cout << errors_disappeared_after_second_correction << endl;

}