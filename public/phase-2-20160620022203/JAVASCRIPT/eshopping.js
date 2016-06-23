// Name : EShopping
// input:
// n :  number of phone models' descriptions in the shop
// description :  zero stands for an unread description one for a read description
var index,clicks;
var n = parseInt(readline(), 10);
var description = [];
var description_elements = readline().split(' ');
for(index=0;index<n;index++)
	description.push(parseInt(description_elements[index], 10));


// write your code here
// store your results in `clicks`

// Dummy Data
clicks = 9;


// output
print(clicks);
