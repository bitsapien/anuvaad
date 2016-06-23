// Name : Forgotten Password
// input:
// n :  the number of digits in the password 
// m :  the number of
// sc : each row contains si ci
var idx,result;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var sc = new Array([]);
var sc_elements = "";
for(idx=0;idx<m;idx++){
	sc_elements = readline().split(' ');
	sc[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		sc[idx][jdx] = sc_elements[jdx];
	}
}


// write your code here
// store your results in `result`

// Dummy Data
result = 6;


// output
print(result);
