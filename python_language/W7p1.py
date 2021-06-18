# List Prefix  -----starting should be same
# Given two lists, write a program to check if one list is a prefix 
# of the other.

# Input Format
# The first line contains space separated integers
# The second line contains space separated integers

# Output Format
# Print Yes or No

# Example:
# Input:
# 1 2
# 1 2 3 2 1
# Output
# Yes

# Input:
# 1 2
# 1 3 2 1
# Output:
# No

# Explanation
#  In the first case, first list is a prefix of the second list. 
#  In the second case first list is not a prefix of the second


# The find() method returns an integer value:
# If the substring exists inside the string, it returns the index of the first occurence of the substring.
# If substring doesn't exist inside the string, it returns -1.


# The find() method returns the lowest index of the substring if it is found 
# in given string. If its is not found then it returns -1.

l1 = input().split()
l2 = input().split()
s1 = ''.join(l1)
s2 = ''.join(l2)
if s2.find(s1) != 0:
    print("No")
else:
    print("Yes")



# a,b=input().split(),input().split()
# if (a[:]==b[:len(a)]):
#   print("Yes",end="")
# else:
#   print("No",end="")


