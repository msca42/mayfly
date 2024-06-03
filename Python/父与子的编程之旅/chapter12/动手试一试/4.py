import random

names = []
print('Enter 5 names:')
name1 = input()
name2 = input()
name3 = input()
name4 = input()
name5 = input()
names.append(name1)
names.append(name2)
names.append(name3)
names.append(name4)
names.append(name5)
print('The names are' + str(names))
num = random.randint(1, 5)
print(f'Replace one name.Which one?(1-5): {num}')
names[num-1] = input('New name: ')
print('The names are ' + str(names))
