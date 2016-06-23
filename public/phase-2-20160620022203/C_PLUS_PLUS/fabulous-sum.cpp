// Name : Fabulous Sum
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// t :  the amount of numbers for which you need to calculate the requested sum
	// n : 
	int idx, jdx;
	int t;
	cin >> t;
	int n[100][1];

	for(idx=0;idx<t;idx++)
		for(jdx=0;jdx<1;jdx++)
			cin >> n[idx][jdx];


	// write your code here
	// store your results in `sum`

	// output
	// Dummy Data
	int sum[100][1]={{-4},{499999998352516354}};

	for(idx=0;idx<t;idx++) {
		for(jdx=0;jdx<1;jdx++) {
			cout << sum[idx][jdx];
		}
		cout << endl;
	}

}