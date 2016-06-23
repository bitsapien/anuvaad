#!/usr/bin/python
# Name : Going to a Bar
# input:
# n :  the number of streets in Berlin
# m : the number of avenues in Berlin
# a :  the cost of spending a night in a bar at the intersection of street N and avenue M
elements = raw_input().strip().split(' ')
n = int(elements[0])
m = int(elements[1])
a = []
for _ in xrange(n):
	a_elements = raw_input().strip().split(' ')
	a.append(map(int, a_elements))


# write your code here
# store your results in `cost`

# output

# Dummy Data
cost = 2

print(cost)
