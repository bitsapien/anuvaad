// Name : Greedy Man
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n : the number of devices that will fit into
	// m : e number of smartphones available for sale
	// a : price of a smartphones
	int index;
	int n, m;

	cin >> n >> m;
	int  a[m];

	for(index=0;index<m;index++)
		cin >> a[index];


	// write your code here
	// store your results in `maximum_sum_of_money`

	// output
	// Dummy Data
	int maximum_sum_of_money=8;

	cout << maximum_sum_of_money;

}