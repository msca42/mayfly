# 列表
spam = ['cat', 'bat', 'rat', 'elephant']
# 索引获取列表值
print(spam[0])
# 支持负数索引
print(spam[-1])

# 切片 [start:end:step] (start,end-1)
print(spam[:])

# 列表长度
print(len(spam))

# 修改列表数据
spam[0] = 'dog'
print(spam)

# 删除列表值
del spam[1]
print(spam)

# 列表循环
for i in range(len(spam)):
    print('Index ' + str(i) + ' in spam is: ' + spam[i])

# in 和not in
print('dog' in spam)

# 多重赋值
name1, name2, name3 = spam
print(name1)
print(name2)
print(name3)
