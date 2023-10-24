# 3人吃饭，分摊饭费 共花费35.27元，留15%小费
total_cost = 35.17
gratuity = 0.15 * total_cost
percent_cost = (total_cost + gratuity) / 3
print(f"每人应付{percent_cost}")

# 长16.7 宽12.5 面积和周长
length = 16.7
width = 12.5
round = 2 * (length + width)
area = length * width
print(f"面积为{area}")
print(f"周长为{round}")

# 华氏温度转摄氏温度
Fahrenheit = int(input("请输入华氏温度"))
Celsius = (Fahrenheit - 32) * 5 / 9
print(Celsius)

# 计算机80km/h行驶200km所需时间
speed = 80
distance = 200
time = distance / speed
print(f"所需{time}")
