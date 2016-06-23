// Name : Pony Sequence
// input:
// n : number of elements in the sequences in a and b
// a : sequence a
var index,b;
var n = parseInt(readline(), 10);
var a = [];
var a_elements = readline().split(' ');
for(index=0;index<n;index++)
	a.push(parseInt(a_elements[index], 10));


// write your code here
// store your results in `b`

// Dummy Data
b = [1,1,1,1,1];


// output
print(b.join(" "))
