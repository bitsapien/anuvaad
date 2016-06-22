#!/usr/bin/python
# Name : Boy and Boxes
# input:
# n :  the number of boxes
# x : number of the
# a :  number of balls in each box
elements = raw_input().strip().split(' ')
n = int(elements[0])
x = int(elements[1])
a_elements = raw_input().strip().split(' ')
a = map(int, a_elements)


# write your code here
# store your results in `result`

# output

# Dummy Data
result = [3,2,5,4]

print(" ".join(str(e) for e in result))