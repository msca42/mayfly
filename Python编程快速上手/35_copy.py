# copy模块 copy.copy()  copy.deepcopy()
# copy.copy() 赋值列表或字典这样的可变值，而不复制引用
# copy.deepcopy() 如果要复制的列表中包含了列表，使用copy.deepcopy()
import copy

spam = ['A', 'B', 'C', 'D']
print(id(spam))
cheese = copy.copy(spam)
print(id(cheese))
cheese[1] = 42
print(spam)
print(cheese)

