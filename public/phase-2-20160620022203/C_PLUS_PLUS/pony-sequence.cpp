// Name : Pony Sequence
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : number of elements in the sequences in a and b
	// a : sequence a
	int index;
	int n;
	cin >> n;
	int a[100];

	for(index=0;index<n;index++)
		cin >> a[index];


	// write your code here
	// store your results in `b`

	// output
	// Dummy Data
	int b[100]={1,1,1,1,1};

	for(index=0;index<n;index++)
		cout << b[index] << " ";

}