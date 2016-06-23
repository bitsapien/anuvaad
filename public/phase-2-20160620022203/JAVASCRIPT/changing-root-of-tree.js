// Name : Changing Root of tree
// input:
// n :  the amount of nodes in the tree
// r1 : index of the old root
// r2 : e index of the new one
// old_tree :  old representation of the tree
var index,new_tree;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var r1 = parseInt(elements[1], 10);
var r2 = parseInt(elements[2], 10);
var old_tree = [];
var old_tree_elements = readline().split(' ');
for(index=0;index<(n-1);index++)
	old_tree.push(parseInt(old_tree_elements[index], 10));


// write your code here
// store your results in `new_tree`

// Dummy Data
new_tree = {2,3};


// output
print(new_tree.join(" "))
