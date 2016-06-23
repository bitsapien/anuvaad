// Name : Sort
// input:
// n : number of subjects
// m : the number of limitations
// su : pairs si ui which describe the order of subjects
// sequence : 
var idx,correct;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var m = parseInt(elements[1], 10);
var su = new Array([]);
var su_elements = "";
for(idx=0;idx<m;idx++){
	su_elements = readline().split(' ');
	su[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		su[idx][jdx] = parseInt(su_elements[jdx], 10);
	}
}
var sequence = [];
var sequence_elements = readline().split(' ');
for(index=0;index<n;index++)
	sequence.push(parseInt(sequence_elements[index], 10));


// write your code here
// store your results in `correct`

// Dummy Data
correct = "YES";


// output
print(correct);
