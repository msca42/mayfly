def addToInventory(inventory, addedItems):
    for i in addedItems:
        if i in inventory.keys():
            inventory[i] += 1
        else:
            inventory[i] = 1
    return inventory

def displayInventory(Inventory):
    global total
    for key,value in Inventory.items():
        print(f'{value} {key}')
        total += value

inv = {'gold coin': 42, 'rope': 1}
dragonLoot = ['gold coin', 'dagger', 'gold coin', 'gold coin', 'ruby']
inv = addToInventory(inv, dragonLoot)

total = 0
print('Inventory')
displayInventory(inv)
print(f'Total number of items: {total}')