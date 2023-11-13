# 4.7 创建一个列表，其中包含3～30内能被3整除的数，再使用for循环打印
numbers = [i for i  in range(3,31,3)]
for number in numbers:
  print(number)