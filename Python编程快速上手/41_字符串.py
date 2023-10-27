# 字符串
# 双引号
spam = "That is Alice's cat."
print(spam)
# 转义字符
spam = 'Say hi to Bob\'s mother.'
print(spam)
# 原始字符串 完全忽略所有转义字符，可输出字符串中所有的倒斜杠
spam = r'That is Carol\'s cat.'
print(spam)
# 三重引号
print('''Dear Alice,
Eve's cat has been arrested for catnapping, cat burglary, and
extortion. 
Sincerely, 
Bob''')
# 索引
spam = 'Hello, world!'
print(spam[0])
# 切片
print(spam[0:5])
# in not in
print('Hello' in 'Hello,World')
# 格式化
name = 'AI'
age = 4000
print('Hello,my name is ' + name + '. I am' + str(age) + ' years old.')
print('My name is %s. I am %s year old.' % (name, age))
print(f'My name is {name}. Next year I will be {age + 1}.')
