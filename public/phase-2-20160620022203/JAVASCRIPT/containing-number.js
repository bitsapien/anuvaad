// Name : Containing Number
// input:
// n : count of the following numbers
// k : k
// numbers_to_check : 
var idx,result;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var k = parseInt(elements[1], 10);
var numbers_to_check = new Array([]);
var numbers_to_check_elements = "";
for(idx=0;idx<n;idx++){
	numbers_to_check_elements = readline().split(' ');
	numbers_to_check[idx] = new Array([]);
	for(jdx=0;jdx<1;jdx++){
		numbers_to_check[idx][jdx] = parseInt(numbers_to_check_elements[jdx], 10);
	}
}


// write your code here
// store your results in `result`

// Dummy Data
result = 2;


// output
print(result);
