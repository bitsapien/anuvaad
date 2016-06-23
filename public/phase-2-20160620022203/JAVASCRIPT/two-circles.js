// Name : Two Circles
// input:
// n :  the number of points
// x1 : coordinates of first circle
// y1 : coordinates of first circle
// x2 : coordinates of second circle
// y2 :  coordinates of second circle
// xy :  each row contains integers xi and yi
var idx,minimum_value;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var x1 = parseInt(elements[1], 10);
var y1 = parseInt(elements[2], 10);
var x2 = parseInt(elements[3], 10);
var y2 = parseInt(elements[4], 10);
var xy = new Array([]);
var xy_elements = "";
for(idx=0;idx<n;idx++){
	xy_elements = readline().split(' ');
	xy[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		xy[idx][jdx] = parseInt(xy_elements[jdx], 10);
	}
}


// write your code here
// store your results in `minimum_value`

// Dummy Data
minimum_value = 6;


// output
print(minimum_value);
