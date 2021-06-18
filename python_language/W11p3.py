# print the number of binary sequences of length ‘n’ that have no 
# consecutive 0’s

# Input format : 
# A number 'n'

# Output format : 
# number of binary sequences of length 'n' with no consecutive 0's else 
# invalid

# Example 

# input

# 3

# output

# 5

# Explanation: 

# When n = 3, number of binary digits is 3.

# all possible combinations of 3 binary digits are

# 0 0 0
# 0 0 1
# 0 1 0
# 0 1 1
# 1 0 0
# 1 0 1
# 1 1 0
# 1 1 1

# out of these eight possibilities, 5 have binary sequences
# and have no consecutive 0’s. Hence the number of binary sequences of 
# length 3 is 5.






# def countStrings(n):
#     A=[0 for a in range(n)]
#     B=[0 for a in range(n)]
#     A[0] = B[0] = 1
#     for a in range(1,n):
#         A[a] = A[a-1] + B[a-1]
#         B[a] = A[a-1]
#     return(A[n-1] + B[n-1])
# n=int(input())
# if n>0:
#   print(countStrings(n),end="")
# else:
#   print("invalid",end="")

f