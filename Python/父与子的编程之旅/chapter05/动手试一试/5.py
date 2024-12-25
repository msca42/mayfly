money = float(input('how much money'))
yuan = int(money)
jiao = int((money - yuan) * 10)
fen = money - yuan - jiao
print("有",fen,"枚分")
print("有",jiao,"枚角")
print("有",yuan,"枚元")