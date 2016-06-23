#!/usr/bin/python
# Name : Notebook with Numbers 
# input:
# n : number of sheets
# k : 
# a : 
elements = raw_input().strip().split(' ')
n = int(elements[0])
k = int(elements[1])
a_elements = raw_input().strip().split(' ')
a = map(int, a_elements)


# write your code here
# store your results in `maximum_sum`,`r`

# output

# Dummy Data
maximum_sum = 27
r = [3,4,5,8]

print(maximum_sum)
print(" ".join(str(e) for e in r))