#!/usr/bin/python
# Name : Flowers Girls and Grandma
# input:
# n :  the number of girls
# p : Grandmas favourite prime number
# lr : each row corresponds to the range of flowers that each girl can grow
elements = raw_input().strip().split(' ')
n = int(elements[0])
p = int(elements[1])
lr = []
for _ in xrange(n):
	lr_elements = raw_input().strip().split(' ')
	lr.append(map(int, lr_elements))


# write your code here
# store your results in `result`

# output

# Dummy Data
result = 0.0

print(result)
