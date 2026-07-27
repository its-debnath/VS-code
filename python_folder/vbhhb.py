# info = {
#     "name": "Gouranga",
#     "CGPA": 9.6 ,
#     "marks": 98 ,
# }
# info.update({"hello":"world"})
# print(info)



s = { 1,2,3,4}
print(s[1])


































# # # print(info)
# # # info["name"] = "Debnath"
# # # info["First name"] = "Gouranga"
# # # print(info)
# # # print(info.keys())
# # # print(list(info.keys()))
# # # print(info)
# # # infokeys = list(info.keys())
# # # print(type(infokeys))
# # # print("LIST:    ",infokeys)

# # #  print(len(list(info.values()))
# # # 

# # hello = list(info.items())
# # print(hello[0])
# # print(info.get("CGPA"))


# plm = { 1 ,3,4,5 , " jb " , "hello " }
# print(plm)


















# def total_price(fruit_prices: dict, purchases) -> float:
#     total = 0
#     for fruit, quantity in purchases:
#         total += fruit_prices[fruit] * quantity
#     return total


# def total_price_no_loops(fruit_prices: dict, purchases) -> float:
#     if not purchases:
#         return 0
#     return fruit_prices[purchases[0][0]] * purchases[0][1] + \
#            total_price_no_loops(fruit_prices, purchases[1:])


# def find_cheapest_fruit(fruit_prices: dict) -> str:
#     fruits = list(fruit_prices.keys())
#     cheapest = fruits[0]

#     for fruit in fruits:
#         if fruit_prices[fruit] < fruit_prices[cheapest]:
#             cheapest = fruit

#     return cheapest


# def find_cheapest_fruit_no_loops(fruit_prices: dict) -> str:
#     return min(fruit_prices, key=fruit_prices.get)