// Name : Fabulous Sum
// input:
// t :  the amount of numbers for which you need to calculate the requested sum
// n : 
var idx,sum;
var t = parseInt(readline(), 10);
var n = new Array([]);
var n_elements = "";
for(idx=0;idx<t;idx++){
	n_elements = readline().split(' ');
	n[idx] = new Array([]);
	for(jdx=0;jdx<1;jdx++){
		n[idx][jdx] = parseInt(n_elements[jdx], 10);
	}
}


// write your code here
// store your results in `sum`

// Dummy Data
sum = [[-4],[499999998352516354]];


// output
for(idx=0;idx<t;idx++){
	print(sum[idx].join(' '));
}
