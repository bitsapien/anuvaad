#!/usr/bin/python
# Name : Apartment
# input:
# n :  the size of Shalkan’s apartment plan
# m : the size of Shalkan’s apartment plan
# nm :  the description of the apartment plan
elements = raw_input().strip().split(' ')
n = int(elements[0])
m = int(elements[1])
nm = []
for _ in xrange(n):
	nm_elements = raw_input().strip().split(' ')
	nm.append(nm_elements)


# write your code here
# store your results in `new_plan`

# output

# Dummy Data
new_plan = [['.','*','.','*','.'],['*','*','*','*','*'],['.','*','.','*','.'],['*','*','*','*','*'],['.','*','.','*','.']]

for idx in xrange(n):
	print(" ".join(str(e) for e in new_plan[idx]))