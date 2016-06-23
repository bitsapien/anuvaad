// Name : Changing Username
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// input:
		// q :  number of username change requests
		// old_and_new : 
		int idx;
		int jdx;
		Scanner in = new Scanner(System.in);
		int q = Integer.parseInt(in.nextLine());
		String[][] old_and_new = new String[q][2];
		String[] old_and_new_elements = new String[100];
		for(idx=0;idx<q;idx++){
			old_and_new_elements = (in.nextLine()).split(" ");
			for(jdx=0;jdx<2;jdx++){
				old_and_new[idx][jdx] = old_and_new_elements[jdx];
			}
		}


		// write your code here
		// store your results in `number_of_people_that_changed_usernames`,`first_and_current`

		// output
		// Dummy Data
		int number_of_people_that_changed_usernames=2;
		String[][] first_and_current[1000][2]= new String[number_of_people_that_changed_usernames][2];

		System.out.println(number_of_people_that_changed_usernames);
for(idx=0;idx<number_of_people_that_changed_usernames;idx++){
			System.out.println(join_string(Arrays.toString(first_and_current[idx])));
		}
	}
	public static String join_string(String inp) {
		return inp.replace("[","").replace("]","").replace(",","");
	}
}