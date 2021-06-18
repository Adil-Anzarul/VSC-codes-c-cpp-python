import random

n=int(input("Enter the number of friends\n"))
print(f"Write the name of {n} friends")
l1=[]
for i in range(n):
    l1.append(input().strip())

def splitter(string1):
    p=string1.split(" ")
    return p
l2=[splitter(i) for i in l1]

findex=[i[0] for i in l2]
lindex=[i[1] for i in l2]
h=lindex[:]

def shufflerr():
    new1=random.randint(0,9)
    while new1:
        random.shuffle(lindex)
        new1-=1
    if h==lindex:
        random.shuffle(lindex)
shufflerr()

# print(lindex)

final =[ str(findex[i]+" "+lindex[i])  for i in range(n)]

p=1
while p:
    for item in final:
        if item in l1:
            shufflerr()
            final =[ str(findex[i]+" "+lindex[i])  for i in range(n)]
        if item not in l1:
            p=0
            break
    
# print(final)

print("The Shuffled names are ----------")
for john_cena in final:
    print(john_cena)


