#!/usr/bin/python
# Name : Changing Username
# input:
# q :  number of username change requests
# old_and_new : 
q = int(raw_input().strip())
old_and_new = []
for _ in xrange(q):
	old_and_new_elements = raw_input().strip().split(' ')
	old_and_new.append(old_and_new_elements)


# write your code here
# store your results in `number_of_people_that_changed_usernames`,`first_and_current`

# output

# Dummy Data
number_of_people_that_changed_usernames = 2
first_and_current = 

print(number_of_people_that_changed_usernames)
for idx in xrange(number_of_people_that_changed_usernames):
	print(" ".join(str(e) for e in first_and_current[idx]))