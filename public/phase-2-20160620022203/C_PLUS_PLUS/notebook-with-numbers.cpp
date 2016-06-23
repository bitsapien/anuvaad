// Name : Notebook with Numbers 
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : number of sheets
	// k : 
	// a : 
	int index;
	int n, k;

	cin >> n >> k;
	int a[300];

	for(index=0;index<n;index++)
		cin >> a[index];


	// write your code here
	// store your results in `maximum_sum`,`r`

	// output
	// Dummy Data
	int maximum_sum=27, r[300]={3,4,5,8};

	cout << maximum_sum << endl;
	for(index=0;index<(k-1);index++)
		cout << r[index] << " ";

}