// Name : Little Bear With Cards
// input:
// n :  the number of cards
// description : 
var idx,steps;
var n = parseInt(readline(), 10);
var description = new Array([]);
var description_elements = "";
for(idx=0;idx<n;idx++){
	description_elements = readline().split(' ');
	description[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		description[idx][jdx] = parseInt(description_elements[jdx], 10);
	}
}


// write your code here
// store your results in `steps`

// Dummy Data
steps = 0;


// output
print(steps);
