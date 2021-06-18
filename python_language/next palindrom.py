n = int(input("Enter number of test cases\n"))
print(f"Input {n} numbers")
list1 = []
for i in range(n):
    list1.append(int(input()))

def rev(d):
    r1=0
    while(d):
        r1=r1*10+(d%10)
        d=d//10
    return r1

def next_palindrom(n1):
    while True:
        if n1 == rev(n1):
            print("Next Palindrom is ", n1)
            break
        n1 += 1

for i in list1:
    next_palindrom(i)
