// Name : Strings Problemo
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// s : latin characters
	// t : latin characters
	// n : the number of possible replacements
	// abw : each row corresponds to a b w for each possible replacement
	int idx, jdx;
	string s;
	cin >> s;
	string t;
	cin >> t;
	int n;
	cin >> n;
	char abw[500][3];

	for(idx=0;idx<n;idx++)
		for(jdx=0;jdx<3;jdx++)
			cin >> abw[idx][jdx];


	// write your code here
	// store your results in `answer`,`resulting_string`

	// output
	// Dummy Data
	int answer=21;
	string resulting_string="uxyd";

	cout << answer << endl;
	cout << resulting_string << endl;

}