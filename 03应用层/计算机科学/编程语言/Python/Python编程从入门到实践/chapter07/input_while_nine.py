sandwich_orders = ['Chacarero','Cemita','Chip Butty','pastrami','pastrami','pastrami']

finished_sandwiches = []

print("pastrami is out")

active = True
while active:
    if 'pastrami' not in sandwich_orders:
        active = False
    else:
        sandwich_orders.remove('pastrami')


while sandwich_orders:
    sandwich = sandwich_orders.pop()
    print(f"I made your {sandwich} sandwich.")
    finished_sandwiches.append(sandwich)

print("以下是完成的三明治列表")
for sandwich in finished_sandwiches:
    print(f"{sandwich}")