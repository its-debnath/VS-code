# a = "Gouranga"
# b = "Amit"
# A = a > b
# B = a < b
# C = a == b
# print( type(A) , A , B , C)

# a = 10
# b = 8
# print("sum : ", a+b)                                # print(False) # print(not False)
# print(not(a>b))
# print(a > b )


# a , b = "1" , 2.0
# a = float(a)
# sum = a+b
# b = str(b)
# print(sum , a , b)
# print(type(b))
#result for input always str
# a = input(" ur name is : ")
# b = int(input("ur age is : "))
# c = float(input("ur CGPA is : "))

# print("my name is : ", a)
# print("My age is : ", b)
# print("My CGPA is : ", c )
# print(type(a) , a )
# name = "Gouranga"
# sername = " Debnath"
# print(name+sername)
# print("lenth of name is : ", len(name+sername))


# name = "Gouranga"
# ch1 = name[0]
# ch2 = name[1]

# print(name[3])

# str = "apn College apna apn"
# print(str[1:4])
# str.endswith("ge.")
# print(str.endswith("ge"))
# print(str.capitalize())
# print(str)
# print(str.replace("p","P"))
# print(str.find("apna"))
# print(str.count("apn"))


# name = input("Enter Your First Name : ", )
# print("Length of ur first name: " , len(name))
# age = int(input("Enetr ur age: ", ))
# if(age >= 18 ) :
#     print("User is Eligible for voting")
# else : print("User is not Eligible for voting")


# marks = int(input("Enetr Your Marks: " ))
# if( 100 <= marks < 90 ) :
#     print("Grade : A")
# elif( 90<= marks < 80 ) :
#     print("Grade : B")
# elif(80 <= marks < 70 ) :
#     print("Grade : C")
# elif(70 <= marks < 0 ) :
#     print("Fail") 

# name = [ 2 , 3,4 ]
# name.append(7)
# print(name)

# move_name = input("Write ur feverate move name : " )
# movelist = [move_name , ]
# m2 = input("2nd move name : ")
# movelist.append(m2)

# m3 = input("3nd move name : ")
# movelist.append(m3)


# print("MY top 3 move name: ")
# print(movelist)



# _list = [1,2,3,4,5,4,3,2,1]
# num = len(_list)
# print(num)

# copylist = _list.copy()
# copylist.reverse()

# print(_list)
# print(copylist)

# if(_list == copylist) :
#     print("pelindrom")
# else : print("Not Penlindrom")

# List = [ 1 , 4 , 9, 16 , 25 , 36 , 49 , 64 , 81 , 100 ]
# # indx = len(List)
# # idx = 0
# # n = 36
# # while idx < len(List) :
# #     if( n == List[idx]):
# #         print("Found" , n )
# #         break
# #     else : print("Finding..")
# #     idx = idx + 1
# # print("\nEnd of loop")
# m = int(input( ))


# for i in List :
#     if( m == i ) :
#         print("Found : " , i )
#         break
# else : print(" Invalid ")
        
print(range(5))
seq = range(10)

for i in seq :
    print(seq[i])



# #while loops
# m = [ 2 , 3 , 4 , 5 , 9]
# n = ( 2 ,3 ,4,5,6,8,4,3,3,3,3,3)
# # s = 3
# # for idx in m :
# #     print(idx)
# for i in range(10) :
#     pass
# print("Fuck up")
# n = int(input())
# for i in range(1, n + 1):
#     print(i, end=",")


# print(*range(2,4) ,sep=",")
# print(*range(2,4), sep=",")
# print(*range(2,4), sep="-")
# print(*range(2,4), sep="\n")

# def calsum( a , b ,c ):
#     sum = (a + b + c ) / 3
#     return sum
# sum = calsum(2,3,5)
# print(sum , sum+1 , sep=",", end="------------------------")


# List = ["Aman","Gouranga","Amit","Kajal","Susmita","Rajanna","Umme"]
# def printx(llist):
#     for i in llist :
#         print(i,end=" ")
# print( )
# printx(List)

# def factorial(n):
#     fact = 1
#     for i in range(1,1+n):
#         fact = fact*n
#     return fact
# n = int(input("enter ur number: "))
# f = factorial(n)
# print(f)

