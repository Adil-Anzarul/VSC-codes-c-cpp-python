#Given a list A of numbers (integers), you have to print those numbers which are not ending with 4
#The first line contains numbers separated by a space
#Print the resultant array elements separated by a space. (no space after the last element)

x=input().split()
y=[]
for i in range(0,len(x)):
    x[i]=int(x[i])
    if abs(x[i])%10!=4:
        y.append(x[i])
for i in range(0,len(y)):
        if i!=(len(y)-1):
             print (y[i],end=" ")
        else:
           print (y[i],end="")
print(type(x))



# A = [int(i) for i in input().split()]
# for i in A:
#     if abs(i) % 10 != 4:
#         print(i, end =" ")



# abs()
# The abs() function of Python's standard library returns the absolute value of the given
# number. Absolute value of a number is the value without considering its sign. Hence
# absolute of 10 is 10, -10 is also 10. If the number is a complex number, abs()
# returns its magnitude.


# from math import sqrt
# print(abs(10))

# print(abs(-20))
# print(abs(sqrt(400)))