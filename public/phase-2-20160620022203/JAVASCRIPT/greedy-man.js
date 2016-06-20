// Name : Greedy Man
// input:
// m : number of devices
// n : number of phones
// phones : smart phones
var index,max;
var elements = readline().split(" ");
var m = parseInt(elements[0], 10);
var n = parseInt(elements[1], 10);
var phones = [];
var phones_elements = readline().split(' ');
for(index=0;index<m;index++)
	phones.push(parseInt(phones_elements[index], 10));


// write your code here
// store your results in `max`

// Dummy Data
max = 8;


// output
print(max);
