// Name : Big Chessboard
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// x0 : start point
	// y0 : start point
	// x1 : destination point
	// y1 : destination point
	// n : number of segments of the permitted cells
	// rab : each row of rab corresponds to ri ai bi
	int idx, jdx;
	int x0, y0, x1, y1;

	cin >> x0 >> y0 >> x1 >> y1;
	int n;
	cin >> n;
	int  rab[n][3];

	for(idx=0;idx<n;idx++)
		for(jdx=0;jdx<3;jdx++)
			cin >> rab[idx][jdx];


	// write your code here
	// store your results in `minimum_moves`

	// output
	// Dummy Data
	int minimum_moves=4;

	cout << minimum_moves;

}