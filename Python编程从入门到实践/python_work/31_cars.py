# 使用sort()方法对列表永久排序
cars = ['bmw','audi','toyota','sybaru']
cars.sort()
print(cars)
# 传递参数reverse = True 相反顺序排序
cars.sort(reverse=True)
print(cars)

# 使用sorted()函数对列表临时排序
cars = ['bmw','audi','toyota','sybaru']
print("Here is the original list:")
print(cars)
print("\nHere is the sorted list:")
print(sorted(cars))
print("\nHere is the original list again:")
print(cars)

# 反向打印列表 reverse()
cars = ['bmw','audi','toyota','sybaru']
print(cars)
cars.reverse()
print(cars)

# 确定列表的长度
print(len(cars))
