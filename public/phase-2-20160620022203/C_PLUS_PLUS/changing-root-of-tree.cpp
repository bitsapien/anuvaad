// Name : Changing Root of tree
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the amount of nodes in the tree
	// r1 : index of the old root
	// r2 : e index of the new one
	// old_tree :  old representation of the tree
	int index;
	int n, r1, r2;

	cin >> n >> r1 >> r2;
	int old_tree[104];

	for(index=0;index<(n-1);index++)
		cin >> old_tree[index];


	// write your code here
	// store your results in `new_tree`

	// output
	// Dummy Data
	int new_tree[104]={2,3};

	for(index=0;index<(n-1);index++)
		cout << new_tree[index] << " ";

}