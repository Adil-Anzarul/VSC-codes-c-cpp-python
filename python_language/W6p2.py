# Anagrams
# Given two strings as input, determine if they are anagrams are not. 
# (Ignore the spaces, case and any punctuation or special characters)
# Note: Anagrams are the strings which are made up of the same set of letters.
# For example : Mary and Army are anagrams.

# Input Format
# First line of the input contains the first string
# Second line of the input contains the second string

# Output Format:

# Print Yes if the given strings are anagrams, No otherwise.

# Example:
# Input:
# Tom Marvolo Riddle
# I am Lord Voldemort!!!
# Output:
# Yes



s1 = input()
s2 = input()
l1 = []
l2 = []
for c in s1:
    if c.isalpha():
        l1.append(c.lower())
for c in s2:
    if c.isalpha():
        l2.append(c.lower())
l1.sort()
l2.sort()
if len(l1)!=len(l2) : print("No")
else:
    for i in range(len(l1)):
        if l1[i]!=l2[i]:
            print("No",end='')
            break
    else:
        print("Yes",end='')



"""
isalpha(c) is a function in C which can be used to check if the passed 
character is an alphabet or not. It returns a non-zero value if it's an 
alphabet else it returns 0. For example, it returns non-zero values for 
'a' to 'z' and 'A' to 'Z' and zeroes for other characters


isalpha() method returns true if all characters of a string are only 
alphabets (between 'A' to 'Z' and between 'a' to 'z'). If there is any non 
alphabet character in the string, method returns false.
"""


"""
list=[' ',',']
var1=input()
var2=input()

var1=str.lower(var1)
var2=str.lower(var2)
for item in list:
    var1 = var1.replace(item, "")
    var2 = var2.replace(item, "")
    # var1 = var1.replace(item, "")
    # var2 = var2.replace(item, "")


var1=set(var1)
var2=set(var2)


if var1.intersection(var2) ==var1 and var1.intersection(var2) ==var2:
    print("Yes")
else:
    print("No")
"""

"""
The replace() method is a built-in functionality offered in Python programming.
It replaces all the occurrences of the old substring with the new substring. 
Replace() returns a new string in which old substring is replaced with the new 
substring.
"""


