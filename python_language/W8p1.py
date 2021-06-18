# Zero-One Matrix

# Given a matrix with M rows and N columns, you are required to check if 
# the matrix is a Zero-One Matrix. A Zero-One or a Binary matrix is a matrix
#  in which all the elements are either 0 or 1.

# Input Format
# The first line of the input contains two space separated integers M and N 
# which represents the number of rows and the number of columns respectively.
# Next M lines represent the elements in M rows with each line containing N 
# space separated integers.

# Output Format
# Print Yes or No

# Example:
# Input:
# 3 3
# 1 0 0
# 0 1 0
# 0 0 1
# Output:
# Yes

# Input:
# 2 2
# 1 2
# 0 1
# Output
# No

# Explanation
# In the first case, all the elements of the matrix are 0 and 1. In the second
#  case element at the first row and second column is 2

# Using split() method : This function helps in getting a multiple inputs
#  from user. It breaks the given input by the specified separator. If a 
#  separator is not provided then any white space is a separator.

# a,b=[10,20],"String"
# print(a,"\n",b)


val = ['0','1']
flag = 0
l, s = map(int,input().split())
for i in range(l):
    t = input().split()
    for item in t:
        if item not in val:
            flag = 1
if(flag):
    print('No',end='')
else:
    print('Yes',end='')


# M,N= input().split()
# M,N=int(M),int(N)
# mat,check=[],0
# for  i in range(M):
#     mat.append(input().split())
# for x in mat:
#     for y in x:
#         if y=="0":
#             check=check+1
#         elif y=="1":
#             check=check+1
# if check==M*N:
#     print("Yes",end="")
# else:
#     print("No",end="")



