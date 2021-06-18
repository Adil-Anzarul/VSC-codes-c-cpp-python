#Given two integer numbers as input, print the larger number.
#The first line of input contains two numbers separated by a space

a,b=input().split()
a=int(a)
b=int(b)
if a>b:
    print(a)
else:
    print(b)

"""
a,b = input().split(" ")
a=int(a)
b=int(b)
if a>b:
    print(a)
else:
    print(b)
  """