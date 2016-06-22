// Name : Boy and Boxes
// input:
// n :  the number of boxes
// x : number of the
// a :  number of balls in each box
var index,result;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var x = parseInt(elements[1], 10);
var a = [];
var a_elements = readline().split(' ');
for(index=0;index<n;index++)
	a.push(parseInt(a_elements[index], 10));


// write your code here
// store your results in `result`

// Dummy Data
result = [3,2,5,4];


// output
print(result.join(" "))