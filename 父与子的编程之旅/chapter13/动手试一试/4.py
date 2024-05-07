def printMoney(fen, jiao, yuan):
    total_money = fen/100.0 + jiao/10.0 + yuan
    print("1 fen: " + str(fen))
    print("1 jiao: " + str(jiao))
    print("1 yuan: " + str(yuan))
    print("total is ¥" + str(total_money))


printMoney(3, 6, 7)
