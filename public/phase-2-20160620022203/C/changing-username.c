// Name : Changing Username
#include <stdio.h>
int main() {
	// input:
	// q :  number of username change requests
	// old_and_new : 
	int q, number_of_people_that_changed_usernames=2, idx, jdx;
	char old_and_new[105][1000][2], first_and_current[105][1000][2];
	char old_and_new_tmp[2], first_and_current_tmp[2];
	scanf("%d", &q);
	for(idx = 0; idx< q; idx++) {
		scanf("%s", &old_and_new_tmp[0]);
		for(jdx = 0;jdx<2;jdx++) {
			old_and_new[idx][jdx] = old_and_new_tmp[jdx];
		}
	}


	// write your code here
	// store your results in `number_of_people_that_changed_usernames`,`first_and_current`

	// output
	printf("%d", number_of_people_that_changed_usernames);
	for(idx = 0; idx< number_of_people_that_changed_usernames; idx++) {
		for(jdx = 0;jdx<2;jdx++) {
			printf("%s ",first_and_current[idx][jdx]);
		}
		printf("\n");
	}
	return 0;
}