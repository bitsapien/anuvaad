// Name : Trains
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : number of cities
	// m : number of  roads connecting the cities
	// k : number of railways
	// uvx : uvx corresponds to ui vi xi
	// sy : uvx corresponds to si yi
	int idx, jdx;
	int n, m, k;

	cin >> n >> m >> k;
	int  uvx[m][3];

	for(idx=0;idx<m;idx++)
		for(jdx=0;jdx<3;jdx++)
			cin >> uvx[idx][jdx];
	int  sy[k][2];

	for(idx=0;idx<k;idx++)
		for(jdx=0;jdx<2;jdx++)
			cin >> sy[idx][jdx];


	// write your code here
	// store your results in `result`

	// output
	// Dummy Data
	int result=2;

	cout << result;

}