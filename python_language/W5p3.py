# Maximal and Minimal Element
# Given a list of integers and a value k, print the sum of kth maximum element 
# and kth minimum element in the list.
# Input Format
# First line of the input contains space separated integers
# Second line of the input contains a number k
# Output Format
# Print an integer value corresponding to the sum of kth maximum element and kth 
# minimum element. (No newline after the output)
# Example:
# Input:
# 1 3 4 1 2 5 7 3 6 8 9 3
# 6
# Output:
# 10
# Explanation
# The 6th maximal element is 4 and the 6th minimal element is 6. Their sum is 10 

l=[int(i) for i in input().split()]
l=set(l)
l=list(l)
l.sort()
#print(l)
k=int(input())

print("Required sum =",l[k-1]+l[-k])

