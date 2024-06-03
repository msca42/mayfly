number_fen = int(input("请输入一分钱个数:"))
number_jiao = int(input("请输入一角钱个数:"))
number_yuan = int(input("请输入一元钱个数:"))
total_money = number_fen/100.0 + number_jiao/10.0 + number_yuan
print("零钱总值:", total_money)
