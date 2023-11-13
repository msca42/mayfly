# 4.4 创建一个包含数1～100万的列表，再使用一个for循环将这些数打印出来
numbers = [i for i in range(1,1000001)]
for i in numbers:
  print(i)