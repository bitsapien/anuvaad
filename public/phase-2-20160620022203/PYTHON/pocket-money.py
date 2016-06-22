#!/usr/bin/python
# Name : Pocket money
# input:
# n : the number of exams
# r :  the maximum score
# avg : average score required to double his pocket money
# ab : ab corresponds to ai bi
elements = raw_input().strip().split(' ')
n = int(elements[0])
r = int(elements[1])
avg = int(elements[2])
ab = []
for _ in xrange(n):
	ab_elements = raw_input().strip().split(' ')
	ab.append(map(int, ab_elements))


# write your code here
# store your results in `result`

# output

# Dummy Data
result = 4

print(result)
