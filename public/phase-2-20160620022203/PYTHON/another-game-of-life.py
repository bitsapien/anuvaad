#!/usr/bin/python
# Name : Another Game of Life
# input:
# n :  the size of the map
# m :  the number of populations that want to
elements = raw_input().strip().split(' ')
n = int(elements[0])
m = int(elements[1])


# write your code here
# store your results in `exists`,`territory`

# output

# Dummy Data
exists = "NO"
territory = [['']]

print(exists)
if(exists=="YES"):
	for idx in xrange(n):
		print(" ".join(str(e) for e in territory[idx]))