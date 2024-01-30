length = float(input('矩形房间的长度是多少?'))
width = float(input('矩形房间的宽度是多少?'))
price = float(input('每平方尺的价格是多少?'))
area = width * length
print("总共需要" + str(area) + "平方米的地毯")
print("总共需要" + str(area / 9) + "平方尺的地毯")
print("地毯的总价格:" + str( area / 9 * price))