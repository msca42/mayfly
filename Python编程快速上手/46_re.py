# 用正则表达式匹配更多模式
import re

# 利用括号分组
phoneNumRegex = re.compile(r'(\d\d\d)-(\d\d\d-\d\d\d\d)')
mo = phoneNumRegex.search('My number  is 415-555-4242.')
print(mo.group(1))
print(mo.group(2))
print(mo.group(0))
print(mo.group())
print(mo.groups())
areaCode, mainNumber = mo.groups()
print(areaCode, mainNumber)
# 用管道匹配多个分组
heroRegex = re.compile(r'Batman|Tina Fey')
mo1 = heroRegex.search('Batman and Tina Fey.')
print(mo1.group())
batRegex = re.compile(r'Bat(man|mobile|copter|bat)')
mo2 = batRegex.search('Batmobile lost a wheel')
print(mo2.group())
print(mo2.group(1))
# 用问号实现可选匹配 (wo)?可选
batRegex1 = re.compile(r'Bat(wo)?man')
mo3 = batRegex1.search('The Adventures of Batman')
mo4 = batRegex1.search('The Adventures of Batwoman')
print(mo3.group())
print(mo4.group())
# 用星号匹配零次或多次
batRegex2 = re.compile(r'Bat(wo)*man')
mo5 = batRegex2.search('The Adventures of Batwowowowoman')
print(mo5.group())
# 用加号匹配一次或多次
batRegex3 = re.compile(r'Bat(wo)*man')
mo6 = batRegex3.search('The Adventures of Batwowowowoman')
print(mo6.group())
# 用花括号匹配特定次数 匹配3次
batRegex4 = re.compile(r'(Ha){3}')
mo7 = batRegex4.search('HaHaHa')
print(mo7.group())
# python默认贪心匹配
greedyHaRegex = re.compile(r'(Ha){3,5}')
mo8 = greedyHaRegex.search('HaHaHaHaHa')
print(mo8.group())
# 设置非贪心匹配 花括号后跟着一个问号 {}?
nongreedyHaRegex = re.compile(r'(Ha){3,5}?')
mo9 = nongreedyHaRegex.search('HaHaHaHaHa')
print(mo9.group())
# search() 返回一个Match对象，包含第一次匹配的文本
# findall() 返回一组字符串，包含所有匹配匹配文本
print(phoneNumRegex.findall('Cell: 415-555-9999 Work: 212-555-0000'))
# 开始处使用插入符号^ 表明匹配必须发生在被查找文本开始处
beginsWithHello = re.compile(r'^Hello')
mo10 = beginsWithHello.search('Hello world!')
print(mo10.group())
# 末尾处使用美元符号$ 表明匹配必须发生在被查找文本末尾处
endsWithNumber = re.compile(r'\d+$')
mo11 = endsWithNumber.search('Your number is 42')
print(mo11.group())
# 通配符 .称为通配符
atRegex = re.compile(r'.at')
mo12 = atRegex.findall('The cat in the hat sat on the flat mat.')
print(mo12)
# .* 表示任意文本(贪婪模式)，.*?(非贪婪模式)
