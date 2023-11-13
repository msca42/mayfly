requested_toppings = []

# 对于数值0，空值None、单引号字符串‘’，双引号字符串“”，空列表[], 空元组(),空字典{}，Python都会返回False
if requested_toppings:
  for requested_topping in requested_toppings:
    if requested_topping == 'green peppers':
      print("Sorry, we are out of green peppers right now.")
    else:
      print(f"Adding {requested_topping}.")
  print("\nFinished making your pizza!")
else:
  print("Are you sure you want a plain pizza?")
