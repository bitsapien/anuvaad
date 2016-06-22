// Name : Pocket money
// input:
// n : the number of exams
// r :  the maximum score
// avg : average score required to double his pocket money
// ab : ab corresponds to ai bi
var idx,result;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var r = parseInt(elements[1], 10);
var avg = parseInt(elements[2], 10);
var ab = new Array([]);
var ab_elements = "";
for(idx=0;idx<n;idx++){
	ab_elements = readline().split(' ');
	ab[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		ab[idx][jdx] = parseInt(ab_elements[jdx], 10);
	}
}

// write your code here
// store your results in `result`

// Dummy Data
result = 4;


// output
print(result);
