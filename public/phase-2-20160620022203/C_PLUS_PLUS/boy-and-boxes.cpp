// Name : Boy and Boxes
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the number of boxes
	// x : number of the
	// a :  number of balls in each box
	int index;
	int n, x;

	cin >> n >> x;
	int  a[n];

	for(index=0;index<n;index++)
		cin >> a[index];


	// write your code here
	// store your results in `result`

	// output
	// Dummy Data
	int  result[] = {3,2,5,4};

	for(index=0;index<n;index++)
		cout << result[index] << " ";

}