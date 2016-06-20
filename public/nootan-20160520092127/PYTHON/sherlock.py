#!/usr/bin/python
# Name : Sherlock
# input:
# n : size
# m : size
# map : ratio
elements = input().split(' ')
n = int(elements[0]);
m = int(elements[1]);
for _ in xrange(n):
	map_elements = input().split(' ')
	map = (e for e in map_elements)


# write your code here
# store your results in `row`,`column`

# output
print(str(row)+" "+str(column));
