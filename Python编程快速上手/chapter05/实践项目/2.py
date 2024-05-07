lists = {'rope': 1, 'torch': 6, 'gold coin': 42, 'dagger': 1,
         'arrow': 12}


def displayInventory(lists):
    print("Inventory")
    for key, value in lists.items():
        print(str(value) + " " + key)


displayInventory(lists)
