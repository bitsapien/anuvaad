// Name : Two Circles
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the number of points
	// x1 : coordinates of first circle
	// y1 : coordinates of first circle
	// x2 : coordinates of second circle
	// y2 :  coordinates of second circle
	// xy :  each row contains integers xi and yi
	int idx, jdx;
	int n, x1, y1, x2, y2;

	cin >> n >> x1 >> y1 >> x2 >> y2;
	int xy[2000][2];

	for(idx=0;idx<n;idx++)
		for(jdx=0;jdx<2;jdx++)
			cin >> xy[idx][jdx];


	// write your code here
	// store your results in `minimum_value`

	// output
	// Dummy Data
	int minimum_value=6;

	cout << minimum_value << endl;

}