// Name : Dirty Stairs
// input:
// n :  number of steps in the staircase
// m : number of dirty steps
// d :  numbers of dirty steps 
var index,result;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var d = [];
var d_elements = readline().split(' ');
for(index=0;index<m;index++)
	d.push(parseInt(d_elements[index], 10));


// write your code here
// store your results in `result`

// Dummy Data
result = "YES";


// output
print(result);
