// Name : A Bag
// input:
// n : number of toolkits
// volume_of_each_toolkit : volume of each toolkit
var index,minimum_number_of_bags;
var n = parseInt(readline(), 10);
var volume_of_each_toolkit = [];
var volume_of_each_toolkit_elements = readline().split(' ');
for(index=0;index<n;index++)
	volume_of_each_toolkit.push(parseInt(volume_of_each_toolkit_elements[index], 10));


// write your code here
// store your results in `minimum_number_of_bags`

// Dummy Data
minimum_number_of_bags = 4;


// output
print(minimum_number_of_bags);
