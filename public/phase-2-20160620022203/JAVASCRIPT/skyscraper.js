// Name : Skyscraper
// input:
// n : number of skyscrapers
// k : number of stories to move
// h : each row has height of each skyscraper
var index,j;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var k = parseInt(elements[1], 10);
var h = [];
var h_elements = readline().split(' ');
for(index=0;index<n;index++)
	h.push(parseInt(h_elements[index], 10));


// write your code here
// store your results in `j`

// Dummy Data
j = 3;


// output
print(j);
