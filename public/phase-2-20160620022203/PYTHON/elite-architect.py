#!/usr/bin/python
# Name : Elite Architect
# input:
# n : the number of Buildings in the capital of Nippon
# h :  number of stories in each building
n = int(raw_input().strip())
h_elements = raw_input().strip().split(' ')
h = map(int, h_elements)


# write your code here
# store your results in `a`

# output

# Dummy Data
a = [3,2,0,2,0]

print(" ".join(str(e) for e in a))