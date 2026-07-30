''' 1). Write a program that repeatedly reads integers from the user until they enter a multiple of 7.
Once a multiple of 7 is entered, the program should print the total count of
non-multiple numbers entered and terminate.'''

# count = 0 
# while True:
#     n = int(input())
#     if n%7==0:
#         break
#     count+=n
# print(f"total count : {count}")

''' 2) Given an integer $N$ from the user, print all numbers from 1 to N (inclusive)
on a single line separated by spaces.
However, skip any numbers that are perfectly divisible by 5.'''

# n = int(input())
# sum = []
# for i in range(1,n):
#     sum.append(i)

# sumx =" ".join(str(sum))
# print(sumx)


''' 3) Prompt the user to input a number N. If N is negative, print "Invalid Input". If N is 0 or positive,
use a loop to calculate its factorial and display it in the exact format: The factorial of N is X. '''

# n = int(input())
# fact = 1
# if (n>0):
#     for i in range(1, n+1):
#         fact = fact*i
#     print(f"The factorial of {n} is {fact}")
# elif (n<0):
#     print("Invalid Input")


#some questions
'''Store the result of 22 / 7 in a variable. Ask the user to input a precision limit K (e.g., 2, 3, or 4).
Print the stored value rounded up exactly to K decimal places using positional .format() syntax.'''

'''Given a list of 10 elements, extract a new list containing every second element starting from index 1 up
to (but excluding) index 9. Reverse this extracted slice in place and print it.'''

'''Given a $3 times 3$ matrix represented as a nested list of lists,
iterate through each row, calculate its sum,
and append these individual row sums into a new flat list named row_totals.'''

# matrix = [[1,2,3],[1,2,3],[1,2,3]]
# sumx = []
# for row in matrix:
#     sumx.append(sum(row))
# print(sum(sumx))

'''Take a list of individual words, such as ['Python', 'is', 'fun']. Combine them into a
single coherent sentence string where words are separated by a hyphen -, and print the result.'''

# words = ["Python","is","a","snake"]
# send ="-".join(words)
# print(send)

'''Accept a list containing duplicate name entries from a user.
Convert this collection to remove all duplicate names,
add the name "Admin" to the collection safely without risking duplication errors,
and print the sorted results.'''

hcv = ["amit","jbj","ikgbj","amit","jbj","ikgbj","amit","jbj","ikgbj"]
v = set(hcv)
v.add("admit")
x = sorted(v)
print(x)