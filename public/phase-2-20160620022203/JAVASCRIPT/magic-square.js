// Name : Magic Square
// input:
// original_magic_square : original magic square
var idx,repaired_magic_square;
var original_magic_square = new Array([]);
var original_magic_square_elements = "";
for(idx=0;idx<3;idx++){
	original_magic_square_elements = readline().split(' ');
	original_magic_square[idx] = new Array([]);
	for(jdx=0;jdx<3;jdx++){
		original_magic_square[idx][jdx] = parseInt(original_magic_square_elements[jdx], 10);
	}
}


// write your code here
// store your results in `repaired_magic_square`

// Dummy Data
repaired_magic_square = [[4,4,4],[4,4,4],[4,4,4]];


// output
for(idx=0;idx<3;idx++){
	print(repaired_magic_square[idx].join(' '));
}
