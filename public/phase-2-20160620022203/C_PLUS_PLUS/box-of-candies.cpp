// Name : Box of Candies
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the number of boxes with candies James and Jessica have
	// a :  the number of candies in the every bag
	int index;
	int n;
	cin >> n;
	int  a[n];

	for(index=0;index<n;index++)
		cin >> a[index];


	// write your code here
	// store your results in `sought_number_of_ways`

	// output
	// Dummy Data
	int sought_number_of_ways=1;

	cout << sought_number_of_ways;

}