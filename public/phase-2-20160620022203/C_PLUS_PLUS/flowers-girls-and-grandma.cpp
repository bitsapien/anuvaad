// Name : Flowers Girls and Grandma
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the number of girls
	// p : Grandmas favourite prime number
	// lr : each row corresponds to the range of flowers that each girl can grow
	int idx, jdx;
	int n, p;

	cin >> n >> p;
	int lr[10000][2];

	for(idx=0;idx<n;idx++)
		for(jdx=0;jdx<2;jdx++)
			cin >> lr[idx][jdx];


	// write your code here
	// store your results in `result`

	// output
	// Dummy Data
	float result=0.0;

	cout << result << endl;

}