# Number Triangle-2
# Given an integer input 'n', print a palindromic number triangle 
# of n lines as 
# shown in the example.
# Input Format
# The input contains a number n (n < 10)
# Output Format
# Print n lines corresponding to the number triangle 
# Example:
# Input:
# 5
# Output:
# 1
# 121
# 12321
# 1234321
# 123454321
# Explanation:  n th line of the triangle contains a palindromic number 
# of length 2n-1



a=int(input())

for i in range(1,a+1):
    for j in range(1,i+1):
        print(j,end="")
    for k in range(i-1,0,-1):
        print(k,end="")
    print()




# n=int(input())
# for i in range(0,n):
#     for j in range(0,i+1):
#         print(j+1,end="")
#     for k in range(0,i):
#         print(i-k,end="")
#     print()


# n = int(input())
# for i in range(1,n+1): print((((10**i)-1)//9)**2)


