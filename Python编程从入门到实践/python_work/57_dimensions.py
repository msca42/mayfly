# 元组
  # 不可变的列表
  # 使用() 标识

dimensions = (200,50)
print(dimensions[0])
print(dimensions[1])

# 单元素元组
my_t = (3,)

# 遍历列表
for dimension in dimensions:
  print(dimension)

# 修改元组变量
dimension = (200,50)
print("Original dimension:")
for dimension in dimensions:
  print(dimension)

dimensions = (400,100)
print("\nModified dimensions:")
for dimension in dimensions:
  print(dimension)