# '''
# \n 
# \t
# # import keyword
# # print(keyword.kwlist)
# a = 100
# #a //= 2
# print(a)

# number = [10 , 20  , 30]
# print( 20 in number)

# print( 50 < a < 200 )
# print( 50 < a < 200 )
# '''
# # print(len(str(512345)))

# print("Enter number", )
# # n = input()

# print("Type ur name: ")
# m1n = str(input())
# m2n = int(input())
# print("hello", m1n , "How are you" )

#a = int("5.0") + float(2)
# print(8.2 * 10 ** 4 + 19)
#print( (12 ** 3) + (1 ** 3) )

# str1 = "apna"
# str2 = "Collage"
# final_value = str1 + " " +str2
# print(final_value)
# print(len(final_value))
# print( str1[1:4])
# str = "i am studing python from apna collage"
# print(str.endswith("app"))
# print(str.capitalize())
# str = str.capitalize()
# #print(str.replace("o","a"))
# print(str.replace("python","c_code"))
# print(str.find("o"))
# print(str.count("o"))



#a
# ur_name = input("enter ur name: ")
# print("length of ur name is" , len(ur_name))
# str = "Hi , $I am the $ symbol $99.00"
# print(str.count("$"))


# a = int(input("a:"))
# b = int(input("b:"))
# c = int(input("c:"))

# if( a > b and a > c):
#     print(" a is greatest number")
#     if( b > c):
#         print(" b is less then a and more then c")
#     else:
#         print(" c is less then a and more then b")


# elif( b > a and b > c):
#     print(" b is greatest")
# else :
#     print(" C is greatest")


# name = ["amit","ankit"]
# parts = name.split()

# print(parts)



n = int(input())
names = []

for _ in range(n):
    parts = input().split()
    last = parts[-1]
    initials = ""

    for p in parts[:-1]:
        initials += p[0] + ". "

    names.append(initials + last)

names.sort()

for name in names:
    print(name)


# n=int(input())
# a=[]
# for _ in range(n):
#     s=input().split()

#     a.append(" ".join([x[0]+"." for x in s[:-1]]+[s[-1]]))

# print(*sorted(a),sep="\n")