// Name : Add and Remove
// input:
// n : size of array
// a : source array
var index,maximum_number_of_equal_elements;
var n = parseInt(readline(), 10);
var a = [];
var a_elements = readline().split(' ');
for(index=0;index<n;index++)
	a.push(parseInt(a_elements[index], 10));


// write your code here
// store your results in `maximum_number_of_equal_elements`

// Dummy Data
maximum_number_of_equal_elements = 1;


// output
print(maximum_number_of_equal_elements);
