#!/usr/bin/python
# Name : Sort
# input:
# n : number of subjects
# m : the number of limitations
# su : pairs si ui which describe the order of subjects
# sequence : 
elements = raw_input().strip().split(' ')
n = int(elements[0])
m = int(elements[1])
su = []
for _ in xrange(m):
	su_elements = raw_input().strip().split(' ')
	su.append(map(int, su_elements))
sequence_elements = raw_input().strip().split(' ')
sequence = map(int, sequence_elements)


# write your code here
# store your results in `correct`

# output

# Dummy Data
correct = "YES"

print(correct)
