// Name : Magic Square
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// original_magic_square : original magic square
	int idx, jdx;
	int original_magic_square[3][3];

	for(idx=0;idx<3;idx++)
		for(jdx=0;jdx<3;jdx++)
			cin >> original_magic_square[idx][jdx];


	// write your code here
	// store your results in `repaired_magic_square`

	// output
	// Dummy Data
	int repaired_magic_square[3][3]={{4,4,4},{4,4,4},{4,4,4}};

	for(idx=0;idx<3;idx++) {
		for(jdx=0;jdx<3;jdx++) {
			cout << repaired_magic_square[idx][jdx];
		}
		cout << endl;
	}

}