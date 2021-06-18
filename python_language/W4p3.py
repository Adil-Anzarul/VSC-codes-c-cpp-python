#Given n – indicating the number of rows, print a right angle 
#triangle of squares of numbers with n rows
# Example: 
# n = 3
# Right angle triangle is
# 1 
# 4 9 
# 16 25 36 


n = int(input()) 
num = 1 
for row in range (1, n+1): 
    for col in range (1, row+1): 
        print(num*num, end = " ") 
        num = num + 1
    print()