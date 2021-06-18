# Given a list of numbers (integers),
# find the sum of second maximum and second minimum in this list
# The first line contains numbers separated by a space.



A = [int(i) for i in input().split()]
B = []
for i in A:
  if i not in B:
    B.append(i)
B.sort()
if (len(B)==1):
  print(2*B[0])
else:
  print(B[1]+B[-2])



# x=[int(i) for i in input().split()]
# y=set(x)
# y=list(y)
# y.sort()
# print("required sum is =",  y[1]+y[len(y)-2])


