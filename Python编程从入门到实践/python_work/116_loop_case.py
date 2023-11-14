# 7.5
flag = True
while flag:
  age = int(input("please input your age: "))
  if age < 3:
    print("price is free")
  elif age < 12:
    print("price is 10$")
  else:
    print("price is 15$")
  message = input("if you want to quit,please enter quit")
  if message == 'quit':
    flag = False
  