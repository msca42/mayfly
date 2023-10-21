# 导入模块
import random

# 定义变量 随机数secret  用户猜测数字guess 次数tries
secret = random.randint(1, 100)
guess = 0
tries = 0

# 提示语
print("AHOY! I'm the Dread Pirate Roberts, and I have a secret!")
print("It is a number from 1 to 100. I'll give you 6 tries.")

# 猜数字的逻辑
while guess != secret and tries < 6:
    guess = int(input("What's yer guess? "))
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
