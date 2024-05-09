sandwich_orders = ['Cemita', 'Chacarero', 'Chip Butty']
finished_sandwiches = []
for i in range(len(sandwich_orders)):
    print("I made your tuna sandwich")
    finished_sandwiches.append(sandwich_orders.pop())

print(finished_sandwiches)
