// Name : A and B and Compilation Errors
// input:
// n :  the initial number of compilation errors
// a : 
// b : 
// c : 
var index,errors_disappeared_after_first_correction,errors_disappeared_after_second_correction;
var n = parseInt(readline(), 10);
var a = [];
var a_elements = readline().split(' ');
for(index=0;index<n;index++)
	a.push(parseInt(a_elements[index], 10));
var b = [];
var b_elements = readline().split(' ');
for(index=0;index<(n-1);index++)
	b.push(parseInt(b_elements[index], 10));
var c = [];
var c_elements = readline().split(' ');
for(index=0;index<(n-2);index++)
	c.push(parseInt(c_elements[index], 10));


// write your code here
// store your results in `errors_disappeared_after_first_correction`,`errors_disappeared_after_second_correction`

// Dummy Data
errors_disappeared_after_first_correction = 8;
errors_disappeared_after_second_correction = 123;


// output
print(errors_disappeared_after_first_correction);
print(errors_disappeared_after_second_correction);
