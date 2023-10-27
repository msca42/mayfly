# 方法区别于函数的点在于 它在一个值上进行调用
spam = ['hello', 'hi', 'howdy', 'heyas']
# index() 查找值在列表中的位置
print(spam.index('hello'))
# append() 末尾添加
spam.append("moose")
print(spam)
# insert() # 任意索引插入
spam.insert(2, 'chicken')
print(spam)
# remove() 删除值
spam.remove('chicken')
print(spam)
# sort() 排序
spam.sort()
print(spam)
# reverse() 反转列表中的值
spam.reverse()
print(spam)
