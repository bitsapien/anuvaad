// Name : Going to a Bar
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the number of streets in Berlin
	// m : the number of avenues in Berlin
	// a :  the cost of spending a night in a bar at the intersection of street N and avenue M
	int idx, jdx;
	int n, m;

	cin >> n >> m;
	int a[100][100];

	for(idx=0;idx<n;idx++)
		for(jdx=0;jdx<m;jdx++)
			cin >> a[idx][jdx];


	// write your code here
	// store your results in `cost`

	// output
	// Dummy Data
	int cost=2;

	cout << cost << endl;

}