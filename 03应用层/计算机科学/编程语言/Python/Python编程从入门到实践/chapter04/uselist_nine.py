pizzas  = ['Seafood','Sausage','Cheese']
friend_pizzas = pizzas[:]

pizzas.append('pepperoni')
friend_pizzas.append('Greek')

print("My favorite pizzas are:")
for pizza in pizzas:
    print(pizzas,end=' ')


print("\nMy friend's favorite pizzas are:")
for pizza in friend_pizzas:
    print(pizzas,end=' ')

