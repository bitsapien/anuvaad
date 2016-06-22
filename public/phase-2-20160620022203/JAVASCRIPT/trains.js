// Name : Trains
// input:
// n : number of cities
// m : number of  roads connecting the cities
// k : number of railways
// uvx : uvx corresponds to ui vi xi
// sy : uvx corresponds to si yi
var idx,result;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var k = parseInt(elements[2], 10);
var uvx = new Array([]);
var uvx_elements = "";
for(idx=0;idx<m;idx++){
	uvx_elements = readline().split(' ');
	uvx[idx] = new Array([]);
	for(jdx=0;jdx<3;jdx++){
		uvx[idx][jdx] = parseInt(uvx_elements[jdx], 10);
	}
}var sy = new Array([]);
var sy_elements = "";
for(idx=0;idx<k;idx++){
	sy_elements = readline().split(' ');
	sy[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		sy[idx][jdx] = parseInt(sy_elements[jdx], 10);
	}
}

// write your code here
// store your results in `result`

// Dummy Data
result = 2;


// output
print(result);
