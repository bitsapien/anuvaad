#!/usr/bin/python
# Name : Elegance of a Sequence
# input:
# n : length of sequence of a
# a : sequence a
n = int(raw_input().strip())
a_elements = raw_input().strip().split(' ')
a = map(int, a_elements)


# write your code here
# store your results in `k`,`b`

# output

# Dummy Data
k = 2
b = [4,5]

print(k)
print(" ".join(str(e) for e in b))