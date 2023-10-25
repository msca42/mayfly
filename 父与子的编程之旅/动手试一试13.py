# 定义函数输出英文名
def printMyNameBig():
    print(" CCCC A RRRRR TTTTTTT EEEEEE RRRRR ")
    print(" C C A A R R T E R R ")
    print("C A A R R T EEEE R R ")
    print("C AAAAAAA RRRRR T E RRRRR ")
    print(" C C A A R R T E R R ")
    print(" CCCC A A R R T EEEEEE R R")


printMyNameBig()

# 定义一个函数打印人名、住址、街道、城市、省份、邮政编码和国家
info = ["name", "home", "street", "city", "provice", "code", "country"]


def printInfo(info_list):
    print(info_list)


printInfo(info)


# 修改13-7
def calculateTax(price, tax_rate):
    global my_price
    total = price + (price * tax_rate)
    my_price = 1000
    print("my_price (inside function) =", my_price)
    return total


my_price = float(input("Enter a price: "))
totalPrice = calculateTax(my_price, 0.06)
print("price = ", my_price, " Total price = ", totalPrice)


# 统计零钱
def total():
    fen = int(input("please input your fen money number"))
    jiao = int(input("please input your jiao money number"))
    yuan = int(input("please input your yuan money number"))
    total_money = yuan + jiao / 10 + fen / 100
    print(total_money)


total()
