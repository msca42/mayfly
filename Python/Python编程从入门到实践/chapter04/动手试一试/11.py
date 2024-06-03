pizzas = ['pepperoni', 'Margarita', 'Chicago-Style']
for pizza in pizzas:
    print(f"I like {pizza.lower()} pizza")
print('I really love pizza!')
friend_pizzas = pizzas
pizzas.append("Greek")
friend_pizzas.append("Bar")
print("My favorite pizzas are:")
for pizza in pizzas:
    print(pizza, end=' ')
print("My friend's favorite pizzas are:")
for pizza in friend_pizzas:
    print(pizza, end=' ')
