# 引用
# 从技术上，变量存储的是对计算机内存位置的引用，这些位置存储了这些值
# 不可变类型的id()相同
# 可变类型的id()不相同
spam = 42
cheese = 42
print(id(spam))
print(id(cheese))

spam1 = (0, 1, 2, 3, 4, 5)
cheese1 = (0, 1, 2, 3, 4, 5)
print(id(spam1))
print(id(cheese1))

spam2 = [0, 1, 2, 3, 4, 5]
cheese2 = [0, 1, 2, 3, 4, 5]
print(id(spam2))
print(id(cheese2))

spam3 = "列表"
cheese3 = "列表"
print(id(spam3))
print(id(cheese3))
