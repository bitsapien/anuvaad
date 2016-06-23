// Name : Elite Architect
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : the number of Buildings in the capital of Nippon
	// h :  number of stories in each building
	int index;
	int n;
	cin >> n;
	int h[10000];

	for(index=0;index<n;index++)
		cin >> h[index];


	// write your code here
	// store your results in `a`

	// output
	// Dummy Data
	int a[10000]={3,2,0,2,0};

	for(index=0;index<n;index++)
		cout << a[index] << " ";

}