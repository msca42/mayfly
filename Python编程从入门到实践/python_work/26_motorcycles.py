motorcycles = ['honda','yamaha','suzuki']
print(motorcycles)

# 修改列表元素
motorcycles[0] = 'ducati'
print(motorcycles)

# 末尾添加元素
motorcycles.append('ducati')
print(motorcycles)

# 插入元素
motorcycles.insert(0,'ducati')
print(motorcycles)

# 删除元素  del语句
del motorcycles[0]
print(motorcycles)

# 删除元素 pop()方法 默认末尾删除
poped_motorcycle = motorcycles.pop()
print(poped_motorcycle)
print(motorcycles)

# 删除任意位置元素 pop()
first_owned = motorcycles.pop(0)
print(f"The first motorcycle I owned was a {first_owned.title()}.")

# 删除元素的使用规则，不使用删除的元素使用del，继续使用删除的元素使用pop()

# 根据值删除元素 remove(value) 只删除第一个元素
motorcycles = ['honda','yamaha','suzuki','ducati']
print(motorcycles)

# motorcycles.remove('ducati')
# print(motorcycles)

too_expensive = 'ducati'
motorcycles.remove(too_expensive)
print(motorcycles)
print(f"\nA{too_expensive.title()} is too expensive for me.")