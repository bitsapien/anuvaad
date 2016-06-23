// Name : Elegance of a Sequence
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : length of sequence of a
	// a : sequence a
	int index;
	int n;
	cin >> n;
	int a[105];

	for(index=0;index<n;index++)
		cin >> a[index];


	// write your code here
	// store your results in `k`,`b`

	// output
	// Dummy Data
	int k=2, b[105]={4,5};

	cout << k << endl;
	for(index=0;index<k;index++)
		cout << b[index] << " ";

}