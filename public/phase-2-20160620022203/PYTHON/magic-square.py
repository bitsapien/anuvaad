#!/usr/bin/python
# Name : Magic Square
# input:
# original_magic_square : original magic square
original_magic_square = []
for _ in xrange(3):
	original_magic_square_elements = raw_input().strip().split(' ')
	original_magic_square.append(map(int, original_magic_square_elements))


# write your code here
# store your results in `repaired_magic_square`

# output

# Dummy Data
repaired_magic_square = [[4,4,4],[4,4,4],[4,4,4]]

for idx in xrange(3):
	print(" ".join(str(e) for e in repaired_magic_square[idx]))