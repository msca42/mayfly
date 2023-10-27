# 序列数据类型
# 列表，字符串，由range()返回的范围对象以及元组
# 可变类型： 列表list()
# 不可变类型： 字符串str()、元组tuple()
name = 'Zophie'
# 查看数据类型
print(type(name))

# 按索引取值、切片、用于for循环、用于len()函数、以及用于in和not in操作符
# 按索引取值
print(name[0])
# 切片
print(name[0:4])
# for循环
for i in name:
    print(i, end='')
print()
# len()
print(len(name))
# in/not in
print('z' in name)
