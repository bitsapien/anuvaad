// Name : Treepath
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	// input:
	// n :  the number of vertices
	// m :  edges of the graph
	// uvw : each row has the  numbers of the
	// u :  the number of the starting vertex
		int idx, jdx, index;
		int n, m;

	cin >> n >> m;
		int uvw[10000][3];

	for(idx=0;idx<m;idx++)
		for(jdx=0;jdx<3;jdx++)
			cin >> uvw[idx][jdx];
		int u;
	cin >> u;


	// write your code here
	// store your results in `minimal_total_weight`,`indices_of_edges`

	// output
	// Dummy Data
		int minimal_total_weight=2, indices_of_edges[10000]={1,2};

	cout << minimal_total_weight << endl;
for(index=0;index<n;index++)
		cout << indices_of_edges[index] << " ";

}