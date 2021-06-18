# Print Matrix
# Given an integer N, print a N X N square matrix, consisting of numbers 
# from 1 to N^2, in the row-wise order

# Input Format
# The first line of the input an integer N

# Output Format
# Print N lines having numbers from 1 to N^2

# Example:
# Input:
# 3
# Output:
# 1 2 3
# 4 5 6
# 7 8 9


n=int(input())
x,a=[],[]
for i in range(1,n*n+1):
    if i%n==0:
        a.append(i)
        x.append(a)
        a=[]
    elif i%n!=0:
        a.append(i)
for item in x:
    print(item)


# n = int(input())
# for i in range(n-1):
#   for j in range(1, n):
#     print(i*n+j,end=' ')
#   print(i*n+n)
# i = n-1
# for j in range(1,n):
#   print(i*n+j,end=' ')
# print(i*n+n,end='')



# N,check,mat=int(input()),0,[]
# for  p in range(N):
#     m=[]
#     for q in range(N):
#         check=check+1
#         m.append(check)
#     mat.append(m)
# for r in mat[:-1]:
#    print(*r)
# print(*mat[-1],end="")

