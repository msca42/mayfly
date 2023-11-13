# 3.10  尝试使用各种函数和方法
name = ['a','b','c','d']
# 本章函数、方法汇总
# append() 末尾添加
name.append('e')
print(name)
# inset() 列表插入
name.insert(0,'f')
print(name)
# del 删除元素
del name[-1]
print(name)
# pop() 删除元素
name.pop()
print(name)
# remove() 删除元素
name.remove('c')
print(name)
# sort() 永久排序
name.sort()
print(name)
# sorted()函数临时排序
print(sorted(name))
# reverse() 反向打印
name.reverse()
print(name)