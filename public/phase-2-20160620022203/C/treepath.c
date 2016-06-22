// Name : Treepath
#include <stdio.h>
int main() {
	// input:
	// n :  the number of vertices
	// m :  edges of the graph
	// uvw : each row has the  numbers of the
	// u :  the number of the starting vertex
	int n, m, uvw[10000][3], u, minimal_total_weight=2, indices_of_edges[10000]={1,2}, idx, jdx, index;
	char uvw_tmp[3];
	scanf("%d %d", &n, &m);
	for(idx = 0; idx< m; idx++) {
		scanf("%s", &uvw_tmp[0]);
		for(jdx = 0;jdx<3;jdx++) {
			uvw[idx][jdx] = uvw_tmp[jdx];
		}
	}
	scanf("%d", &u);


	// write your code here
	// store your results in `minimal_total_weight`,`indices_of_edges`

	// output
	printf("%d", minimal_total_weight);
	for(index = 0; index< n; index++) {
		printf("%d ",indices_of_edges[index]);
	}
	return 0;
}