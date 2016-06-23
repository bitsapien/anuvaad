#!/usr/bin/python
# Name : Two Circles
# input:
# n :  the number of points
# x1 : coordinates of first circle
# y1 : coordinates of first circle
# x2 : coordinates of second circle
# y2 :  coordinates of second circle
# xy :  each row contains integers xi and yi
elements = raw_input().strip().split(' ')
n = int(elements[0])
x1 = int(elements[1])
y1 = int(elements[2])
x2 = int(elements[3])
y2 = int(elements[4])
xy = []
for _ in xrange(n):
	xy_elements = raw_input().strip().split(' ')
	xy.append(map(int, xy_elements))


# write your code here
# store your results in `minimum_value`

# output

# Dummy Data
minimum_value = 6

print(minimum_value)
