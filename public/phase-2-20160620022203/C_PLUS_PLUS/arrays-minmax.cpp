// Name : Arrays Minmax
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : size of a
	// m : size of b
	// a : array A
	// b : array B
	int index;
	int n, m;

	cin >> n >> m;
	int  a[n];

	for(index=0;index<n;index++)
		cin >> a[index];
	int  b[m];

	for(index=0;index<m;index++)
		cin >> b[index];


	// write your code here
	// store your results in `minimum_num_of_operations`

	// output
	// Dummy Data
	int minimum_num_of_operations=3;

	cout << minimum_num_of_operations;

}