board = {'1h': 'bking', '6c': 'wqueen', '2g':
         'bbishop', '5h': 'bqueen', '3e': 'wking'}

chessman = ['pawn', 'knight', 'bishop', 'rook', 'queen', 'king']


def isValidChessBoard(board):
    for key, value in board.items():
        if key == '9z' or value in chessman:
            print("error")
            break
    else:
        print("未发现错误")


isValidChessBoard(board)
