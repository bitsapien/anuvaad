#!/usr/bin/python
# Name : Changing Root of tree
# input:
# n :  the amount of nodes in the tree
# r1 : index of the old root
# r2 : e index of the new one
# old_tree :  old representation of the tree
elements = raw_input().strip().split(' ')
n = int(elements[0])
r1 = int(elements[1])
r2 = int(elements[2])
old_tree_elements = raw_input().strip().split(' ')
old_tree = map(int, old_tree_elements)


# write your code here
# store your results in `new_tree`

# output

# Dummy Data
new_tree = {2,3}

print(" ".join(str(e) for e in new_tree))