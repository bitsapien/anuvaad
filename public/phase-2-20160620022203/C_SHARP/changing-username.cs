// Name : Changing Username
using System;
namespace Application {
	class changing_username {
		public static void Main(string[] args) {
		// input:
		// q :  number of username change requests
		// old_and_new : 
		int idx;
		int jdx;
		int q = Convert.ToInt32(Console.ReadLine());
		string[,] old_and_new = new string[q,2];
		string[] old_and_new_elements = new string[100];
		for(idx=0;idx<q;idx++){
			old_and_new_elements = (Console.ReadLine()).Split(' ');
			for(jdx=0;jdx<2;jdx++){
				old_and_new[idx,jdx] = old_and_new_elements[jdx];
			}
		}


		// write your code here
		// store your results in `number_of_people_that_changed_usernames`,`first_and_current`

		// output
		// Dummy Data
		int number_of_people_that_changed_usernames=2;
		string[][] first_and_current= new string[number_of_people_that_changed_usernames][2];

		Console.WriteLine(number_of_people_that_changed_usernames);
for(idx=0;idx<number_of_people_that_changed_usernames;idx++){
			Console.WriteLine(string.Join(" ", first_and_current[idx]));
		}
		}	
	}
}