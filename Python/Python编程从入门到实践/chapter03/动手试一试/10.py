city = ['chengde', 'haimen', 'zaozhuang', 'zhongwei', 'xian']

city.append('chongqing')
print(city)
city.insert(0, 'anqing')
print(city)
del city[3]
print(city)
city.pop()
print(city)
city.pop(2)
print(city)
city.remove('xian')
print(city)
city.sort()
print(city)
print(sorted(city))
city.reverse()
print(city)
print(len(city))
