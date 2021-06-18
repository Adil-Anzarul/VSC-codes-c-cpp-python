#Given an array A of N integers, you have to write a python code to 
# eliminate the duplicate integers of the array.
#The first line of the input contains a number N representing the
#  number of elements in array A.
#The second line of the input contains N numbers separated by a 
# space. (after the last element, there is no space)



n=int(input())
A = [int(i) for i in input().split()]
B = []
for i in A:
    if i not in B:
        B.append(i)
        print(i, end =" ")



# l1=input()
# N=input()
# question_list = []
# answer_list = []
# question_list=N.split(" ")
# for num in question_list:
#   if num not in answer_list:
#     answer_list.append(num)
# for i in range(0,len(answer_list)):
#   if i != len(answer_list)-1:
#     print(answer_list[i],end=" ")
#   else:
#     print(answer_list[i],end="")