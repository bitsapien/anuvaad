#!/usr/bin/python
# Name : Big Chessboard
# input:
# x0 : start point
# y0 : start point
# x1 : destination point
# y1 : destination point
# n : number of segments of the permitted cells
# rab : each row of rab corresponds to ri ai bi
elements = raw_input().strip().split(' ')
x0 = int(elements[0])
y0 = int(elements[1])
x1 = int(elements[2])
y1 = int(elements[3])
n = int(raw_input().strip())
rab = []
for _ in xrange(n):
	rab_elements = raw_input().strip().split(' ')
	rab.append(map(int, rab_elements))


# write your code here
# store your results in `minimum_moves`

# output

# Dummy Data
minimum_moves = 4

print(minimum_moves)
