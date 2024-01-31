gender = input("请输入性别: ")
if gender == "m":
  print("Sorry to tell you, you are not in our plan")
else:
  age = int(input("请输入你的年龄:"))
  if 10<= age <= 12:
    print("you can join our team")
  else:
    print("你的年龄不符合要求")