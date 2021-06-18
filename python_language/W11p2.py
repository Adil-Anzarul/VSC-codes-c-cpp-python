# Give a string, remove all the punctuations in it and print only the words 
# in it. 


# Input format : 
# the input string with punctuations

# Output format : 
# the output string without punctuations


# Example 

# input

# “Wow!!! It’s a beautiful morning”

 

# output

# Wow Its a beautiful morning



# # Python Program for
# # Creation of String
  
# # Creating a String 
# # with single Quotes
# String1 = 'Welcome to the Geeks World'
# print("String with the use of Single Quotes: ")
# print(String1)
  
# # Creating a String
# # with double Quotes
# String1 = "I'm a Geek"
# print("\nString with the use of Double Quotes: ")
# print(String1)
  
# # Creating a String
# # with triple Quotes
# String1 = '''I'm a Geek and I live in a world of "Geeks"'''
# print("\nString with the use of Triple Quotes: ")
# print(String1)
  
# # Creating String with triple
# # Quotes allows multiple lines
# String1 = '''Geeks
#             For
#             Life'''
# print("\nCreating a multiline String: ")
# print(String1)

string=input()                          
punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''                        
for x in string.lower():
    if x in punctuations:
        string = string.replace(x, "")
print(string,end="")
