#Two friends Suresh and Ramesh have m red candies and n green candies 
#respectively. They want to arrange the candies in such a way that each
#row contains equal number of candies and also each row should have only red 
#candies or green candies. Help them to arrange the candies in such a way 
# that there are maximum number of candies in each row.

#The first line contains m number of red candies Suresh has
#The second line contains n number of green candies Ramesh has

#Print maximum number of candies that can be arranges in each row.


def compute_hcf(x, y):
# choose the smaller number
    if x > y:
        smaller = y
    else:
        smaller = x
    for i in range(1, smaller+1):
        if((x % i == 0) and (y % i == 0)):
            hcf = i 
    return hcf
num1 = int(input()) 
num2 = int(input())
print(compute_hcf(num1, num2))




"""
(m,n,pro)=(int(input()),int(input()),1)
vmin=min(m,n)
for i in range(1 ,vmin+1):
    if m% i==0 and n% i ==0:
        pro=i
print(pro,end="")
"""
