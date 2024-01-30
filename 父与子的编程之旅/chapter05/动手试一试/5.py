fen = int(input("有多少枚一分"))
jiao = int(input("有多少枚一角"))
yuan = int(input("有多少枚一元"))
money = yuan + jiao / 10  + fen /100
print("零钱总值是:" + str(money))