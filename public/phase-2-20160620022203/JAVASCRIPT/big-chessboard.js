// Name : Big Chessboard
// input:
// x0 : start point
// y0 : start point
// x1 : destination point
// y1 : destination point
// n : number of segments of the permitted cells
// rab : each row of rab corresponds to ri ai bi
var idx,minimum_moves;
var elements = readline().split(" ");
var x0 = parseInt(elements[0], 10);
var y0 = parseInt(elements[1], 10);
var x1 = parseInt(elements[2], 10);
var y1 = parseInt(elements[3], 10);
var n = parseInt(readline(), 10);
var rab = new Array([]);
var rab_elements = "";
for(idx=0;idx<n;idx++){
	rab_elements = readline().split(' ');
	rab[idx] = new Array([]);
	for(jdx=0;jdx<3;jdx++){
		rab[idx][jdx] = parseInt(rab_elements[jdx], 10);
	}
}

// write your code here
// store your results in `minimum_moves`

// Dummy Data
minimum_moves = 4;


// output
print(minimum_moves);
