import random, sys 

print('ROCK, PAPER, SCISSORS')

# These variables keep track of the numebr of wins, losses and ties.

wins = 0
losses = 0
ties = 0

# 逻辑思路: 
# 开启第一个循环进行游戏
# 打印信息
# 开启第二个循环打印输入
# 玩家输入
# 游戏退出机制
# 

while True: # The main game loop
    print('%s Wins, %s Losses, %s Ties' % (wins, losses, ties))
    while True: # The player input loop
        print('Enter your move: (r)ock (p)aper (s)cissors or (q)uit')
        playerMove = input()
        computerMove = playerMove
        if playerMove == 'q':
            sys.exit() # Quit the program
        if playerMove == 'r' or playerMove == 'p' or playerMove == 's':
            break # Break out of the player input loop.
        print('Type one of r, p, s, or q.')
    
    # Display what the player chose:
    if playerMove == 'r':  
# TODO:playerMove 可以被访问到 
# 在 Python 中，变量的作用域遵循 LEGB 规则，即 Local（局部作用域）、Enclosing（嵌套函数的外层作用域）、Global（全局作用域）、Built-in（内置作用域）。
        print('ROCK versus...')
    elif playerMove == 'p':
        print('PAPER versus...')
    elif playerMove == 's':
        print('SCISSORS versus...')
    
    # Display what the computer chose:
    randomNumber = random.randint(1,3)
    if randomNumber == 1:
        computerMove = 'r'
        print('ROCK')
    elif randomNumber == 2:
        computerMove = 'p'
        print('PAPER')
    elif randomNumber == 3:
        computerMove = 's'
        print('SCISSORS')
    
    # Display and record the win/loss/tie:
    if playerMove == computerMove:
        print('It is a tie!')
        ties = ties + 1
    elif playerMove == 'r' and computerMove == 's':
        print('You win!')
        wins = wins + 1
    elif playerMove == 'p' and computerMove == 'r':
        print('You win!')
        wins = wins + 1
    elif playerMove == 's' and computerMove == 'p':
        print('You win!')
        wins = wins  + 1
    elif playerMove == 'r' and computerMove == 'p':
        print('You lose!')
        losses = losses + 1
    elif playerMove == 'p' and computerMove == 's':
        print('You loes!')
        losses = losses + 1
    elif playerMove == 's' and computerMove == 'r':
        print('You lose!')
        losses = losses + 1
 