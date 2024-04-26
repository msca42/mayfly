# 导入随机数模块
import random
# 设置变量
secret = random.randint(1, 100)  # 随机数
guess = 0  # 猜测数字
tries = 0  # 猜测次数

# 提示语
print("AHOY! I'm the Dread Pirate Roberts, and I have a secret!")
print("It is a number from 1 to 100. I'll give you 6 tries.")

# 主体循环结构
# 循环条件
while guess != secret and tries < 6:
    # 输入赋值猜测数字
    guess = int(input("What's yer guess? "))
    # 判断逻辑
    if guess < secret:
        print("Too low , ye scurvy dog!")
    elif guess > secret:
        print("Too high, landlubber!")
    # 猜测次数 +1
    tries = tries + 1

# 结束逻辑
if guess == secret:
    print("Avast! Ye got it! Found my secret, ye did!")
else:
    print("No more guesses! Better luck next time, matey!")
    print("The secret number was", secret)
