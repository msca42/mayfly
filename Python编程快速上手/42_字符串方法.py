spam = 'Hello, world!'
# upper() 大写
print(spam.upper())
# lower() 小写
print(spam.lower())
# islower() 是否全小写
print(spam.islower())
# isupper() 是否全大写
print(spam.isupper())
# isX() 方法
# isalpha() 只包含字母，并且非空
print('hello'.isalpha())
# isalnum() 只包含字母和数字，并且非空
print('hello123'.isalnum())
# isdecimal() 只包含数字字符，并且非空
print('123'.isdecimal())
# isspace() 只包含空格、制表符和换行符，并且非空
print(''.isspace())
# istitle() 仅包含以大写字母开头，后面都是小写字母
print('This is Title Case'.istitle())
# startswith()  以开头
print('Hello, world!'.startswith('Hello'))
# endswith() 以结尾
print('Hello world!'.endswith('world!'))
# join() 将字符串列表连接起来称为一个字符串
print(','.join(['cats', 'rats', 'bats']))
# split() 将字符串转换为字符串列表
print('My name is Simon'.split())
# partition() 分隔字符串
print('Hello,world!'.partition('w'))
# rjust()、ljust()、center() 对齐文本
print('Hello'.rjust(10))
print('Hello'.ljust(10))
print('Hello'.center(10))
# strip()、rstrip()、lstrip() 删除空白字符
print('    hello    '.strip())
print('    hello    '.rstrip())
print('    hello    '.lstrip())

