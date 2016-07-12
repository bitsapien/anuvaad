// Name : Two Piles of Balls
// input:
// n : number of balls in a pile
// a : 
var index,result,b;
var n = parseInt(readline(), 10);
var a = [];
var a_elements = readline().split(' ');
for(index=0;index<(2*n);index++)
	a.push(parseInt(a_elements[index], 10));


// write your code here
// store your results in `result`,`b`

// Dummy Data
result = 1;
b = [2,1];


// output
print(result);
print(b.join(" "))
