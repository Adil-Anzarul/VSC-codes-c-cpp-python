# Bubble Sort
# You are required to sort a given list of integers in ascending order using 
# Bubble sort algorithm. Determine the number of swaps that occur in the process.
# Input Format
# A single line of the input contains space separated integers
# Output Format
# Print an integer value corresponding to the number of swaps. 
# (No newline after the output)
# Example
# Input
# 3 4 2 1 5
# Output
# 5


l = list(map(int, input().split()))
n = len(l)
swapcount = 0 
for i in range(n-1):
    for j in range(0, n-i-1):
        if l[j] > l[j+1] :
            swapcount += 1
            l[j], l[j+1] = l[j+1], l[j]
print(swapcount,end='')

