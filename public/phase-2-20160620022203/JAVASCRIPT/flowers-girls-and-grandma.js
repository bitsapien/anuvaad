// Name : Flowers Girls and Grandma
// input:
// n :  the number of girls
// p : Grandmas favourite prime number
// lr : each row corresponds to the range of flowers that each girl can grow
var idx,result;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var p = parseInt(elements[1], 10);
var lr = new Array([]);
var lr_elements = "";
for(idx=0;idx<n;idx++){
	lr_elements = readline().split(' ');
	lr[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		lr[idx][jdx] = parseInt(lr_elements[jdx], 10);
	}
}


// write your code here
// store your results in `result`

// Dummy Data
result = 0.0;


// output
print(result);
