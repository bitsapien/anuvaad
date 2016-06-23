// Name : Factorial game
// input:
// t :  the number of games the soldiers play
// ab :  each row containing a pair of integers a and b defining the value of n for each game
var idx,max_score_for_soldiers;
var t = parseInt(readline(), 10);
var ab = new Array([]);
var ab_elements = "";
for(idx=0;idx<t;idx++){
	ab_elements = readline().split(' ');
	ab[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		ab[idx][jdx] = parseInt(ab_elements[jdx], 10);
	}
}


// write your code here
// store your results in `max_score_for_soldiers`

// Dummy Data
max_score_for_soldiers = [[2],[5]];


// output
for(idx=0;idx<t;idx++){
	print(max_score_for_soldiers[idx].join(' '));
}
