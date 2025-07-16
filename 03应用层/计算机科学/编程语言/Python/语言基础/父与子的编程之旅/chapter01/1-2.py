"""
猜数字游戏
功能:一共猜6次,6次以内猜错提示猜大猜小.猜对提示,6次都猜错提示
思路:
    变量: 正确数字A 玩家猜测的数字B 猜测次数C
    逻辑:
       在 A != B 且 C<=6 情况下 判断A和B的大小, 并提示猜大了还是猜小了
       之后提示用户重新输入
       A=B的情况下提示
       否则提示失败
    细节:
        每次猜测之后次数加1
        A的取值要使用随机数random模块的randint函数,参数为包含边界的上下限
"""

# 导入模块
import random

# 初始化变量
secret = random.randint(1,100)
guess = 0
tries = 0

# 提示语
print("AHOY! I'm the Dread Pirate Roberts, and I have a secret!")
print("It is a number from 1 to 100. i'll give you 6 tries.")

# 主循环
# 思路: 当猜数和被猜数不相等且猜测次数最多6次的情况下，衡量猜数和被猜数关系
while guess != secret and tries < 6:
    guess = int(input("What's yer guess? "))
    if  guess < secret:
        print("Too low, ye scurvy dog!")
    elif guess > secret:
        print("Too high, landlubber!")

    tries = tries + 1

# 次数结束之后的打印
if guess == secret:
    print("Avast! Ye got it! Found my secret, ye did!")
else:
    print("No more guesses! Better luck next time, matey!")
    print("The secret number was", secret)