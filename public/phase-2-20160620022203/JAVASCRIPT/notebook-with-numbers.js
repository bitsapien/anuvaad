// Name : Notebook with Numbers 
// input:
// n : number of sheets
// k : 
// a : 
var index,maximum_sum,r;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var k = parseInt(elements[1], 10);
var a = [];
var a_elements = readline().split(' ');
for(index=0;index<n;index++)
	a.push(parseInt(a_elements[index], 10));


// write your code here
// store your results in `maximum_sum`,`r`

// Dummy Data
maximum_sum = 27;
r = [3,4,5,8];


// output
print(maximum_sum);
print(r.join(" "))
