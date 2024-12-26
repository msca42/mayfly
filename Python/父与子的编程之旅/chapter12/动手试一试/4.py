# 创建列表
names = []
# 提示语
print('Enter 5 names')
## 添加元素
for i in range(5):
    name = input()
    names.append(name)

print('The names are ', end='')
print(names)

index= int(input('Replace one name. Which one? (1-5): '))
name = input('New name: ')
names[index-1] = name

print('The names are ', end='')
print(names)