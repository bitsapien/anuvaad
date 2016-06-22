// Name : Treepath
// input:
// n :  the number of vertices
// m :  edges of the graph
// uvw : each row has the  numbers of the
// u :  the number of the starting vertex
var idx,minimal_total_weight,indices_of_edges;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var uvw = new Array([]);
var uvw_elements = "";
for(idx=0;idx<m;idx++){
	uvw_elements = readline().split(' ');
	uvw[idx] = new Array([]);
	for(jdx=0;jdx<3;jdx++){
		uvw[idx][jdx] = parseInt(uvw_elements[jdx], 10);
	}
}
var u = parseInt(readline(), 10);


// write your code here
// store your results in `minimal_total_weight`,`indices_of_edges`

// Dummy Data
minimal_total_weight = 2;
indices_of_edges = [1,2];


// output
print(minimal_total_weight);
print(indices_of_edges.join(" "))
