def addToInventory(inventory, addedItems):
    for i in addedItems:
        if i in inventory.keys():
            inventory[i] += 1
        else:
            inventory[i] = 1
    return inventory


def displayInventory(lists):
    print("Inventory")
    count = 0
    for key, value in lists.items():
        count += value
        print(str(value) + " " + key)
    print("Total number of items: " + str(count))


inv = {'gold coin': 42, 'rope': 1}
dragonLoot = ['gold coin', 'dagger', 'gold coin', 'gold coin', 'ruby']
inv = addToInventory(inv, dragonLoot)
displayInventory(inv)
