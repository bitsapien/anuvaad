// Name : Junior Broker
// input:
// n :  number of days
// e :  amount of Euro Finn has on the first day
// a :  the currency rate of Dollar to Euro on day i
var index,result;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var e = parseInt(elements[1], 10);
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
