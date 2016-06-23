// Name : Sort
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : number of subjects
	// m : the number of limitations
	// su : pairs si ui which describe the order of subjects
	// sequence : 
	int idx, jdx, index;
	int n, m;

	cin >> n >> m;
	int su[10000][2];

	for(idx=0;idx<m;idx++)
		for(jdx=0;jdx<2;jdx++)
			cin >> su[idx][jdx];
	int sequence[1000];

	for(index=0;index<n;index++)
		cin >> sequence[index];


	// write your code here
	// store your results in `correct`

	// output
	// Dummy Data
	string correct="YES";

	cout << correct << endl;

}