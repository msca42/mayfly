# input() 输出结果为字符串,需要使用int()进行类型转换
# age = input("How old are you?")
height = input("How tall are you, in inches?")
height = int(height)

if height >= 48:
  print("\nYou're tall enough to ride!")
else:
  print("\nYou'll be able to ride when you're a little older.")