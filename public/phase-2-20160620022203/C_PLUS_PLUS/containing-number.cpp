// Name : Containing Number
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : count of the following numbers
	// k : k
	// numbers_to_check : 
	int idx, jdx;
	int n, k;

	cin >> n >> k;
	int numbers_to_check[100][1];

	for(idx=0;idx<n;idx++)
		for(jdx=0;jdx<1;jdx++)
			cin >> numbers_to_check[idx][jdx];


	// write your code here
	// store your results in `result`

	// output
	// Dummy Data
	int result=2;

	cout << result << endl;

}