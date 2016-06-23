// Name : Another Game of Life
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the size of the map
	// m :  the number of populations that want to
	int idx, jdx;
	int n, m;

	cin >> n >> m;


	// write your code here
	// store your results in `exists`,`territory`

	// output
	// Dummy Data
	string exists="NO";
char territory[100][100]={{''}};
	if(exists=="YES"){
	cout << exists << endl;
		for(idx=0;idx<n;idx++) {
			for(jdx=0;jdx<n;jdx++) {
				cout << territory[idx][jdx];
			}
			cout << endl;
		}
	}

}