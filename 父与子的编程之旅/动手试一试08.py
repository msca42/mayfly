# 乘法表 for
num = int(input("Which multiplication table would you like?"))
print("Here is your table:")
for i in range(1, 11):
    print(f"{num} x {i} = {num * i}")

# 乘法表 while
i = 1
print("Here is your table:")
while i < 11:
    print(f"{num} x {i} = {num * i}")
    i += 1

# 乘法表 询问最大乘数
num = int(input("Which multiplication table would you like?"))
high = int(input("How high do you want to go?"))
print("Here is your table:")
for i in range(1, high+1):
    print(f"{num} x {i} = {num * i}")