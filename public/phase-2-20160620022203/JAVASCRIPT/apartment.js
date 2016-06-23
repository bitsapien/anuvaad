// Name : Apartment
// input:
// n :  the size of Shalkan’s apartment plan
// m : the size of Shalkan’s apartment plan
// nm :  the description of the apartment plan
var idx,new_plan;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var nm = new Array([]);
var nm_elements = "";
for(idx=0;idx<n;idx++){
	nm_elements = readline().split(' ');
	nm[idx] = new Array([]);
	for(jdx=0;jdx<m;jdx++){
		nm[idx][jdx] = nm_elements[jdx];
	}
}


// write your code here
// store your results in `new_plan`

// Dummy Data
new_plan = [['.','*','.','*','.'],['*','*','*','*','*'],['.','*','.','*','.'],['*','*','*','*','*'],['.','*','.','*','.']];


// output
for(idx=0;idx<n;idx++){
	print(new_plan[idx].join(' '));
}
