// Name : Two Piles of Balls
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : number of balls in a pile
	// a : 
	int index;
	int n;
	cin >> n;
	int a[100];

	for(index=0;index<2n;index++)
		cin >> a[index];


	// write your code here
	// store your results in `result`,`b`

	// output
	// Dummy Data
	int result=1, b[100]={2,1};

	cout << result << endl;
	for(index=0;index<(2*n);index++)
		cout << b[index] << " ";

}