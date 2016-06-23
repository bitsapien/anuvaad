// Name : Factorial game
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// t :  the number of games the soldiers play
	// ab :  each row containing a pair of integers a and b defining the value of n for each game
	int idx, jdx;
	int t;
	cin >> t;
	int ab[1000000][2];

	for(idx=0;idx<t;idx++)
		for(jdx=0;jdx<2;jdx++)
			cin >> ab[idx][jdx];


	// write your code here
	// store your results in `max_score_for_soldiers`

	// output
	// Dummy Data
	int max_score_for_soldiers[100000][1]={{2},{5}};

	for(idx=0;idx<t;idx++) {
		for(jdx=0;jdx<1;jdx++) {
			cout << max_score_for_soldiers[idx][jdx];
		}
		cout << endl;
	}

}