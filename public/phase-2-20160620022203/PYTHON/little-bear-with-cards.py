#!/usr/bin/python
# Name : Little Bear With Cards
# input:
# n :  the number of cards
# description : 
n = int(raw_input().strip())
description = []
for _ in xrange(n):
	description_elements = raw_input().strip().split(' ')
	description.append(map(int, description_elements))


# write your code here
# store your results in `steps`

# output

# Dummy Data
steps = 0

print(steps)
