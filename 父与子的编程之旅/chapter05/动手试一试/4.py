length = float(input("please input length of room"))
width = float(input("please input width of room"))
price = float(input("please input price"))
number1 = length * width
number2 = number1 / 9.0
total_price = price * number1
print("总共需要" + str(number1) + "平方米地毯")
print("总共需要" + str(number2) + "平方尺地毯")
print("地毯的价格是: " + price)
