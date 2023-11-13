# 4.8 立方 建立一个列表，包含前10个整数(1~10)的立方，再使用一个for循环将这些立方数打印出来
numbers = []
for i in range(1,11):
  numbers.append(i*i*i)

for number in numbers:
  print(number)