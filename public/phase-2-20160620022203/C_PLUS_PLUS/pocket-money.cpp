// Name : Pocket money
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : the number of exams
	// r :  the maximum score
	// avg : average score required to double his pocket money
	// ab : ab corresponds to ai bi
	int idx, jdx;
	int n, r, avg;

	cin >> n >> r >> avg;
	int  ab[n][2];

	for(idx=0;idx<n;idx++)
		for(jdx=0;jdx<2;jdx++)
			cin >> ab[idx][jdx];


	// write your code here
	// store your results in `result`

	// output
	// Dummy Data
	int result=4;

	cout << result;

}