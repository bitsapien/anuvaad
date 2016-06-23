#!/usr/bin/python
# Name : Pony Sequence
# input:
# n : number of elements in the sequences in a and b
# a : sequence a
n = int(raw_input().strip())
a_elements = raw_input().strip().split(' ')
a = map(int, a_elements)


# write your code here
# store your results in `b`

# output

# Dummy Data
b = [1,1,1,1,1]

print(" ".join(str(e) for e in b))