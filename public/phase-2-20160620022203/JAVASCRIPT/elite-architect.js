// Name : Elite Architect
// input:
// n : the number of Buildings in the capital of Nippon
// h :  number of stories in each building
var index,a;
var n = parseInt(readline(), 10);
var h = [];
var h_elements = readline().split(' ');
for(index=0;index<n;index++)
	h.push(parseInt(h_elements[index], 10));


// write your code here
// store your results in `a`

// Dummy Data
a = [3,2,0,2,0];


// output
print(a.join(" "))
