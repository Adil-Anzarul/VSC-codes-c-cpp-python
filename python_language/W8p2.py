# Symmetric Matrix

# Given a N X N square matrix, determine if it is a Symmetric Matrix.

# Input Format
# The first line of the input an integer N which represents the number of rows 
# and the number of columns.
# Next N lines represent the elements of the matrix.

# Output Format
#  Print Yes or No

# Example:
# Input:
# 3
# 1 -2 3
# -2 3 1
# 3 1 2
# Output:
# Yes


l = int(input())
m = []
flag = 0
for i in range(l):
    s = input().split()
    m.append(s)
for i in range(l):
    for j in range(l):
        if m[i][j] != m[j][i]: 
            flag = 1
# print(m)
# print(m[2][1],m[1][0])
if(flag):
    print('No',end='')
else:
    print('Yes',end='')