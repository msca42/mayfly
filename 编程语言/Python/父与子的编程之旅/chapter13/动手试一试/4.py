fen = int(input('1 fen: '))
jiao = int(input('1 jiao: '))
yuan = int(input('1 yuan: '))
def count(fen,jiao,yuan):
    total = (yuan * 100 + jiao * 10 + fen) / 100
    return total

result = count(fen,jiao,yuan)
print("total is ￥", result)