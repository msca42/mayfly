# random模块
# random.choice() 从列表中返回一个随机选择的表项
import random

pets = ['Dog', 'Cat', 'Moose']
print(random.choice(pets))

# random.shuffle() 列表项打乱顺序，原地修改列表
random.shuffle(pets)
print(pets)