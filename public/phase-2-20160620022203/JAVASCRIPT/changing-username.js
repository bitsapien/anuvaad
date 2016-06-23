// Name : Changing Username
// input:
// q :  number of username change requests
// old_and_new : 
var idx,number_of_people_that_changed_usernames,first_and_current;
var q = parseInt(readline(), 10);
var old_and_new = new Array([]);
var old_and_new_elements = "";
for(idx=0;idx<q;idx++){
	old_and_new_elements = readline().split(' ');
	old_and_new[idx] = new Array([]);
	for(jdx=0;jdx<2;jdx++){
		old_and_new[idx][jdx] = old_and_new_elements[jdx];
	}
}


// write your code here
// store your results in `number_of_people_that_changed_usernames`,`first_and_current`

// Dummy Data
number_of_people_that_changed_usernames = 2;
first_and_current = ;


// output
print(number_of_people_that_changed_usernames);
for(idx=0;idx<number_of_people_that_changed_usernames;idx++){
	print(first_and_current[idx].join(' '));
}
