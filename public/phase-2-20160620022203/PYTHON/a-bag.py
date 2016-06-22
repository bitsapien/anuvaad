#!/usr/bin/python
# Name : A Bag
# input:
# n : number of toolkits
# volume_of_each_toolkit : volume of each toolkit
n = int(raw_input().strip())
volume_of_each_toolkit_elements = raw_input().strip().split(' ')
volume_of_each_toolkit = (int(e) for e in volume_of_each_toolkit_elements)


# write your code here
# store your results in `minimum_number_of_bags`

# output

# Dummy Data
minimum_number_of_bags = 4

print(minimum_number_of_bags)
