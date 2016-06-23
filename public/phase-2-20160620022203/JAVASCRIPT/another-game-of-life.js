// Name : Another Game of Life
// input:
// n :  the size of the map
// m :  the number of populations that want to
var idx,exists,territory;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);


// write your code here
// store your results in `exists`,`territory`

// Dummy Data
exists = "NO";
territory = [['']];


// output
print(exists);
if(exists=="YES"){
	for(idx=0;idx<n;idx++){
		print(territory[idx].join(' '));
	}
}
