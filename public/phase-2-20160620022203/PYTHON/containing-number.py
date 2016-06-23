#!/usr/bin/python
# Name : Containing Number
# input:
# n : count of the following numbers
# k : k
# numbers_to_check : 
elements = raw_input().strip().split(' ')
n = int(elements[0])
k = int(elements[1])
numbers_to_check = []
for _ in xrange(n):
	numbers_to_check_elements = raw_input().strip().split(' ')
	numbers_to_check.append(map(int, numbers_to_check_elements))


# write your code here
# store your results in `result`

# output

# Dummy Data
result = 2

print(result)
