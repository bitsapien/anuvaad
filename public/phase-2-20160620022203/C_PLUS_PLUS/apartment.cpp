// Name : Apartment
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the size of Shalkan’s apartment plan
	// m : the size of Shalkan’s apartment plan
	// nm :  the description of the apartment plan
	int idx, jdx;
	int n, m;

	cin >> n >> m;
	char nm[2000][2000];

	for(idx=0;idx<n;idx++)
		for(jdx=0;jdx<m;jdx++)
			cin >> nm[idx][jdx];


	// write your code here
	// store your results in `new_plan`

	// output
	// Dummy Data
	char new_plan[2000][2000]={{'.','*','.','*','.'},{'*','*','*','*','*'},{'.','*','.','*','.'},{'*','*','*','*','*'},{'.','*','.','*','.'}};

	for(idx=0;idx<n;idx++) {
		for(jdx=0;jdx<m;jdx++) {
			cout << new_plan[idx][jdx];
		}
		cout << endl;
	}

}