# 导入模块
import random

# 设置参数secret、guess、tries
secret = random.randint(1, 100)  # [1,100]
guess = 0
tries = 0

# 提示语
print("AHOY! I'm the Dread Pirate Roberts, and I have a secret!")
print("It is a number from 1 to 100. I'll give you 6 tries.")

# 主逻辑
"""
在猜测数字不等于最终数且猜测次数小于6时循环
在循环的开始使用输入函数输入猜测数字
比较猜测数字和最终数的大小，输出提示语
每次猜测完，猜测次数+1
如果猜测中了输出提示语，否则输出提示语和最终数
"""
while guess != secret and tries <6:
    guess = int(input("What's yer guess?"))
    if guess < secret:
        print("Too low, ye scurvy dog!")
    elif guess > secret:
        print("Too high, landlubber!")

    tries = tries + 1

if guess == secret:
    print("Avast! Ye got it! Found my secret, ye did!")
else:
    print("No more guesses! Better luck next time, matey!")
    print("The secret number was", secret)
