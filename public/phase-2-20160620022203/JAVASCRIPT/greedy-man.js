// Name : Greedy Man
// input:
// n :  the number of devices that will fit into
// m :  the number of smartphones available for sale
// a : 
var index,result;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var a = [];
var a_elements = readline().split(' ');
for(index=0;index<n;index++)
	a.push(parseInt(a_elements[index], 10));


// write your code here
// store your results in `result`

// Dummy Data
result = 8;


// output
print(result);
