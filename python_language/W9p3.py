# Remove Vowels
# Given a string s, remove all the vowels in s and reprint the string. 
# The order of other characters in the string should be maintained\\

# Input Format
# A single line of the input contains a stirng s.

# Output Format
# Print the modified string after removing the vowels

# Example:

# Input:
# abcdEfghi

# Output:
# bcdfgh


s=input().lower()
l1=['a','e','i','o','u']
l2=[]
for i in s:
    if i not in l1:
        l2.append(i)
j=""
for i in l2:
    i=str(i)
    j=j+i
print(j)


# S,a=list(input()),""
# ans=[y for y in S if y!='A'and y!='E'and y!='O'and y!='U'and y!='I'and y!='a'and y!='e'and y!='i'and y!='o'and y!='u' ]
# print(a.join(ans),end="")



# vowel = ['a','e','i','o','u','A','E','I','O','U']
# s = input()
# l = []
# for i in s:
#     if not i in vowel:
#         l.append(i)
# t = ''.join(l)
# print(t,end='')