#!/usr/bin/python
# Name : Factorial game
# input:
# t :  the number of games the soldiers play
# ab :  each row containing a pair of integers a and b defining the value of n for each game
t = int(raw_input().strip())
ab = []
for _ in xrange(t):
	ab_elements = raw_input().strip().split(' ')
	ab.append(map(int, ab_elements))


# write your code here
# store your results in `max_score_for_soldiers`

# output

# Dummy Data
max_score_for_soldiers = [[2],[5]]

for idx in xrange(t):
	print(" ".join(str(e) for e in max_score_for_soldiers[idx]))