# 字典中存储列表

pizza = {
  'crust': 'thick',
  'toppings':['mushrooms','extra cheese'],
}

print(f"You ordered a {pizza['crust']}-crust pizza "
      "with the following topings:")

for topping in pizza['toppings']:
  print(f"\t{topping}")