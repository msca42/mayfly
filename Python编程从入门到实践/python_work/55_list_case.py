# 4.11
pizza_names = ['a','b','c']
friend_pizzas = pizza_names[:]
pizza_names.append('d')
friend_pizzas.append('e')
print("My favorite pizzas are:")
for pizza in pizza_names:
  print(pizza)

print("My friend's favorite pizzas are:")
for pizza in friend_pizzas:
  print(pizza)