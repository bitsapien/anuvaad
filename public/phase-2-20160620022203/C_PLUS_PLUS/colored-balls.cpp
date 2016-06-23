// Name : Colored Balls
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// k :  the number of colors
	// c :  the number of balls of each color 
	int idx, jdx;
	int k;
	cin >> k;
	int c[1000][1];

	for(idx=0;idx<k;idx++)
		for(jdx=0;jdx<1;jdx++)
			cin >> c[idx][jdx];


	// write your code here
	// store your results in `result`

	// output
	// Dummy Data
	int result=3;

	cout << result << endl;

}