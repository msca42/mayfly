# 3.8 列出5个你想去旅游的地方
places = ['xian','chengdu','linzhi','mohe','hangzhou']
# 按原始顺序打印列表
print(places)
# 使用sorted() 按字母顺序打印
print(sorted(places))
# 验证列表顺序不变
print(places)
# 使用reverse()修改排列顺序
places.reverse()
print(places)
# 使用reverse()方法重置顺序
places.reverse()
print(places)
# 使用sort()修改列表
places.sort()
print(places)
# 使用sort()相反方向修改列表
places.sort(reverse=True)
print(places)
