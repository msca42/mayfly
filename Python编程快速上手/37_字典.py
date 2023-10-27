# 字典
# keys()、values()、items()
# 判断字典中是否存在键或值
#  in , not in
# get(key,不存在时返回值)
# 为某个键设置一个默认值
# setdefault(key,value) value为不存在时返回的值
myCat = {'size': 'fat', 'color': 'gray', 'disposition': 'loud'}
print(myCat['size'])
# values() 值
for v in myCat.values():
    print(v, end=' ')
print()
# keys() 键
for k in myCat.keys():
    print(k, end=' ')
print()
# items() 键值对
for k, v in myCat.items():
    print('Key: ' + k + ' Value: ' + v)
# get()
print(myCat.get('size', 1))
print(myCat.get('a', 2))
