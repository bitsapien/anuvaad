// Name : Greedy Man
// input:
// n : number of devices that will fit into steve
// m : number of smartphones available for sale
// price_of_smartphones : list of price of n smartphones
var index;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var price_of_smartphones = [];
var price_of_smartphones_elements = readline().split(' ');
for(index=0;index<n;index++)
	price_of_smartphones.push(parseInt(price_of_smartphones_elements[index], 10));


// write your code here
// store your results in `result`

// output
print(result);
