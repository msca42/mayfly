# 4.6 奇数 通过给range()函数指定第三个参数创建列表，其中包含1～20的奇数，再使用一个for循环将这些数打印出来
numbers = [i for i in range(1,20,2)]
for i in numbers:
  print(i)