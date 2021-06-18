# You are hired by a secret service agency. Your job is to decode messages. 
# You figure out the algorithm used to encrypt messages and it turns out to 
# be as follows:
# The message will consist of only uppercase alphabets. The positional values are
# assigned to the characters as A=0, B=1, ..., Y=24 and Z=25. In the original
#  message, a character at position i is replaced by a character using the 
# shift formula (i+3)%26.
# For example A will be replaced by D, B by E an so on. After replacement, 
# the string is reversed and sent as a message.
# You are required to decode this message through your code.(Assuming No Space 
# in the message)

# Input Format

# A single line of the input contains the encrypted message

# Output Format

# Print a string containing the original message after decoding

# Example:

# Input

# HBEGRRJ

# Output:

# GOODBYE



# (s,a,b,c)=(input(),"","","")
# for i in list(s):
#     a=a+chr((ord(i)-65+3)%26+65)
# for g in list(a)[::-1]:
#     b=b+g 
# for t in list(b):
#         if t=='A':
#             c=c+'U'
#         elif t=='B':
#             c=c+'V'
#         elif t=='C':
#             c=c+'W'
#         elif t=='D':
#             c=c+'X'
#         elif t=='E':
#             c=c+'Y'
#         elif t=='F':
#             c=c+'Z'
#         else:
#             c=c+chr(ord(t)-6)
# print(c,end="")






s = input()
s = s[::-1]
t = ''
for c in s:
    t+=chr((ord(c)-3-ord('A'))%26 + ord('A'))
print(t)
