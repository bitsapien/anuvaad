#!/usr/bin/python
# Name : MSSUM1
# input:
# n :  the number of elements in the array
# q :  the number of queries correspondingly
# a :  the array elements
# lr : each row corresponds to l and r
elements = raw_input().strip().split(' ')
n = int(elements[0])
q = int(elements[1])
a_elements = raw_input().strip().split(' ')
a = map(int, a_elements)
lr = []
for _ in xrange(q):
	lr_elements = raw_input().strip().split(' ')
	lr.append(map(int, lr_elements))


# write your code here
# store your results in `sum_of_replies`

# output

# Dummy Data
sum_of_replies = 25

print(sum_of_replies)
