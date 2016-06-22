#!/usr/bin/python
# Name : Treepath
# input:
# n :  the number of vertices
# m :  edges of the graph
# uvw : each row has the  numbers of the
# u :  the number of the starting vertex
elements = raw_input().strip().split(' ')
n = int(elements[0])
m = int(elements[1])
uvw = []
for _ in xrange(m):
	uvw_elements = raw_input().strip().split(' ')
	uvw.append(map(int, uvw_elements))
u = int(raw_input().strip())


# write your code here
# store your results in `minimal_total_weight`,`indices_of_edges`

# output

# Dummy Data
minimal_total_weight = 2
indices_of_edges = [1,2]

print(minimal_total_weight)
print(" ".join(str(e) for e in indices_of_edges))