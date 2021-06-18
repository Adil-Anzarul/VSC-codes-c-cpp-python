# Consider a triangle PQR, ∡PQR is 90o  . X is the midpoint of the line PR. 
# Given the input the lengths of PQ and QR find the angle ∡XQR. 

# Input Format:
# Line 1 - Length of side PQ
# Line 2 - Length of side PR
# Output Format:
# angle ∡XQR in degrees. Round to the nearest integer.
# Example:
# Input
# 10
# 10
# Output
# 45
import math
def sq(m):
    return m*m
x=int(input())
y=int(input())
z=math.sqrt(sq(x)+sq(y))
z=z/2
a=z
b=z
c=y
cosB=(sq(a)+sq(c)-sq(b))/(2*a*c)
B=math.acos(cosB)
B=B*180/3.14
B=round(B)
print(B)



# Python provides an inbuilt function round() which rounds off to the given 
# number of digits and returns the floating point number, if no number of digits 
# is provided for round off , it rounds off the number to the nearest integer.
# Syntax: 
# round(number, number of digits)
