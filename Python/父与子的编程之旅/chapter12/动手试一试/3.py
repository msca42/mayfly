# 创建列表
names = []
chances = ['first','second','third']
# 提示语
## 添加元素
for i in chances:
    print("The " + i + "name you entered is: ",end='')
    name = input()
    names.append(name)

print('The names are ', end='')
print(names)