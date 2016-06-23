// Name : Snowflakes
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : length of array
	// k : number of  letters of the English alphabet
	// english_letters :  contains n uppercase English letters
		int n, k;

	cin >> n >> k;
	string english_letters;
	cin >> english_letters;


	// write your code here
	// store your results in `min_number_of_changes`,`changed_array`

	// output
	// Dummy Data
	int min_number_of_changes=2;
	string changed_array="ABCACA";

	cout << min_number_of_changes << endl;
	cout << changed_array << endl;

}