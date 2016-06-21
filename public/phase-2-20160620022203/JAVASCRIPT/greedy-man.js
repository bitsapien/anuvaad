// Name : Greedy Man
// input:
// n : the number of devices that will fit into
// m : e number of smartphones available for sale
// a : price of a smartphones
var index,maximum_sum_of_money;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var a = [];
var a_elements = readline().split(' ');
for(index=0;index<m;index++)
	a.push(parseInt(a_elements[index], 10));


// write your code here
// store your results in `maximum_sum_of_money`

// Dummy Data
maximum_sum_of_money = 8;


// output
print(maximum_sum_of_money);
