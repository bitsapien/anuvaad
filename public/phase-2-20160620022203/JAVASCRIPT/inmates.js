// Name : Inmates
// input:
// n : number of prisoners
// t : crime threshold
// c : selected inmates
// severity :  severity of the crime committed by each inmate
var index,result;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var t = parseInt(elements[1], 10);
var c = parseInt(elements[2], 10);
var severity = [];
var severity_elements = readline().split(' ');
for(index=0;index<n;index++)
	severity.push(parseInt(severity_elements[index], 10));


// write your code here
// store your results in `result`

// Dummy Data
result = 2;


// output
print(result);
