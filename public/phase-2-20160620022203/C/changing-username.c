// Name : Changing Username
#include <stdio.h>
int main() {
	// input:
	// q :  number of username change requests
	// old_and_new : 
	int q, number_of_people_that_changed_usernames=2, idx, jdx;
	char old_and_new[1000][2][105], first_and_current[1000][2][105];
	char old_and_new_tmp[2], first_and_current_tmp[2];
	scanf("%d", &q);
	for(idx = 0; idx< q; idx++) {
		for(jdx = 0;jdx<2;jdx++) {
			scanf("%s", &old_and_new[idx][jdx][0]);
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