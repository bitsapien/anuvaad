// Name : Strings Problemo
// input:
// s : latin characters
// t : latin characters
// n : the number of possible replacements
// abw : each row corresponds to a b w for each possible replacement
var idx,answer,resulting_string;
var s = readline();
var t = readline();
var n = parseInt(readline(), 10);
var abw = new Array([]);
var abw_elements = "";
for(idx=0;idx<n;idx++){
	abw_elements = readline().split(' ');
	abw[idx] = new Array([]);
	for(jdx=0;jdx<3;jdx++){
		abw[idx][jdx] = abw_elements[jdx];
	}
}


// write your code here
// store your results in `answer`,`resulting_string`

// Dummy Data
answer = 21;
resulting_string = "uxyd";


// output
print(answer);
print(resulting_string);
