// Name : A Bag
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : number of toolkits
	// volume_of_each_toolkit : volume of each toolkit
	int index;
	cin >> n;
	int volume_of_each_toolkit[n];

	for(index=0;index<n;index++)
		cin >> volume_of_each_toolkit[index];


	// write your code here
	// store your results in `minimum_number_of_bags`

	// output
	// Dummy Data
	int minimum_number_of_bags=4;

	cout << minimum_number_of_bags;

}