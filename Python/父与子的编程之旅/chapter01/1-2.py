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

# 结论
if guess == secret:
    print("Avast! Ye got it! Found my secret, ye did!")
else:
    print("No more guesses! Better luck next time, matey!")
    print("The secret number was", secret)