catNames = []
while True:
    print('Enter the name of cat ' + str(len(catNames) + 1)
          + ' (Or enter nothing to stop.):')
    name = input()
    if name == '':
        break
    # 列表连接
    catNames = catNames + [name]  # list concatenation
print('The cat name are:')
for name in catNames:
    print(' ' + name)
