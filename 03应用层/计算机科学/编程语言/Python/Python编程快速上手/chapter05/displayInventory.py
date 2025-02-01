Inventory = {'rope': 1, 'torch': 6, 'gold coin': 42, 'dagger': 1,
'arrow': 12}

def displayInventory(Inventory):
    global total
    for key,value in Inventory.items():
        print(f'{value} {key}')
        total += value

total = 0
print('Inventory')
displayInventory(Inventory)
print(f'Total number of items: {total}')