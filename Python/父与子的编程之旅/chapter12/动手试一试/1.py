# 创建列表
names = []
# 提示语
print('Enter 5 names')
## 添加元素
for i in range(5):
    name = input()
    names.append(name)

# print('The names are [', end='')
# for name in names:
#     print('\'',end='')
#     print(name,end='')
#     if (name == names[-1]):
#         break
#     print('\',',end='')
# print(']')
print('The names are ', end='')
print(names)