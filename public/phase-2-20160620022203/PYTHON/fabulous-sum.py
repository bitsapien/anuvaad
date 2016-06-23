#!/usr/bin/python
# Name : Fabulous Sum
# input:
# t :  the amount of numbers for which you need to calculate the requested sum
# n : 
t = int(raw_input().strip())
n = []
for _ in xrange(t):
	n_elements = raw_input().strip().split(' ')
	n.append(map(int, n_elements))


# write your code here
# store your results in `sum`

# output

# Dummy Data
sum = [[-4],[499999998352516354]]

for idx in xrange(t):
	print(" ".join(str(e) for e in sum[idx]))