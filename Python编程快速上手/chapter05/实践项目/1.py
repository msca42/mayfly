# 棋盘 代数记谱法  数字和字母构成的坐标确定
# K表示王、Q表示后、R表示车、B表示象、N表示马
# king国王 Queen王后 bishop主教 pawn士兵 Rook 城堡 knight 骑士
Board = {'1h':'bking',
         '6c':'wqueen',
         '2g':'bbishop',
         '5h':'bqueen',
         '3e':'wking'}
# 有效棋盘标准
# 一个黑王、一个白王
# 每个玩家最多16个棋子，最多8个兵
# 所有棋子必须位于1a到8h的有效位置内
# 棋子w或b开头表示白色或黑色
