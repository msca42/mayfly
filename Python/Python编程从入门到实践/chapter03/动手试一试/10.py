citys = ['beijing','shanghai','guangzhou','shenzhen']

citys.append('hangzhou')
citys.insert(0,'chengdu')
citys.pop()
citys.pop(0)
citys.remove(citys[0])
print(sorted(citys))
citys.sort()
print(citys)
citys.reverse()
print(citys)
print(len(citys))
