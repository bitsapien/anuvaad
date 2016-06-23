// Name : MSSUM1
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the number of elements in the array
	// q :  the number of queries correspondingly
	// a :  the array elements
	// lr : each row corresponds to l and r
	int index, idx, jdx;
	int n, q;

	cin >> n >> q;
	int a[100000];

	for(index=0;index<n;index++)
		cin >> a[index];
	int lr[100000][2];

	for(idx=0;idx<q;idx++)
		for(jdx=0;jdx<2;jdx++)
			cin >> lr[idx][jdx];


	// write your code here
	// store your results in `sum_of_replies`

	// output
	// Dummy Data
	int sum_of_replies=25;

	cout << sum_of_replies << endl;

}