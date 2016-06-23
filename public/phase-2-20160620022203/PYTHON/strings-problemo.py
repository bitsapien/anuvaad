#!/usr/bin/python
# Name : Strings Problemo
# input:
# s : latin characters
# t : latin characters
# n : the number of possible replacements
# abw : each row corresponds to a b w for each possible replacement
s = raw_input().strip()
t = raw_input().strip()
n = int(raw_input().strip())
abw = []
for _ in xrange(n):
	abw_elements = raw_input().strip().split(' ')
	abw.append(abw_elements)


# write your code here
# store your results in `answer`,`resulting_string`

# output

# Dummy Data
answer = 21
resulting_string = "uxyd"

print(answer)
print(resulting_string)
