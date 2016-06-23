// Name : Forgotten Password
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the number of digits in the password 
	// m :  the number of
	// sc : each row contains si ci
	int idx, jdx;
	int n, m;

	cin >> n >> m;
	string sc[10][2];

	for(idx=0;idx<m;idx++)
		for(jdx=0;jdx<2;jdx++)
			cin >> sc[idx][jdx];


	// write your code here
	// store your results in `result`

	// output
	// Dummy Data
	int result=6;

	cout << result << endl;

}