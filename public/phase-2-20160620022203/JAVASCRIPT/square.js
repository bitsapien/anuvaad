// Name : Square
// input:
// k :  count of cases
// an : integers a and n in every row
var idx,roots;
var k = parseInt(readline(), 10);
var an = new Array([]);
var an_elements = "";
for(idx=0;idx<k;idx++){
	an_elements = readline().split(' ');
	an[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		an[idx][jdx] = parseInt(an_elements[jdx], 10);
	}
}


// write your code here
// store your results in `roots`

// Dummy Data
roots = "No root";


// output
print(roots);
