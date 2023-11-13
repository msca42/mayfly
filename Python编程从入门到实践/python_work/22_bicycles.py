# 列表
  # 一系列按照特定顺序排列的元素组成
  # 使用[]表示列表
bicycles = ['trek','cannondale','redline','specialized']
print(bicycles)

# 访问列表元素
print(bicycles[0])
print(bicycles[0].title())

# 访问索引
# start
print(bicycles[0])
# end
print(bicycles[-1])

# 使用列表中的值
message = f"My first bicycle was a {bicycles[0].title()}"
print(message)