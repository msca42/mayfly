# 创建两个变量，分别表示你的姓氏和名字，然后打印
first_name = "may"
last_name = "fly"
print(first_name + last_name)

# 问姓氏，问名字，然后打印
first_name = input("your first name")
last_name = input("your last name")
print(first_name + last_name)

# 询问矩形房间尺寸，计算所需地毯
length = float(input("please answer me the length of room"))
width = float(input("please answer me the width of room"))
area = length * width
print(area)

# 在前一题的基础商询问每平方尺地毯的价格
length = float(input("please answer me the length of room"))
width = float(input("please answer me the width of room"))
each_price = float(input("please input price of each area"))
area_m = length * width
area_f = area_m / 9
price = each_price * area_f
print(price)

# 统计零钱
fen = int(input("please input your fen money number"))
jiao = int(input("please input your jiao money number"))
yuan = int(input("please input your yuan money number"))
total_money = yuan + jiao / 10 + fen / 100
print(total_money)
