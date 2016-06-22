#!/usr/bin/python
# Name : Trains
# input:
# n : number of cities
# m : number of  roads connecting the cities
# k : number of railways
# uvx : uvx corresponds to ui vi xi
# sy : uvx corresponds to si yi
elements = raw_input().strip().split(' ')
n = int(elements[0])
m = int(elements[1])
k = int(elements[2])
uvx = []
for _ in xrange(m):
	uvx_elements = raw_input().strip().split(' ')
	uvx.append(map(int, uvx_elements))
sy = []
for _ in xrange(k):
	sy_elements = raw_input().strip().split(' ')
	sy.append(map(int, sy_elements))


# write your code here
# store your results in `result`

# output

# Dummy Data
result = 2

print(result)
