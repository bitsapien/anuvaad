// Name : Snowflakes
// input:
// n : length of array
// k : number of  letters of the English alphabet
// english_letters :  contains n uppercase English letters
var min_number_of_changes,changed_array;
var elements = readline().split(" ");
var n = parseInt(elements[0], 10);
var k = parseInt(elements[1], 10);
var english_letters = readline();


// write your code here
// store your results in `min_number_of_changes`,`changed_array`

// Dummy Data
min_number_of_changes = 2;
changed_array = "ABCACA";


// output
print(min_number_of_changes);
print(changed_array);
