# a=(1,)
# b=(1,2,3,4,5,6,7,8,9,10,[12,13,14,15,16])#(0-9)
# print(type(a))
# b[10][0] = 99
# print( b[10][0])
# L=[]
# L[0] = input()
# print(L)



# Given three lists of same length,
# interleave them together and return the interleaved list.

# Example:
# list1 = [1, 2, 3]
# list2 = ['a', 'b', 'c']
# list3 = [(1,1),(2,2), (3,3)]
# output = [1, 'a', (1,1), 2, 'b', (2,2), 3, 'c', (3,3)]

# Args:
# list1 (list): The first list.
# list2 (list): The second list.
# list3 (list): The third list.

# Returns:
# list: A list containing interleaved elements from all three lists.

# def interleave_lists(list1, list2, list3):
#     L = len(list1)
#     list_ = []
#     for i in range(0,L-1):
#         list_.append(list1[i])
#         list_.append(list2[i])
#         list_.append(list3[i])
#         i+=1
#     print(list(list_))

# listx = [1, 2, 3]
# list2 = ['a', 'b', 'c']
# list3 = [(1,1),(2,2), (3,3)]
# interleave_lists(listx, list2, list3)



# Determine if a given integer has more than 5 unique digits.

# Args:
# num (int): The input integer.

# Returns:
# bool: True if the integer has more than 5 unique digits, otherwise False.
# num = 1123434343444334343488923344445
# result = str(num)
# #result = ",".join(p)
# print(result)
# S = set(result)
# if len(S) > 5 :
#     print(True)
# else :
#     print(False)

# print(len(S))



# Given an initial position of a point moving in a cartesian plane with a
# constant velocity,
# find the the final position of the point after a given time.

# Hint: final position = intial position + velocity * time

# Args:
# pos - tuple[int]: A tuple representing the position vector (x1, y1).
# vel - tuple[int]: A tuple representing the velocity vector (vx, vy).
# time - int: time of movement.

# Returns :
# tuple[int]: A tuple representing the displacement (dx, dy).

# def final_position(pos: tuple, vel: tuple, time:int) -> tuple:
#     # (final_position((1,1), (2,2), 3), (7,7)
#     x = pos[0]+vel[0]*time
#     y = pos[1]+vel[1]*time

#     return (x,y)

# value = final_position((1,1) , (2,2) ,  3)
# print(value)


# Remove keys from a dictionary that are not present in a given list.
# The function modifies the dictionary in place and does not return anything.

# Note: Modifying a dict while iterating over it will give an error in python.
# So, make a copy of the dict keys and then iterate over it.

# Args:
# d (dict): The dictionary to modify.
# 1 (list): The list of keys to keep in the dictionary.

# Returns : 
# None



# d = {1:'a',2:'b',3:'c',4:'d',5:'e'}
# l = [7,6,5,4,3]
# modify_check(
#     lambda x: remove_keys_not_in_list(x,l),
#     d, {3:'c',4:'d',5:'e'},
#     should_modify = True
# )
# d = {1:'a',2:'b',3:'c',4:'d',5:'e'}
# l = [9,8,7,1,2]
# modify_check(
#     lambda x: remove_keys_not_in_list(x,l),
#     d, {1:'a',2:'b'},
#     should_modify = True
# )

# def remove_keys_not_in_list(d: dict, 1: list) -> None:
#     copy_dict = d.copy()
    
# list = [1, 2, 3, 4, 5]
# k = 2 
# L = len(list)
# print(list[-k: ] + list[0:L-k])
n = 864
print(str(n)[::-1])