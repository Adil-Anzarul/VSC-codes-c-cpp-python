# Mr. Roxy has arranged a party at his house on the New Year’s Eve. He has 
# invited all his friends - both men and women (men in more number). 
# Your task is to generate the number of ways in which the invitees stand in 
# a line so that no two women stand next to each other. 
# Note that the number of men is more than the number of women and Roxy 
# doesn’t invite more than 20 guests.
# If there are more than 20 guests or an arrangement as per the given 
# constraints is not possible, print ‘invalid’.

# The first line contains m number of men invited
# The second line contains n number of women invited
# Note: m +n should not be greater than 20



def fact(num):
    factorial = 1
    for i in range(1,num + 1):
        factorial = factorial*i
    return factorial

m = int(input())
n = int(input())
if (n>=m or n+m > 20):
    print("invalid")
else:
    men_position = fact(m)
    women_position = int(fact(m+1)/fact(m+1-n))
    number_of_ways = men_position * women_position
    print(number_of_ways)
