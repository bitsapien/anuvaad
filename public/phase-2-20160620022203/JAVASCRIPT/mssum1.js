// Name : MSSUM1
// input:
// n :  the number of elements in the array
// q :  the number of queries correspondingly
// a :  the array elements
// lr : each row corresponds to l and r
var index,sum_of_replies;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var q = parseInt(elements[1], 10);
var a = [];
var a_elements = readline().split(' ');
for(index=0;index<n;index++)
	a.push(parseInt(a_elements[index], 10));
var lr = new Array([]);
var lr_elements = "";
for(idx=0;idx<q;idx++){
	lr_elements = readline().split(' ');
	lr[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		lr[idx][jdx] = parseInt(lr_elements[jdx], 10);
	}
}


// write your code here
// store your results in `sum_of_replies`

// Dummy Data
sum_of_replies = 25;


// output
print(sum_of_replies);
