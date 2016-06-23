// Name : Going to a Bar
// input:
// n :  the number of streets in Berlin
// m : the number of avenues in Berlin
// a :  the cost of spending a night in a bar at the intersection of street N and avenue M
var idx,cost;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var a = new Array([]);
var a_elements = "";
for(idx=0;idx<n;idx++){
	a_elements = readline().split(' ');
	a[idx] = new Array([]);
	for(jdx=0;jdx<m;jdx++){
		a[idx][jdx] = parseInt(a_elements[jdx], 10);
	}
}


// write your code here
// store your results in `cost`

// Dummy Data
cost = 2;


// output
print(cost);
