# 3.10

countries = ['china','American','France','England']

# 添加
countries.append('Ireland')
countries.insert(0,'Scotland')

# 删除
countries.pop()
countries.remove('England')
del countries[0]

# 排序
countries.sort()
print(countries)
countries.sort(reverse=True)
print(countries)

print(sorted(countries))
print(sorted(countries,reverse=True))

countries.reverse()
print(countries)

print(len(countries))
