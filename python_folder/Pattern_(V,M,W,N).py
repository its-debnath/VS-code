# ------------------------------( Pattern V )--------------------------------
# #case 1 :
# n = int(input())
# print("Output:\n")
# for i in range(n):
#     ld_sp = " "*i
#     mid_sp = " "*(2*(n-i-1))
#     if i==(n-1):
#         print(ld_sp+'\\'+'/')
#     else:
#         print(ld_sp+'\\'+mid_sp+'/')

# ------------------------------( Pattern M )--------------------------------

# n = int(input())
# print("Output:\n")

# for i in range(n):
#     ld_sp = " "*i
#     mid_sp = " "*(2*(n-i-1))
#     row = '|'+ld_sp + "\\"+mid_sp+"/"+ld_sp+"|"
#     print(row)

# ------------------------------( Pattern W )--------------------------------

# # #case 1 :
# n = int(input())
# print("Output:\n")
# for i in range(n):
#     ld_sp = " "*i
#     mid_sp = " "*(2*(n-i-1))
#     if i==(n-1):
#         print(ld_sp+'\\'+'/'+2*ld_sp+'\\'+'/')
#     else:
#         print(ld_sp+'\\'+mid_sp+'/'+2*ld_sp+'\\'+mid_sp+'/')

# ------------------------------( Pattern N )--------------------------------
# n = int(input())
# print("Output:\n")
# for i in range(n):
#     ld_sp = " "*i
#     ed_sp = " "*(n-i-1)
#     row = '|'+ld_sp+"\\"+ed_sp+"|"
#     print(row)

# ------------------------------( Pattern Z )--------------------------------
# n = 5
# print("Output:\n")
# print("-"*(n+2))
# for i in range(n):
#     ed_sp = " "*(n-i-1)
#     row =" "+ ed_sp+"/"
#     print(row)
# print("-"*(n+2))

# ------------------------------( Pattern X '*')--------------------------------
n = 5
for i in range(n):
    if ( i < n/2):
        row = " "*i+"*"+" "*(2*(n-i-1))+"*"
        print(row)
    elif i==(abs(n/2)+1):
        row = " "*(abs(n/2))+"*"
        print(row)
    else:
        row = " "*(int(n/2)-i)+"*"
        print(row)