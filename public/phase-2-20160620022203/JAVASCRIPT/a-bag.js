// Name : A Bag
// input:
// n : number of toolkits
// volume : volume of each toolkit
var index,minimum_number_of_bags;
var n = parseInt(readline(), 10);
var volume = [];
var volume_elements = readline().split(' ');
for(index=0;index<n;index++)
	volume.push(parseInt(volume_elements[index], 10));


// write your code here
// store your results in `minimum_number_of_bags`

// Dummy Data
minimum_number_of_bags = 4;


// output
print(minimum_number_of_bags);
