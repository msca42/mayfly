chess = {
    '1h':'bking',
    '6c':'wqueen',
    '2g':'bbishop',
    '5h':'bqueen',
    '3e':'wking'
}

# 判断有效
# 判断依据: 
# 只有一个黑王和白王
# 最多16个棋子
# 最多8个兵
# 所有棋子必须位于'1a'到'8h'的有效位置内
# 棋子不能在位置'9z'上
# 棋子名称以'w'或'b'开头表示白色或黑色
# pawn knight bishop rook queen king 
def isValidChessBoard(chess):
    pass