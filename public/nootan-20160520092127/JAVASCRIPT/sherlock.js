// Name : Sherlock
// input:
// n : size
// m : size
// map : ratio
var idx,jdx;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var map = new Array([]);
var map_elements = "";
for(idx=0;idx<n;idx++){
	map_elements = readline().split(' ');
	map[idx] = new Array([]);
	for(jdx=0;jdx<m;jdx++){
		map[idx][jdx] = map_elements[jdx];
	}
}

// write your code here
// store your results in `row`,`column`

// output
print(row+" "+column);
