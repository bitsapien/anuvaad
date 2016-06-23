// Name : Colored Balls
// input:
// k :  the number of colors
// c :  the number of balls of each color 
var idx,result;
var k = parseInt(readline(), 10);
var c = new Array([]);
var c_elements = "";
for(idx=0;idx<k;idx++){
	c_elements = readline().split(' ');
	c[idx] = new Array([]);
	for(jdx=0;jdx<1;jdx++){
		c[idx][jdx] = parseInt(c_elements[jdx], 10);
	}
}


// write your code here
// store your results in `result`

// Dummy Data
result = 3;


// output
print(result);
