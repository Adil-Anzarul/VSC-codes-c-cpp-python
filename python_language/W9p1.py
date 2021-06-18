# Repetition
# Given a list of integers and a value k, you are required to print an integer
# which appears in the list exactly k times. It is guaranteed that only one 
# integer repeats k times.
# Input Format
# The first line of the input contains space separated integers.
# Second line of the input contains a value n.
# Output Format
# Print an integer that appears exactly n times.
# Example:
# Input:
# 1 2 3 4 3 2 1 2 5 6
# 3
# Output:
# 2
# Explanation
# In the given list, 2 appears exactly thrice.



# 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1
# 1


# l = list(map(int,input().split()))
# n = int(input())
# s = set(l)
# for i in s:
#     if(l.count(i) == n):
#         print(i,end='')

# The count() is a built-in function in Python. It will return the total 
# count of a given element in a string. The counting begins from the start 
# of the string till the end. It is also possible to specify the start and 
# end index from where you want the search to begin.

# a,k=list(map(int, input().split())) ,int(input())
# print([q  for q in a if a.count(q)==k][0],end="" )

list1=[int(i) for i in input().split()]
k=int(input())
freq=0
s=set(list1)
s=list(s)

for i in s:
    for j in list1:
        if i == j:
            freq+=1
    if freq==k:
        print(i)
    freq=0

