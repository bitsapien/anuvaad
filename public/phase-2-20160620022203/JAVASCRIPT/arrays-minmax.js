// Name : Arrays Minmax
// input:
// n : size of a
// m : size of b
// a : array A
// b : array B
var index,minimum_num_of_operations;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var a = [];
var a_elements = readline().split(' ');
for(index=0;index<n;index++)
	a.push(parseInt(a_elements[index], 10));
var b = [];
var b_elements = readline().split(' ');
for(index=0;index<m;index++)
	b.push(parseInt(b_elements[index], 10));


// write your code here
// store your results in `minimum_num_of_operations`

// Dummy Data
minimum_num_of_operations = 3;


// output
print(minimum_num_of_operations);
