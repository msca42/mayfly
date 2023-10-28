# 用正则表达式查找文本模式
import re
# compile() 参数为字符串，表示正则表达式，返回一个Regex模式对象
phoneNumRegex = re.compile(r'\d\d\d-\d\d\d-\d\d\d\d')
# search() 查找传入的字符串，字符串没有找到该正则表达式，返回None,找到返回一个Match对象
mo = phoneNumRegex.search('My number is 415-555-4242.')
# group() 返回被查找字符串中实际匹配的文本
print('Phone number found: ' + mo.group(0))
