// Name : Changing Username
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// q :  number of username change requests
	// old_and_new : 
	int idx, jdx;
	int q;
	cin >> q;
	string old_and_new[1000][2];

	for(idx=0;idx<q;idx++)
		for(jdx=0;jdx<2;jdx++)
			cin >> old_and_new[idx][jdx];


	// write your code here
	// store your results in `number_of_people_that_changed_usernames`,`first_and_current`

	// output
	// Dummy Data
	int number_of_people_that_changed_usernames=2;
string first_and_current[1000][2];

	cout << number_of_people_that_changed_usernames << endl;
	for(idx=0;idx<number_of_people_that_changed_usernames;idx++) {
		for(jdx=0;jdx<2;jdx++) {
			cout << first_and_current[idx][jdx];
		}
		cout << endl;
	}

}