// Name : Inmates
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : number of prisoners
	// t : crime threshold
	// c : selected inmates
	// severity :  severity of the crime committed by each inmate
	int index;
	int n, t, c;

	cin >> n >> t >> c;
	int severity[10000];

	for(index=0;index<n;index++)
		cin >> severity[index];


	// write your code here
	// store your results in `result`

	// output
	// Dummy Data
	int result=2;

	cout << result << endl;

}