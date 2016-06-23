// Name : Little Bear With Cards
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the number of cards
	// description : 
	int idx, jdx;
	int n;
	cin >> n;
	int description[10000][2];

	for(idx=0;idx<n;idx++)
		for(jdx=0;jdx<2;jdx++)
			cin >> description[idx][jdx];


	// write your code here
	// store your results in `steps`

	// output
	// Dummy Data
	int steps=0;

	cout << steps << endl;

}